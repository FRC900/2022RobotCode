#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <behavior_actions/AlignedShooting2022Action.h>
#include <actionlib/client/simple_action_client.h>
#include <behavior_actions/Shooting2022Action.h>

#include <geometry_msgs/TransformStamped.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/transform_broadcaster.h>
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "sensor_msgs/Imu.h"
#include <std_msgs/Bool.h>
#include <std_msgs/Float64.h>

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
}; // copied from apriltag sim publisher

class XYCoord {
public:
  double x;
  double y;
  XYCoord(double _x = 0, double _y = 0) {
    this->x = _x;
    this->y = _y;
  }
};

class AprilTagShootingAction
{
protected:

  ros::NodeHandle nh_;
  actionlib::SimpleActionServer<behavior_actions::AlignedShooting2022Action> as_; // NodeHandle instance must be created before this line. Otherwise strange error occurs.
  std::string action_name_;
  // create messages that are used to published feedback/result
  behavior_actions::AlignedShooting2022Feedback feedback_;
  behavior_actions::AlignedShooting2022Result result_;
  tf2_ros::Buffer tfBuffer;
  tf2_ros::TransformListener tfListener;
  std::map<int, Tag> tags_;
  ros::Subscriber sub_;
  ros::Publisher orient_strafing_setpoint_pub;
  ros::Publisher orient_strafing_enable_pub;
  double hubX;
  double hubY;
  double imuZ;

public:

  AprilTagShootingAction(std::string name) :
    as_(nh_, name, boost::bind(&AprilTagShootingAction::executeCB, this, _1), false),
    action_name_(name),
    tfBuffer(ros::Duration(0.25)),
    tfListener(tfBuffer)
  {
    as_.start();
    XmlRpc::XmlRpcValue xmlTags;
    nh_.getParam("tags", xmlTags);
    ROS_INFO_STREAM(xmlTags << std::endl);
    for (auto pair : xmlTags) {
      ROS_INFO_STREAM(pair.first << std::endl);
      ROS_INFO_STREAM(pair.second);
      tags_[std::stoi(pair.first)] = Tag(static_cast<double>(pair.second[0]), static_cast<double>(pair.second[1]), static_cast<double>(pair.second[2]), static_cast<bool>(pair.second[3]));
    }
    XmlRpc::XmlRpcValue xmlHub;
    nh_.getParam("hub", xmlHub);
    hubX = static_cast<double>(xmlHub[0]);
    hubY = static_cast<double>(xmlHub[1]);
    sub_ = nh_.subscribe<sensor_msgs::Imu>("/imu/imu/data", 1000, boost::bind(&AprilTagShootingAction::imuCallback, this, _1));
    orient_strafing_enable_pub = nh_.advertise<std_msgs::Bool>("/teleop/orient_strafing/pid_enable", 1);
  	orient_strafing_setpoint_pub = nh_.advertise<std_msgs::Float64>("/teleop/orient_strafing/setpoint", 1);
  }

  void imuCallback(const sensor_msgs::Imu::ConstPtr& msg)
  {
    tf2::Quaternion q;
    tf2::fromMsg(msg->orientation, q);
    tf2::Matrix3x3 m(q);
    double roll, pitch, yaw;
    m.getRPY(roll, pitch, yaw);
    imuZ = yaw;
    ROS_INFO_STREAM_THROTTLE(5, "IMU: " << imuZ);
  }

  ~AprilTagShootingAction(void)
  {
  }

  XYCoord hubLocation(int tagId, XYCoord tagLocation) {
    // robot relative
    double deltaY = hubY - tags_[tagId].y;
    double deltaX = hubX - tags_[tagId].x;
    // ROS_INFO_STREAM("Relative to robot, tag " << tagId << " is at (" << tagLocation.x << "," << tagLocation.y << ")");
    // ROS_INFO_STREAM("Relative to tag " << tagId << ", hub is at (" << deltaX << "," << deltaY << ")");
    // if we say the hub is 1m forward but the robot is rotated to the left,
    // we have to rotate that 1m to the right.
    // this code does that using IMU data.
    // so it's very important that the IMU is zeroed correctly.
    // double dist = std::sqrt(deltaY*deltaY + deltaX*deltaX);
    // double arctan = atan2(deltaY, deltaX);
    // if (deltaX < 0) {
    //   arctan = -arctan;
    // }
    // deltaX = cos(arctan-imuZ) * dist;
    // deltaY = sin(arctan-imuZ) * dist;
    double newDeltaX = deltaX * cos(-imuZ) - deltaY * sin(-imuZ);
    double newDeltaY = deltaY * cos(-imuZ) + deltaX * sin(-imuZ);
    // ROS_INFO_STREAM("Relative to tag " << tagId << ", rotated, hub is at (" << newDeltaX << "," << newDeltaY << ")");
    return XYCoord(newDeltaX + tagLocation.x, newDeltaY + tagLocation.y);
  }

  std::pair<double, double> distanceAngle(XYCoord hubPlace) {
    // before you make fun of me for these variable names, i wrote them in a theater (during a play rehearsal) so it fits
    std::pair<double, double> toilAndTrouble; // first = distance, second = angle
    double fireBurn = std::sqrt(hubPlace.x*hubPlace.x + hubPlace.y*hubPlace.y); // distance
    // and
    double cauldronBubble = atan2(hubPlace.y, hubPlace.x); // angle
    toilAndTrouble.first = fireBurn;
    toilAndTrouble.second = cauldronBubble;
    return toilAndTrouble;
  }

  void executeCB(const behavior_actions::AlignedShooting2022GoalConstPtr &goal)
  {
    static tf2_ros::TransformBroadcaster br;

    double averageHubX;
    double averageHubY;
    uint16_t apriltagsDetected; // 65536 apriltags should be enough...

    for (const auto& [tag, _] : tags_) {
      geometry_msgs::TransformStamped transformStamped;
      geometry_msgs::PointStamped pointStamped;
      try{
        transformStamped = tfBuffer.lookupTransform("base_link", "36h11"+std::to_string(tag),
                                 ros::Time(0));
        // ROS_INFO_STREAM("Tag " << tag << " tf: " << transformStamped);
        XYCoord robotRelativeTagCoord = XYCoord(transformStamped.transform.translation.x, transformStamped.transform.translation.y);
        XYCoord hubGuess = hubLocation(tag, robotRelativeTagCoord);
        // pointStamped.header.stamp = transformStamped.header.stamp;
        // pointStamped.header.frame_id = "map";
        // pointStamped.point.x = hubGuess.x;
        // pointStamped.point.y = hubGuess.y;
        // pointStamped.point.z = 5; // idk
        // // TODO make this a pose with orientation
        // // right now distances line up but angles are different depending on apriltag location
        // tfBuffer.transform(pointStamped, pointStamped, "base_link"); // to deal with robot rotation
        // hubGuess.x = pointStamped.point.x;
        // hubGuess.y = pointStamped.point.y;
        averageHubX += hubGuess.x;
        averageHubY += hubGuess.y;
        apriltagsDetected += 1;
        auto distAngle = distanceAngle(hubGuess);
        //ROS_INFO_STREAM("Hub X: " << hubGuess.x << ", Hub Y: " << hubGuess.y);
        //ROS_INFO_STREAM("Tag " << tag << ". Hub Distance: " << distAngle.first << "m. Angle: " << distAngle.second << "rad.");
      }
      catch (tf2::TransformException &ex) {
        // tag not found
        continue;
      }
    }

    averageHubX /= (double)apriltagsDetected;
    averageHubY /= (double)apriltagsDetected;
    XYCoord hubGuess(averageHubX, averageHubY);
    auto distAngle = distanceAngle(hubGuess);
    std_msgs::Bool msgBool;
    msgBool.data = false;
    orient_strafing_enable_pub.publish(msgBool);
    std_msgs::Float64 msgFloat;
    msgFloat.data = distAngle.second + imuZ;
    orient_strafing_setpoint_pub.publish(msgFloat);
    msgBool.data = true;
    orient_strafing_enable_pub.publish(msgBool);
    // // helper variables
    // ros::Rate r(1);
    // bool success = true;
    //
    // // push_back the seeds for the fibonacci sequence
    // feedback_.sequence.clear();
    // feedback_.sequence.push_back(0);
    // feedback_.sequence.push_back(1);
    //
    // // publish info to the console for the user
    // ROS_INFO("%s: Executing, creating fibonacci sequence of order %i with seeds %i, %i", action_name_.c_str(), goal->order, feedback_.sequence[0], feedback_.sequence[1]);
    //
    // // start executing the action
    // for(int i=1; i<=goal->order; i++)
    // {
    //   // check that preempt has not been requested by the client
    //   if (as_.isPreemptRequested() || !ros::ok())
    //   {
    //     ROS_INFO("%s: Preempted", action_name_.c_str());
    //     // set the action state to preempted
    //     as_.setPreempted();
    //     success = false;
    //     break;
    //   }
    //   feedback_.sequence.push_back(feedback_.sequence[i] + feedback_.sequence[i-1]);
    //   // publish the feedback
    //   as_.publishFeedback(feedback_);
    //   // this sleep is not necessary, the sequence is computed at 1 Hz for demonstration purposes
    //   r.sleep();
    // }
    //
    // if(success)
    // {
    //   result_.sequence = feedback_.sequence;
    //   ROS_INFO("%s: Succeeded", action_name_.c_str());
    //   // set the action state to succeeded
    //   as_.setSucceeded(result_);
    // }
  }


};


int main(int argc, char** argv)
{
  ros::init(argc, argv, "apriltag_shooting_server_2022");

  AprilTagShootingAction apriltagShootingServer("apriltag_shooting_server_2022");
  ros::spin();

  return 0;
}
