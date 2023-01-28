#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <behavior_actions/Elevater2023Action.h>
#include <ddynamic_reconfigure/ddynamic_reconfigure.h>
#include <std_msgs/Float64.h>
#include <controllers_2023_msgs/ElevatorSrv.h>

struct GamePiece { 
  double intake;
  double low_node;
  double middle_node;
  double high_node;
};
struct Cube : GamePiece {}; 
struct VerticalCone : GamePiece {};
struct BaseTowardsUsCone : GamePiece {};
struct BaseAwayUsCone : GamePiece {};

#define ElevaterINFO(x) ROS_INFO_STREAM("2022_shooter_server : " << x)

class ElevaterAction2023
{
protected:

  ros::NodeHandle _nh;
  ros::NodeHandle _nh_params;
  actionlib::SimpleActionServer<behavior_actions::Elevater2023Action> _as;
  ros::ServiceClient _elevator_srv;
  std::string _action_name;
  // create message that is used to publish feedback
  behavior_actions::Elevater2023Feedback _feedback;

  // structs for holding the config values
  Cube _cube;
  VerticalCone _vertical_cone;
  BaseTowardsUsCone _base_towards_us_cone;
  BaseAwayUsCone _base_away_us_cone;

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
    
    const std::map<std::string, std::string> service_connection_header{{"tcp_nodelay", "1"}};
    // TODO check topic
		_elevator_srv = _nh.serviceClient<controllers_2023_msgs::ElevatorSrv>("/frcrobot_jetson/elevator_service", false, service_connection_header);
    _elevator_offset_sub = _nh.subscribe("/frcrobot_jetson/talon_states", 1, &ElevaterAction2023::heightOffsetCallback, this);
    
    _ddr.registerVariable<double>("cube_high_node", &_cube.high_node, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);
    _ddr.registerVariable<double>("cube_middle_node", &_cube.middle_node, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);
    _ddr.registerVariable<double>("cube_low_node", &_cube.low_node, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);
    _ddr.registerVariable<double>("cube_node", &_cube.intake, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);

    _ddr.registerVariable<double>("cube_high_node", &_vertical_cone.high_node, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);
    _ddr.registerVariable<double>("cube_middle_node", &_vertical_cone.middle_node, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);
    _ddr.registerVariable<double>("cube_low_node", &_vertical_cone.low_node, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);
    _ddr.registerVariable<double>("cube_node", &_vertical_cone.intake, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);
 
    _ddr.registerVariable<double>("cube_high_node", &_cube.high_node, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);
    _ddr.registerVariable<double>("cube_middle_node", &_cube.middle_node, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);
    _ddr.registerVariable<double>("cube_low_node", &_cube.low_node, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);
    _ddr.registerVariable<double>("cube_node", &_cube.intake, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);

    _ddr.registerVariable<double>("cube_high_node", &_cube.high_node, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);
    _ddr.registerVariable<double>("cube_middle_node", &_cube.middle_node, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);
    _ddr.registerVariable<double>("cube_low_node", &_cube.low_node, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);
    _ddr.registerVariable<double>("cube_node", &_cube.intake, "Speed of lower wheel (formerly high_goal_speed)", 0, 4);

    _ddr.publishServicesTopics();
    _as.start();
  }

  ~ElevaterAction2023(void)
  {
  }

  void executeCB(const behavior_actions::Elevater2023GoalConstPtr &goal)
  {
    ROS_WARN_STREAM("Callback for updown elevater!");
    // select piece
    
    GamePiece current_piece;
    if (goal->piece == goal->CUBE) {
      current_piece = _cube;
    }
    else if (goal->piece == goal->VERTICAL_CONE) {
      current_piece = _vertical_cone;
    }
    else if (goal->piece == goal->BASE_TOWARDS_US_CONE) {
      current_piece = _base_towards_us_cone;
    }
    else if (goal->piece == goal->BASE_AWAY_US_CONE) {
      current_piece = _base_away_us_cone;
    }

    // select mode for piece
    double height = -1;
    if (goal->mode == goal->INTAKE) {
      height = current_piece.intake;
    }
    else if (goal->mode == goal->LOW_NODE) {
      height = current_piece.low_node;
    }
    else if (goal->mode == goal->MIDDLE_NODE) {
      height = current_piece.middle_node;
    }
    else if (goal->mode == goal->HIGH_NODE) {
      height = current_piece.high_node;
    }

    ROS_WARN_STREAM("Height is " << height);
    
    controllers_2023_msgs::ElevatorSrvRequest req;
    // req.position 
    //_elevator_srv.call();
    /* 
    ros::Rate r(100);
    while (ros::ok()) {
      ros::spinOnce();
      if (_as.isPreemptRequested() || !ros::ok())
      {
        _as.publishFeedback(_feedback);
        ElevaterINFO(" : Preempted");
        // set the action state to preempted
        _as.setPreempted();
        break;
      }

      _feedback.close_enough = good_samples > shooter_wheel_checks_;
      _as.publishFeedback(_feedback);
      r.sleep();
    
    _as.setSucceeded();
    */
  }
  
  void heightOffsetCallback(const std_msgs::Float64 speed_offset_msg) { 
    _position_offset = speed_offset_msg.data;
  }

};

int main(int argc, char** argv)
{
  ros::init(argc, argv, "elevater_server_2023");
  ElevaterAction2023 elevater("elevater_server_2023");
  ros::spin();

  return 0;
}
