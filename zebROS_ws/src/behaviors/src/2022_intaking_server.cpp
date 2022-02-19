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
		bool success = true;

		if(!intake_ac_.waitForServer(ros::Duration(server_timeout_)))
		{
			ROS_ERROR_STREAM("2022_intaking_server : intake actionlib server does not exist. exiting.");
			result_.success = false;
			as_.setPreempted(result_);
			return;
		}

		// Do the above for the indexer client

		behavior_actions::Intake2022Goal intakeGoal;
		intakeGoal.go_fast = false;
		intakeGoal.reverse = false;
		intake_ac_.sendGoal(intakeGoal);
		bool finished_before_timeout = intake_ac_.waitForResult(ros::Duration(server_timeout_));

		if(success)
		{
			ROS_INFO_STREAM("2022_intaking_server : succeeded");
			// set the action state to succeeded
			as_.setSucceeded(result_);
		}
	}


};


int main(int argc, char** argv)
{
	ros::init(argc, argv, "intaking_server_2022");

	IntakingServer2022 intaking("intaking_server_2022");
	ros::spin();

	return 0;
}
