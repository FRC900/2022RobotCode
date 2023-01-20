//HPP CONTENTS INTO CPP
#ifndef ELEVATOR_CONTROLLER_2023
#define ELEVATOR_CONTROLLER_2023

//added _2023 to the two lines above ^

#include <ros/ros.h>
#include <hardware_interface/joint_command_interface.h>
#include <realtime_tools/realtime_buffer.h>
#include <controller_interface/multi_interface_controller.h>
#include <talon_controllers/talon_controller_interface.h> // "
#include <pluginlib/class_list_macros.h> //to compile as a controller
#include "controllers_2023_msgs/ElevatorSrv.h"
#include <dynamic_reconfigure_wrapper/dynamic_reconfigure_wrapper.h>
#include <controllers_2023/ElevatorConfig.h>
#include "ddynamic_reconfigure.h

namespace elevator_controller_2023
{

	class ElevatorCommand_2023
{
	public:
		ElevatorCommand_2023()
		{
		  position_ = 0;
		}
		ElevatorCommand_2023(double position)
		{
		  position_ = position;
		}
		double GetPosition() const
		{
		return position_;
		}


	private:
		double position_;
}
;
//this is the actual controller, so it stores all of the  update() functions and the actual handle from the joint interface
//if it was only one type, controller_interface::Controller<TalonCommandInterface> here
class ElevatorController_2023 : public controller_interface::MultiInterfaceController<hardware_interface::TalonCommandInterface>
{
        public:
            ElevatorController_2023()
            {
            }

            //should this be hardware_interface::TalonCommandInterface instead? What's the reason to import RobotHW then get CommandInterface from that instead of just importing TalonCommandIface?
            //answer to my question: the TalonCommandInterface is passed in if it's not a multiInterfaceController, and just one kind of joint is made!
            virtual bool init(hardware_interface::RobotHW *hw,
                              ros::NodeHandle             &root_nh,
                              ros::NodeHandle             &controller_nh) override;
            virtual void starting(const ros::Time &time) override;
            virtual void update(const ros::Time & time, const ros::Duration& period) override;
            virtual void stopping(const ros::Time &time) override;

            bool cmdService(controllers_2023_msgs::ElevatorSrv::Request &req,
			                controllers_2023_msgs::ElevatorSrv::Response &res);

			void callback(elevator_controller_2023::ElevatorConfig &config, uint32_t level);

        private:
            talon_controllers::TalonControllerInterface elevator_joint_; //interface for the talon joint

            realtime_tools::RealtimeBuffer<ElevatorCommand_2023> position_command_; //this is the buffer for percent output commands to be published
            ros::ServiceServer elevator_service_; //service for receiving commands

			bool zeroed_;
			bool last_zeroed_;
			double last_position_;
			//double last_setpoint_;
			hardware_interface::TalonMode last_mode_;

			ros::Time last_time_down_;
			
			ElevatorConfig config_;

			

			std::atomic<double_t> arb_feed_forward_up_high;
			std::atomic<double_t> arb_feed_forward_up_low;
			std::atomic<double_t> elevator_zeroing_percent_output;
			std::atomic<double_t> elevator_zeroing_timeout;
			std::atomic<double_t> stage_2_height;
			std::atomic<double_t> motion_magic_velocity_slow;
			std::atomic<double_t> motion_magic_acceleration_slow;
			std::atomic<int_t> motion_s_curve_strength;
			
			ddynamic_reconfigure::DDynamicReconfigure ddr_;
			
			ddr_.registerVariable<double_t>
				("arb_feed_forward_up_high",
				[this]() { return param_var_name_.load();},
				[this](double_t b) { param_var_name_.store(b);},
				 "Arb feedforward up high");
			
			ddr_.registerVariable<double_t>
				("arb_feed_forward_up_low",
				[this]() { return param_var_name_.load();},
				[this](double_t b) { param_var_name_.store(b);},
				 "Arb feedforward up low");
			
			ddr_.registerVariable<double_t>
				("elevator_zeroing_percent_output",
				[this]() { return param_var_name_.load();},
				[this](double_t b) { param_var_name_.store(b);},
				 "Elevator Zeroing Percent Output");
			
			ddr_.registerVariable<double_t>
				("elevator_zeroing_timeout",
				[this]() { return param_var_name_.load();},
				[this](double_t b) { param_var_name_.store(b);},
				 "Elevator Zeroing Timeout");
			
			ddr_.registerVariable<double_t>
				("stage_2_height",
				[this]() { return param_var_name_.load();},
				[this](double_t b) { param_var_name_.store(b);},
				 "Stage 2 Height");

			ddr_.registerVariable<double_t>
				("motion_magic_velocity_slow",
				[this]() { return param_var_name_.load();},
				[this](double_t b) { param_var_name_.store(b);},
				 "Slow Motion Magic Velocity");	

			ddr_.registerVariable<double_t>
				("motion_s_curve_strength",
				[this]() { return param_var_name_.load();},
				[this](double_t b) { param_var_name_.store(b);},
				 "Slow Motion Magic Acceleration");
			
			ddr_.registerVariable<int_t>
				("motion_s_curve_strength",
				[this]() { return param_var_name_.load();},
				[this](int_t b) { param_var_name_.store(b);},
				 "S Curve Strength");





}; //class


} //namespace
#endif

//END OF HPP CONTENTS


//#include "controllers_2019/elevator_controller.h"
// ^ not needed since the hpp contents is literally:   controllers_2019/elevator_controller.h
namespace elevator_controller_2023
{
bool ElevatorController_2023::init(hardware_interface::RobotHW *hw,
							  ros::NodeHandle             &/*root_nh*/,
							  ros::NodeHandle             &controller_nh)
{
	//create the interface used to initialize the talon joint
	hardware_interface::TalonCommandInterface *const talon_command_iface = hw->get<hardware_interface::TalonCommandInterface>();

	//hardware_interface::PositionJointInterface *const pos_joint_iface = hw->get<hardware_interface::PositionJointInterface>();

	if (!controller_nh.getParam("arb_feed_forward_high", config_.arb_feed_forward_high))
	{
		ROS_ERROR("Could not find arb_feed_forward_high");
		return false;
	}

	if (!controller_nh.getParam("arb_feed_forward_low", config_.arb_feed_forward_low))
	{
		ROS_ERROR("Could not find arb_feed_forward_low");
		return false;
	}

	if (!controller_nh.getParam("elevator_zeroing_percent_output", config_.elevator_zeroing_percent_output))
	{
		ROS_ERROR("Could not find elevator_zeroing_percent_output");
		return false;
	}

	if (!controller_nh.getParam("elevator_zeroing_timeout", config_.elevator_zeroing_timeout))
	{
		ROS_ERROR("Could not find elevator_zeroing_timeout");
		return false;
	}

	if (!controller_nh.getParam("stage_2_height", config_.stage_2_height))
	{
		ROS_ERROR("Could not find stage_2_height");
		return false;
	}

	if (!controller_nh.getParam("motion_magic_velocity", config_.motion_magic_velocity))
	{
		ROS_ERROR("Could not find motion_magic_velocity");
		return false;
	}


	if (!controller_nh.getParam("motion_magic_acceleration", config_.motion_magic_acceleration))
	{
		ROS_ERROR("Could not find motion_magic_acceleration");
		return false;
	}


	/*
	if (!controller_nh.getParam("motion_s_curve_strength",config_.motion_s_curve_strength))
	{
		ROS_ERROR("Could not find motion_s_curve_strength");
		return false;
	}*/
	//get config values for the elevator talon
	XmlRpc::XmlRpcValue elevator_params;
	if (!controller_nh.getParam("elevator_joint", elevator_params))
	{
		ROS_ERROR("Could not find elevator_joint");
		return false;
	}

	//initialize the elevator joint
	if(!elevator_joint_.initWithNode(talon_command_iface, nullptr, controller_nh, elevator_params))
	{
		ROS_ERROR("Cannot initialize elevator joint!");
	}

	elevator_service_ = controller_nh.advertiseService("elevator_service", &ElevatorController_2023::cmdService, this);

	dynamic_reconfigure_server_.init(controller_nh, config_);

	return true;
}

void ElevatorController_2023::starting(const ros::Time &time) {
	zeroed_ = false;
	last_zeroed_  = false;
	last_time_down_ = ros::Time::now();
	last_mode_ = hardware_interface::TalonMode_Disabled;
	last_position_ = -1; // give nonsense position to force update on first time through update()
	position_command_.writeFromNonRT(ElevatorCommand_2023());
}

void ElevatorController_2023::update(const ros::Time &/*time*/, const ros::Duration &/*duration*/)
{
	// If we hit the limit switch, (re)zero the position.
	if (elevator_joint_.getReverseLimitSwitch())
	{
		ROS_INFO_THROTTLE(2, "ElevatorController_2023 : hit limit switch");
		if (!last_zeroed_)
		{
			zeroed_ = true;
			last_zeroed_ = true;
			elevator_joint_.setSelectedSensorPosition(0);
			elevator_joint_.setDemand1Type(hardware_interface::DemandType_ArbitraryFeedForward);
			elevator_joint_.setDemand1Value(config_.arb_feed_forward_low);
		}
	}
	else
	{
		last_zeroed_ = false;
	}


	if (zeroed_) // run normally, seeking to various positions
	{
		elevator_joint_.setMode(hardware_interface::TalonMode_MotionMagic);
		if (((elevator_joint_.getMode()) == (hardware_interface::TalonMode_Disabled)) && ((last_mode_) != (hardware_interface::TalonMode_Disabled)))
		{
			position_command_.writeFromNonRT(ElevatorCommand (elevator_joint_.getPosition()));
		}
		const ElevatorCommand_2023 setpoint = *(position_command_.readFromRT());
		elevator_joint_.setCommand(setpoint.GetPosition());

		//if we're not climbing, add an arbitrary feed forward to hold the elevator up
		if(!setpoint.GetGoSlow())
		{
			elevator_joint_.setMotionAcceleration(config_.motion_magic_acceleration);
			elevator_joint_.setMotionCruiseVelocity(config_.motion_magic_velocity);
			elevator_joint_.setPIDFSlot(0);
			// Add arbitrary feed forward for upwards motion
			// We could have arb ff for both up and down, but seems
			// easier (and good enough) to tune PID for down motion
			// and add an arb FF correction for up

			if(elevator_joint_.getPosition() >= config_.stage_2_height && last_position_ <= config_.stage_2_height) {
				elevator_joint_.setDemand1Type(hardware_interface::DemandType_ArbitraryFeedForward);
				elevator_joint_.setDemand1Value(config_.arb_feed_forward_high);
			}
			else if (elevator_joint_.getPosition() <= config_.stage_2_height && last_position_ >= config_.stage_2_height) {
				elevator_joint_.setDemand1Type(hardware_interface::DemandType_ArbitraryFeedForward);
				elevator_joint_.setDemand1Value(config_.arb_feed_forward_low);
			}


			//for now, up and down PID is the same, so slot 1 is used for climbing
			/*
			if(last_setpoint_ != setpoint) {
				if(setpoint > elevator_joint_.getPosition()) {
					elevator_joint_.setPIDFSlot(0);
				}
				else {
					elevator_joint_.setPIDFSlot(1);
				}
			}
			last_setpoint_ = setpoint;
			*/
		}
		
	}
	else
	{
		elevator_joint_.setMode(hardware_interface::TalonMode_PercentOutput);
		if ((ros::Time::now() - last_time_down_).toSec() < config_.elevator_zeroing_timeout)
		{
			// Not yet zeroed. Run the elevator down slowly until the limit switch is set.
			ROS_INFO_STREAM_THROTTLE(0.25, "Zeroing elevator with percent output: "
									 << config_.elevator_zeroing_percent_output);
			elevator_joint_.setCommand(config_.elevator_zeroing_percent_output);
		}
		//check stream
		else
		{
			// Stop moving to prevent motor from burning out
			ROS_INFO_STREAM_THROTTLE(0.25, "Elevator timed out");
			elevator_joint_.setCommand(0);
		}

		// If not zeroed but enabled, check if the arm is moving down
		if ((elevator_joint_.getMode() == hardware_interface::TalonMode_Disabled) ||
			(elevator_joint_.getSpeed() < 0)) // TODO : param
		{
			// If moving down, or disabled and thus not expected to move down, reset the timer
			last_time_down_ = ros::Time::now();
		}
	}
	last_position_ = elevator_joint_.getPosition();
	last_mode_ = elevator_joint_.getMode();
}

void ElevatorController_2023::stopping(const ros::Time &/*time*/)
{
}

//Command Service Function
bool ElevatorController_2023::cmdService(controllers_2023_msgs::ElevatorSrv::Request  &req,
									controllers_2023_msgs::ElevatorSrv::Response &/*response*/)
{
	if (req.position > 1.7) // TODO : get real measurement, make a param
	{
		ROS_ERROR_STREAM("Elevator controller: req.position too large : " << req.position);
		return false;
	}
	if(isRunning())
	{
		//adjust talon mode, arb feed forward, and PID slot appropriately
		
		else
		{ //reset to default -- although, this should never be called after endgame
			ROS_INFO("Elevator controller: normal peak output");
		}

		position_command_.writeFromNonRT(ElevatorCommand_2023 (req.position));
		ROS_INFO_STREAM("writing " << std::to_string(req.position) << " to elevator controller");
	}
	else
	{
		ROS_ERROR_STREAM("Can't accept new commands. ElevatorController_2023 is not running.");
		return false;
	}
	return true;
}

void ElevatorController_2023::callback(elevator_controller_2023::ElevatorConfig &config, uint32_t level)
{
	(void)level;
	config_ = config;
}

}//namespace

//DON'T FORGET TO EXPORT THE CLASS SO CONTROLLER_MANAGER RECOGNIZES THIS AS A TYPE
PLUGINLIB_EXPORT_CLASS(elevator_controller_2023::ElevatorController_2023, controller_interface::ControllerBase)
