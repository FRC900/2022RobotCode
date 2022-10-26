// assumes map 0,0 is also the center of the goal

#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <actionlib/client/simple_action_client.h>
#include <behavior_actions/Shooting2022Action.h>
#include <behavior_actions/Shooting2022Feedback.h>
#include <behavior_actions/AlignedShooting2022Action.h>
#include <behavior_actions/AlignedShooting2022Feedback.h>
#include <path_follower_msgs/holdPositionAction.h>
#include <path_follower_msgs/holdPositionGoal.h>
#include <path_follower_msgs/holdPositionFeedback.h>
#include <std_msgs/Float64.h>
#include <behaviors/interpolating_map.h>
#include <XmlRpcValue.h>
#include <geometry_msgs/PoseWithCovarianceStamped.h>
#include <geometry_msgs/PoseWithCovariance.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/transform_broadcaster.h>
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"

class AlignShootServer
{
protected:
  ros::NodeHandle nh_;
  actionlib::SimpleActionServer<behavior_actions::AlignedShooting2022Action> as_;
  std::string action_name_;
  // create messages that are used to publish feedback/result
  behavior_actions::AlignedShooting2022Feedback feedback_;
  behavior_actions::AlignedShooting2022Result result_;
  behavior_actions::Shooting2022Feedback shooting_feedback_;
  actionlib::SimpleActionClient<path_follower_msgs::holdPositionAction> ac_hold_pos_;
  actionlib::SimpleActionClient<behavior_actions::Shooting2022Action> ac_shooting_;
  ros::Subscriber pf_sub_; 
  double shooting_timeout_;
  double FIELD_X = 8.299;
  double FIELD_Y = 4.114;
  double angle_ = -999;
  double distance_ = -999;

public:
  AlignShootServer(std::string name) :
    as_(nh_, name, boost::bind(&AlignShootServer::executeCB, this, _1), false),
    action_name_(name),
    ac_hold_pos_("/hold_position/hold_position_server", true),
    ac_shooting_("/shooting/shooting_server_2022", true)

  {
    if (!nh_.getParam("shooting_timeout", shooting_timeout_))
    {
      ROS_WARN_STREAM("2022_shooting_server : Could not find shooting_timeout, defaulting to 10 seconds");
      shooting_timeout_ = 10.0;
    }
    pf_sub_ = nh_.subscribe("/predicted_pose", 1, &AlignShootServer::pfCallback, this);
    as_.start();
  }

  template<class C, class S>
	bool waitForResultAndCheckForPreempt(const ros::Duration & timeout, const actionlib::SimpleActionClient<C> & ac, actionlib::SimpleActionServer<S> & as)
	{
		if (timeout < ros::Duration(0, 0)) {
			ROS_WARN_NAMED("actionlib", "Timeouts can't be negative. Timeout is [%.2fs]", timeout.toSec());
		}

		ros::Time timeout_time = ros::Time::now() + timeout;

		ros::Rate r(100);

		while (ros::ok() && !as.isPreemptRequested()) {
			ros::spinOnce();
			// Determine how long we should wait
			ros::Duration time_left = timeout_time - ros::Time::now();

			// Check if we're past the timeout time
			if (timeout > ros::Duration(0, 0) && time_left <= ros::Duration(0, 0) ) {
				break;
			}

			if (ac.getState().isDone()) {
				break;
			}
			r.sleep();
		}

		return ac.getState().isDone();
	}

  ~AlignShootServer(void)
  {
  }

double getYaw(const geometry_msgs::Quaternion &q)
{
	double roll, pitch, yaw;
	tf2::Quaternion tf_q(
		q.x,
		q.y,
		q.z,
		q.w);
	tf2::Matrix3x3(tf_q).getRPY(roll, pitch, yaw);
	return yaw;
}

void pfCallback(const geometry_msgs::PoseWithCovarianceStamped &data) {
    double x = data.pose.pose.position.x;
    double y = data.pose.pose.position.y;
    double d_x = x - FIELD_X;
    double d_y = y - FIELD_Y;

    distance_ = sqrt(pow(d_x, 2) + pow(d_y, 2));
    //ROS_INFO_STREAM("Distance: " << distance_);
    // ros_info_stream x and y
    //ROS_INFO_STREAM("X: " << x << " Y: " << y);
    double d_center_x = 8.229 - x;
    double d_center_y = 4.114 - y;
    //ROS_INFO_STREAM("d_X: " << d_center_x << " d_Y: " << d_center_y);
    // get yaw from data and convert to degrees
    angle_ = atan2(d_center_y, d_center_x);
    //ROS_INFO_STREAM("First Angle: " << angle_);
    // find compliment of angle
    //angle_ = -angle_;
    //ROS_INFO_STREAM("Angle negated " << angle_ << "\n");
    //angle_ = angle_ + yaw;
    
  }

  void executeCB(const behavior_actions::AlignedShooting2022GoalConstPtr &goal)
  {
    result_.success = false;
    result_.timed_out = false; 
    if (goal->num_cargo == 0) {
      ROS_ERROR_STREAM("2022_shooting_server : invalid number of cargo - must be a positive number. ");
      as_.setAborted(result_); // set the action state to aborted
      return;
    }
    feedback_.state = feedback_.WAITING_FOR_ROTATION;
    as_.publishFeedback(feedback_);
    // call hold_position_server and point toward goal if eject, point towards our drivers station corner to make it harder for the opponents
    // Determine distance of the shot and call Shooting2022 server
    // Set feedback and wait for success 

    path_follower_msgs::holdPositionGoal hold_goal;
    geometry_msgs::Pose pose;
    geometry_msgs::Point point;
    point.x = 0;
    point.y = 0;
    point.z = 0;
    pose.position = point;
    // make quaternion q
    tf2::Quaternion q;
    q.setRPY(0, 0, angle_);
    // print out the quaternion
    ROS_INFO_STREAM("Quaternion XYZW: " << q.x() << " " << q.y() << " " << q.z() << " " << q.w());
    ROS_INFO_STREAM("being called with Angle: " << angle_ * M_PI / 180);
    pose.orientation = tf2::toMsg(q);
    //pose.orientation = base_to_map_tf.transform.rotation;
    hold_goal.pose = pose;
    hold_goal.isAbsoluteCoord = true;
    
    bool aligned = false;

    ac_hold_pos_.sendGoal(hold_goal,
                actionlib::SimpleActionClient<path_follower_msgs::holdPositionAction>::SimpleDoneCallback(),
                actionlib::SimpleActionClient<path_follower_msgs::holdPositionAction>::SimpleActiveCallback(),
                [&](const path_follower_msgs::holdPositionFeedbackConstPtr& feedback){
                  aligned = feedback->isAligned;
                });

    ros::Rate r(100);
    bool success = true;
    while (!aligned) {
      if (as_.isPreemptRequested() || !ros::ok())
      {
        ROS_INFO_STREAM("2022_apriltag_shooting_server : preempted");
        ac_hold_pos_.cancelGoalsAtAndBeforeTime(ros::Time::now());
        // set the action state to preempted
        as_.setPreempted();
        success = false;
        break;
      }
      r.sleep();
    }
    ac_hold_pos_.cancelGoalsAtAndBeforeTime(ros::Time::now());

    ROS_INFO_STREAM("2022_apriltag_shooting_server : angle reached");
    // find distance to goal
    ROS_INFO_STREAM("2022_align_shoot_server : distance to goal is " << distance_);

    feedback_.state = feedback_.WAITING_FOR_SHOOTER;
    as_.publishFeedback(feedback_);
    // call shooting server with distance
    behavior_actions::Shooting2022Goal shooting_goal;
    shooting_goal.distance = distance_;
    shooting_goal.num_cargo = goal->num_cargo;
    shooting_goal.eject = goal->eject;
    ac_shooting_.sendGoal(shooting_goal,
                      actionlib::SimpleActionClient<behavior_actions::Shooting2022Action>::SimpleDoneCallback(),
                      actionlib::SimpleActionClient<behavior_actions::Shooting2022Action>::SimpleActiveCallback(),                                                     // publish feedback up the chain, they have the same fields
                      [&](const behavior_actions::Shooting2022FeedbackConstPtr &feedback){ ROS_INFO_STREAM_THROTTLE(0.1, "2022_align_shooting_server : new feedback"); feedback_.state = feedback->state; as_.publishFeedback(feedback_); });

    // wait for shooting server to finish
    bool finished_before_timeout;
    finished_before_timeout = waitForResultAndCheckForPreempt(ros::Duration(shooting_timeout_), ac_shooting_, as_);
    if (!finished_before_timeout) {
        ROS_ERROR_STREAM("2022_align_shoot_server : hold position server timed out");
        as_.setAborted(result_);
        return;
    }
    feedback_ = behavior_actions::AlignedShooting2022Feedback();
  }
};


int main(int argc, char** argv)
{
  ros::init(argc, argv, "AlignAndShoot_PF_2022");
  AlignShootServer server("AlignAndShoot_PF_2022");
  ros::spin();
  return 0;
}

