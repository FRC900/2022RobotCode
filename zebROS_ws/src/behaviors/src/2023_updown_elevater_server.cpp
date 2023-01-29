#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <behavior_actions/Elevater2023Action.h>
#include <ddynamic_reconfigure/ddynamic_reconfigure.h>
#include <std_msgs/Float64.h>
#include <controllers_2023_msgs/ElevatorSrv.h>
#include <iostream>

#define ElevaterINFO(x) ROS_INFO_STREAM("2023_elevater_server : " << x)
#define ElevaterERR(x) ROS_ERROR_STREAM("2023_elevater_server : " << x)

typedef behavior_actions::Elevater2023Goal elevater_ns;
/*
uint8 INTAKE=0
uint8 LOW_NODE=1
uint8 MIDDLE_NODE=2
uint8 HIGH_NODE=3
uint8 mode

uint8 CUBE=0
uint8 VERTICAL_CONE=1
uint8 BASE_TOWARDS_US_CONE=2 
uint8 BASE_AWAY_US_CONE=3
uint8 piece
*/
constexpr std::array mode_to_string = {"INTAKE", "LOW_NODE", "MIDDLE_NODE", "HIGH_NODE"};
constexpr std::array piece_to_string = {"CUBE", "VERTICAL_CONE", "BASE_TOWARDS_US_CONE", "BASE_AWAY_US_CONE"};

template <class T>
void load_param_helper(const ros::NodeHandle &nh, std::string name, T &result, T default_val) {
    if (!nh.getParam(name, result))
    {
      ElevaterERR("Could not find" << name << ", defaulting to " << default_val);
      result = default_val;
    }
}

class ElevaterAction2023 {

protected:

  ros::NodeHandle _nh;
  ros::NodeHandle _nh_params;
  actionlib::SimpleActionServer<behavior_actions::Elevater2023Action> _as;
  ros::ServiceClient _elevator_srv;
  std::string _action_name;
  // create message that is used to publish feedback
  behavior_actions::Elevater2023Feedback _feedback;
  behavior_actions::Elevater2023Result _result;

  // lookup is [enum for piece][enum for level]
  std::map<int, std::map<int, double>> _game_piece_lookup;

  ddynamic_reconfigure::DDynamicReconfigure _ddr;
  ros::Subscriber _elevator_offset_sub;
  double _position_offset = 0;

public:

  ElevaterAction2023(std::string name) :
    _as(_nh, name, boost::bind(&ElevaterAction2023::executeCB, this, _1), false),
    _nh_params(_nh, "elevater_server_2023"),
    _action_name(name),
    _ddr(_nh_params)
  {
    // time to load all 16 params!
    // the idea here is that the customization is good, and if values are the same than thats great
    // current mech designs do have us going to diffrent heights based on what we have, and this is essentially the lookup so that every node doesn't have to do this
    // we will never (hopefully) need more posibilites than this, so we are prepared for everything mech could come up with
    // also if we for certain pieces/heights we can change height if we notice something off

    // default values are guesses
    double res = -1;
    // cube
    load_param_helper(_nh, "cube/intake", res, 0.0);
    _game_piece_lookup[elevater_ns::CUBE][elevater_ns::INTAKE] = res;
    load_param_helper(_nh, "cube/low_node", res, 0.5);
    _game_piece_lookup[elevater_ns::CUBE][elevater_ns::LOW_NODE] = res;
    load_param_helper(_nh, "cube/middle_node", res, 0.7);
    _game_piece_lookup[elevater_ns::CUBE][elevater_ns::MIDDLE_NODE] = res;
    load_param_helper(_nh, "cube/high_node", res, 1.0);
    _game_piece_lookup[elevater_ns::CUBE][elevater_ns::HIGH_NODE] = res;
    // vertical cone
    load_param_helper(_nh, "vertical_cone/intake", res, 0.0);
    _game_piece_lookup[elevater_ns::VERTICAL_CONE][elevater_ns::INTAKE] = res;
    load_param_helper(_nh, "vertical_cone/low_node", res, 0.5);
    _game_piece_lookup[elevater_ns::VERTICAL_CONE][elevater_ns::LOW_NODE] = res;
    load_param_helper(_nh, "vertical_cone/middle_node", res, 0.7);
    _game_piece_lookup[elevater_ns::VERTICAL_CONE][elevater_ns::MIDDLE_NODE] = res;
    load_param_helper(_nh, "vertical_cone/high_node", res, 0.5);
    _game_piece_lookup[elevater_ns::VERTICAL_CONE][elevater_ns::HIGH_NODE] = res;
    // cone with base toward us
    load_param_helper(_nh, "base_towards_us_cone/intake", res, 0.0);
    _game_piece_lookup[elevater_ns::BASE_TOWARDS_US_CONE][elevater_ns::INTAKE] = res;
    load_param_helper(_nh, "base_towards_us_cone/low_node", res, 0.5);
    _game_piece_lookup[elevater_ns::BASE_TOWARDS_US_CONE][elevater_ns::LOW_NODE] = res;
    load_param_helper(_nh, "base_towards_us_cone/middle_node", res, 0.7);
    _game_piece_lookup[elevater_ns::BASE_TOWARDS_US_CONE][elevater_ns::MIDDLE_NODE] = res;
    load_param_helper(_nh, "base_towards_us_cone/high_node", res, 1.0);
    _game_piece_lookup[elevater_ns::BASE_TOWARDS_US_CONE][elevater_ns::HIGH_NODE] = res;
    // cone with base away from us
    load_param_helper(_nh, "base_away_us_cone/intake", res, 0.0);
    _game_piece_lookup[elevater_ns::BASE_AWAY_US_CONE][elevater_ns::INTAKE] = res;
    load_param_helper(_nh, "base_away_us_cone/low_node", res, 0.5);
    _game_piece_lookup[elevater_ns::BASE_AWAY_US_CONE][elevater_ns::LOW_NODE] = res;
    load_param_helper(_nh, "base_away_us_cone/middle_node", res, 0.7);
    _game_piece_lookup[elevater_ns::BASE_AWAY_US_CONE][elevater_ns::MIDDLE_NODE] = res;
    load_param_helper(_nh, "base_away_us_cone/high_node", res, 1.0);
    _game_piece_lookup[elevater_ns::BASE_AWAY_US_CONE][elevater_ns::HIGH_NODE] = res;

    ElevaterINFO("Game Piece params");
    for(const auto& elem : _game_piece_lookup)
    {
      std::cout << elem.first << "\n";
      for (const auto& sub_elem : elem.second) {
        std::cout << sub_elem.first << " " << sub_elem.second << "\n";
      }
      std::cout << "\n\n";
    }

    const std::map<std::string, std::string> service_connection_header{{"tcp_nodelay", "1"}};
    // TODO check topic
		_elevator_srv = _nh.serviceClient<controllers_2023_msgs::ElevatorSrv>("/frcrobot_jetson/elevator_service", false, service_connection_header);
    if (!_elevator_srv.waitForExistence(ros::Duration(5))) {
        ElevaterERR("=======Could not find elevator service========");
    }
    _elevator_offset_sub = _nh.subscribe("/elevator_position_offset", 1, &ElevaterAction2023::heightOffsetCallback, this);
    
    _ddr.registerVariable<double>("CUBE_intake", &_game_piece_lookup[elevater_ns::CUBE][elevater_ns::INTAKE], "", 0, 4);
    _ddr.registerVariable<double>("CUBE_low_node", &_game_piece_lookup[elevater_ns::CUBE][elevater_ns::LOW_NODE], "", 0, 4);
    _ddr.registerVariable<double>("CUBE_middle_node", &_game_piece_lookup[elevater_ns::CUBE][elevater_ns::MIDDLE_NODE], "", 0, 4);
    _ddr.registerVariable<double>("CUBE_high_node", &_game_piece_lookup[elevater_ns::CUBE][elevater_ns::HIGH_NODE], "", 0, 4);

    _ddr.registerVariable<double>("VERTICAL_CONE_intake", &_game_piece_lookup[elevater_ns::CUBE][elevater_ns::INTAKE], "", 0, 4);
    _ddr.registerVariable<double>("VERTICAL_CONE_low_node", &_game_piece_lookup[elevater_ns::VERTICAL_CONE][elevater_ns::LOW_NODE], "", 0, 4);
    _ddr.registerVariable<double>("VERTICAL_CONE_middle_node", &_game_piece_lookup[elevater_ns::VERTICAL_CONE][elevater_ns::MIDDLE_NODE], "", 0, 4);
    _ddr.registerVariable<double>("VERTICAL_CONE_high_node", &_game_piece_lookup[elevater_ns::VERTICAL_CONE][elevater_ns::HIGH_NODE], "", 0, 4);

    _ddr.registerVariable<double>("BASE_TOWARDS_US_CONE_intake", &_game_piece_lookup[elevater_ns::BASE_TOWARDS_US_CONE][elevater_ns::INTAKE], "", 0, 4);
    _ddr.registerVariable<double>("BASE_TOWARDS_US_CONE_low_node", &_game_piece_lookup[elevater_ns::BASE_TOWARDS_US_CONE][elevater_ns::LOW_NODE], "", 0, 4);
    _ddr.registerVariable<double>("BASE_TOWARDS_US_CONE_middle_node", &_game_piece_lookup[elevater_ns::BASE_TOWARDS_US_CONE][elevater_ns::MIDDLE_NODE], "", 0, 4);
    _ddr.registerVariable<double>("BASE_TOWARDS_US_CONE_high_node", &_game_piece_lookup[elevater_ns::BASE_TOWARDS_US_CONE][elevater_ns::HIGH_NODE], "", 0, 4);

    _ddr.registerVariable<double>("BASE_AWAY_US_CONE_intake", &_game_piece_lookup[elevater_ns::BASE_AWAY_US_CONE][elevater_ns::INTAKE], "", 0, 4);
    _ddr.registerVariable<double>("BASE_AWAY_US_CONE_low_node", &_game_piece_lookup[elevater_ns::BASE_AWAY_US_CONE][elevater_ns::LOW_NODE], "", 0, 4);
    _ddr.registerVariable<double>("BASE_AWAY_US_CONE_middle_node", &_game_piece_lookup[elevater_ns::BASE_AWAY_US_CONE][elevater_ns::MIDDLE_NODE], "", 0, 4);
    _ddr.registerVariable<double>("BASE_AWAY_US_CONE_high_node", &_game_piece_lookup[elevater_ns::BASE_AWAY_US_CONE][elevater_ns::HIGH_NODE], "", 0, 4);

    _ddr.publishServicesTopics();
    _as.start();
    ElevaterINFO("Started Elevater Action server");
  }

  ~ElevaterAction2023(void)
  {
  }

  void print_map() {
    for(const auto& elem : _game_piece_lookup)
    {
      std::cout << elem.first << "\n";
      for (const auto& sub_elem : elem.second) {
        std::cout << sub_elem.first << " " << sub_elem.second << "\n";
      }
      std::cout << "\n\n";
    }
  }

  void executeCB(const behavior_actions::Elevater2023GoalConstPtr &goal)
  {
    ros::spinOnce();
    // select piece, nice synatax makes loading params worth it
    double position = _game_piece_lookup[goal->piece][goal->mode];

    // apply offset
    position += _position_offset;
    ElevaterINFO("Moving a " << piece_to_string[goal->piece] << " to the position " << mode_to_string[goal->mode] << " and the ELEVATOR to the position=" << position);

    assert(position >= 0); // probably done in elevator server also 
    
    controllers_2023_msgs::ElevatorSrv req;
    req.request.position = position;

    if (_elevator_srv.call(req)) {
      ElevaterINFO("Succeeded moving elevator!");
      _feedback.success = true;
      _result.success = true;
      _as.publishFeedback(_feedback);
      _as.setSucceeded(_result); // not sure if code higher up wants feedback or success, so supply both
    }
    else { // somehow elevator has failed, set status and abort to pass error up
      ElevaterERR("Failed to moving elevator :(");
      _feedback.success = false;
      _result.success = false;
      _as.publishFeedback(_feedback);
      _as.setAborted(_result);
    }
    // print_map();
    ros::spinOnce();
  }
  
  void heightOffsetCallback(const std_msgs::Float64 speed_offset_msg) { 
    _position_offset = speed_offset_msg.data;
  }

}; // ElevaterAction2023

int main(int argc, char** argv)
{
  ros::init(argc, argv, "elevater_server_2023");
  ElevaterAction2023 elevater("elevater_server_2023");
  ros::spin();
  return 0;
}
