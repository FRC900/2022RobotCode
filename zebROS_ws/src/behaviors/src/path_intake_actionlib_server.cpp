#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <actionlib/client/simple_action_client.h>

#include <behavior_actions/GamePiecePickup.h>
#include <nav_msgs/Path.h>
#include <behavior_actions/PathIntakeAction.h>
#include <path_follower_msgs/PathAction.h>
#include <geometry_msgs/Pose.h>

// This actionlib server will first generate a path with game_piece_path_gen, then run that path using PathAction, then intake a game piece using IntakeAction.

template <typename T>
void waitForActionlibServer(T &action_client, double timeout, const std::string &activity);

using Point = std::array<double, 3>;
using Pose = std::pair<Point, double>;

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
    std::vector<Pose> endpoints_;

    ros::ServiceClient game_piece_path_gen_client;

    actionlib::SimpleActionClient<path_follower_msgs::PathAction> path_ac_;

  public:
    PathIntakeAction(const std::string &name):
      // boost bind is like a callback
      as_(nh_, name, boost::bind(&PathIntakeAction::executeCB, this, _1), false),
      action_name_(name),
      path_ac_("/path_follower/path_follower_server", true)
    {
      game_piece_path_gen_client = nh_.serviceClient<behavior_actions::GamePiecePickup>("game_piece_path_gen"); // TODO fix path once we know what it is

      XmlRpc::XmlRpcValue endpoints;
      if (!nh_.getParam("endpoints", endpoints))
      {
        ROS_ERROR_STREAM("path_intake_actionlib_server : could not find endpoints.");
        return;
      }
      if(endpoints.getType() == XmlRpc::XmlRpcValue::Type::TypeArray && endpoints.size() > 0){
        for (int i = 0; i < endpoints.size(); i++) {
          if (endpoints[i].getType() == XmlRpc::XmlRpcValue::Type::TypeStruct && endpoints[i].hasMember("x") && endpoints[i].hasMember("y") && endpoints[i].hasMember("rot")) {
            double x = endpoints[i]["x"];
            double y = endpoints[i]["y"];
            double rot = endpoints[i]["rot"];
            endpoints_.push_back({{x, y, 0}, rot});
          }
        }
      }
      if (endpoints_.size() == 0) {
        ROS_ERROR_STREAM("path_intake_actionlib_server : no endpoints configured. aborting.");
        return;
      }

      if (!nh_.getParam("intake_frame_id", primary_frame_id_))
      {
        ROS_ERROR_STREAM("path_intake_actionlib_server : could not find intake_frame_id");
        return;
      }

      // TODO dynamic reconfigure?
      // if (!nh_.getParam("secondary_max_objects", secondary_max_objects_))
      // {
      //   ROS_ERROR_STREAM("path_intake_actionlib_server : could not find secondary_max_objects");
      //   return;
      // }

      // if (!nh_.getParam("secondary_max_distance", secondary_max_distance_))
      // {
      //   ROS_ERROR_STREAM("path_intake_actionlib_server : could not find secondary_max_distance");
      //   return;
      // }

      // if (!nh_.getParam("secondary_frame_id", secondary_frame_id_))
      // {
      //   ROS_ERROR_STREAM("path_intake_actionlib_server : could not find secondary_frame_id");
      //   return;
      // }

      // if (!nh_.getParam("min_radius", min_radius_))
      // {
      //   ROS_ERROR_STREAM("path_intake_actionlib_server : could not find min_radius");
      //   return;
      // }
      as_.start();
    }

    ~PathIntakeAction(void){
    }

    void executeCB(const behavior_actions::PathIntakeGoalConstPtr &goal){
      if (!game_piece_path_gen_client.waitForExistence(ros::Duration(30.0))) { // TODO make 30s configurable?
        ROS_ERROR_STREAM("path_intake_actionlib_server : game_piece_path_gen *does not exist*. Aborting.");
      }

      bool success = true;
      bool preempted = false;
      bool timed_out = false;
      feedback_.percentage_done = 0; // not implemented yet

      ROS_INFO_STREAM("path_intake_actionlib_server : Following path and intaking");

      feedback_.current_action = feedback_.GENERATE_PATH;
      as_.publishFeedback(feedback_);

      // call path generation server which returns path

      nav_msgs::Path path;

      // TODO eventually find which endpoint is the fastest to drive to, currently only using the first

      behavior_actions::GamePiecePickup game_piece_path_gen_srv;
      // TODO have path follower subscribe to the filtered cargo data
      game_piece_path_gen_srv.request.object_id = "friendly_cargo";
      game_piece_path_gen_srv.request.max_objects = 2; // TODO this needs to be 2 - <however many cargo are in the indexer>
      // game_piece_path_gen_srv.request.primary_frame_id = primary_frame_id_;
      // game_piece_path_gen_srv.request.secondary_object_id = "opponent_cargo";
      // game_piece_path_gen_srv.request.secondary_max_objects = secondary_max_objects_;
      // game_piece_path_gen_srv.request.secondary_max_distance = secondary_max_distance_;
      // game_piece_path_gen_srv.request.secondary_frame_id = secondary_frame_id_;
      // game_piece_path_gen_srv.request.min_radius = min_radius_;
      geometry_msgs::Pose endpoint;
      endpoint.position.x = endpoints_[0].first[0];
      endpoint.position.y = endpoints_[0].first[1];
      endpoint.position.z = 0;
      endpoint.orientation.z = endpoints_[0].second;
      game_piece_path_gen_srv.request.endpoint = endpoint;

      if(game_piece_path_gen_client.call(game_piece_path_gen_srv)){
        path = game_piece_path_gen_srv.response.path;
      } else {
        ROS_ERROR_STREAM("path_intake_actionlib_server : path generation failed! aborting");
        as_.setAborted(result_);
        success = false;
        // TODO jump to cleanup
      }

      feedback_.current_action = feedback_.FOLLOW_PATH;
      as_.publishFeedback(feedback_);

      // TODO figure out how to intake while following path

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
      waitForActionlibServer(path_ac_, 100, "running path"); // iterate??

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
void waitForActionlibServer(T &action_client, double timeout, const std::string &activity)
	//activity is a description of what we're waiting for, e.g. "waiting for mechanism to extend" - helps identify where in the server this was called (for error msgs)
{
	const double request_time = ros::Time::now().toSec();
	ros::Rate r(10); //TODO config?

  bool auto_stopped;

	//wait for actionlib server to finish
	std::string state;
	while(!auto_stopped && ros::ok())
	{
		state = action_client.getState().toString();

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
