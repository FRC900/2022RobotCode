#include <ros/ros.h>
#include <apriltag_ros/AprilTagDetectionArray.h>
#include "field_obj/Detection.h"
#include <tf2_ros/static_transform_broadcaster.h>
#include <geometry_msgs/TransformStamped.h>

class Apriltag2PF
{
	public:
		Apriltag2PF(ros::NodeHandle &n)
			: sub_(n.subscribe("/tag_detections", 2, &Apriltag2PF::cmdVelCallback, this))
			, pub_(n.advertise<field_obj::Detection>("goal_detect_msg", 2))

		{
		}

		// Translate ar_track_alvar marker msg into our custom goal detection message
		void cmdVelCallback(const apriltag_ros::AprilTagDetectionArray &msgIn)
		{   

            //ROS_INFO_STREAM("CALLBACK!!!!!!!");
            field_obj::Detection msgOut;
            msgOut.header = msgIn.header;
            for (const auto &m : msgIn.detections)
			{
                field_obj::Object object;
                // m.id is vector, could be more than 1 element when using tag bundles
                object.id = m.id[0];
                object.location = m.pose.pose.pose.position;
                object.angle = atan2(object.location.y, object.location.x) * 180. / M_PI;
                
                // need someone who knows how to turn a covarience matrix into confidence
                // http://docs.ros.org/en/noetic/api/geometry_msgs/html/msg/PoseWithCovariance.html
                object.confidence = 1; 
                msgOut.objects.push_back(object);

                
			}
            pub_.publish(msgOut);
            
		}

	private:
		ros::Subscriber sub_;
		ros::Publisher  pub_;
};

int main(int argc, char** argv)
{
    ros::init(argc, argv, "apriltag_to_PF");

	ros::NodeHandle n;
	Apriltag2PF apriltagtoPF(n);
    /*
    static tf2_ros::StaticTransformBroadcaster static_broadcaster;
    geometry_msgs::TransformStamped static_transformStamped;

    static_transformStamped.header.stamp = ros::Time::now();
    static_transformStamped.header.frame_id = "usb_cam";
    static_transformStamped.child_frame_id = "map";
    static_transformStamped.transform.translation.x = 0;
    static_transformStamped.transform.translation.y = 0;
    static_transformStamped.transform.translation.z = 0;

    static_transformStamped.transform.rotation.x = 0;
    static_transformStamped.transform.rotation.y = 0;
    static_transformStamped.transform.rotation.z = 0;
    static_transformStamped.transform.rotation.w = 1;
    static_broadcaster.sendTransform(static_transformStamped);
	*/
    ros::spin();
	return 0;
}
