// assumes map 0,0 is also the center of the goal

#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <actionlib/client/simple_action_client.h>
#include <behavior_actions/Shooting2022Action.h>
#include <behavior_actions/Shooter2022Action.h>
#include <behavior_actions/Index2022Action.h>
#include <std_msgs/Float64.h>
#include <behaviors/interpolating_map.h>
#include <path_follower_msgs/holdPositionAction.h>
#include <path_follower_msgs/holdPositionGoal.h>
#include <tf2/LinearMath/Matrix3x3.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>

class AlignShoot_PF
{
protected:

  ros::NodeHandle nh_;
  actionlib::SimpleActionServer<behavior_actions::AlignedShooting2022Action> as_;
  std::string action_name_;
  // create messages that are used to publish feedback/result
  behavior_actions::AlignedShooting2022Feedback feedback_;
  behavior_actions::AlignedShooting2022Result result_;

  actionlib::SimpleActionClient<path_follower_msgs::holdPositionAction> ac_hold_pos_;

  double shooting_timeout_;
  double indexing_timeout_;
  tf2_ros::Buffer tf_buffer_;
  tf2_ros::TransformListener tf_listener_;

  ros::Subscriber cargo_state_sub_;
  uint8_t cargo_num_;

public:

  AlignShootServer(std::string name) :
    as_(nh_, name, boost::bind(&AlignShootServer::executeCB, this, _1), false),
    action_name_(name),
    ac_hold_pos_("/PATH_TO_HOLD_POSITION", true),
    tf_listener_(tf_buffer_)
  {
    cargo_state_sub_ = nh_.subscribe("/2022_index_server/ball_state", 2, &ShootingServer2022::cargoStateCallback, this);
    as_.start();
  }

  ~ShootingServer2022(void)
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

  void cargoStateCallback(const std_msgs::Float64 &msg)
  {
    cargo_num_ = msg.data;
  }

  bool spinUpShooter(bool &timedOut, bool eject, double distance) { // returns false if ros is not ok or timed out, true otherwise
    feedback_.state = feedback_.WAITING_FOR_SHOOTER;
    as_.publishFeedback(feedback_);
    ROS_INFO_STREAM("2022_shooting_server : spinning up shooter");
    is_spinning_fast_ = false;
    behavior_actions::Shooter2022Goal goal;
    if (eject) {
      goal.mode = goal.EJECT;}
    else {
      goal.mode = goal.HIGH_GOAL;}
      
    d_.wheel_speed = 300;
    d_.hood_wheel_speed = 300;
    shooter_speed_map_[2] = d_;
    d_.wheel_speed = 400;
    d_.hood_wheel_speed = 400; 
    shooter_speed_map_[4] = d_;
    ROS_WARN_STREAM("Shooter speed map " << shooter_speed_map_[3].wheel_speed);
    goal.wheel_speed = shooter_speed_map_[distance].wheel_speed;
    goal.hood_wheel_speed = shooter_speed_map_[distance].hood_wheel_speed;
    // sets hood position to down if less than some constant up otherwise 
    goal.hood_position = distance < MAGIC_CONSTANT_ ? false : true;
    ac_shooter_.sendGoal(goal,
                         actionlib::SimpleActionClient<behavior_actions::Shooter2022Action>::SimpleDoneCallback(),
                         actionlib::SimpleActionClient<behavior_actions::Shooter2022Action>::SimpleActiveCallback(),
                         [&](const behavior_actions::Shooter2022FeedbackConstPtr &feedback){ ROS_INFO_STREAM_THROTTLE(0.1, "2022_shooting_server : new sample data"); is_spinning_fast_ = feedback->close_enough; });
    ros::Rate r(100);
    ros::Time start = ros::Time::now();
    while (ros::ok() && !is_spinning_fast_) {
      if ((ros::Time::now() - start).toSec() >= shooting_timeout_) {
        ROS_INFO_STREAM("2022_shooting_server : shooter timed out :(");
        timedOut = true;
        return false;
      }
      if (as_.isPreemptRequested()) {
        ROS_INFO_STREAM("2022_shooting_server : preempted");
        return false;
      }
      ros::spinOnce();
      r.sleep();
    }
    ROS_INFO_STREAM("2022_shooting_server : spun up shooter");
    return ros::ok();
  }

  bool waitForShooter(bool &timedOut) {
    feedback_.state = feedback_.WAITING_FOR_SHOOTER;
    as_.publishFeedback(feedback_);
    ros::Rate r(100);
    ros::Time start = ros::Time::now();
    while (ros::ok() && !is_spinning_fast_) {
      ROS_INFO_STREAM_THROTTLE(0.1, "2022_shooting_server : waiting for shooter");
      if ((ros::Time::now() - start).toSec() >= shooting_timeout_) {
        ROS_INFO_STREAM("2022_shooting_server : wait for shooter timed out :(");
        timedOut = true;
        return false;
      }
      if (as_.isPreemptRequested()) {
        ROS_INFO_STREAM("2022_shooting_server : preempted");
        return false;
      }
      ros::spinOnce();
      r.sleep();
    }
    ROS_INFO_STREAM("2022_shooting_server : shooter is spinning fast enough, continuing");
    return true;
  }

  bool getCargoFromIndexer(bool &timedOut) { // returns false if ros is not ok or timed out, true otherwise
    feedback_.state = feedback_.WAITING_FOR_INDEXER;
    as_.publishFeedback(feedback_);
    ROS_INFO_STREAM("2022_shooting_server : getting cargo from indexer");

    behavior_actions::Index2022Goal goal;
    goal.goal = goal.MOVE_TO_SHOOTER;
    ac_indexer_.sendGoal(goal);
    bool finished_before_timeout = waitForResultAndCheckForPreempt(ros::Duration(indexing_timeout_), ac_indexer_, as_);
    if (finished_before_timeout) {
      ROS_INFO_STREAM("2022_shooting_server : cargo should have been launched");
    } else {
      ROS_INFO_STREAM("2022_shooting_server : indexer timed out :(");
      return false;
    }
    if (ros::ok()) {
      feedback_.cargo_shot++;
      as_.publishFeedback(feedback_);
    }
    return ros::ok();
  }

  void executeCB(const behavior_actions::AlignedShooting2022GoalConstPtr &goal)
  {
    if (goal->num_cargo == 0) {
      ROS_ERROR_STREAM("2022_shooting_server : invalid number of cargo - must be a positive number. ");
      as_.setAborted(result_); // set the action state to aborted
      return;
    }
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
    double angle = tf2::getYaw(base_to_map_tf.transform.rotation);
    ROS_INFO_STREAM("2022_shooting_server : angle to goal is " << angle);
    // call hold position server with angle
    behavior_actions::HoldPosition2022Goal hold_goal;
    geometry_msgs::Pose pose;
    geometry_msgs::Point point;
    point.x = 0;
    point.y = 0;
    point.z = 0;
    pose.position = point;
    pose.orientation = base_to_map_tf.transform.rotation
    hold_goal.pose = pose;
    hold_goal.isAbsoluteCord = false;
    // send goal to hold position server
    ac_hold_position_.sendGoal(hold_goal);
    // find distance to goal
    double distance = sqrt(pow(base_to_map_tf.transform.translation.x, 2) + pow(base_to_map_tf.transform.translation.y, 2));
    ROS_INFO_STREAM("2022_align_shoot_server : distance to goal is " << distance);
    // wait for hold position server to finish
    // we do lose some efficency here because we could be spinning up the shooter while we are waiting
    // seems like what we get for layering servers the way we have 
    bool finished_before_timeout = waitForResultAndCheckForPreempt(ros::Duration(5), ac_hold_position_, as_);
    if (!finished_before_timeout) {
        ROS_ERROR_STREAM("2022_shooting_server : hold position server timed out");
        as_.setAborted(result_);
        return;
    }
    // call shooting server with distance
    behavior_actions::Shooting2022Goal shooting_goal;
    shooting_goal.distance = distance;
    ac_shooting_.sendGoal(shooting_goal);

	  result_.success = success;
    if (success)
    {
      ROS_INFO_STREAM("2022_shooting_server : succeeded! yay!!");
      // publish feedback
      as_.publishFeedback(feedback_);
      // set the action state to succeeded
      as_.setSucceeded(result_);
    }
    else
    {
      ROS_INFO_STREAM("2022_shooting_server : failed :(");
      // set the action state to aborted
      as_.setAborted(result_);
    }

    feedback_ = behavior_actions::Shooting2022Feedback();
  }
};


int main(int argc, char** argv)
{
  ros::init(argc, argv, "AlignAndShoot_PF_2022");
  AlignAndShoot_PF server("AlignAndShoot_PF_2022");
  ros::spin();
  return 0;
}

