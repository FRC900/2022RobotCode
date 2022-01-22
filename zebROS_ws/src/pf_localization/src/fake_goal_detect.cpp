// Simple node to generate a fake goal detection message in simulation
// Reads base_marker_detection message from stage ros, converts to our custom
// goal detect message. Adds noise to x and y positions of the converted detections
#include <random>
#include <ros/ros.h>
#include <marker_msgs/MarkerDetection.h>
#include "field_obj/Detection.h"

#include <geometry_msgs/TransformStamped.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/transform_broadcaster.h>

class FakeGoalDetection
{
	public:
		FakeGoalDetection(ros::NodeHandle &n, ros::NodeHandle &nh_params)
			: rd_{}
			, gen_{rd_()}
			, covariance_(0.0004)
			, sub_(n.subscribe("base_marker_detection", 2, &FakeGoalDetection::cmdVelCallback, this))
			, pub_(n.advertise<field_obj::Detection>("goal_detect_msg", 2))
			, pubd_(n.advertise<field_obj::Detection>("/tf_object_detection/object_detection_world", 2))
			, nh_params_(nh_params)

		{
			n.param("covariance", covariance_, covariance_);
			normalDistribution_ = std::normal_distribution<double>{0, sqrt(covariance_)};
		}

		// Translate stage base_marker_detection into our custom goal detection message
		void cmdVelCallback(const marker_msgs::MarkerDetectionConstPtr &msgIn)
		{
			field_obj::Detection msgOut;
			msgOut.header = msgIn->header;
			for(size_t i = 0; i < msgIn->markers.size(); i++)
			{
				if (msgIn->markers[i].ids[0] == -1) // stage publishes odom as marker -1
					continue;                       // ignore it here
				if (nh_params_.hasParam("id"+std::to_string(msgIn->markers[i].ids[0]))) {
					// that's in the config file!
					std::string id;
					nh_params_.getParam("id"+std::to_string(msgIn->markers[i].ids[0]), id); // get its id (specified in the config file)

					field_obj::Object obj;

					const auto &p = msgIn->markers[i].pose.position;
					obj.location.x = p.x;
					obj.location.y = p.y;
					obj.location.z = p.z;
					obj.angle = atan2(obj.location.y, obj.location.x) * 180. / M_PI;
					obj.confidence = msgIn->markers[i].ids_confidence[0];
					obj.id = id;
					msgOut.objects.push_back(obj);
				} else {
					field_obj::Object dummy;

					const auto &p = msgIn->markers[i].pose.position;
					dummy.location.x = p.x + normalDistribution_(gen_);
					dummy.location.y = p.y + normalDistribution_(gen_);
					dummy.location.z = p.z + normalDistribution_(gen_);
					dummy.angle = atan2(dummy.location.y, dummy.location.x) * 180. / M_PI;
					dummy.confidence = msgIn->markers[i].ids_confidence[0];
					dummy.id = std::to_string(msgIn->markers[i].ids[0]);
					msgOut.objects.push_back(dummy);
				}
			}
			pub_.publish(msgOut);
			pubd_.publish(msgOut);
			if (msgOut.objects.size() > 0)
			{
				//Transform between goal frame and odometry/map.
				static tf2_ros::TransformBroadcaster br;
				for(size_t i = 0; i < msgOut.objects.size(); i++)
				{
					if (msgOut.objects[i].id == "power_cell")
					{
						geometry_msgs::TransformStamped transformStamped;

						transformStamped.header.stamp = msgOut.header.stamp;
						transformStamped.header.frame_id = "base_fiducial_link";
						std::stringstream child_frame;
						child_frame << "power_cell_";
						child_frame << i;
						transformStamped.child_frame_id = child_frame.str();

						transformStamped.transform.translation.x = msgOut.objects[i].location.x;
						transformStamped.transform.translation.y = msgOut.objects[i].location.y;
						transformStamped.transform.translation.z = msgOut.objects[i].location.z;

						// Can't detect rotation yet, so publish 0 instead
						tf2::Quaternion q;
						q.setRPY(0, 0, 0);

						transformStamped.transform.rotation.x = q.x();
						transformStamped.transform.rotation.y = q.y();
						transformStamped.transform.rotation.z = q.z();
						transformStamped.transform.rotation.w = q.w();

						br.sendTransform(transformStamped);
					}
				}

			}
		}

	private:
		std::random_device rd_;
		std::mt19937 gen_;
		std::normal_distribution<double> normalDistribution_;
		double covariance_;
		ros::Subscriber       sub_;
		ros::Publisher        pub_;
		ros::Publisher       pubd_; // d for detection
		ros::NodeHandle nh_params_;
};

int main(int argc, char** argv)
{
  ros::init(argc, argv, "fake_goal_detect");

	ros::NodeHandle nh;
	ros::NodeHandle nh_params(nh, "fake_goal_detect_params"); // node handle for a lower-down namespace
	FakeGoalDetection fakeGoalDetection(nh, nh_params);

	ros::spin();
	return 0;
}
