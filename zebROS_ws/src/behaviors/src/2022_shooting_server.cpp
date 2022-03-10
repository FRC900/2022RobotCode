// Spin up shooter
// Wait for shooter
// Get cargo from indexer
// Repeat `num_cargo` times
#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <actionlib/client/simple_action_client.h>
#include <behavior_actions/Shooting2022Action.h>
#include <behavior_actions/Shooter2022Action.h>
#include <behavior_actions/Index2022Action.h>
#include <std_msgs/Float64.h>

class ShootingServer2022
{
protected:

  ros::NodeHandle nh_;
  actionlib::SimpleActionServer<behavior_actions::Shooting2022Action> as_;
  std::string action_name_;
  // create messages that are used to publish feedback/result
  behavior_actions::Shooting2022Feedback feedback_;

  behavior_actions::Shooting2022Result result_;
  actionlib::SimpleActionClient<behavior_actions::Shooter2022Action> ac_shooter_;
  actionlib::SimpleActionClient<behavior_actions::Index2022Action> ac_indexer_;

  double shooting_timeout_;
  double indexing_timeout_;

  ros::Subscriber cargo_state_sub_;
  uint8_t cargo_num_;

public:

  ShootingServer2022(std::string name) :
    as_(nh_, name, boost::bind(&ShootingServer2022::executeCB, this, _1), false),
    action_name_(name),
    ac_shooter_("/shooter/shooter_server_2022", true),
    ac_indexer_("/index/index_server_2022", true)
  {
    if (!nh_.getParam("shooting_timeout", shooting_timeout_))
    {
      ROS_WARN_STREAM("2022_climb_server : Could not find shooting_timeout, defaulting to 10 seconds");
      shooting_timeout_ = 10.0;
    }
    if (!nh_.getParam("indexing_timeout", shooting_timeout_))
    {
      ROS_WARN_STREAM("2022_climb_server : Could not find indexing_timeout, defaulting to 5 seconds");
      indexing_timeout_ = 5.0;
    }
    cargo_state_sub_ = nh_.subscribe("/2022_index_server/ball_state", 2, &ShootingServer2022::cargoStateCallback, this);
    as_.start();
  }

  ~ShootingServer2022(void)
  {
  }

  void cargoStateCallback(const std_msgs::Float64 &msg)
  {
    cargo_num_ = msg.data;
  }

  bool spinUpShooter(bool &timedOut) { // returns false if ros is not ok or timed out, true otherwise
    feedback_.state = feedback_.WAITING_FOR_SHOOTER;
    as_.publishFeedback(feedback_);
    ROS_INFO_STREAM("2022_shooting_server : spinning up shooter");
    bool isSpinningFast = false;
    behavior_actions::Shooter2022Goal goal;
    goal.mode = goal.HIGH_GOAL; // `goal.` might need to be replaced with `behavior_actions::Shooter2022Goal::`
    ac_shooter_.sendGoal(goal,
                         actionlib::SimpleActionClient<behavior_actions::Shooter2022Action>::SimpleDoneCallback(),
                         actionlib::SimpleActionClient<behavior_actions::Shooter2022Action>::SimpleActiveCallback(),
                         [&isSpinningFast](const behavior_actions::Shooter2022FeedbackConstPtr &feedback){ isSpinningFast = feedback->close_enough; });
    ros::Rate r(100);
    double multipliedTimeout = shooting_timeout_ * 100; // 100 because that's what the rate is
    uint64_t counter = 0;
    while (ros::ok() && !isSpinningFast) {
      if (counter >= multipliedTimeout) {
        ROS_INFO_STREAM("2022_shooting_server : shooter timed out :(");
        timedOut = true;
        return false;
      }
      if (as_.isPreemptRequested()) {
        ROS_INFO_STREAM("2022_shooting_server : preempted");
        return false;
      }
      ros::spinOnce();
      r.sleep();
      counter++;
    }
    ROS_INFO_STREAM("2022_shooting_server : spun up shooter");
    return ros::ok();
  }

  bool getCargoFromIndexer(bool &timedOut) { // returns false if ros is not ok or timed out, true otherwise
    feedback_.state = feedback_.WAITING_FOR_INDEXER;
    as_.publishFeedback(feedback_);
    ROS_INFO_STREAM("2022_shooting_server : getting cargo from indexer");

    behavior_actions::Index2022Goal goal;
    goal.goal = goal.MOVE_TO_SHOOTER;
    ac_indexer_.sendGoal(goal);
    bool finished_before_timeout = ac_indexer_.waitForResult(ros::Duration(indexing_timeout_));
    if (finished_before_timeout) {
      ROS_INFO_STREAM("2022_shooting_server : cargo should have been launched");
    } else {
      ROS_INFO_STREAM("2022_shooting_server : indexer timed out :(");
      return false;
    }
    if (ros::ok()) {
      feedback_.cargo_shot++;
      as_.publishFeedback(feedback_);
    }
    return ros::ok();
  }

  void executeCB(const behavior_actions::Shooting2022GoalConstPtr &goal)
  {
    result_.timed_out = false;
    if (goal->num_cargo > cargo_num_ || goal->num_cargo == 0) {
      ROS_ERROR_STREAM("2022_shooting_server : invalid number of cargo. Either you have told me to launch 0 cargo, or you have requested more cargo than are in the indexer.");
      as_.setAborted(result_); // set the action state to aborted
      return;
    }
    bool shooterTimedOut = false;
    bool success = spinUpShooter(shooterTimedOut);
    result_.timed_out = shooterTimedOut;
    uint8_t i = 0;
    for (uint8_t i = 0; (i < goal->num_cargo) && success; i++)
    {
      bool indexerTimedOut = false;
      // check that preempt has not been requested by the client
      if (as_.isPreemptRequested() || !ros::ok())
      {
        ROS_INFO_STREAM("2022_shooting_server : preempted");
        // set the action state to preempted
        as_.setPreempted();
        success = false;
        break;
      }
      if (getCargoFromIndexer(indexerTimedOut)) {
        success = success && true;
      } else {
        result_.timed_out = indexerTimedOut;
        success = false;
        break;
      }
    }

    ac_shooter_.cancelGoal(); // stop shooter
    ac_indexer_.cancelGoal(); // stop shooter

    if (success)
    {
      ROS_INFO_STREAM("2022_shooting_server : succeeded! yay!!");
      // publish feedback
      as_.publishFeedback(feedback_);
      // set the action state to succeeded
      as_.setSucceeded(result_);
    }
    else
    {
      ROS_INFO_STREAM("2022_shooting_server : failed :(");
      // set the action state to aborted
      as_.setAborted(result_);
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
