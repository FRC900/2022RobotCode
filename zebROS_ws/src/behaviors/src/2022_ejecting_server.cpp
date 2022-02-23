#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <actionlib/client/simple_action_client.h>
#include <behavior_actions/Ejecting2022Action.h>
// #include <behavior_actions/Intake2022Action.h>
// #include <behavior_actions/Index2022Action.h>
#include <behavior_actions/Shooter2022Action.h>

class Ejecting2022Server
{
protected:

  ros::NodeHandle nh_;
  actionlib::SimpleActionServer<behavior_actions::Ejecting2022Action> as_;
  std::string action_name_;

  double server_timeout_;

  behavior_actions::Ejecting2022Result result_;

  // these lines of code show how these mechanisms are oriented on the robot
  actionlib::SimpleActionClient<behavior_actions::Shooter2022Action> ac_shooter_;
  // actionlib::SimpleActionClient<behavior_actions::Index2022Action> ac_indexer_;
  // actionlib::SimpleActionClient<behavior_actions::Intake2022Action> ac_intake_;

public:

  Ejecting2022Server(std::string name) :
    as_(nh_, name, boost::bind(&Ejecting2022Server::executeCB, this, _1), false),
    action_name_(name),
    ac_shooter_("/shooter/shooter_server_2022", true)/*,
    ac_indexer_("/indexer/index_server_2022", true),
    ac_intake_("/intake/intake_server_2022", true)*/
  {
    if (!nh_.getParam("server_timeout_", server_timeout_)) {
			ROS_WARN_STREAM("2022_ejecting_server : could not find server_timeout_, defaulting to 10 seconds");
			server_timeout_ = 10;
		}
    as_.start();
  }

  ~Ejecting2022Server(void)
  {
  }

  void executeCB(const behavior_actions::Ejecting2022GoalConstPtr &goal)
  {
    result_.ejected_top_cargo = false;
    result_.ejected_bottom_cargo = false;

    if (!ac_shooter_.waitForServer(ros::Duration(server_timeout_))) {
      ROS_ERROR_STREAM("2022_ejecting_server : timed out connecting to shooter server, aborting");
      result_.timed_out = true;
      as_.setAborted(result_);
      return;
    }

    // if (!ac_indexer_.waitForServer(ros::Duration(server_timeout_))) {
    //   ROS_ERROR_STREAM("2022_ejecting_server : timed out connecting to indexer server, aborting");
    //   result_.timed_out = true;
    //   as_.setAborted(result_);
    //   return;
    // }

    // if (!ac_intake_.waitForServer(ros::Duration(server_timeout_))) {
    //   ROS_ERROR_STREAM("2022_ejecting_server : timed out connecting to intake server, aborting");
    //   result_.timed_out = true;
    //   as_.setAborted(result_);
    //   return;
    // }

    if (goal->eject_bottom_cargo) {
      ROS_INFO_STREAM("2022_ejecting_server : ejecting bottom cargo");
      // check if indexer has a bottom cargo. if not, abort.
      ROS_INFO_STREAM("2022_ejecting_server : calling indexer, goal=EJECT");
      // behavior_actions::Index2022Goal indexerGoal;
      // indexerGoal.goal = indexerGoal.EJECT;
      // // TODO tell it to only eject the bottom one
      // ac_indexer_.sendGoal(indexerGoal);
      // if (!ac_indexer_.waitForResult(ros::Duration(server_timeout_))) {
      //   ROS_INFO_STREAM("2022_ejecting_server : indexer timed out, aborting");
      //   result_.timed_out = true;
      //   as_.setAborted(result_);
      //   ac_indexer_.cancelAllGoals();
      //   return;
      // }
      ROS_INFO_STREAM("2022_ejecting_server : calling intake, reverse=true, go_fast=" << goal->speedy);
      // behavior_actions::Intake2022Goal intakeGoal;
      // intakeGoal.reverse = true;
      // intakeGoal.go_fast = goal->speedy;
      // ac_intake_.sendGoal(intakeGoal);
      // if (!ac_intake_.waitForResult(ros::Duration(server_timeout_))) {
      //   ROS_INFO_STREAM("2022_ejecting_server : intake timed out, aborting");
      //   result_.timed_out = true;
      //   as_.setAborted(result_);
      //   ac_intake_.cancelAllGoals();
      //   return;
      // }
      result_.ejected_bottom_cargo = true; // TODO only be true if the indexer says it is so
    }

    if (goal->eject_top_cargo) {
      ROS_INFO_STREAM("2022_ejecting_server : ejecting top cargo");
      // check if indexer has a top cargo. if not, abort.
      ROS_INFO_STREAM("2022_ejecting_server : calling indexer, goal=EJECT");
      // behavior_actions::Index2022Goal indexerGoal;
      // indexerGoal.goal = indexerGoal.MOVE_TO_SHOOTER;
      // ac_indexer_.sendGoal(indexerGoal);
      // if (!ac_indexer_.waitForResult(ros::Duration(server_timeout_))) {
      //   ROS_INFO_STREAM("2022_ejecting_server : indexer timed out, aborting");
      //   result_.timed_out = true;
      //   as_.setAborted(result_);
      //   ac_indexer_.cancelAllGoals();
      //   return;
      // }
      ROS_INFO_STREAM("2022_ejecting_server : calling shooter, mode=EJECT");
      behavior_actions::Shooter2022Goal shooterGoal;
      shooterGoal.mode = shooterGoal.EJECT;
      bool isSpinningFast = false;
      ac_shooter_.sendGoal(shooterGoal,
                           actionlib::SimpleActionClient<behavior_actions::Shooter2022Action>::SimpleDoneCallback(),
                           actionlib::SimpleActionClient<behavior_actions::Shooter2022Action>::SimpleActiveCallback(),
                           [&isSpinningFast](const behavior_actions::Shooter2022FeedbackConstPtr &feedback){ isSpinningFast = feedback->close_enough; });
      ros::Rate r(100);
      double multipliedTimeout = server_timeout_ * 100; // 100 because that's what the rate is
      uint64_t counter = 0;
      while (ros::ok() && !isSpinningFast) {
        if (counter >= multipliedTimeout) {
          ROS_INFO_STREAM("2022_ejecting_server : shooter timed out :(");
          result_.timed_out = true;
          as_.setAborted(result_);
          ac_shooter_.cancelAllGoals();
          return;
        }
        if (as_.isPreemptRequested()) {
          ROS_INFO_STREAM("2022_ejecting_server : preempted");
          result_.timed_out = false;
          as_.setAborted(result_);
          ac_shooter_.cancelAllGoals();
          return;
        }
        ros::spinOnce();
        r.sleep();
        counter++;
      }
      result_.ejected_top_cargo = true; // TODO only be true if the indexer says it is so
    }

    ROS_INFO_STREAM("2022_ejecting_server : succeeded :)");

    as_.setSucceeded(result_);

    // Stop shooter, intake, and indexer (maybe)
  }


};


int main(int argc, char** argv)
{
  ros::init(argc, argv, "ejecting_server_2022");

  Ejecting2022Server server("ejecting_server_2022");
  ros::spin();

  return 0;
}
