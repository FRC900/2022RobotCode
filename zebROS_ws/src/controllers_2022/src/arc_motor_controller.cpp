#include <ros/ros.h>
#include <realtime_tools/realtime_buffer.h> //code for real-time buffer - stop multple things writing to same variable at same time

//controller interfaces
#include <controller_interface/multi_interface_controller.h>
#include <hardware_interface/joint_command_interface.h>
#include <talon_controllers/talon_controller_interface.h>


#include <controllers_2022_msgs/ArcMotorSrv.h>
#include <std_srvs/SetBool.h>
#include <pluginlib/class_list_macros.h> //to compile as a controller

namespace arc_motor_controller
{
class ArcMotorController : public controller_interface::MultiInterfaceController<hardware_interface::PositionJointInterface, hardware_interface::TalonCommandInterface>
{

public:
    ArcMotorController()
    {
    }

    bool init(hardware_interface::RobotHW *hw,
                                ros::NodeHandle                 &/*root_nh*/,
                                ros::NodeHandle                 &controller_nh)
    {
        hardware_interface::TalonCommandInterface *const talon_command_iface = hw->get<hardware_interface::TalonCommandInterface>();
        hardware_interface::PositionJointInterface *const pos_joint_iface = hw->get<hardware_interface::PositionJointInterface>();


        ROS_INFO("Initialized arc motor joint");

        //Initialize your ROS server
        arc_motor_service_ = controller_nh.advertiseService("arc_motor_command", &ArcMotorController::cmdService, this);

        return true;
    }

    void starting(const ros::Time &/*time*/) {
        //give command buffer(s) an initial value
        percent_out_cmd_buffer_.writeFromNonRT(0.0);
        forward_disabled_.writeFromNonRT(false);
    }

    void update(const ros::Time &/*time*/, const ros::Duration &/*period*/) {
        arc_motor_joint_.setCommand(percent_out_cmd_buffer_.readFromRT());
    }

    void stopping(const ros::Time &/*time*/) {
    }

private:

    talon_controllers::TalonPercentOutputControllerInterface arc_motor_joint_;//arc motor
    realtime_tools::RealtimeBuffer<double> percent_out_cmd_buffer_;
    ros::ServiceServer arc_motor_service_;

    realtime_tools::RealtimeBuffer<bool> forward_disabled_; //set to true by the indexer server when it's finishing up properly storing a ball, to ensure the proper gap

    bool cmdService(controllers_2022_msgs::ArcMotorSrv::Request &req, controllers_2022_msgs::ArcMotorSrv::Response &/*response*/) {
        if(isRunning())
        {
            //assign request value to command buffer(s)
            percent_out_cmd_buffer_.writeFromNonRT(req.percent_out);
        }
        else
        {
            ROS_ERROR_STREAM("Can't accept new commands. ArcMotorController is not running.");
            return false;
        }
        return true;
    }


}; //class
}//namespace

//DON'T FORGET TO EXPORT THE CLASS SO CONTROLLER_MANAGER RECOGNIZES THIS AS A TYPE
PLUGINLIB_EXPORT_CLASS(arc_motor_controller::ArcMotorController, controller_interface::ControllerBase)
