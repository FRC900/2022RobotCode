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
#include <std_msgs/Float64.h>
#include <behaviors/interpolating_map.h>
#include <tf2/LinearMath/Matrix3x3.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>

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

  double shooting_timeout_;
  tf2_ros::Buffer tf_buffer_;
  tf2_ros::TransformListener tf_listener_;

public:

  AlignShootServer(std::string name) :
    as_(nh_, name, boost::bind(&AlignShootServer::executeCB, this, _1), false),
    action_name_(name),
    ac_hold_pos_("/hold_position/hold_position_server", true),
    ac_shooting_("/shooting/shooting_server_2022", true),
    tf_listener_(tf_buffer_)
  {
    if (!nh_.getParam("shooting_timeout", shooting_timeout_))
    {
      ROS_WARN_STREAM("2022_shooting_server : Could not find shooting_timeout, defaulting to 10 seconds");
      shooting_timeout_ = 10.0;
    }
    as_.start();
  }

  ~AlignShootServer(void)
  {
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
    geometry_msgs::TransformStamped base_to_map_tf;
    try {
        base_to_map_tf = tf_buffer_.lookupTransform("base_link", "map", ros::Time::now(), ros::Duration(0.1));
    }
    // not quite sure what should happen here, if we just abort then the driver will have no idea why the shooter didn't shoot, 
    // but at the same time just waiting and trying to find a transform that isn't coming is bad too
    catch (const tf2::TransformException &ex) {
        ROS_ERROR_STREAM_THROTTLE(5, "Shooting with PF failed to find transform - fix base_link to map transform");
        as_.setAborted(result_);
        return;
    }
    
    // TODO USE THE PREDICTED POSE AND ANGLE TO DETERMINE DISTANCE AND ANGLE
    //double angle = getYaw(base_to_map_tf.transform.rotation);
    double angle = atan2(base_to_map_tf.transform.translation.y, base_to_map_tf.transform.translation.x);
    ROS_INFO_STREAM("Angle with atan: " << atan2(base_to_map_tf.transform.translation.y, base_to_map_tf.transform.translation.x)); 
    ROS_INFO_STREAM("Raw X data: " << base_to_map_tf.transform.translation.x << " Y: " << base_to_map_tf.transform.translation.y);

    ROS_INFO_STREAM("2022_shooting_server : angle to goal is " << angle);
    // call hold position server with angle
    path_follower_msgs::holdPositionGoal hold_goal;
    geometry_msgs::Pose pose;
    geometry_msgs::Point point;
    point.x = 0;
    point.y = 0;
    point.z = 0;
    pose.position = point;
    // make quaternion q
    tf2::Quaternion q;
    // convert angle to degrees
    angle = angle * 180 / M_PI;
    ROS_INFO_STREAM("ANGLE IN DEGREES " << angle);
    ROS_INFO_STREAM("ANGLE FROM TF" << getYaw(base_to_map_tf.transform.rotation));
    q.setRPY(0, 0, angle);
    pose.orientation = tf2::toMsg(q);
    //pose.orientation = base_to_map_tf.transform.rotation;
    hold_goal.pose = pose;
    hold_goal.isAbsoluteCoord = false;
    // send goal to hold position server
    ac_hold_pos_.sendGoal(hold_goal);
    // find distance to goal
    double distance = sqrt(pow(base_to_map_tf.transform.translation.x, 2) + pow(base_to_map_tf.transform.translation.y, 2));
    ROS_INFO_STREAM("2022_align_shoot_server : distance to goal is " << distance);
    // wait for hold position server to finish
    // we do lose some efficency here because we could be spinning up the shooter while we are waiting
    // seems like what we get for layering servers the way we have, still much much faster than having to drive to the goal
    bool finished_before_timeout = waitForResultAndCheckForPreempt(ros::Duration(5), ac_hold_pos_, as_);
    if (!finished_before_timeout) {
        ROS_ERROR_STREAM("2022_align_shoot_server : hold position server timed out");
        as_.setAborted(result_);
        return;
    }
    feedback_.state = feedback_.WAITING_FOR_SHOOTER;
    as_.publishFeedback(feedback_);
    // call shooting server with distance
    behavior_actions::Shooting2022Goal shooting_goal;
    shooting_goal.distance = distance;
    shooting_goal.num_cargo = goal->num_cargo;
    shooting_goal.eject = goal->eject;
    ac_shooting_.sendGoal(shooting_goal,
                      actionlib::SimpleActionClient<behavior_actions::Shooting2022Action>::SimpleDoneCallback(),
                      actionlib::SimpleActionClient<behavior_actions::Shooting2022Action>::SimpleActiveCallback(),                                                     // publish feedback up the chain, they have the same fields
                      [&](const behavior_actions::Shooting2022FeedbackConstPtr &feedback){ ROS_INFO_STREAM_THROTTLE(0.1, "2022_align_shooting_server : new feedback"); feedback_.state = feedback->state; as_.publishFeedback(feedback_); });

    // wait for shooting server to finish
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

