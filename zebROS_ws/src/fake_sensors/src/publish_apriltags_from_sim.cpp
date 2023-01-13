// This node republishes fiducial markers corresponding to apriltags as the same
// transforms that the apriltag detector sends
// (we aren't using a camera in sim so we can't publish an AprilTagDetectionArray)
// ... why can't we again?
#include <random>
#include <ros/ros.h>
#include <marker_msgs/MarkerDetection.h>

#include <geometry_msgs/TransformStamped.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_ros/transform_listener.h>
#include <apriltag_ros/AprilTagDetectionArray.h>
#include <apriltag_ros/AprilTagDetection.h>
#include <std_msgs/Header.h>

// topic: cuda_tag_detections
/*
apriltag_ros/AprilTagDetection[] detections
  int32[] id
  float64[] size
  geometry_msgs/PoseWithCovarianceStamped pose
    std_msgs/Header header
      uint32 seq
      time stamp
      string frame_id
    geometry_msgs/PoseWithCovariance pose
      geometry_msgs/Pose pose
        geometry_msgs/Point position
          float64 x
          float64 y
          float64 z
        geometry_msgs/Quaternion orientation
          float64 x
          float64 y
          float64 z
          float64 w
      float64[36] covariance
*/

apriltag_ros::AprilTagDetection createAprilTag(uint32_t id, double x, double y, double z, const std_msgs::Header &header) {
	apriltag_ros::AprilTagDetection msg;
	msg.id = {id};
	msg.pose.pose.pose.position.x = x;
	msg.pose.pose.pose.position.y = y;
	msg.pose.pose.pose.position.z = z;
	msg.pose.header = header;
	return msg;
}

#include <map>
#include <regex>
#include <sstream>
#include <string>
#include <fstream>

// see behaviors/config/2022_rumble_apriltag_locations.yaml for Z values
// maybe create dictionary (tag ID (int) : Z (double)) instead?

class Tag {
public:
	double x;
	double y;
	double z;
	bool inHub;
	Tag(double _x = 0, double _y = 0, double _z = 0, bool _inHub = false) {
		this->x = _x;
		this->y = _y;
		this->z = _z;
		this->inHub = _inHub;
	}
};

class SimAprilTagPub
{
	public:
		SimAprilTagPub(ros::NodeHandle &n)
			: sub_(n.subscribe("/base_marker_detection", 2, &SimAprilTagPub::msgCallback, this)),
			  pub_(n.advertise<apriltag_ros::AprilTagDetectionArray>("/cuda_tag_detections", 1000))

		{
			ROS_INFO_STREAM("Hi");
			XmlRpc::XmlRpcValue xmlTags;
			n.getParam("tags", xmlTags);
			ROS_INFO_STREAM(xmlTags << std::endl);
			for (auto pair : xmlTags) {
				ROS_INFO_STREAM(pair.first << std::endl);
				ROS_INFO_STREAM(pair.second);
				tags_[std::stoi(pair.first)] = Tag(static_cast<double>(pair.second[0]), static_cast<double>(pair.second[1]), static_cast<double>(pair.second[2]), static_cast<bool>(pair.second[3]));
			}
		}

		// Translate stage base_marker_detection into our custom goal detection message
		void msgCallback(const marker_msgs::MarkerDetectionConstPtr &msgIn)
		{
			static tf2_ros::TransformBroadcaster br;
			static tf2_ros::Buffer tfBuffer;
  			static tf2_ros::TransformListener tfListener(tfBuffer);
			std::vector<apriltag_ros::AprilTagDetection> detections;
			for(size_t i = 0; i < msgIn->markers.size(); i++)
			{
				if (msgIn->markers[i].ids[0] == -1) // stage publishes odom as marker -1
					continue;                       // ignore it here
				if (msgIn->markers[i].ids[0] < 100)
					continue; // added 100 to apriltag ids

				geometry_msgs::TransformStamped transformStamped;

				const auto &p = msgIn->markers[i].pose.position;

				transformStamped.header.stamp = msgIn->header.stamp;
				transformStamped.header.frame_id = msgIn->header.frame_id;
				transformStamped.child_frame_id = "36h11" + std::to_string(msgIn->markers[i].ids[0]-100);

				transformStamped.transform.translation.x = p.x;
				transformStamped.transform.translation.y = p.y;
				transformStamped.transform.translation.z = tags_[msgIn->markers[i].ids[0]-100].z;

				// Can't detect rotation yet, so publish 0 instead
				tf2::Quaternion q;
				q.setRPY(0, 0, 0);

				transformStamped.transform.rotation.x = q.x();
				transformStamped.transform.rotation.y = q.y();
				transformStamped.transform.rotation.z = q.z();
				transformStamped.transform.rotation.w = q.w();

				br.sendTransform(transformStamped);

				detections.push_back(createAprilTag(msgIn->markers[i].ids[0]-100, p.x, p.y, tags_[msgIn->markers[i].ids[0]-100].z, msgIn->header));

			}

			apriltag_ros::AprilTagDetectionArray msg;
			msg.detections = detections;
			msg.header = msgIn->header;

			pub_.publish(msg);
			// pub_.publish(msgOut);
			// pubd_.publish(msgOut);
		}

	private:
		ros::Subscriber            sub_;
		std::map<int, Tag>         tags_; // tag id to tag info
		ros::Publisher             pub_;
};

int main(int argc, char** argv)
{
  ros::init(argc, argv, "sim_apriltag_publisher");

	ros::NodeHandle nh;
	SimAprilTagPub simAprilTagPub(nh);

	ros::spin();
	return 0;
}
