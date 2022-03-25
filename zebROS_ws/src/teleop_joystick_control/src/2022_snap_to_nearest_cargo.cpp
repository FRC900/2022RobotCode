#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <behavior_actions/SnapToCargo2022Action.h>
#include <field_obj/Detection.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Float64.h>

class SnapToCargo2022
{
protected:

  ros::NodeHandle nh_;
  ros::Subscriber object_detection_sub_;
  ros::Publisher nearest_cargo_pub_;
  ros::Publisher nearest_opponent_cargo_pub_;
  double nearest_cargo_angle_;
  double nearest_opponent_cargo_angle_;

public:

  void init() {
    nearest_cargo_pub_ = nh_.advertise<std_msgs::Float64>("nearest_cargo_angle", 1);
    nearest_opponent_cargo_pub_ = nh_.advertise<std_msgs::Float64>("nearest_opponent_cargo_angle", 1);
    object_detection_sub_ = nh_.subscribe("/tf_object_detection/object_detection_world_filtered", 1, &SnapToCargo2022::objectDetectionCallback, this);
    ROS_INFO_STREAM("snap_to_cargo_2022 : initialized");
  }

  void objectDetectionCallback(const field_obj::Detection &msg) {
    field_obj::Object closest_cargo;
    field_obj::Object closest_opponent_cargo;
    double shortest_distance = std::numeric_limits<double>::max();
    double shortest_opponent_distance = std::numeric_limits<double>::max();
    for (auto obj : msg.objects) {
      if (obj.id == "friendly_cargo") {
        double dist = hypot(obj.location.x, obj.location.y);
        if (dist < shortest_distance) {
          closest_cargo = obj;
          shortest_distance = dist;
        }
      } else if (obj.id == "opponent_cargo") {
        double dist = hypot(obj.location.x, obj.location.y);
        if (dist < shortest_opponent_distance) {
          closest_opponent_cargo = obj;
          shortest_opponent_distance = dist;
        }
      }
    }
    std_msgs::Float64 msg1;
    msg1.data = closest_cargo.angle * (M_PI/180.0);
    nearest_cargo_pub_.publish(msg1);
    std_msgs::Float64 msg2;
    msg2.data = closest_opponent_cargo.angle * (M_PI/180.0);
    nearest_opponent_cargo_pub_.publish(msg2);
    ROS_INFO_STREAM_THROTTLE(1, "snap_to_cargo_2022 : publishing");
  }


};


int main(int argc, char** argv)
{
  ros::init(argc, argv, "snap_to_cargo_2022");

  SnapToCargo2022 cargo;
  cargo.init();
  ros::spin();

  return 0;
}
