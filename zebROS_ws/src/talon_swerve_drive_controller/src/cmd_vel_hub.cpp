#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

#include <vector>

geometry_msgs::Twist cmd_vel;

ros::Publisher cmd_vel_pub;

ros::Time last_pub_time;

std::vector<std::string> subscriber_topics;

struct active_topics {
	std::string x_linear;
	std::string y_linear;
	std::string z_angular;
};

struct default_topics {
	std::string x_linear;
	std::string y_linear;
	std::string z_angular;
};

void assignCmdVel(const ros::MessageEvent<geometry_msgs::Twist const>& event)
{
	//Identifies which topic the incoming message was recieved from
	const ros::M_string &header = event.getConnectionHeader();
	const std::string topic = header.at("topic");

	geometry_msgs::Twist cmd_vel_in = *(event.getMessage());

	bool match_found = false;

	//Check for matching topics and assign values then publish if match is found
	if(topic == active_topics.x_linear)
	{
		cmd_vel.linear.x = cmd_vel_in.linear.x;
		match_found = true;
	}
	if(topic == active_topics.y_linear)
	{
		cmd_vel.linear.y = cmd_vel_in.linear.y;
		match_found = true;
	}
	if(topic == active_topics.z_angular)
	{
		cmd_vel.angular.z = cmd_vel_in.angular.z;
		match_found = true;
	}

	if(((header.stamp - last_pub_time).toSec() > pub_delay) && match_found)
	{
		cmd_vel_pub.publish(cmd_vel);
		last_pub_time = ros::Time::now();
	}
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "cmd_vel_hub");
	ros::NodeHandle n;
	ros::NodeHandle n_params(n, "cmd_vel_topics");

	if(!n_params.getParam("default_x_linear", default_topics.x_linear))
		ROS_ERROR("Could not read default_x_linear in cmd_vel_hub");
	if(!n_params.getParam("default_y_linear", default_topics.y_linear))
		ROS_ERROR("Could not read default_y_linear in cmd_vel_hub");
	if(!n_params.getParam("default_z_angular", default_topics.z_angular))
		ROS_ERROR("Could not read default_z_angular in cmd_vel_hub");
	if(!n_params.getParam("subscriber_topics", subscriber_topics))
		ROS_ERROR("Could not read subscriber_topics in cmd_vel_hub");

	//Initial active_topics are default_topics
	active_topics.x_linear = default_topics.x_linear;
	active_topics.y_linear = default_topics.y_linear;
	active_topics.z_angular = default_topics.z_angular;

	//Subscribe to each topic in the params
	std::vector<ros::Subscriber> subscribers;
	for(size_t i = 0; i < subscriber_topics.size(); i++)
	{
		subscribers.push_back(n.subscribe(subscriber_topics[i], 1, &assignCmdVel));
	}

	cmd_vel_pub = n.advertise<geometry_msgs::Twist>("cmd_vel", 1, true);

	//Initial values for cmd_vel
	cmd_vel.linear.x = 0;
	cmd_vel.linear.y = 0;
	cmd_vel.linear.z = 0;
	cmd_vel.angular.x = 0;
	cmd_vel.angular.y = 0;
	cmd_vel.angular.z = 0;

	last_pub_time = ros::Time::now();

	ROS_WARN("cmd_vel_hub init");

	ros::spin();
	return 0
}
