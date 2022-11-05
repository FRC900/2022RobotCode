#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <behavior_actions/Shooter2022Action.h>
#include <ddynamic_reconfigure/ddynamic_reconfigure.h>
#include <std_msgs/Float64.h>
#include "talon_state_msgs/TalonState.h"

#define SHOOTER_INFO(x) ROS_INFO_STREAM("2022_shooter_server : " << x)
#define SHOOTER_INFO_THROTTLE(d,x) ROS_INFO_STREAM_THROTTLE((d), "2022_shooter_server : " << x)
#define SHOOTER_ERROR(x) ROS_ERROR_STREAM("2022_shooter_server : " << x)
#define SHOOTER_ERROR_THROTTLE(d,x) ROS_ERROR_STREAM_THROTTLE((d), "2022_shooter_server : " << x)

#define DOWNTOWN_ACTIVE    1.0
#define DOWNTOWN_INACTIVE  0.0

class ShooterAction2022
{
protected:

  ros::NodeHandle nh_;
  ros::NodeHandle nh_params_;
  actionlib::SimpleActionServer<behavior_actions::Shooter2022Action> as_;
  std::string action_name_;
  // create message that is used to publish feedback
  behavior_actions::Shooter2022Feedback feedback_;

  double wheel_speed_;
  double hood_wheel_speed_;
  double eject_speed_;
  double error_margin_;
  double downtown_high_goal_speed_;
  bool hood_state_; 
  ddynamic_reconfigure::DDynamicReconfigure ddr_;

  ros::Publisher shooter_command_pub_;
  ros::Publisher downtown_command_pub_;

  ros::Subscriber talon_states_sub_;
  ros::Subscriber speed_offset_sub_;

  double current_speed_;
  double speed_offset_ = 0;
  double hood_speed_offset_ = 0;

  uint64_t close_enough_counter_;
  int shooter_wheel_checks_ = 20;

public:

  ShooterAction2022(std::string name) :
    as_(nh_, name, boost::bind(&ShooterAction2022::executeCB, this, _1), false),
    nh_params_(nh_, "shooter_server_2022"),
    action_name_(name),
    ddr_(nh_params_)
  {
    if (!nh_params_.getParam("high_goal_speed", high_goal_speed_))
    {
      high_goal_speed_ = 348; // was 325 at start of UNCA, 343 at UNCP
      ROS_ERROR_STREAM("2022_shooter_server : could not find high_goal_speed, defaulting to " << high_goal_speed_);
      return;
    }
    ddr_.registerVariable<double>("high_goal_speed", &high_goal_speed_, "High Goal Shooting Speed", 0, 500);
    if (!nh_params_.getParam("downtown_high_goal_speed", downtown_high_goal_speed_))
    {
      downtown_high_goal_speed_ = 373;
      ROS_ERROR_STREAM("2022_shooter_server : could not find downtown_high_goal_speed, defaulting to " << downtown_high_goal_speed_);
      return;
    }
    ddr_.registerVariable<double>("downtown_high_goal_speed", &downtown_high_goal_speed_, "Downtown High Goal Shooting Speed", 0, 500);
    if (!nh_params_.getParam("low_goal_speed", low_goal_speed_))
    {
      low_goal_speed_ = 200;
      ROS_ERROR_STREAM("2022_shooter_server : could not find low_goal_speed, defaulting to " << low_goal_speed_);
      return;
    } // 180 or 200
    ddr_.registerVariable<double>("low_goal_speed", &low_goal_speed_, "Low Goal Shooting Speed", 0, 500);
    if (!nh_params_.getParam("eject_speed", eject_speed_))
    {
      eject_speed_ = 120;
      ROS_ERROR_STREAM("2022_shooter_server : could not find eject_speed, defaulting to " << eject_speed_);
      return;
    }
    ddr_.registerVariable<double>("eject_speed", &eject_speed_, "Eject Cargo - Shooting Speed", 0, 500);
    if (!nh_params_.getParam("error_margin", error_margin_))
    {
      error_margin_ = 2;
      ROS_ERROR_STREAM("2022_shooter_server : could not find error_margin, defaulting to " << error_margin_);
      return;
    }
    ddr_.registerVariable<double>("error_margin", &error_margin_, "Shooter margin of error", 0, 50);
    if (!nh_params_.getParam("shooter_wheel_checks", shooter_wheel_checks_))
    {
      shooter_wheel_checks_ = 8;
      ROS_ERROR_STREAM("2022_shooter_server : could not find shooter_wheel_checks, defaulting to " << shooter_wheel_checks_);
      return;
    }
    ddr_.registerVariable<int>("shooter_wheel_checks", &shooter_wheel_checks_, "Number of times to check shooter wheel speed", 0, 50);
    // change close_enough to operate with multiple samples
    // error_margin_ = 5;
    // ddr_.registerVariable<double>("samples_for_close_enough", &error_margin_, "Shooter margin of error", 0, 50);
    shooter_command_pub_ = nh_.advertise<std_msgs::Float64>("/frcrobot_jetson/shooter_controller/command", 2);
    hood_shooter_command_pub_ nh_.advertise<std_msgs::Float64>("/frcrobot_jetson/hood_shooter_controller/command", 2);
    downtown_command_pub_ = nh_.advertise<std_msgs::Float64>("/frcrobot_jetson/downtown_solenoid_controller/command", 2);
    talon_states_sub_ = nh_.subscribe("/frcrobot_jetson/talon_states", 1, &ShooterAction2022::talonStateCallback, this);
    speed_offset_sub_ = nh_.subscribe("/shooter_speed_offset", 1, &ShooterAction2022::speedOffsetCallback, this);
    speed_offset_sub_ = nh_.subscribe("/hood_shooter_speed_offset", 1, &ShooterAction2022::hoodSpeedOffsetCallback, this);
    as_.start();

    ddr_.publishServicesTopics();
  }

  ~ShooterAction2022(void)
  {
  }

  void executeCB(const behavior_actions::Shooter2022GoalConstPtr &goal)
  {
    SHOOTER_INFO("Shooter action called with mode " << goal->mode);
    std_msgs::Float64 msg;
    std_msgs::Float64 hood_msg;
    std_msgs::Float64 downtown_msg;
    downtown_msg.data = DOWNTOWN_INACTIVE;
    double shooter_speed;
    double hood_shooter_speed;
    switch (goal->mode) {
      case behavior_actions::Shooter2022Goal::HIGH_GOAL:
        shooter_speed = msg.wheel_speed;
        hood_shooter_speed = msg.hood_wheel_speed;
        if (msg.hood_position) {
          downtown_msg.data = DOWNTOWN_ACTIVE;
        } 
        break;
      case behavior_actions::Shooter2022Goal::EJECT:
        shooter_speed = eject_speed_;
        break;
      default:
        SHOOTER_ERROR("invalid goal mode (" << goal->mode << ")");
        msg.data = 0;
        hood_msg.data = 0;
        shooter_command_pub_.publish(msg);
        hood_shooter_command_pub_.publish(hood_msg);
        feedback_.close_enough = false;
        as_.publishFeedback(feedback_);
        // set the action state to preempted
        as_.setPreempted();
        return;
    }
    downtown_command_pub_.publish(downtown_msg);
    shooter_speed += speed_offset_;
    hood_shooter_speed += hood_speed_offset_; 
    SHOOTER_INFO("Shooter speed setpoint = " << shooter_speed);
    SHOOTER_INFO("Hood shooter speed setpoint = " << hood_shooter_speed);
    int good_samples = 0;
    ros::Rate r(100);
    while (ros::ok()) {
      ros::spinOnce();
      if (as_.isPreemptRequested() || !ros::ok())
      {
        msg.data = 0;
        hood_msg.data = 0;
        hood_shooter_command_pub_.publish(hood_msg);
        shooter_command_pub_.publish(msg);
        downtown_msg.data = DOWNTOWN_INACTIVE;
        downtown_command_pub_.publish(downtown_msg);
        feedback_.close_enough = false;
        as_.publishFeedback(feedback_);
        SHOOTER_INFO(" : Preempted");
        // set the action state to preempted
        as_.setPreempted();
        break;
      }
      msg.data = shooter_speed;
      hood_msg.data = hood_shooter_speed;
      shooter_command_pub_.publish(msg);
      hood_shooter_command_pub_.publish(hood_msg);
      /* Measure if the sample is close enough to the requested shooter wheel speed */
      if(fabs(shooter_speed - fabs(current_speed_)) < error_margin_) {
        good_samples++;
      } else {
        good_samples = 0;
      }
      feedback_.close_enough = good_samples > shooter_wheel_checks_;
      as_.publishFeedback(feedback_);
      r.sleep();
    }
  }

  void talonStateCallback(const talon_state_msgs::TalonState talon_state)
  {
    for (size_t i = 0; i < talon_state.name.size(); i++) {
      if (talon_state.name[i] == "shooter_leader") {
        current_speed_ = talon_state.speed[i];
        return;
      }
    }
    SHOOTER_ERROR_THROTTLE(0.5, "Couldn't find shooter_leader talon in /frcrobot_jetson/talon_states. :(");
  }

  void speedOffsetCallback(const std_msgs::Float64 speed_offset_msg){
    speed_offset_ = speed_offset_msg.data;
  }
  void hoodSpeedOffsetCallback(const std_msgs::Float64 hood_speed_offset_msg) {
    hood_speed_offset_ = hood_speed_offset_msg.data
  }

};


int main(int argc, char** argv)
{
  ros::init(argc, argv, "shooter_server_2022");

  ShooterAction2022 shooter("shooter_server_2022");
  ros::spin();

  return 0;
}
