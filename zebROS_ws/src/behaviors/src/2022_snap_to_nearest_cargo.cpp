#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <behavior_actions/SnapToCargo2022Action.h>
#include <field_obj/Detection.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Float64.h>

class SnapToCargo2022Action
{
protected:

  ros::NodeHandle nh_;
  actionlib::SimpleActionServer<behavior_actions::SnapToCargo2022Action> as_;
  std::string action_name_;
  ros::Publisher orient_strafing_enable_pub_;
  ros::Publisher orient_strafing_setpoint_pub_;
  ros::Publisher orient_strafing_state_pub_;
  ros::Subscriber object_detection_sub_;
  double nearest_cargo_angle_;
  double imu_angle_;
  bool find_opponent_cargo_;

public:

  SnapToCargo2022Action(std::string name) :
    as_(nh_, name, boost::bind(&SnapToCargo2022Action::executeCB, this, _1), false),
    action_name_(name)
  {
    as_.start();
    orient_strafing_enable_pub_ = nh_.advertise<std_msgs::Bool>("orient_strafing/pid_enable", 1);
  	orient_strafing_setpoint_pub_ = nh_.advertise<std_msgs::Float64>("orient_strafing/setpoint", 1);
  	orient_strafing_state_pub_ = nh_.advertise<std_msgs::Float64>("orient_strafing/state", 1);
    object_detection_sub_ = nh_.subscribe("/tf_object_detection/object_detection_world_filtered", 1, &SnapToCargo2022Action::objectDetectionCallback, this);
  }

  void imuAngleCallback(const std_msgs::Float64 &msg) {
    imu_angle_ = msg.data;
  }

  void objectDetectionCallback(const field_obj::Detection &msg) {
    field_obj::Object closest_cargo;
    double shortest_distance = std::numeric_limits<double>::max();
    for (auto obj : msg.objects) {
      if (obj.id == (find_opponent_cargo_ ? "opponent_cargo" : "friendly_cargo")) {
        double dist = hypot(obj.location.x, obj.location.y);
        if (dist < shortest_distance) {
          closest_cargo = obj;
          shortest_distance = dist;
        }
      }
    }
    nearest_cargo_angle_ = closest_cargo.angle;
  }

  ~SnapToCargo2022Action(void)
  {
  }

  void executeCB(const behavior_actions::SnapToCargo2022GoalConstPtr &goal)
  {
    find_opponent_cargo_ = goal->find_opponent_cargo;
    ROS_INFO_STREAM("2022_snap_to_cargo : snapping to cargo");
    std_msgs::Bool enable_align_msg;
    enable_align_msg.data = true;
    orient_strafing_enable_pub_.publish(enable_align_msg);
    std_msgs::Float64 orient_strafing_setpoint_msg;
    orient_strafing_setpoint_msg.data = 0.0;
    orient_strafing_setpoint_pub_.publish(orient_strafing_setpoint_msg);
    std_msgs::Float64 orient_strafing_state_msg;
    ros::Rate r(100);
    while (!as_.isPreemptRequested() && ros::ok()) {
      ROS_INFO_STREAM_THROTTLE(0.25, "2022_snap_to_cargo : currently snapped to the nearest cargo (angle: " << orient_strafing_state_msg.data << " rad)");
      orient_strafing_state_msg.data = nearest_cargo_angle_ * (M_PI/180.0);
      orient_strafing_state_pub_.publish(orient_strafing_state_msg);
      r.sleep();
      ros::spinOnce();
    }
    ROS_INFO_STREAM("2022_snap_to_cargo : motion freed");
    enable_align_msg.data = false;
    orient_strafing_enable_pub_.publish(enable_align_msg);
    as_.setSucceeded();
  }


};


int main(int argc, char** argv)
{
  ros::init(argc, argv, "snap_to_cargo_2022");

  SnapToCargo2022Action action("snap_to_cargo_2022");
  ros::spin();

  return 0;
}
