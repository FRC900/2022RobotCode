#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <actionlib/client/simple_action_client.h>
#include <behavior_actions/Intaking2022Action.h>
#include <behavior_actions/Intake2022Action.h>
// #include <behavior_actions/Indexer2022Action.h>

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
	// actionlib::SimpleActionClient<behavior_actions::Indexer2022Action> indexer_ac_;

	double server_timeout_;

public:

	IntakingServer2022(std::string name) :
		as_(nh_, name, boost::bind(&IntakingServer2022::executeCB, this, _1), false),
		action_name_(name),
		intake_ac_("/intake/intake_server_2022", true)/*,
		indexer_ac_("/insert_path_here", true)*/
	{
		if (!nh_.getParam("server_timeout", server_timeout_)) {
			ROS_WARN_STREAM("2022_intaking_server : could not find server_timeout, defaulting to 10 seconds");
			server_timeout_ = 10;
		}
		as_.start();
	}

	~IntakingServer2022(void)
	{
	}

	void executeCB(const behavior_actions::Intaking2022GoalConstPtr &goal)
	{
		// If the requested number of cargo is more than we can intake (using indexer data) or is 0, abort.

		if(!intake_ac_.waitForServer(ros::Duration(server_timeout_)))
		{
			ROS_ERROR_STREAM("2022_intaking_server : intake actionlib server does not exist. exiting.");
			// TODO set result_.correct_cargo based on indexer data
			as_.setAborted(result_);
			return;
		}

		// Do the above for the indexer client

		ROS_INFO_STREAM("2022_intaking_server : activating intake");
		behavior_actions::Intake2022Goal intake_goal;
		intake_goal.go_fast = false;
		intake_goal.reverse = false;
		intake_goal.stop = false;
		intake_ac_.sendGoal(intake_goal);
		bool intake_finished_before_timeout = intake_ac_.waitForResult(ros::Duration(server_timeout_));
		if (intake_finished_before_timeout) {
			auto state = intake_ac_.getState();
			auto result = intake_ac_.getResult();
			ROS_INFO_STREAM("2022_intaking_server : intake action state: " << state.toString() << (result->timed_out ? " and it timed out." : "."));
			if (state.state_ != actionlib::SimpleClientGoalState::StateEnum::SUCCEEDED) {
				ROS_ERROR_STREAM("2022_intaking_server : intake action did not succeed. :( Aborting.");
				// TODO set result_.correct_cargo based on indexer data
				as_.setAborted(result_);
				return;
			}
		}

		// Do indexer stuff until we intake enough cargo.

		ROS_INFO_STREAM("2022_intaking_server : deactivating intake");
		intake_goal.go_fast = false;
		intake_goal.reverse = false;
		intake_goal.stop = true;
		intake_ac_.sendGoal(intake_goal);
		intake_finished_before_timeout = intake_ac_.waitForResult(ros::Duration(server_timeout_));
		if (intake_finished_before_timeout) {
			auto state = intake_ac_.getState();
			auto result = intake_ac_.getResult();
			ROS_INFO_STREAM("2022_intaking_server : intake action state: " << state.toString() << (result->timed_out ? " and it timed out." : "."));
			if (state.state_ != actionlib::SimpleClientGoalState::StateEnum::SUCCEEDED) {
				ROS_ERROR_STREAM("2022_intaking_server : intake action did not succeed. :( Aborting.");
				// TODO set result_.correct_cargo based on indexer data
				as_.setAborted(result_);
				return;
			}
		}

		ROS_INFO_STREAM("2022_intaking_server : succeeded");
		// TODO set result_.correct_cargo based on indexer data
		// set the action state to succeeded
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
