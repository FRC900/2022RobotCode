#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <behavior_actions/Shooter2022Action.h>
#include <dynamic_reconfigure_wrapper/dynamic_reconfigure_wrapper.h> // TODO change to use ddynamic_reconfigure
#include <behaviors/Shooter2022Config.h>
#include <std_msgs/Float64.h>
#include "talon_state_msgs/TalonState.h"

#define SHOOTER_INFO(x) ROS_INFO_STREAM("2022_shooter_server : " << x)
#define SHOOTER_INFO_THROTTLE(d,x) ROS_INFO_STREAM_THROTTLE(d, "2022_shooter_server : " << x)
#define SHOOTER_ERROR(x) ROS_ERROR_STREAM("2022_shooter_server : " << x)

class ShooterAction2022
{
protected:

  ros::NodeHandle nh_;
  ros::NodeHandle nh_params_;
  actionlib::SimpleActionServer<behavior_actions::Shooter2022Action> as_;
  std::string action_name_;
  // create message that is used to publish feedback
  behavior_actions::Shooter2022Feedback feedback_;

  DynamicReconfigureWrapper<behaviors::Shooter2022Config> dynamic_reconfigure_server_;
  behaviors::Shooter2022Config config_;

  ros::Publisher shooter_command_pub_;

  ros::Subscriber talon_states_sub_;

  double current_speed_;

  uint8_t last_mode_;

public:

  ShooterAction2022(std::string name) :
    as_(nh_, name, boost::bind(&ShooterAction2022::executeCB, this, _1), false),
    action_name_(name)
  {
    nh_params_ = ros::NodeHandle(nh_, "shooter_server_2022");
    if (!nh_params_.getParam("high_goal_speed", config_.high_goal_speed))
  	{
  		SHOOTER_ERROR("Couldn't find param high_goal_speed. Aborting initialization.");
      exit(EXIT_FAILURE);
  	}
    if (!nh_params_.getParam("low_goal_speed", config_.low_goal_speed))
  	{
  		SHOOTER_ERROR("Couldn't find param low_goal_speed. Aborting initialization.");
      exit(EXIT_FAILURE);
  	}
    if (!nh_params_.getParam("eject_speed", config_.eject_speed))
  	{
  		SHOOTER_ERROR("Couldn't find param eject_speed. Aborting initialization.");
      exit(EXIT_FAILURE);
  	}
    if (!nh_params_.getParam("error_margin", config_.error_margin))
  	{
  		SHOOTER_ERROR("Couldn't find param error_margin. Aborting initialization.");
      exit(EXIT_FAILURE);
  	}
    shooter_command_pub_ = nh_.advertise<std_msgs::Float64>("/frcrobot_jetson/shooter_controller/command", 2);
    talon_states_sub_ = nh_.subscribe("/frcrobot_jetson/talon_states", 1, &ShooterAction2022::talonStateCallback, this);
    as_.start();

    dynamic_reconfigure_server_.init(nh_params_, config_);
  }

  ~ShooterAction2022(void)
  {
  }

  void executeCB(const behavior_actions::Shooter2022GoalConstPtr &goal)
  {
    SHOOTER_INFO("Shooter action called with mode " << std::to_string(goal->mode));
    ros::Rate r(100);
    while (ros::ok()) {
      ros::spinOnce();
      std_msgs::Float64 msg;
      if (as_.isPreemptRequested() || !ros::ok())
      {
        msg.data = 0;
        shooter_command_pub_.publish(msg);
        ROS_INFO("%s: Preempted", action_name_.c_str());
        // set the action state to preempted
        as_.setPreempted();
        break;
      }
      switch (goal->mode) {
        case behavior_actions::Shooter2022Goal::HIGH_GOAL:
          feedback_.close_enough = fabs(config_.high_goal_speed - current_speed_) < config_.error_margin;
          msg.data = config_.high_goal_speed;
          shooter_command_pub_.publish(msg);
          break;
        case behavior_actions::Shooter2022Goal::LOW_GOAL:
          feedback_.close_enough = fabs(config_.low_goal_speed - current_speed_) < config_.error_margin;
          msg.data = config_.low_goal_speed;
          shooter_command_pub_.publish(msg);
          break;
        case behavior_actions::Shooter2022Goal::EJECT:
          feedback_.close_enough = fabs(config_.eject_speed - current_speed_) < config_.error_margin;
          msg.data = config_.eject_speed;
          shooter_command_pub_.publish(msg);
          break;
      }
      as_.publishFeedback(feedback_);
      r.sleep();
    }
  }

  void talonStateCallback(const talon_state_msgs::TalonState talon_state)
  {
    bool foundTalon = false;
    for (size_t i = 0; i < talon_state.name.size(); i++) {
      if (talon_state.name[i] == "shooter_leader") {
        foundTalon = true;
        current_speed_ = talon_state.speed[i];
      }
    }
    if (!foundTalon) {
      SHOOTER_ERROR("Couldn't find talon in /frcrobot_jetson/talon_states. :(");
      return;
    }
  }

};


int main(int argc, char** argv)
{
  ros::init(argc, argv, "shooter_server_2022");

  ShooterAction2022 shooter("shooter_server_2022");
  ros::spin();

  return 0;
}
