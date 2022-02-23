#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include "behavior_actions/Index2022Action.h"
#include <functional>
#include <std_msgs/Float64.h>
#include "sensor_msgs/JointState.h"
#include <map>
#include "actionlib_msgs/GoalID.h" //not sure if this is needed


class IndexStateMachine
{
protected:
  double straight_motor_percent_output_config = 0.5; //TODO Setup config, set to 50%
  double arc_motor_percent_output_config = 0.5; //TODO Setup config, set to 50%
  ros::Subscriber joint_states_sub_;
  ros::Publisher straight_motor_publisher_;
  ros::Publisher arc_motor_publisher_;
  ros::NodeHandle nh_;
  ros::Publisher
  //TODO Set up a publisher for ball states
  //TODO Setup ROS service clients for the straight motors, and arc motors
  //ros::ServiceClient
public:
  uint8_t state = 0;
  bool exited = false;
  bool success = false; // whether it exited without errors
  uint8_t num_of_balls = 0;
  uint8_t goal;
  IndexStateMachine(actionlib::SimpleActionServer<behavior_actions::Index2022Action> &as_): as_(as_)
  {
    joint_states_sub_ = nh_.subscribe("/frcrobot_jetson/joint_states", 1, &ClimbStateMachine::jointStateCallback, this);
    straight_motor_publisher_ = nh_.advertise<std_msgs::Float64>("/frcrobot_jetson/indexer_straight_motor_controller/command", 1);
    arc_motor_publisher_ = nh_.advertise<std_msgs::Float64>("/frcrobot_jetson/indexer_arc_motor_controller/command", 1);
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
      exited = true;
      return;
    }
    if(arc_sensor_pressed){
      nextFunction_ = boost::bind(&IndexStateMachine::state10, this);
      num_of_balls = 1;
      return;
    }
    if{
      num_of_balls = 0;
      nextFunction_ = boost::bind(&IndexStateMachine::state1, this);
      return;
    }
  }
  void state1() //indexer is empty
  {
    state = 1;
    //run the straight motors
    std_msgs::Float64 straight_motor_percent_output;
    straight_motor_percent_output.data = straight_motor_percent_output_config;
    straight_motor_publisher_.publish(straight_motor_percent_output);
    while(!arc_sensor_pressed){ //TODO set up timeout
      balls = 0;
      continue;
    }
    //if timeout was reached, set num_of_balls to 0
    num_of_balls = 1;
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
    straight_motor_percent_output.data = -1 *straight_motor_percent_output_config;
    straight_motor_publisher_.publish(straight_motor_percent_output);
    // run arc motor backwards
    std_msgs::Float64 arc_motor_percent_output;
    arc_motor_percent_output.data = -1 * arc_motor_percent_output_config;
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
    straight_motor_percent_output.data = -1 * straight_motor_percent_output_config;
    straight_motor_publisher_.publish(straight_motor_percent_output);
    // run arc motor backwards
    std_msgs::Float64 arc_motor_percent_output;
    arc_motor_percent_output.data = -1 * arc_motor_percent_output_config;
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
      // TODO wait one second
    }

    // stop straight motor
    // stop arc motor

    nextFunction_ = boost::bind(&IndexStateMachine::state2, this);
  }
  void state10() //one existing ball
  {
    state = 10;
    //run the straight motors
    std_msgs::Float64 straight_motor_percent_output;
    straight_motor_percent_output.data = straight_motor_percent_output_config;
    straight_motor_publisher_.publish(straight_motor_percent_output);
    while(arc_sensor_pressed && !straight_sensor_pressed){
      continue;
    }
    num_of_balls = 2;
    nextFunction_ = boost::bind(&IndexStateMachine::state2, this);
  }

  void jointStateCallback(const sensor_msgs::JointState joint_state)
  { //TODO replace state names to whatever they are actually named and reflect these changes to where these variables are used in the entire file
    std::map<std::string, double*> stateNamesToVariables = {{"straight_sensor", &straight_sensor_pressed}, {"arc_sensor", &arc_sensor_pressed}};
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
  }
  void stopMotors() { //TODO Finish this
    // Construct service call
    controllers_2022_msgs::IntakeArmSrv srv;
    //also stop straight and arc motors
    srv.request.percent_out = 0; // percent output
    // TODO - tell intake to stop, or tell it to stop in the client file
    // Call service
    if (/*service_client.call(srv)*/)
    {
      ROS_INFO_STREAM("2022_intake_server : called intake arm service to stop motors.");
    }
    else
    {
      ROS_ERROR_STREAM("2022_intake_server : failed to call intake arm service.");
    }
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
