#include "ros/ros.h"
#include "behavior_actions/GamePiecePickup.h"
#include <nav_msgs/Path.h>
#include <actionlib/client/simple_action_client.h>
#include <actionlib/client/terminal_state.h>
#include <path_follower_msgs/PathAction.h>
#include "base_trajectory_msgs/GenerateSpline.h"
#include <apriltag_ros/AprilTagDetectionArray.h>
#include "tf2_ros/transform_listener.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "geometry_msgs/PoseWithCovarianceStamped.h"
#include <optional>
#include "behavior_actions/PathToAprilTag.h"
#include <sensor_msgs/Imu.h>
#include <tf2/LinearMath/Quaternion.h>

/*
"object_id: '1'
max_objects: 1
primary_frame_id: 'base_link'
secondary_object_id: ''
secondary_max_objects: 0
secondary_max_distance: 0.0
secondary_frame_id: ''
min_radius: 0.0
endpoint:
    position: {x: 0.0, y: 0.0, z: 0.0}
    orientation: {x: 0.0, y: 0.0, z: 0.0, w: 0.0}"
*/

tf2_ros::Buffer tf_buffer_;
std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
double latestImuZ;

trajectory_msgs::JointTrajectoryPoint generateTrajectoryPoint(double x, double y, double rotation)
{
	trajectory_msgs::JointTrajectoryPoint point;
	point.positions.resize(3);
	point.positions[2] = rotation;
	point.positions[0] = x;
	point.positions[1] = y;
	return point;
}

base_trajectory_msgs::GenerateSpline makePath(double x, double y, double rotation, std::string frame_id) {
    base_trajectory_msgs::GenerateSpline srv;
    srv.request.header.stamp = ros::Time::now();
    srv.request.header.frame_id = "base_link";
    srv.request.points = {generateTrajectoryPoint(0, 0, 0), generateTrajectoryPoint(x, y, 0)};
    srv.request.point_frame_id = {"base_link", frame_id};
    return srv;
}

apriltag_ros::AprilTagDetectionArray latest;

void callback(const apriltag_ros::AprilTagDetectionArrayConstPtr& msg) {
    // need to use transforms...
    // oh wait no we don't! we can tell spline srv what frame id it is relevant to
    latest = *msg;
}

void imuCallback(const sensor_msgs::ImuConstPtr& msg) {
    tf2::Quaternion q;
    sensor_msgs::Imu msgNonPtr = *msg;
    tf2::fromMsg(msgNonPtr.orientation, q);
    tf2::Matrix3x3 m(q);
    double r, p, y;
    m.getRPY(r, p, y);
    latestImuZ = y;
}

struct Point2D {
    double x;
    double y;
};

std::optional<Point2D> getTransformedTag(uint32_t id) {
    if (latest.detections.size() == 0) {
        return std::nullopt;
    }
    else {
        for (auto detection : latest.detections) {
            if (detection.id[0] == id) {
                geometry_msgs::PoseWithCovarianceStamped pose = detection.pose;
                geometry_msgs::PoseWithCovarianceStamped pose_out;
                tf_buffer_.transform(pose, pose_out, "base_link");
                Point2D point{pose_out.pose.pose.position.x, pose_out.pose.pose.position.y};
                return std::optional<Point2D>{point};
            }
        }
        return std::nullopt;
    }
    // currently ignores orientation
}

std::shared_ptr<actionlib::SimpleActionClient<path_follower_msgs::PathAction>> ac;
ros::ServiceClient client;

bool pathToTag(behavior_actions::PathToAprilTag::Request &req, behavior_actions::PathToAprilTag::Response &res)
{
    uint32_t id = req.id;
    double zRot = req.zRotation;
    std::optional<Point2D> position_ = getTransformedTag(id);

    if (!position_.has_value()) {
        return false;
    }
    Point2D position = position_.value();

    base_trajectory_msgs::GenerateSpline spline_gen_srv;

    spline_gen_srv.request.header = latest.header; // timestamp
    spline_gen_srv.request.header.frame_id = "base_link"; // correct frame id

    // if there is an offset, get atan2(y, x), add angle between robot and apriltag

    spline_gen_srv.request.points.resize(2);
	spline_gen_srv.request.point_frame_id.resize(2);
    spline_gen_srv.request.points[0] = generateTrajectoryPoint(0, 0, 0);
    ROS_INFO_STREAM(position.x << "," << position.y << " " << zRot << " " << latestImuZ << " " << zRot - latestImuZ);
    spline_gen_srv.request.points[1] = generateTrajectoryPoint(position.x, position.y, (zRot - latestImuZ));
    spline_gen_srv.request.point_frame_id[0] = "base_link";
    spline_gen_srv.request.point_frame_id[1] = "base_link";
    base_trajectory_msgs::PathOffsetLimit path_offset_limit;
    spline_gen_srv.request.path_offset_limit.push_back(path_offset_limit);

    if (client.call(spline_gen_srv))
    {
        ROS_INFO_STREAM("Called");
    }
    else
    {
        ROS_ERROR("Failed to call service");
        return 1;
    }

    nav_msgs::Path path = spline_gen_srv.response.path;

    ROS_INFO("Waiting for action server to start.");
    // wait for the action server to start
    ac->waitForServer(); //will wait for infinite time

    ROS_INFO("Action server started, sending goal.");
    // send a goal to the action
    path_follower_msgs::PathGoal goal;
    goal.path = path;
    ac->sendGoal(goal);

    //wait for the action to return
    bool finished_before_timeout = ac->waitForResult(ros::Duration(30.0));

    if (finished_before_timeout)
    {
        actionlib::SimpleClientGoalState state = ac->getState();
        ROS_INFO("Action finished: %s",state.toString().c_str());
        return true;
    }
    else {
        ROS_INFO("Action did not finish before the time out.");
        return false;
    }
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "apriltag_path_client");

    ros::NodeHandle nh;

    ros::ServiceServer service = nh.advertiseService("/path_to_apriltag", pathToTag);

    client = nh.serviceClient<base_trajectory_msgs::GenerateSpline>("/path_follower/base_trajectory/spline_gen");
    ac = std::make_shared<actionlib::SimpleActionClient<path_follower_msgs::PathAction>>("/path_follower/path_follower_server", true);
    tf_listener_ = std::make_shared<tf2_ros::TransformListener>(tf_buffer_);

    // need service server too to do this when called

    ros::Subscriber sub_ = nh.subscribe<apriltag_ros::AprilTagDetectionArray>("/cuda_tag_detections", 1, &callback);
    ros::Subscriber subImu_ = nh.subscribe<sensor_msgs::Imu>("/imu/zeroed_imu", 1, &imuCallback);
    
    ros::spin();

    return 0;
}