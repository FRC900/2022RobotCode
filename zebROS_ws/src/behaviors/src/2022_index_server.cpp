#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include "behavior_actions/Index2022Action.h"
#include <functional>
#include <std_msgs/Float64.h>
#include "sensor_msgs/JointState.h"
#include <map>
#include "actionlib_msgs/GoalID.h"


class IndexStateMachine
{
protected:
  double straight_motor_percent_output_config_;
  double arc_motor_percent_output_config_;
  ros::Subscriber joint_states_sub_;
  ros::Publisher straight_motor_publisher_;
  ros::Publisher arc_motor_publisher_;
  ros::NodeHandle nh_;
  ros::Publisher ball_state_publisher_;

public:
  uint8_t state = 0;
  bool exited = false;
  bool success = false; // whether it exited without errors
  uint8_t num_of_balls = 0;
  uint8_t goal;
  bool straight_sensor_pressed;
  bool arc_sensor_pressed;
  double straight_sensor_pressed_double;
  double arc_sensor_pressed_double;

  IndexStateMachine(actionlib::SimpleActionServer<behavior_actions::Index2022Action> &as_): as_(as_)
  {
    joint_states_sub_ = nh_.subscribe("/frcrobot_jetson/joint_states", 1, &ClimbStateMachine::jointStateCallback, this);
    straight_motor_publisher_ = nh_.advertise<std_msgs::Float64>("/frcrobot_jetson/indexer_straight_motor_controller/command", 1);
    arc_motor_publisher_ = nh_.advertise<std_msgs::Float64>("/frcrobot_jetson/indexer_arc_motor_controller/command", 1);
    ball_state_publisher_ = nh_.advertise<std_msgs::UInt8>("/2022_index_server/ball_state", 1);
    ros::NodeHandle indexer_params_nh(nh_, "indexer_actionlib_params");

  	if (!indexer_params_nh.getParam("straight_motor_percent_output", straight_motor_percent_output_config_))
  	{
  		ROS_ERROR("could not read straight_motor_percent_output");
  		straight_motor_percent_output_config_ = 0.5;
  	}
    if (!indexer_params_nh.getParam("arc_motor_percent_output", arc_motor_percent_output_config_))
  	{
  		ROS_ERROR("could not read arc_motor_percent_output");
  		arc_motor_percent_output_config_ = 0.5;
  	}
  }
  void publish_ball_count(int num_of_balls){
    std_msgs::UInt8 num_of_balls_msg;
    num_of_balls_msg.data = num_of_balls;
    ball_state_publisher_.publish(num_of_balls_msg);
  }
  void reset(bool singleStep) {
    if (!singleStep) {
      state = 0;
      nextFunction_ = boost::bind(&IndexStateMachine::state1, this);
      rung = 0;
    }
    exited = false;
    success = false;
  }
  void next()
  {
    nextFunction_();
  }
  bool sleepCheckingForPreempt(double time) // true if preempted, false if not
  {
    ros::Rate r(100); // 100 Hz loop
    for (int i = 0; i < time * 100.0; i++)
    {
      ros::spinOnce();
      if (as_.isPreemptRequested() || !ros::ok()) {
        exited = true;
        return true;
      }
      r.sleep();
    }
    return false;
  }

  void state0() //decides which state to go to based on sensor readings
  {
    state = 0;
    if(goal == behavior_actions::Intake2022Goal::EJECT){
      nextFunction_ = boost::bind(&IndexStateMachine::state3, this); //call eject state
      return;
    }
    if(goal == behavior_actions::Intake2022Goal::MOVE_TO_SHOOTER){
      nextFunction_ = boost::bind(&IndexStateMachine::state4, this); //call move to shooter state
      return;
    }
    if(arc_sensor_pressed && straight_sensor_pressed){
      num_of_balls = 2;
      publish_ball_count(num_of_balls);
      exited = true;
      return;
    }
    if(arc_sensor_pressed){
      nextFunction_ = boost::bind(&IndexStateMachine::state10, this);
      num_of_balls = 1;
      publish_ball_count(num_of_balls);
      return;
    }
    if{
      num_of_balls = 0;
      publish_ball_count(num_of_balls);
      nextFunction_ = boost::bind(&IndexStateMachine::state1, this);
      return;
    }
  }
  void state1() //indexer is empty
  {
    state = 1;
    //run the straight motors
    std_msgs::Float64 straight_motor_percent_output;
    straight_motor_percent_output.data = straight_motor_percent_output_config_;
    straight_motor_publisher_.publish(straight_motor_percent_output);
    while(!arc_sensor_pressed){ //TODO set up timeout or do it in higher level code
      balls = 0;
      continue;
    }
    //if timeout was reached, set num_of_balls to 0
    num_of_balls = 1;
    publish_ball_count(num_of_balls);
    nextFunction_ = boost::bind(&IndexStateMachine::state10, this);
  }
  void state2() //state to exit
  {
    exited = true;
  }
  void state3() //eject state
  {
    state = 3;
    if(arc_sensor_pressed && straight_sensor_pressed){
      balls = 2;
    } else if(arc_sensor_pressed || straight_sensor_pressed){
      balls = 1;
    } else{
      balls = 0;
    }
    // run straight motor backwards
    std_msgs::Float64 straight_motor_percent_output;
    straight_motor_percent_output.data = -1 *straight_motor_percent_output_config_;
    straight_motor_publisher_.publish(straight_motor_percent_output);
    // run arc motor backwards
    std_msgs::Float64 arc_motor_percent_output;
    arc_motor_percent_output.data = -1 * arc_motor_percent_output_config_;
    arc_motor_publisher_.publish(arc_motor_percent_output);
    while(arc_sensor_pressed || straight_sensor_pressed){
      continue;
    }
    nextFunction_ = boost::bind(&IndexStateMachine::state2, this);
  }
  void state4() //move to shooter state
  {
    state = 4;
    if(arc_sensor_pressed && straight_sensor_pressed){
      balls = 2;
    } else if(arc_sensor_pressed || straight_sensor_pressed){
      balls = 1;
    } else{
      balls = 0;
    }
    // run straight motor backwards
    std_msgs::Float64 straight_motor_percent_output;
    straight_motor_percent_output.data = -1 * straight_motor_percent_output_config_;
    straight_motor_publisher_.publish(straight_motor_percent_output);
    // run arc motor backwards
    std_msgs::Float64 arc_motor_percent_output;
    arc_motor_percent_output.data = -1 * arc_motor_percent_output_config_;
    arc_motor_publisher_.publish(arc_motor_percent_output);
    if(straight_sensor_pressed && arc_sensor_pressed){
      while(straight_sensor_pressed){
        continue;
      }
    }
    else{
      while(arc_sensor_pressed){
        continue;
      }
      // wait one second
      ros::Duration(1.0).sleep()
    }

    nextFunction_ = boost::bind(&IndexStateMachine::state2, this);
  }
  void state10() //one existing ball
  {
    state = 10;
    //run the straight motors
    std_msgs::Float64 straight_motor_percent_output;
    straight_motor_percent_output.data = straight_motor_percent_output_config_;
    straight_motor_publisher_.publish(straight_motor_percent_output);
    while(arc_sensor_pressed && !straight_sensor_pressed){
      continue;
    }
    num_of_balls = 2;
    publish_ball_count(num_of_balls);
    nextFunction_ = boost::bind(&IndexStateMachine::state2, this);
  }

  void jointStateCallback(const sensor_msgs::JointState joint_state)
  { //TODO replace state names to whatever they are actually named
    std::map<std::string, double*> stateNamesToVariables = {{"indexer_straight_linebreak", &straight_sensor_pressed_double}, {"indexer_arc_linebreak", &arc_sensor_pressed_double}};

    for (auto const &nameVar : stateNamesToVariables)
    {
      // get index of sensor
      size_t index = std::numeric_limits<size_t>::max();
      for (size_t i = 0; i < joint_state.name.size(); i++)
      {
        if (joint_state.name[i] == nameVar.first)
          index = i;
      }

      //update linebreak counts based on the value of the linebreak sensor
      if (index < joint_state.position.size())
      {
        *nameVar.second = joint_state.position[index];
      }
      else
      {
        ROS_WARN_STREAM_THROTTLE(2.0, "2022_index_server : " << nameVar.first << " sensor not found in joint_states");
      }
    }

    if(straight_sensor_pressed_double == 1.0){
      straight_sensor_pressed = true; //assuming 1 means that it is pressed
    } else{
      straight_sensor_pressed = false;
    }

    if(arc_sensor_pressed_double == 1.0){
      arc_sensor_pressed = true; //assuming 1 means that it is pressed
    } else{
      arc_sensor_pressed = false;
    }
  }
  void stopMotors() {
    //Stop straight motor
    std_msgs::Float64 straight_motor_percent_output;
    straight_motor_percent_output.data = 0;
    straight_motor_publisher_.publish(straight_motor_percent_output);

    //Stop arc motor
    std_msgs::Float64 arc_motor_percent_output;
    arc_motor_percent_output.data = 0;
    arc_motor_publisher_.publish(arc_motor_percent_output);
};

class IndexAction2022
{
protected:

  ros::NodeHandle nh_;
  actionlib::SimpleActionServer<behavior_actions::Index2022Action> as_;
  std::string action_name_;
  // create messages that are used to publish feedback/result
  behavior_actions::Index2022Feedback feedback_;
  behavior_actions::Index2022Result result_;
  IndexStateMachine sm;

public:

  IndexAction2022(std::string name) :
    as_(nh_, name, boost::bind(&IndexAction2022::executeCB, this, _1), false),
    action_name_(name),
    sm(as_)
  {
    as_.start();
  }

  ~IndexAction2022(void)
  {
  }

  void executeCB(const behavior_actions::Index2022GoalConstPtr &goal)
  {
    sm.goal = goal->goal;
    // start executing the action
    while (!sm.exited)
    {
      // check that preempt has not been requested by the client
      if (as_.isPreemptRequested() || !ros::ok())
      {
        ROS_INFO("%s: Preempted", action_name_.c_str());
        // set the action state to preempted
        as_.setPreempted();
        sm.success = false;
        break;
      }
      sm.next();
      // check that preempt has not been requested by the client
      if (as_.isPreemptRequested() || !ros::ok())
      {
        ROS_INFO("%s: Preempted", action_name_.c_str());
        // set the action state to preempted
        as_.setPreempted();
        sm.success = false;
        break;
      }
      feedback_.num_of_balls = sm.num_of_balls;
      as_.publishFeedback(feedback_);
    }

    sm.success = sm.success || !sm.exited;
    if (!sm.success)
    {
      sm.stopMotors();
    }
    result_.success = sm.success;
    if (result_.success)
    {
      ROS_INFO("%s: Succeeded", action_name_.c_str());
    } else
    {
      sm.reset(false);
      ROS_INFO("%s: Failed", action_name_.c_str());
    }
    // set the action state to success or not
    as_.setSucceeded(result_);
  }
};


int main(int argc, char** argv)
{
  ros::init(argc, argv, "index_server_2022");

  IndexAction2022 IndexAction("index_server_2022");
  ros::spin();

  return 0;
}
