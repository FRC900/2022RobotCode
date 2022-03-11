#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <actionlib/client/simple_action_client.h>
#include <behavior_actions/Intaking2022Action.h>
#include <behavior_actions/Intake2022Action.h>
#include <behavior_actions/Index2022Action.h>
#include <std_msgs/Float64.h>

class IntakingServer2022
{
protected:

	ros::NodeHandle nh_;
	actionlib::SimpleActionServer<behavior_actions::Intaking2022Action> as_;
	std::string action_name_;
	// create messages that are used to publish feedback/result
	behavior_actions::Intaking2022Feedback feedback_;
	behavior_actions::Intaking2022Result result_;

	actionlib::SimpleActionClient<behavior_actions::Intake2022Action> intake_ac_;
	actionlib::SimpleActionClient<behavior_actions::Index2022Action> indexer_ac_;

	double server_timeout_;

	ros::Subscriber indexer_cargo_num_;
	uint8_t cargo_num_;

public:

	IntakingServer2022(std::string name) :
		as_(nh_, name, boost::bind(&IntakingServer2022::executeCB, this, _1), false),
		action_name_(name),
		intake_ac_("/intake/intake_server_2022", true),
		indexer_ac_("/index/index_server_2022", true)
	{
		indexer_cargo_num_ = nh_.subscribe("/2022_index_server/ball_state", 5, &IntakingServer2022::updateCargoNum, this);
		if (!nh_.getParam("server_timeout", server_timeout_)) {
			ROS_WARN_STREAM("2022_intaking_server : could not find server_timeout, defaulting to 10 seconds");
			server_timeout_ = 10;
		}
		as_.start();
	}

	~IntakingServer2022(void)
	{
	}

	void updateCargoNum(const std_msgs::Float64::ConstPtr& msg) {
		cargo_num_ = msg->data;
	}

	void executeCB(const behavior_actions::Intaking2022GoalConstPtr &goal)
	{
		ros::spinOnce();
		if (cargo_num_ > 2) {
			ROS_ERROR_STREAM("2022_intaking_server : can't intake that many cargo! aborting!");
			as_.setAborted(result_);
		}

		if(!intake_ac_.waitForServer(ros::Duration(server_timeout_)))
		{
			ROS_ERROR_STREAM("2022_intaking_server : intake actionlib server does not exist. exiting.");
			as_.setAborted(result_);
			return;
		}

		if(!indexer_ac_.waitForServer(ros::Duration(server_timeout_)))
		{
			ROS_ERROR_STREAM("2022_intaking_server : indexer actionlib server does not exist. exiting.");
			as_.setAborted(result_);
			return;
		}

		ROS_INFO_STREAM("2022_intaking_server : activating intake");
		behavior_actions::Intake2022Goal intake_goal;
		intake_goal.go_fast = false;
		intake_goal.reverse = false;
		intake_ac_.sendGoal(intake_goal);

		while (cargo_num_ < 2 && ros::ok()) {
			ros::spinOnce();
			behavior_actions::Index2022Goal index_goal;
			index_goal.goal = index_goal.INTAKE;
			indexer_ac_.sendGoal(index_goal);
			bool finished_before_timeout = indexer_ac_.waitForResult(ros::Duration(server_timeout_));
			ros::spinOnce();
			feedback_.cargo_in_indexer = cargo_num_;
			if (!finished_before_timeout) {
				as_.setAborted(result_);
			}
			if (as_.isPreemptRequested() || !ros::ok()) {
				as_.setPreempted(result_);
				intake_ac_.cancelGoal();
				indexer_ac_.cancelGoal();
			}
			ros::spinOnce();
		}

		ROS_INFO_STREAM("2022_intaking_server : deactivating intake and indexer");
		intake_ac_.cancelGoal();
		indexer_ac_.cancelGoal();

		ROS_INFO_STREAM("2022_intaking_server : succeeded");
		as_.setSucceeded(result_);
	}


};


int main(int argc, char** argv)
{
	ros::init(argc, argv, "intaking_server_2022");

	IntakingServer2022 intaking("intaking_server_2022");
	ros::spin();

	return 0;
}
