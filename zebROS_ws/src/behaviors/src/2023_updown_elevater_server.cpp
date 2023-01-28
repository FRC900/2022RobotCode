#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <behavior_actions/Elevater2023Action.h>
#include <ddynamic_reconfigure/ddynamic_reconfigure.h>
#include <std_msgs/Float64.h>


class ElevaterAction2023
{
protected:

  ros::NodeHandle nh_;
  ros::NodeHandle nh_params_;
  actionlib::SimpleActionServer<behavior_actions::Elevater2023Action> as_;
  std::string action_name_;
  // create message that is used to publish feedback
  behavior_actions::Elevater2023Feedback feedback_;

  ddynamic_reconfigure::DDynamicReconfigure ddr_;
  //_ = nh_.serviceClient<std_srvs::Empty>;


  ros::Subscriber _elevator_offset_sub;
  double _position_offset = 0;

public:

  ElevaterAction2023(std::string name) :
    as_(nh_, name, boost::bind(&ElevaterAction2023::executeCB, this, _1), false),
    nh_params_(nh_, "elevater_server_2023"),
    action_name_(name),
    ddr_(nh_params_)
  {
    /*
    if (!nh_params_.getParam("absolute_wheel_speed", absolute_wheel_speed_))
    {
      absolute_wheel_speed_ = 0; // was 325 at start of UNCA, 343 at UNCP
      ROS_ERROR_STREAM("2022_shooter_server : could not find absolute_wheel_speed, defaulting to " << absolute_wheel_speed_);
      return;
    }
    ddr_.registerVariable<double>("absolute_wheel_speed", &absolute_wheel_speed_, "Speed of lower wheel (formerly high_goal_speed)", 0, 500);

    if (!nh_params_.getParam("absolute_hood_wheel_speed", absolute_hood_wheel_speed_))
    {
      absolute_hood_wheel_speed_ = 0;
      ROS_ERROR_STREAM("2022_shooter_server : could not find absolute_hood_wheel_speed_, defaulting to " << absolute_hood_wheel_speed_);
      return;
    } // 180 or 200

    ddr_.registerVariable<bool>("hood_state_override_", &hood_state_override_, "Hood state, must set absolute shooter speeds for this to be used", 0, 1);
    // change close_enough to operate with multiple samples
    // error_margin_ = 5;
    // ddr_.registerVariable<double>("samples_for_close_enough", &error_margin_, "Shooter margin of error", 0, 50);

    ddr_.publishServicesTopics();

    _elevator_offset_sub = nh_.subscribe("/elevator_offset", 1, &ElevaterAction2023::speedOffsetCallback, this);
     */
    as_.start();
  }

  ~ElevaterAction2023(void)
  {
  }

  void executeCB(const behavior_actions::Elevater2023GoalConstPtr &goal)
  {
    ROS_WARN_STREAM("Callback for updown elevater!");
    /* 
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
      if (absolute_wheel_speed_ && absolute_hood_wheel_speed_) {
        msg.data = absolute_wheel_speed_;
        hood_msg.data = absolute_hood_wheel_speed_;
        ROS_ERROR_STREAM_THROTTLE(1, "Using absolute shooter speeds, THIS SHOULD ONLY BE USED DURING TESTING");
      }
      else {
        msg.data = shooter_speed;
        hood_msg.data = hood_shooter_speed;
      }
      shooter_command_pub_.publish(msg);
      hood_shooter_command_pub_.publish(hood_msg);

      feedback_.close_enough = good_samples > shooter_wheel_checks_;
      as_.publishFeedback(feedback_);
      r.sleep();
      */
  
  }

  void heightOffsetCallback(const std_msgs::Float64 speed_offset_msg){
    _position_offset = speed_offset_msg.data;
  }

};

int main(int argc, char** argv)
{
  ros::init(argc, argv, "elevater_server_2023");
  ElevaterAction2023 elevater("elevater_server_2023");
  ros::spin();

  return 0;
}
