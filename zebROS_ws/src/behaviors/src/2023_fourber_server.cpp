#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <behavior_actions/Fourber2023Action.h>
#include <ddynamic_reconfigure/ddynamic_reconfigure.h>
#include <std_msgs/Float64.h>
#include <controllers_2023_msgs/FourBarSrv.h>
#include <iostream>
#include <talon_state_msgs/TalonState.h>
#include <atomic>

#define FourberINFO(x) ROS_INFO_STREAM("2023_fourber_server : " << x)
#define FourberWARN(x) ROS_WARN_STREAM("2023_fourber_server : " << x)
#define FourberERR(x) ROS_ERROR_STREAM("2023_fourber_server : " << x)

typedef behavior_actions::Fourber2023Goal fourber_ns;

constexpr std::array mode_to_string = {"INTAKE", "LOW_NODE", "MIDDLE_NODE", "HIGH_NODE"};
constexpr std::array piece_to_string = {"CUBE", "VERTICAL_CONE", "BASE_TOWARDS_US_CONE", "BASE_AWAY_US_CONE"};

/*
# Fourber = 
uint8 CUBE=0
uint8 VERTICAL_CONE=1
uint8 BASE_TOWARDS_US_CONE=2 
uint8 BASE_AWAY_US_CONE=3
uint8 piece

uint8 INTAKE_LOW=0 # should be just two places that we need to call saftey with: when intaking and when going above a certain height
uint8 HIGH=1 
uint8 saftey_position # looks up config value on where to go based on this, ignored if saftey is false

---
#result
bool success # if we got there
---
#feedback
bool success # if we got there
*/

template <class T>
void load_param_helper(const ros::NodeHandle &nh, std::string name, T &result, T default_val) {
    if (!nh.getParam(name, result))
    {
      FourberERR("Could not find" << name << ", defaulting to " << default_val);
      result = default_val;
    }
}
enum SafteyState {
  NONE,
  SAFTEY_HIGH,
  SAFTEY_LOW
};

class FourberAction2023 {

protected:

  ros::NodeHandle nh_;
  ros::NodeHandle nh_params_;
  actionlib::SimpleActionServer<behavior_actions::Fourber2023Action> as_;

  controllers_2023_msgs::FourBarSrv safety_high_req_;
  controllers_2023_msgs::FourBarSrv safety_low_req_;

  ros::ServiceClient fourbar_srv_;
  std::string action_name_;

  ddynamic_reconfigure::DDynamicReconfigure ddr_;
  ros::Subscriber fourbar_offset_sub_;
  ros::Subscriber talon_states_sub_;
  std::map<int, std::map<int, std::pair<double, bool>>> game_piece_lookup_;

  double position_offset_ = 0;
  double position_tolerance_ = 0.02;
	double fourbar_cur_position_;

  std::atomic<SafteyState> saftey_state_;
  double previous_position_;

  size_t fourbar_master_idx; 

public:

  FourberAction2023(std::string name) :
    as_(nh_, name, boost::bind(&FourberAction2023::executeCB, this, _1), false),
    nh_params_(nh_, "fourber_server_2023"),
    action_name_(name),
    ddr_(nh_params_)
  {

    fourbar_master_idx = std::numeric_limits<size_t>::max();
    const std::map<std::string, std::string> service_connection_header{{"tcp_nodelay", "1"}};
    // TODO check topic
		fourbar_srv_ = nh_.serviceClient<controllers_2023_msgs::FourBarSrv>("/frcrobot_jetson/four_bar_controller_2023/four_bar_service", false, service_connection_header);
    if (!fourbar_srv_.waitForExistence(ros::Duration(5))) {
        FourberERR("=======Could not find fourbar service========");
    }
    fourbar_offset_sub_ = nh_.subscribe("/fourbar_position_offset", 1, &FourberAction2023::heightOffsetCallback, this);
    talon_states_sub_ = nh_.subscribe("/frcrobot_jetson/talon_states",1, &FourberAction2023::talonStateCallback, this);

    load_param_helper(nh_, "position_tolerance", position_tolerance_, 0.02);
    
    // default values are guesses
    double res = -1;
    bool res_bool = false;
    // cube
    load_param_helper(nh_, "cube/intake", res, 0.0);
    load_param_helper(nh_, "cube/intake_below", res_bool, true);
    game_piece_lookup_[fourber_ns::CUBE][fourber_ns::INTAKE] = {res, res_bool};

    load_param_helper(nh_, "cube/low_node", res, 0.5);
    load_param_helper(nh_, "cube/low_node_below", res_bool, false);
    game_piece_lookup_[fourber_ns::CUBE][fourber_ns::LOW_NODE] =  {res, res_bool};

    load_param_helper(nh_, "cube/middle_node", res, 0.7);
    load_param_helper(nh_, "cube/middle_node_below", res_bool, false);
    game_piece_lookup_[fourber_ns::CUBE][fourber_ns::MIDDLE_NODE] = {res, res_bool};

    load_param_helper(nh_, "cube/high_node", res, 1.0);
    load_param_helper(nh_, "cube/high_node_below", res_bool, false);
    game_piece_lookup_[fourber_ns::CUBE][fourber_ns::HIGH_NODE] = {res, res_bool};
    // vertical cone
    load_param_helper(nh_, "vertical_cone/intake", res, 0.0);
    load_param_helper(nh_, "vertical_cone/intake_below", res_bool, true);
    game_piece_lookup_[fourber_ns::VERTICAL_CONE][fourber_ns::INTAKE] = {res, res_bool};

    load_param_helper(nh_, "vertical_cone/low_node", res, 0.5);
    load_param_helper(nh_, "vertical_cone/low_node_below", res_bool, false);
    game_piece_lookup_[fourber_ns::VERTICAL_CONE][fourber_ns::LOW_NODE] =  {res, res_bool};

    load_param_helper(nh_, "vertical_cone/middle_node", res, 0.7);
    load_param_helper(nh_, "vertical_cone/middle_node_below", res_bool, false);
    game_piece_lookup_[fourber_ns::VERTICAL_CONE][fourber_ns::MIDDLE_NODE] = {res, res_bool};

    load_param_helper(nh_, "vertical_cone/high_node", res, 1.0);
    load_param_helper(nh_, "vertical_cone/high_node_below", res_bool, false);
    game_piece_lookup_[fourber_ns::VERTICAL_CONE][fourber_ns::HIGH_NODE] = {res, res_bool};
    // cone with base toward us
    load_param_helper(nh_, "base_towards_us_cone/intake", res, 0.0);
    load_param_helper(nh_, "base_towards_us_cone/intake_below", res_bool, true);
    game_piece_lookup_[fourber_ns::BASE_TOWARDS_US_CONE][fourber_ns::INTAKE] = {res, res_bool};

    load_param_helper(nh_, "base_towards_us_cone/low_node", res, 0.5);
    load_param_helper(nh_, "base_towards_us_cone/low_node_below", res_bool, false);
    game_piece_lookup_[fourber_ns::BASE_TOWARDS_US_CONE][fourber_ns::LOW_NODE] =  {res, res_bool};

    load_param_helper(nh_, "base_towards_us_cone/middle_node", res, 0.7);
    load_param_helper(nh_, "base_towards_us_cone/middle_node_below", res_bool, false);
    game_piece_lookup_[fourber_ns::BASE_TOWARDS_US_CONE][fourber_ns::MIDDLE_NODE] = {res, res_bool};

    load_param_helper(nh_, "base_towards_us_cone/high_node", res, 1.0);
    load_param_helper(nh_, "base_towards_us_cone/high_node_below", res_bool, false);
    game_piece_lookup_[fourber_ns::BASE_TOWARDS_US_CONE][fourber_ns::HIGH_NODE] = {res, res_bool};
    // cone with base away from us
    load_param_helper(nh_, "base_away_us_cone/intake", res, 0.0);
    load_param_helper(nh_, "base_away_us_cone/intake_below", res_bool, true);
    game_piece_lookup_[fourber_ns::BASE_AWAY_US_CONE][fourber_ns::INTAKE] = {res, res_bool};
    load_param_helper(nh_, "base_away_us_cone/low_node", res, 0.5);
    load_param_helper(nh_, "base_away_us_cone/low_node_below", res_bool, false);
    game_piece_lookup_[fourber_ns::BASE_AWAY_US_CONE][fourber_ns::LOW_NODE] =  {res, res_bool};
    load_param_helper(nh_, "base_away_us_cone/middle_node", res, 0.7);
    load_param_helper(nh_, "base_away_us_cone/middle_node_below", res_bool, false);
    game_piece_lookup_[fourber_ns::BASE_AWAY_US_CONE][fourber_ns::MIDDLE_NODE] = {res, res_bool};
    load_param_helper(nh_, "base_away_us_cone/high_node", res, 1.0);
    load_param_helper(nh_, "base_away_us_cone/high_node_below", res_bool, false);
    game_piece_lookup_[fourber_ns::BASE_AWAY_US_CONE][fourber_ns::HIGH_NODE] = {res, res_bool};

    load_param_helper(nh_, "safety_high/distance", res, 0.4);
    safety_high_req_.request.position = res;
    load_param_helper(nh_, "safety_high/below", res_bool, false);
    safety_high_req_.request.below = res_bool;

    load_param_helper(nh_, "safety_intake/distance", res, 0.4);
    safety_low_req_.request.position = res;
    load_param_helper(nh_, "safety_intake/below", res_bool, true);
    safety_low_req_.request.below = res_bool;

    ddr_.publishServicesTopics();
    as_.start();
    FourberINFO("Started Fourber Action server");
  }

  ~FourberAction2023(void)
  {
  }

  // blocks until fourbar is at the correct position
  bool waitForFourbar(double position) {
    ros::Rate r = ros::Rate(10);
    
    while (true) {
      ros::spinOnce();
      FourberINFO("Waiting for fourbar");

      // if we are preempted, we probably didn't want to move the elevator to the requested location, so stop it by requesting current position
      // hopefully saves a few seconds in a match
			if (as_.isPreemptRequested() || !ros::ok()) {
        controllers_2023_msgs::FourBarSrv last_req;
        last_req.request.position = fourbar_cur_position_;
        fourbar_srv_.call(last_req);
        return false;
			}

      if (fabs(fourbar_cur_position_-position) <= position_tolerance_) {
        FourberINFO("Elevator reached position!");
        break;
      }
      r.sleep();
    }

    return true;
  }

  void executeCB(const behavior_actions::Fourber2023GoalConstPtr &goal)
  {
    ros::spinOnce();
    previous_position_ = fourbar_cur_position_;
    behavior_actions::Fourber2023Feedback feedback;
    behavior_actions::Fourber2023Result result;

    if (goal->safety_position == fourber_ns::SAFETY_HIGH || goal->safety_position == fourber_ns::SAFETY_INTAKE_LOW) {
      if (goal->safety_position == fourber_ns::SAFETY_HIGH) {
        FourberINFO("Safey HIGH mode called for fourbar");
        saftey_state_ = SafteyState::SAFTEY_HIGH;
        fourbar_srv_.call(safety_high_req_);
        if (!waitForFourbar(safety_high_req_.request.position)) {
          FourberERR("Failed calling fourber");
          feedback.success = false;
          result.success = false;
          as_.publishFeedback(feedback);
          as_.setAborted(result);
        }
        else {
          feedback.success = true;
          feedback.success = true; 
          // @todo figure out how to encode this result
          as_.publishFeedback(feedback);
          as_.setSucceeded(result);
        }
      }

      if (goal->safety_position == fourber_ns::SAFETY_INTAKE_LOW) {
        FourberINFO("Safey LOW mode called for fourbar");
        saftey_state_ = SafteyState::SAFTEY_LOW;
        fourbar_srv_.call(safety_low_req_);
        if (!waitForFourbar(safety_low_req_.request.position)) {
          FourberERR("Failed calling fourber");
          feedback.success = false;
          result.success = false;
          as_.publishFeedback(feedback);
          as_.setAborted(result);
        }
        else {
          feedback.success = true;
          feedback.success = true; 
          // @todo figure out how to encode this result
          as_.publishFeedback(feedback);
          as_.setSucceeded(result);
        } 
      }
      return;
    }

    if (goal->safety_position == fourber_ns::SAFETY_TO_NO_SAFETY) {
      saftey_state_ == SafteyState::NONE;
      if (!fourbar_srv_.call(safety_low_req_)) {
        FourberERR("Failed calling fourber");
        feedback.success = false;
        result.success = false;
        as_.publishFeedback(feedback);
        as_.setAborted(result);
      }
      else {
        feedback.success = true;
        feedback.success = true; 
        // @todo figure out how to encode this result
        as_.publishFeedback(feedback);
        as_.setSucceeded(result);
        return;
      }
    }

    // select piece, nice synatax makes loading params worth it
    double req_position = game_piece_lookup_[goal->piece][goal->mode].first;
    bool req_bool = game_piece_lookup_[goal->piece][goal->mode].second;

    // apply offset
    req_position += position_offset_;
    if (!position_offset_) {
      FourberWARN("Offset of " << position_offset_);
    }

    if (saftey_state_ == SafteyState::SAFTEY_HIGH) {
      req_position = std::max(req_position, safety_high_req_.request.position);
    }
    if (saftey_state_ == SafteyState::SAFTEY_LOW) {
      req_position = std::max(req_position, safety_low_req_.request.position);
    }

    FourberINFO("FourbERing a " << piece_to_string[goal->piece] << " to the position " << mode_to_string[goal->mode] << " and the FOURBAR to the position=" << req_position << " meters");

    // we know that saftey is set to none 
    controllers_2023_msgs::FourBarSrv req;
    req.request.position = req_position;
    req.request.below = req_bool;

    if (!fourbar_srv_.call(req)) { // somehow fourbar has failed, set status and abort to pass error up
      FourberERR("Failed to moving fourbar :(");
      feedback.success = false;
      result.success = false;
      as_.publishFeedback(feedback);
      as_.setAborted(result);
      return;
    }

    ros::Rate r = ros::Rate(10);
    while (true) {
      ros::spinOnce();
      FourberINFO("Moving fourbar");

      // if we are preempted, we probably didn't want to move the fourbar to the requested location, so stop it by requesting current position
      // hopefully saves a few seconds in a match
			if (as_.isPreemptRequested() || !ros::ok()) {
        req.request.position = fourbar_cur_position_;
        fourbar_srv_.call(req); // don't check for result because we already failed
        result.success = false;
				as_.setPreempted(result);
				return;
			}

      if (fabs(fourbar_cur_position_-req_position) <= position_tolerance_) {
        FourberINFO("Fourbar reached position!");
        break;
      }
      r.sleep();
    }

    FourberINFO("Succeeded moving Fourbar!");
    feedback.success = true;
    result.success = true;
    as_.publishFeedback(feedback);
    as_.setSucceeded(result); // not sure if code higher up wants feedback or success, so supply both
    // print_map();
    ros::spinOnce();
  }
  
  void heightOffsetCallback(const std_msgs::Float64 position_offset_msg) { 
    position_offset_ = position_offset_msg.data;
  }

  // "borrowed" from 2019 climb server
  void talonStateCallback(const talon_state_msgs::TalonState &talon_state)
  {
    // fourbar_master_idx == max of size_t at the start
    if (fourbar_master_idx >= talon_state.name.size()) // could maybe just check for > 0 
    {
      for (size_t i = 0; i < talon_state.name.size(); i++)
      {
        if (talon_state.name[i] == "four_bar_leader")
        {
          fourbar_master_idx = i;
          break;
        }
      }
      FourberERR("Can not find talong with name = " << "four_bar_leader");
    }
    if (!fourbar_master_idx == std::numeric_limits<size_t>::max()) {
      fourbar_cur_position_ = talon_state.position[fourbar_master_idx];
    }
  }

}; // FourberAction2023

int main(int argc, char** argv)
{
  ros::init(argc, argv, "fourber_server_2023");
  FourberAction2023 elevater("fourber_server_2023");
  ros::spin();
  return 0;
}
