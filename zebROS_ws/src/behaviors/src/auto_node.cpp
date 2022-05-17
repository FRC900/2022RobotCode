// Top-level driver for auto behaviors.
#include <ros/ros.h>
#include <behavior_actions/AutoMode.h> //msg file
#include <behavior_actions/AutoState.h> //msg file
#include "geometry_msgs/Twist.h"
#include <std_srvs/Empty.h>
#include <frc_msgs/MatchSpecificData.h>

#include "base_trajectory_msgs/GenerateSpline.h"
#include "base_trajectory_msgs/PathOffsetLimit.h"

#include <actionlib/client/simple_action_client.h>
#include <behavior_actions/Shooting2022Action.h>
#include "behavior_actions/Intaking2022Action.h"
#include <behavior_actions/DynamicPath.h>
#include <path_follower_msgs/PathAction.h>
#include <path_follower_msgs/PathFeedback.h>
#include <thread>
#include <atomic>
#include <functional>

#include "std_msgs/Bool.h"
//VARIABLES ---------------------------------------------------------
int auto_mode = -1; //-1 if nothing selected
std::vector<std::string> auto_steps; //stores string of action names to do, read from the auto mode array in the config file
bool enable_teleop = false;
bool auto_started = false; //set to true when enter auto time period
bool auto_stopped = false; //set to true if driver stops auto (callback: stopAuto() ) - note: this node will keep doing actions during teleop if not finished and the driver doesn't stop auto
//All actions check if(auto_started && !auto_stopped) before proceeding.

enum AutoStates {
	NOT_READY,
	READY,
	RUNNING,
	DONE,
	ERROR
};
std::atomic<int> auto_state(NOT_READY); //This state is published by the publish thread

std::map<std::string, nav_msgs::Path> premade_paths;

// Inital waypoints used to make the paths, when passed into the path follower allows for more persise control
// Can use for things like "start intake after X waypoint or X percent through"
std::map<std::string, nav_msgs::Path> premade_waypoints;

ros::ServiceClient spline_gen_cli_;

std::function<void()> preemptAll; // function to preempt all actions, set in main

//FUNCTIONS -------

//server callback for stop autonomous execution
bool stopAuto(std_srvs::Empty::Request &/*req*/,
			  std_srvs::Empty::Response &/*res*/)
{
	ROS_INFO("Auto node - Stopping code");
	auto_stopped = true;
	return true;
}

//subscriber callback for match data
void matchDataCallback(const frc_msgs::MatchSpecificData::ConstPtr& msg)
{
	if((msg->Autonomous && msg->Enabled) || (msg->Enabled && enable_teleop))
	{
		auto_stopped = false;
		auto_started = true; //only want to set this to true, never set it to false afterwards
	}
	if((auto_started && !msg->Enabled))
	{
		auto_started = false;
		preemptAll();
	}
}

//subscriber callback for dashboard data
void updateAutoMode(const behavior_actions::AutoMode::ConstPtr& msg)
{
	auto_mode = msg->auto_mode;
}

void enable_auto_in_teleop(const std_msgs::Bool::ConstPtr& msg)
{
	enable_teleop = msg->data;
}


bool dynamic_path_storage(behavior_actions::DynamicPath::Request &req, behavior_actions::DynamicPath::Response &/*res*/)
{
	ROS_INFO_STREAM("auto_node : addding " << req.path_name << " to premade_paths");
	premade_paths[req.path_name] = req.dynamic_path;
	
	return true;
}

void doPublishAutostate(ros::Publisher &state_pub)
{
	behavior_actions::AutoState msg;
	msg.header.stamp = ros::Time::now();
	msg.id = auto_state;

	switch(auto_state){
		case NOT_READY: msg.string = "Not Ready"; break;
		case READY: msg.string = "Ready"; break;
		case RUNNING: msg.string = "Running"; break;
		case DONE: msg.string = "Done"; break;
		case ERROR: msg.string = "Error"; break;
		default:
					msg.string = "Unknown State";
					ROS_ERROR("Unknown auto state - weirdness in auto_node");
					break;
	}
	state_pub.publish(msg);
}


//function to publish auto node state (run on a separate thread)
//this is read by the dashboard to display it to the driver
std::atomic<bool> publish_autostate{true};
void publishAutoState(ros::NodeHandle &nh)
{
#ifdef __linux__
	// Run status thread at idle priority
	struct sched_param sp{};
	sched_setscheduler(0, SCHED_IDLE, &sp);

	//give the thread a name
    pthread_setname_np(pthread_self(), "auto_state_pub");
#endif

    //publish
	ros::Rate r(10); //TODO config
	ros::Publisher state_pub = nh.advertise<behavior_actions::AutoState>("auto_state", 1, true);

	publish_autostate = true;
	while(publish_autostate) {
		doPublishAutostate(state_pub);
		if (publish_autostate) {
			r.sleep();
		}
	}
	// Force one last message to go out before exiting
	doPublishAutostate(state_pub);
	r.sleep();
}


//function to wait while an actionlib server is running
template <class T>
void waitForActionlibServer(T &action_client, double timeout, const std::string &activity)
	//activity is a description of what we're waiting for, e.g. "waiting for mechanism to extend" - helps identify where in the server this was called (for error msgs)
{
	const double request_time = ros::Time::now().toSec();
	ros::Rate r(10); //TODO config?

	//wait for actionlib server to finish
	std::string state;
	while(!auto_stopped && ros::ok())
	{
		state = action_client.getState().toString();

		if(state == "PREEMPTED") {
			ROS_ERROR_STREAM("Auto node - " << activity << " got preempted");
			auto_stopped = true;
		}
		else if(state == "ABORTED") {
			ROS_ERROR_STREAM("Auto node - " << activity << " was aborted / rejected");
			auto_stopped = true;
		}
		//check timeout - note: have to do this before checking if state is SUCCEEDED since timeouts are reported as SUCCEEDED
		else if (ros::Time::now().toSec() - request_time > timeout || //timeout from what this file says
				(state == "SUCCEEDED" && !action_client.getResult()->success)) //server times out by itself
		{
			ROS_ERROR_STREAM("Auto node - " << activity << " timed out");
			auto_stopped = true;
			action_client.cancelGoalsAtAndBeforeTime(ros::Time::now());
		}
		else if (state == "SUCCEEDED") { //must have succeeded since we already checked timeout possibility
			ROS_WARN_STREAM("Auto node - " << activity << " succeeded");
			break; //stop waiting
		}
		else if (auto_stopped){
			ROS_WARN_STREAM("Auto node - auto_stopped set");
			action_client.cancelGoalsAtAndBeforeTime(ros::Time::now());
		}
		else { //if didn't succeed and nothing went wrong, keep waiting
			ros::spinOnce();
			r.sleep();
		}
	}
}


std::thread auto_state_pub_thread;
void shutdownNode(AutoStates state, const std::string &msg)
{
	if (msg.length()) {
		if (auto_state == ERROR) {
			ROS_ERROR_STREAM(msg);
		} else {
			ROS_INFO_STREAM(msg);
		}
	}
	auto_state = state;
	publish_autostate = false; // publish last message and exit from autostate publisher thread
	if(auto_state_pub_thread.joinable()) {
		auto_state_pub_thread.join(); // waits until auto state publisher thread finishes
	}
	exit(0);
}

bool readStringParam(const std::string &param_name, XmlRpc::XmlRpcValue &params, std::string &val)
{
	if (!params.hasMember(param_name))
		return false;
	XmlRpc::XmlRpcValue &param = params[param_name];
	if (!param.valid())
		throw std::runtime_error(param_name + " was not a valid string type");
	if (param.getType() == XmlRpc::XmlRpcValue::TypeString)
	{
		val = static_cast<std::string>(param);
		return true;
	}
	throw std::runtime_error("A non-string value was read for" + param_name);

	return false;
}

bool readIntParam(const std::string &param_name, XmlRpc::XmlRpcValue &params, int &val)
{
	if (!params.hasMember(param_name))
		return false;
	XmlRpc::XmlRpcValue &param = params[param_name];
	if (!param.valid())
		throw std::runtime_error(param_name + " was not a valid int type");
	if (param.getType() == XmlRpc::XmlRpcValue::TypeInt)
	{
		val = static_cast<int>(param);
		return true;
	}
	else
		throw std::runtime_error("A non-double value was read for" + param_name);

	return false;
}


bool readFloatParam(const std::string &param_name, XmlRpc::XmlRpcValue &params, double &val)
{
	if (!params.hasMember(param_name))
		return false;
	XmlRpc::XmlRpcValue &param = params[param_name];
	if (!param.valid())
		throw std::runtime_error(param_name + " was not a valid double type");
	if (param.getType() == XmlRpc::XmlRpcValue::TypeDouble)
	{
		val = static_cast<double>(param);
		return true;
	}
	else if (param.getType() == XmlRpc::XmlRpcValue::TypeInt)
	{
		val = static_cast<int>(param);
		return true;
	}
	else
		throw std::runtime_error("A non-double value was read for" + param_name);

	return false;
}

bool extractFloatVal(XmlRpc::XmlRpcValue &param, double &val)
{
	if (!param.valid())
		throw std::runtime_error("val was not a valid double type");
	if (param.getType() == XmlRpc::XmlRpcValue::TypeDouble)
	{
		val = static_cast<double>(param);
		return true;
	}
	else if (param.getType() == XmlRpc::XmlRpcValue::TypeInt)
	{
		val = static_cast<int>(param);
		return true;
	}
	else
		throw std::runtime_error("A non-double value was read for value");

	return false;
}

bool readBoolParam(const std::string &param_name, XmlRpc::XmlRpcValue &params, bool &val)
{
	if (!params.hasMember(param_name))
		return false;
	XmlRpc::XmlRpcValue &param = params[param_name];
	if (!param.valid())
		throw std::runtime_error(param_name + " was not a valid bool type");
	if (param.getType() == XmlRpc::XmlRpcValue::TypeBoolean)
	{
		val = static_cast<bool>(param);
		return true;
	}
	else
		throw std::runtime_error("A non-bool value was read for" + param_name);

	return false;
}

bool waitForAutoEnd() // returns true if no errors
{
	ros::spinOnce();

	ros::Rate r(20);
	bool isOk = ros::ok();
	while (isOk && !auto_stopped && auto_started)
	{
		isOk = ros::ok();
		ros::spinOnce(); // spin so the subscribers can update
		r.sleep(); // wait for 1/20 of a second
	}
	if (!isOk) { // ROS not being ok is an error, return false
		return false;
	}
	return true;
}

bool waitForAutoStart(ros::NodeHandle nh)
{
	ros::spinOnce();

	ros::Rate r(20);
	// In sim, time starts at 0. We subtract 2 seconds from the currentt time
	// when fetching transforms to make sure they've had a chance to be published
	// Make sure we don't ever use a time less than 0 because of this by skipping
	// a few seconds here
	ros::Duration(2.5).sleep();

	//wait for auto period to start
	while( ros::ok() && !auto_stopped )
	{
		ros::spinOnce(); //spin so the subscribers can update

		std::vector<std::string> auto_steps; //stores string of action names to do, read from the auto mode array in the config file
		//read sequence of actions from config
		if (auto_mode >= 0)
		{
			if(nh.getParam("auto_mode_" + std::to_string(auto_mode), auto_steps))
			{
				for (size_t j = 0; j < auto_steps.size(); j++) {
					XmlRpc::XmlRpcValue action_data;
					if(nh.getParam(auto_steps[j], action_data)) {
						if(action_data["type"] == "path") {
							if (premade_paths.find(auto_steps[j]) != premade_paths.end()) {
								continue;
							}
							if (!action_data.hasMember("goal"))
							{
								ROS_ERROR_STREAM("auto_node : path " << auto_steps[j] << " has no 'goal' data");
								return false;
							}
							XmlRpc::XmlRpcValue path_goal = action_data["goal"];
							if (!action_data["goal"].hasMember("points"))
							{
								ROS_ERROR_STREAM("auto_node : path " << auto_steps[j] << " has no points?");
								return false;
							}
							XmlRpc::XmlRpcValue points_config = path_goal["points"];

							// Generate the waypoints of the spline
							base_trajectory_msgs::GenerateSpline spline_gen_srv;
							const size_t point_num = points_config.size() + 1;
							spline_gen_srv.request.points.resize(point_num);
							spline_gen_srv.request.points[0].positions.resize(3);
							spline_gen_srv.request.points[0].positions[0] = 0;
							spline_gen_srv.request.points[0].positions[1] = 0;
							spline_gen_srv.request.points[0].positions[2] = 0;
							for (size_t i = 0; i < point_num-1; i++)
							{
								spline_gen_srv.request.points[i+1].positions.resize(3);
								if (!extractFloatVal(points_config[i][0], spline_gen_srv.request.points[i+1].positions[0]))
								{
									ROS_INFO_STREAM("Error converting path point[" << i << "].x to double");
									break;
								}
								if (!extractFloatVal(points_config[i][1], spline_gen_srv.request.points[i+1].positions[1]))
								{
									ROS_INFO_STREAM("Error converting path point[" << i << "].y to double");
									break;
								}
								if (!extractFloatVal(points_config[i][2], spline_gen_srv.request.points[i+1].positions[2]))
								{
									ROS_INFO_STREAM("Error converting path point[" << i << "].orientation to double");
									break;
								}
							}

							std::string frame_id;
							readStringParam("frame_id", path_goal, frame_id);

							spline_gen_srv.request.header.frame_id = frame_id;
							spline_gen_srv.request.header.stamp = ros::Time::now() - ros::Duration(2); // TODO -fixme

							bool optimize_final_velocity{false};
							readBoolParam("optimize_final_velocity", path_goal, optimize_final_velocity);
							spline_gen_srv.request.optimize_final_velocity = optimize_final_velocity;

							if (path_goal.hasMember("point_frame_id"))
							{
								XmlRpc::XmlRpcValue xml_point_frame_ids = path_goal["point_frame_id"];
								if (!xml_point_frame_ids.valid())
									throw std::runtime_error("point_frame_ids not valid");
								if (xml_point_frame_ids.getType() != XmlRpc::XmlRpcValue::TypeArray)
									throw std::runtime_error("point_frame_ids not an array");

								for (int i = 0; i < xml_point_frame_ids.size(); i++)
								{
									std::string point_frame_id = xml_point_frame_ids[i];
									spline_gen_srv.request.point_frame_id.push_back(point_frame_id);
								}
							}
							if (path_goal.hasMember("path_offset_limit"))
							{
								XmlRpc::XmlRpcValue xml_path_offset_limits = path_goal["path_offset_limit"];
								if (!xml_path_offset_limits.valid())
									throw std::runtime_error("path_offset_limits not valid");
								if (xml_path_offset_limits.getType() != XmlRpc::XmlRpcValue::TypeArray)
									throw std::runtime_error("path_offset_limits not an array");

								// Add empty offset limit for initial 0,0,0 waypoint
								spline_gen_srv.request.path_offset_limit.push_back(base_trajectory_msgs::PathOffsetLimit());
								for (int i = 0; i < xml_path_offset_limits.size(); i++)
								{
									base_trajectory_msgs::PathOffsetLimit path_offset_msg;
									readFloatParam("min_x", xml_path_offset_limits[i], path_offset_msg.min_x);
									readFloatParam("max_x", xml_path_offset_limits[i], path_offset_msg.max_x);
									readFloatParam("min_y", xml_path_offset_limits[i], path_offset_msg.min_y);
									readFloatParam("max_y", xml_path_offset_limits[i], path_offset_msg.max_y);

									spline_gen_srv.request.path_offset_limit.push_back(path_offset_msg);
								}
							}

							ROS_INFO_STREAM("auto_node : calling spline_gen_cli_ with " << spline_gen_srv.request);
							if (!spline_gen_cli_.call(spline_gen_srv))
							{
								ROS_ERROR_STREAM("Can't call spline gen service in path_follower_server");
								return false;
							}
							premade_paths[auto_steps[j]] = spline_gen_srv.response.path;
							premade_waypoints[auto_steps[j]] = spline_gen_srv.response.waypoints;
							ROS_INFO_STREAM(spline_gen_srv.response.waypoints);
						}
					}
				}
			}
		}

		if(auto_mode > 0){
			auto_state = READY;
		}
		if(auto_started && auto_mode <= 0){
			ROS_ERROR("Auto node - Autonomous period started, please choose an auto mode");
		}

		// Valid auto mode plus auto_started flag ==> actually run auto code, return success
		if (auto_started && (auto_mode > 0)) {
			return true;
		}

		r.sleep();
	}

	// shutdownNode(DONE, "Auto node - code stopped before execution");
	return false;
}

bool resetMaps(std_srvs::Empty::Request &/*req*/,
			  std_srvs::Empty::Response &/*res*/) {

	premade_paths.clear();
	ROS_INFO_STREAM("premade paths were cleared");
	return true;
}

// Called everytime feedback is published
void feedbackCb(const path_follower_msgs::PathFeedbackConstPtr& feedback)
{
  ROS_ERROR_STREAM("FINDME!!!Got Feedback!! " << (feedback->percent_complete));
}

int main(int argc, char** argv)
{
	//SETUP --------------------------------------------------------------------------------------------

	//create node
	ros::init(argc, argv, "auto_node");
	ros::NodeHandle nh;

	const std::map<std::string, std::string> service_connection_header{{"tcp_nodelay", "1"}};
	spline_gen_cli_ = nh.serviceClient<base_trajectory_msgs::GenerateSpline>("/path_follower/base_trajectory/spline_gen", false, service_connection_header);

	ros::Publisher cmd_vel_pub = nh.advertise<geometry_msgs::Twist>("cmd_vel", 1);
	ros::ServiceClient brake_srv = nh.serviceClient<std_srvs::Empty>("/frcrobot_jetson/swerve_drive_controller/brake", false, service_connection_header);

	if (!spline_gen_cli_.waitForExistence(ros::Duration(15.0)))
	{
		ROS_ERROR("Wait (15 sec) timed out, for Spline Gen Service in auto_node");
	}

	//subscribers
	//rio match data (to know if we're in auto period)
	ros::Subscriber match_data_sub = nh.subscribe("/frcrobot_rio/match_data", 1, matchDataCallback);
	//dashboard (to get auto mode)
	ros::Subscriber auto_mode_sub = nh.subscribe("auto_mode", 1, updateAutoMode); //TODO get correct topic name (namespace)
	ros::Subscriber enable_auto_in_teleop_sub = nh.subscribe("/enable_auto_in_teleop", 1, enable_auto_in_teleop);

	// Used to pass in dynamic paths from other nodes
	ros::ServiceServer path_finder = nh.advertiseService("dynamic_path", dynamic_path_storage);

	//auto state
	auto_state_pub_thread = std::thread(publishAutoState, std::ref(nh));

	//servers
	ros::ServiceServer stop_auto_server = nh.advertiseService("stop_auto", stopAuto); //called by teleop node to stop auto execution during teleop if driver wants
	ros::ServiceServer reset_maps = nh.advertiseService("reset_maps", resetMaps);

	//actionlib clients
	actionlib::SimpleActionClient<path_follower_msgs::PathAction> path_ac("/path_follower/path_follower_server", true); //TODO fix this path
	actionlib::SimpleActionClient<behavior_actions::Shooting2022Action> shooting_ac("/shooting/shooting_server_2022", true);
	actionlib::SimpleActionClient<behavior_actions::Intaking2022Action> intaking_ac("/intaking/intaking_server_2022", true);
	preemptAll = [&path_ac, &shooting_ac, &intaking_ac](){ // must include all actions called
		path_ac.cancelGoalsAtAndBeforeTime(ros::Time::now());
		shooting_ac.cancelGoalsAtAndBeforeTime(ros::Time::now());
		intaking_ac.cancelGoalsAtAndBeforeTime(ros::Time::now());
	};

	//other variables
	ros::Rate r(10); //used in various places where we wait TODO: config?

	while(true) { // will exit when shutdownNode is called
		//WAIT FOR MATCH TO START --------------------------------------------------------------------------
		ROS_INFO("Auto node - waiting for autonomous to start");

		//wait for auto period to start
		if (!waitForAutoStart(nh))
			continue;

		//EXECUTE AUTONOMOUS ACTIONS --------------------------------------------------------------------------

		ROS_INFO_STREAM("Auto node - Executing auto mode " << auto_mode);
		auto_state = RUNNING;

		std::vector<std::string> auto_steps; //stores string of action names to do, read from the auto mode array in the config file
		//read sequence of actions from config
		if(! nh.getParam("auto_mode_" + std::to_string(auto_mode), auto_steps)){
			shutdownNode(ERROR, "Couldn't read auto_mode_" + std::to_string(auto_mode) + " config value in auto node");
			return 1;
		}

		//run through actions in order
		for(size_t i = 0; i < auto_steps.size(); i++){
			if(auto_started && !auto_stopped)
			{
				ROS_INFO_STREAM("Auto node - running step " << i << ": " << auto_steps[i]);

				//read data from config needed to carry out the action
				XmlRpc::XmlRpcValue action_data;
				if(! nh.getParam(auto_steps[i], action_data)){
					//shutdownNode(ERROR, "Auto node - Couldn't read data for '" + auto_steps[i] + "' auto action from config file");
					//return 1;
				}

				// CODE FOR ACTIONS HERE --------------------------------------------------
				//figure out what to do based on the action type, and do it
				std::string action_data_type;
				if (action_data.hasMember("type"))
				{
					action_data_type = static_cast<std::string>(action_data["type"]);
				}
				else
				{
					ROS_ERROR_STREAM("Data for action " << auto_steps[i] << " missing 'type' field");
				}

				if(action_data_type == "pause")
				{
					const double start_time = ros::Time::now().toSec();

					//read duration - user could've entered a double or an int, we don't know which
					double duration;
					if (!readFloatParam("duration", action_data, duration))
					{
						shutdownNode(ERROR, "Auto node - duration is not a double or int in '" + auto_steps[i] + "' action");
						return 1;
					}
	#if 0
					if((action_data["duration"].getType() == XmlRpc::XmlRpcValue::Type::TypeDouble) ||
					   (action_data["duration"].getType() == XmlRpc::XmlRpcValue::Type::TypeInt) ) {
						duration = static_cast<double>(action_data["duration"]);
					} else {
						shutdownNode(ERROR, "Auto node - duration is not a double or int in '" + auto_steps[i] + "' action");
						return 1;
					}
	#endif

					//wait
					while (ros::Time::now().toSec() - start_time < duration && !auto_stopped && ros::ok())
					{
						ros::spinOnce();
						r.sleep();
					}
				}
				else if(action_data_type == "intaking_actionlib_server")
				{
					//for some reason this is necessary, even if the server has been up and running for a while
					if(!intaking_ac.waitForServer(ros::Duration(5))){
						shutdownNode(ERROR,"Auto node - couldn't find intaking actionlib server");
						return 1;
					}

					if (!action_data.hasMember("goal"))
					{
						shutdownNode(ERROR,"Auto node - intaking_actionlib_server call missing \"goal\" field");
						return 1;
					}
					if(action_data["goal"] == "stop") {
						intaking_ac.cancelGoalsAtAndBeforeTime(ros::Time::now());
					} else {
						behavior_actions::Intaking2022Goal goal;
						intaking_ac.sendGoal(goal);
					}
				}
				else if(action_data_type == "shooting_actionlib_server")
				{
					if(!shooting_ac.waitForServer(ros::Duration(5))){
						return 1;
						shutdownNode(ERROR, "Auto node - couldn't find shooting actionlib server");
					} //for some reason this is necessary, even if the server has been up and running for a while
					
					// TODO: Need to find distance when we are right up against the goal
					// could also shoot farther away and call aligned shooting action
					behavior_actions::Shooting2022Goal goal;
					goal.num_cargo = 2;
					// guess
					goal.distance = 0.5;
					goal.eject = false;
					shooting_ac.sendGoal(goal);
					waitForActionlibServer(shooting_ac, 100, "shooting server");
				}
				else if(action_data_type == "path")
				{
					if(!path_ac.waitForServer(ros::Duration(5))){
						shutdownNode(ERROR, "Couldn't find path server");
						return 1;
					}
					int iteration_value = 1;
					if (action_data.hasMember("goal"))
						readIntParam("iterations", action_data["goal"], iteration_value);

					while(iteration_value > 0)
					{
						path_follower_msgs::PathGoal goal;
						if (premade_paths.find(auto_steps[i]) == premade_paths.end()) {
							shutdownNode(ERROR, "Can't find premade path " + std::string(auto_steps[i]));
						}
						goal.path = premade_paths[auto_steps[i]];
						goal.waypoints = premade_waypoints[auto_steps[i]];
						// Sends the goal and sets feedbackCb to be run when feedback is updated
						path_ac.sendGoal(goal, NULL, NULL, &feedbackCb);

						waitForActionlibServer(path_ac, 100, "running path");
						iteration_value --;
					}
				}
				else if(action_data_type == "cmd_vel")
				{
#if 0 // doesn't work in sim
					if(!brake_srv.waitForExistence(ros::Duration(15)))
					{
						ROS_ERROR("Wait (15 sec) timed out, for Brake Service in auto_node");
						break;
					}
#endif

					double duration_secs;

					if (!action_data.hasMember("duration"))
					{
						ROS_ERROR_STREAM("Auto action " << auto_steps[i] << " missing 'duration' field");
						break;
					}
					if (!readFloatParam("duration", action_data, duration_secs))
					{
						ROS_ERROR_STREAM("Auto action " << auto_steps[i] << " error reading 'duration' field");
						break;
					}
					if (!action_data.hasMember("cmd_vel"))
					{
						ROS_ERROR_STREAM("Auto action " << auto_steps[i] << " missing 'cmd_vel' field");
						break;
					}
					XmlRpc::XmlRpcValue cmd_vel_data = action_data["cmd_vel"];
					geometry_msgs::Twist cmd_vel;
					cmd_vel.linear.z = 0;
					cmd_vel.angular.x = 0;
					cmd_vel.angular.y = 0;

					if (!cmd_vel_data.hasMember("x"))
					{
						ROS_ERROR_STREAM("Auto action " << auto_steps[i] << " missing cmd_vel 'x' field");
						break;
					}
					if (!readFloatParam("x", cmd_vel_data, cmd_vel.linear.x))
					{
						ROS_ERROR_STREAM("Auto action " << auto_steps[i] << " error reading cmd_vel 'x' field");
						break;
					}
					if (!cmd_vel_data.hasMember("y"))
					{
						ROS_ERROR_STREAM("Auto action " << auto_steps[i] << " missing cmd_vel 'y' field");
						break;
					}
					if (!readFloatParam("y", cmd_vel_data, cmd_vel.linear.y))
					{
						ROS_ERROR_STREAM("Auto action " << auto_steps[i] << " error reading cmd_vel 'y' field");
						break;
					}
					if (!cmd_vel_data.hasMember("z"))
					{
						ROS_ERROR_STREAM("Auto action " << auto_steps[i] << " missing cmd_vel 'z' field");
						break;
					}
					if (!readFloatParam("z", cmd_vel_data, cmd_vel.angular.z))
					{
						ROS_ERROR_STREAM("Auto action " << auto_steps[i] << " error reading cmd_vel 'z' field");
						break;
					}
					ROS_INFO_STREAM("Auto action cmd_vel x = " << cmd_vel.linear.x <<
							" y = " << cmd_vel.linear.y <<
							" z = " << cmd_vel.angular.z <<
							" for " << duration_secs << " seconds");

					const ros::Duration duration(duration_secs);
					const ros::Time start_time = ros::Time::now();
					ros::Rate rate(25);

					while (ros::ok() && !auto_stopped && ((ros::Time::now() - start_time) < duration))
					{
						cmd_vel_pub.publish(cmd_vel);
						rate.sleep();
					}
					cmd_vel.linear.x = 0;
					cmd_vel.linear.y = 0;
					cmd_vel.angular.z = 0;
					cmd_vel_pub.publish(cmd_vel);
					std_srvs::Empty empty;
					if (!brake_srv.call(empty))
					{
						ROS_ERROR_STREAM("BrakeSrv call failed in auto cmd_vel step " << auto_steps[i]);
					}
					ROS_INFO_STREAM("Auto action " << auto_steps[i] << " finished");
				}
				else
				{
					shutdownNode(ERROR, "Auto node - Invalid type of action: " + std::string(action_data_type));
					return 1;
				}
			}
		}

		auto_state = DONE;
		ROS_INFO_STREAM("auto_node completed, waiting for auto to end");
		if (!waitForAutoEnd()) {
			shutdownNode(ERROR, "ROS is not ok :(");
		} else {
			auto_state = READY;
		}
	}

	return 0;
}
