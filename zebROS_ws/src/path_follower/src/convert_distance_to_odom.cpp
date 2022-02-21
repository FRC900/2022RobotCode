#include <ros/ros.h>
#include <geometry_msgs/PoseStamped.h>
//#include <nav_msgs/Odometry.h>
#include <message_filters/time_synchronizer.h>
#include <message_filters/subscriber.h>
#include <sensor_msgs/Range.h>

void conversionCB(const sensor_msgs::RangeConstPtr& x_distance, const sensor_msgs::RangeConstPtr& y_distance) {
  geometry_msgs::PoseStamped odom;
  odom.pose.position.x = x_distance->range;
  odom.pose.position.y = y_distance->range;
  ros::NodeHandle nh;
  ros::Publisher fake_odom_pub = nh.advertise<geometry_msgs::PoseStamped>("distance_as_odom", 1000);
  fake_odom_pub.publish(odom);
}

int main(int argc, char ** argv)
{
  ros::init(argc, argv, "covert_distance_to_odom");
  ros::NodeHandle nh;

  message_filters::Subscriber<sensor_msgs::Range> x_distance_subscriber(nh, "x_distance_input", 1000);
  message_filters::Subscriber<sensor_msgs::Range> y_distance_subscriber(nh, "y_distance_input", 1000);
  message_filters::TimeSynchronizer<sensor_msgs::Range, sensor_msgs::Range> sync(x_distance_subscriber, y_distance_subscriber, 1000);
  sync.registerCallback(boost::bind(&conversionCB, _1, _2));

  ros::spin();

  return 0;
}
