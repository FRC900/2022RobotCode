// Spin up shooter
// Wait for shooter
// Get cargo from indexer
// Repeat `num_cargo` times
#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <actionlib/client/simple_action_client.h>
#include <behavior_actions/Shooting2022Action.h>
// #include <behavior_actions/Shooter2022Action.h>
// #include <behavior_actions/Indexer2022Action.h>

class ShootingServer2022
{
protected:

  ros::NodeHandle nh_;
  actionlib::SimpleActionServer<behavior_actions::Shooting2022Action> as_;
  std::string action_name_;
  // create messages that are used to publish feedback/result
  behavior_actions::Shooting2022Feedback feedback_;

  behavior_actions::Shooting2022Result result_;
  // actionlib::SimpleActionClient<behavior_actions::Shooter2022Action> ac_shooter_;
  // actionlib::SimpleActionClient<behavior_actions::Indexer2022Action> ac_indexer_;

public:

  ShootingServer2022(std::string name) :
    as_(nh_, name, boost::bind(&ShootingServer2022::executeCB, this, _1), false),
    action_name_(name)/*,
    ac_shooter_("/insert_shooter_action_path_here", true),
    ac_indexer_("/insert_indexer_action_path_here", true)*/
  {
    as_.start();
  }

  ~ShootingServer2022(void)
  {
  }

  bool spinUpShooter() { // returns false if ros is not ok, true otherwise
    feedback_.state = feedback_.WAITING_FOR_SHOOTER;
    as_.publishFeedback(feedback_);
    ROS_INFO_STREAM("2022_shooting_server : spinning up shooter");
    /*
    bool isSpinningFast = false;
    behavior_actions::Shooter2022Goal goal;
    goal.mode = goal.HIGH_GOAL; // `goal.` might need to be replaced with `behavior_actions::Shooter2022Goal::`
    ac_shooter_.sendGoal(goal,
                         actionlib::SimpleActionClient<behavior_actions::Shooter2022Action>::SimpleDoneCallback(),
                         actionlib::SimpleActionClient<behavior_actions::Shooter2022Action>::SimpleActiveCallback(),
                         [&isSpinningFast](const behavior_actions::Shooter2022FeedbackConstPtr &feedback){ isSpinningFast = feedback.close_enough; });
    ros::Rate r(100);
    while (ros::ok() && !isSpinningFast) {
      ros::spinOnce();
      r.sleep();
    }
    */
    ros::Duration(2.5).sleep();
    ROS_INFO_STREAM("2022_shooting_server : spun up shooter");
    return ros::ok();
  }

  bool getCargoFromIndexer() { // returns false if ros is not ok, true otherwise
    feedback_.state = feedback_.WAITING_FOR_INDEXER;
    as_.publishFeedback(feedback_);
    ROS_INFO_STREAM("2022_shooting_server : getting cargo from indexer");
    // <insert indexer stuff here>
    ros::Duration(2.5).sleep();
    ROS_INFO_STREAM("2022_shooting_server : cargo should have been launched");
    if (ros::ok()) {
      feedback_.cargo_shot++;
      as_.publishFeedback(feedback_);
    }
    return ros::ok();
  }

  void executeCB(const behavior_actions::Shooting2022GoalConstPtr &goal)
  {
    if (goal->num_cargo > 2 || goal->num_cargo == 0) {
      ROS_ERROR_STREAM("2022_shooting_server : invalid number of cargo");
      as_.setAborted(result_); // set the action state to aborted
      return;
    }
    bool success = true;
    for (uint8_t i = 0; i < goal->num_cargo; i++)
    {
      // check that preempt has not been requested by the client
      if (as_.isPreemptRequested() || !ros::ok())
      {
        ROS_INFO_STREAM("2022_shooting_server : sreempted");
        // set the action state to preempted
        as_.setPreempted();
        success = false;
        break;
      }
      if (spinUpShooter()) {
        success = success && true;
      } else {
        success = false;
        break;
      }
      if (getCargoFromIndexer()) {
        success = success && true;
      } else {
        success = false;
        break;
      }
    }

    if (success)
    {
      ROS_INFO_STREAM("2022_shooting_server : succeeded! yay!!");
      // set the action state to succeeded
      as_.setSucceeded(result_);
    }

    feedback_ = behavior_actions::Shooting2022Feedback();
  }


};


int main(int argc, char** argv)
{
  ros::init(argc, argv, "shooting_server_2022");

  ShootingServer2022 server("shooting_server_2022");
  ros::spin();

  return 0;
}
