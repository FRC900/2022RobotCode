#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <actionlib/client/simple_action_client.h>

#include <behavior_actions/GamePiecePickup.h>
#include <nav_msgs/Path.h>
#include <behavior_actions/PathIntakeAction.h>
#include <path_follower_msgs/PathAction.h>
#include <geometry_msgs/Pose.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <behavior_actions/Intake2022Action.h>

// This actionlib server will first generate a path with game_piece_path_gen, then run that path using PathAction, then intake a game piece using IntakeAction.

template <typename T>
void waitForActionlibServer(T &action_client, double timeout, const std::string &activity, actionlib::SimpleActionServer<behavior_actions::PathIntakeAction> &as);

using Point = std::array<double, 3>;

class PathIntakeAction{
  private:
    ros::NodeHandle nh_;
    actionlib::SimpleActionServer<behavior_actions::PathIntakeAction> as_;
    std::string action_name_;
    behavior_actions::PathIntakeFeedback feedback_;
    behavior_actions::PathIntakeResult result_;

    std::string primary_frame_id_;
    int secondary_max_objects_;
    double secondary_max_distance_;
    std::string secondary_frame_id_;
    double min_radius_;
    std::vector<geometry_msgs::Pose> hub_endpoints_;
    bool no_intake_;

    ros::ServiceClient game_piece_path_gen_client_;

    tf2_ros::Buffer tf_buffer_;
    tf2_ros::TransformListener tf2_listener_;

    actionlib::SimpleActionClient<behavior_actions::Intake2022Action> intake_ac_;
    actionlib::SimpleActionClient<path_follower_msgs::PathAction> path_ac_;

  public:
    PathIntakeAction(const std::string &name):
      // boost bind is like a callback
      as_(nh_, name, boost::bind(&PathIntakeAction::executeCB, this, _1), false),
      action_name_(name),
      tf2_listener_(tf_buffer_),
      path_ac_("/path_follower/path_follower_server", true),
      intake_ac_("/intake/intake_server_2022", true)
    {
      game_piece_path_gen_client_ = nh_.serviceClient<behavior_actions::GamePiecePickup>("/path_follower/game_piece_path_gen"); // TODO fix path once we know what it is

      XmlRpc::XmlRpcValue endpoints;
      if (!nh_.getParam("hub_endpoints", endpoints))
      {
        ROS_WARN_STREAM("path_intake_actionlib_server : could not find hub_endpoints. will not be able to navigate to hub.");
      } else {
        if(endpoints.getType() == XmlRpc::XmlRpcValue::Type::TypeArray && endpoints.size() > 0){
          for (int i = 0; i < endpoints.size(); i++) {
            if (endpoints[i].getType() == XmlRpc::XmlRpcValue::Type::TypeStruct && endpoints[i].hasMember("x") && endpoints[i].hasMember("y") && endpoints[i].hasMember("rot")) {
              geometry_msgs::Pose pose;
              pose.position.x = endpoints[i]["x"];
              pose.position.y = endpoints[i]["y"];
              pose.orientation.z = endpoints[i]["rot"];
              // Do map relative (this) to robot relative (base_link, what the server expects) transform
              geometry_msgs::TransformStamped map_to_base_link = tf_buffer_.lookupTransform("base_link", "map", ros::Time(0), ros::Duration(1.0));
              tf2::doTransform(pose, pose, map_to_base_link);
              // Add endpoint
              hub_endpoints_.push_back(pose);
            }
          }
        }
        if (hub_endpoints_.size() == 0) {
          ROS_WARN_STREAM("path_intake_actionlib_server : no endpoints configured. will not be able to navigate to hub.");
        }
      }

      if (!nh_.getParam("intake_frame_id", primary_frame_id_))
      {
        ROS_ERROR_STREAM("path_intake_actionlib_server : could not find intake_frame_id");
        return;
      }

      // TODO dynamic reconfigure?
      if (!nh_.getParam("secondary_max_objects", secondary_max_objects_))
      {
        ROS_ERROR_STREAM("path_intake_actionlib_server : could not find secondary_max_objects");
        return;
      }

      if (!nh_.getParam("secondary_max_distance", secondary_max_distance_))
      {
        ROS_ERROR_STREAM("path_intake_actionlib_server : could not find secondary_max_distance");
        return;
      }

      if (!nh_.getParam("secondary_frame_id", secondary_frame_id_))
      {
        ROS_ERROR_STREAM("path_intake_actionlib_server : could not find secondary_frame_id");
        return;
      }

      if (!nh_.getParam("min_radius", min_radius_))
      {
        ROS_ERROR_STREAM("path_intake_actionlib_server : could not find min_radius");
        return;
      }

      if (!nh_.getParam("no_intake", no_intake_))
      {
        // set no_intake to true in sim when not running hw interface
        no_intake_ = false;
      }
      as_.start();
    }

    ~PathIntakeAction(void){
    }

    std::optional<nav_msgs::Path> generatePath(const geometry_msgs::Pose &endpoint, const behavior_actions::PathIntakeGoalConstPtr &goal) {
      behavior_actions::GamePiecePickup game_piece_path_gen_srv;
      game_piece_path_gen_srv.request.object_id = "friendly_cargo";
      game_piece_path_gen_srv.request.max_objects = goal->max_cargo;
      game_piece_path_gen_srv.request.primary_frame_id = primary_frame_id_;
      game_piece_path_gen_srv.request.secondary_object_id = "opponent_cargo";
      game_piece_path_gen_srv.request.secondary_max_objects = goal->hit_opponent_cargo ? secondary_max_objects_ : 0;
      game_piece_path_gen_srv.request.secondary_max_distance = secondary_max_distance_;
      game_piece_path_gen_srv.request.secondary_frame_id = secondary_frame_id_;
      game_piece_path_gen_srv.request.min_radius = min_radius_;
      ROS_INFO_STREAM("path_intake_actionlib_server : generating path with object_id=friendly_cargo, max_objects=2, primary_frame_id=" << primary_frame_id_ << ", secondary_object_id=opponent_cargo, secondary_max_objects=" << secondary_max_objects_ << ", secondary_max_distance=" << secondary_max_distance_ << ", secondary_frame_id=" << secondary_frame_id_ << ", min_radius=" << min_radius_ << ", endpoint=(" << endpoint.position.x << "," << endpoint.position.y << ")");
      game_piece_path_gen_srv.request.endpoint = endpoint;
      game_piece_path_gen_srv.request.end_at_last_object = goal->end_at_last_cargo;

      if(game_piece_path_gen_client_.call(game_piece_path_gen_srv)){
        return std::optional<nav_msgs::Path>{game_piece_path_gen_srv.response.path};
      } else {
        ROS_ERROR_STREAM("path_intake_actionlib_server : path generation failed!");
        return std::nullopt;
      }
    }

    void executeCB(const behavior_actions::PathIntakeGoalConstPtr &goal){
      ROS_INFO_STREAM("path_intake_actionlib_server : waiting for game_piece_path_gen");
      if (!game_piece_path_gen_client_.waitForExistence(ros::Duration(30.0))) { // TODO make 30s configurable?
        ROS_ERROR_STREAM("path_intake_actionlib_server : game_piece_path_gen *does not exist*. Aborting.");
        result_.timed_out = true;
        result_.success = false;
        as_.setAborted(result_);
        return;
      }

      bool success = true;
      bool preempted = false;
      bool timed_out = false;
      feedback_.percentage_done = 0; // not implemented yet

      feedback_.current_action = feedback_.START_INTAKE;
      as_.publishFeedback(feedback_);

      ROS_INFO_STREAM("path_intake_actionlib_server : starting intake");
      if (!no_intake_) {
        behavior_actions::Intake2022Goal intakeGoal;
        intakeGoal.go_fast = false;
        intakeGoal.reverse = false;
        intake_ac_.sendGoal(intakeGoal);
      }

      feedback_.current_action = feedback_.GENERATE_PATH;
      as_.publishFeedback(feedback_);

      ROS_INFO_STREAM("path_intake_actionlib_server : generating path");

      // call path generation server which returns path

      uint64_t min_path_points = std::numeric_limits<uint64_t>::max(); // TODO add better check (distance? simulate time?)
      nav_msgs::Path path;
      if (goal->go_to_hub) {
        if (hub_endpoints_.size() == 0) {
          ROS_ERROR_STREAM("path_intake_actionlib_server : unable to navigate to hub (check messages from initialization to see why)");
          as_.setAborted(result_);
          success = false;
          // TODO jump to cleanup
        } else {
          for (auto &endpoint : hub_endpoints_) {
            auto temp_path = generatePath(endpoint, goal);
            if (temp_path.has_value()) {
              if (temp_path.value().poses.size() < min_path_points) {
                path = temp_path.value();
                min_path_points = temp_path.value().poses.size();
              }
            }
          }
        }
      } else {
        geometry_msgs::Pose endpoint = goal->endpoint.pose;
        geometry_msgs::TransformStamped map_to_base_link = tf_buffer_.lookupTransform("base_link", goal->endpoint.header.frame_id, ros::Time(0), ros::Duration(1.0));
        tf2::doTransform(endpoint, endpoint, map_to_base_link);
        auto temp_path = generatePath(endpoint, goal);
        if (temp_path.has_value()) {
          path = temp_path.value();
        } else {
          ROS_ERROR_STREAM("path_intake_actionlib_server : path generation failed! aborting");
          as_.setAborted(result_);
          success = false;
          // TODO jump to cleanup
        }
      }

      ROS_INFO_STREAM("path_intake_actionlib_server : following path");

      feedback_.current_action = feedback_.FOLLOW_PATH;
      as_.publishFeedback(feedback_);

      // call path following PathAction
      if(!path_ac_.waitForServer(ros::Duration(10))){
					ROS_ERROR_STREAM("path_intake_actionlib_server: Couldn't find path follower actionlib server");
          as_.setAborted(result_);
					success = false;
          // TODO jump to cleanup
			}
      path_follower_msgs::PathGoal pathGoal;
      pathGoal.path = path;
      path_ac_.sendGoal(pathGoal);
      ROS_INFO_STREAM("path_intake_actionlib_server : waiting for path driving to finish");
      waitForActionlibServer(path_ac_, 100, "running path", as_); // iterate??

      ROS_INFO_STREAM("path_intake_actionlib_server : stopping intake");

      feedback_.current_action = feedback_.STOP_INTAKE;
      as_.publishFeedback(feedback_);

      if (!no_intake_) {
        intake_ac_.cancelGoalsAtAndBeforeTime(ros::Time::now());
      }

      ROS_INFO_STREAM("path_intake_actionlib_server : done");

      feedback_.current_action = feedback_.DONE;
      as_.publishFeedback(feedback_);

      if(as_.isPreemptRequested() || !ros::ok()){
        preempted = true;
        as_.setPreempted();
      }

      //log state of action and set result of action
			result_.timed_out = timed_out;
			if(!success || timed_out)
			{
				ROS_WARN("%s: Error / Timed Out", action_name_.c_str());
				result_.success = false;
				as_.setSucceeded(result_);
			}
			else if(preempted)
			{
				ROS_WARN("%s: Preempted", action_name_.c_str());
				result_.success = false;
				as_.setPreempted(result_);
			}
			else //implies succeeded
			{
				ROS_WARN("%s: Succeeded", action_name_.c_str());
				result_.success = true;
				as_.setSucceeded(result_);
			}
    }
};

template <typename T>
void waitForActionlibServer(T &action_client, double timeout, const std::string &activity, actionlib::SimpleActionServer<behavior_actions::PathIntakeAction> &as)
	//activity is a description of what we're waiting for, e.g. "waiting for mechanism to extend" - helps identify where in the server this was called (for error msgs)
{
	const double request_time = ros::Time::now().toSec();
	ros::Rate r(10); //TODO config?

  bool auto_stopped = false;

	//wait for actionlib server to finish
	std::string state;
	while(!auto_stopped && ros::ok() && !as.isPreemptRequested())
	{
		state = action_client.getState().toString();
    ROS_INFO_STREAM_THROTTLE(2.0, state);

		if(state == "PREEMPTED") {
			ROS_ERROR_STREAM("Path intake - " << activity << " got preempted");
			auto_stopped = true;
		}
		else if(state == "ABORTED") {
			ROS_ERROR_STREAM("Path intake - " << activity << " was aborted / rejected");
			auto_stopped = true;
		}
		//check timeout - note: have to do this before checking if state is SUCCEEDED since timeouts are reported as SUCCEEDED
		else if (ros::Time::now().toSec() - request_time > timeout || //timeout from what this file says
				(state == "SUCCEEDED" && !action_client.getResult()->success)) //server times out by itself
		{
			ROS_ERROR_STREAM("Path intake - " << activity << " timed out");
			auto_stopped = true;
			action_client.cancelGoalsAtAndBeforeTime(ros::Time::now());
		}
		else if (state == "SUCCEEDED") { //must have succeeded since we already checked timeout possibility
			ROS_WARN_STREAM("Path intake - " << activity << " succeeded");
			break; //stop waiting
		}
		else if (auto_stopped){
			ROS_WARN_STREAM("Path intake - auto_stopped set");
			action_client.cancelGoalsAtAndBeforeTime(ros::Time::now());
		}
		else { //if didn't succeed and nothing went wrong, keep waiting
			ros::spinOnce();
			r.sleep();
		}
	}
}

int main(int argc, char *argv[]){
  ros::init(argc, argv, "path_intake");
  PathIntakeAction path_intake("path_intake");

  ros::spin();

  return 0;
}
