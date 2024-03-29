#ifndef DYNAMIC_ARM_CONTROLLER
#define DYNAMIC_ARM_CONTROLLER

#include <ros/ros.h>
#include <realtime_tools/realtime_buffer.h>
#include <controller_interface/multi_interface_controller.h>
#include <talon_controllers/talon_controller_interface.h> // "
#include <pluginlib/class_list_macros.h> //to compile as a controller
#include "controllers_2022_msgs/DynamicArmSrv.h"
#include <std_srvs/Trigger.h>
#include <dynamic_reconfigure_wrapper/dynamic_reconfigure_wrapper.h> // TODO change to use ddynamic_reconfigure
#include <controllers_2022/DynamicArmConfig.h>
#include <std_msgs/Bool.h>

namespace dynamic_arm_controller
{

  class DynamicArmCommand
  {
  public:
    DynamicArmCommand()
    {
      data_ = 0.0;
      profile_ = 0; // only for motion magic
      use_percent_output_ = true;
    }
    DynamicArmCommand(double data, bool use_percent_output, uint8_t profile)
    {
      data_ = data;
      profile_ = profile;
      use_percent_output_ = use_percent_output;
    }
    double GetData() const
    {
    return data_;
    }
    bool GetUsingPercentOutput() const
    {
    return use_percent_output_;
    }
    uint8_t GetProfile() const
    {
    return profile_;
    }
    void SetData(double data)
    {
      data_ = data;
    }


  private:
    double data_;
    bool use_percent_output_;
    uint8_t profile_;
  };

  class DynamicArmController : public controller_interface::MultiInterfaceController<hardware_interface::TalonCommandInterface>
  {
  public:
    DynamicArmController()
    {
    }

    virtual bool init(hardware_interface::RobotHW *hw,
                      ros::NodeHandle             &root_nh,
                      ros::NodeHandle             &controller_nh) override;
    virtual void starting(const ros::Time &time) override;
    virtual void update(const ros::Time & time, const ros::Duration& period) override;
    virtual void stopping(const ros::Time &time) override;

    bool cmdService(controllers_2022_msgs::DynamicArmSrv::Request &req,
                    controllers_2022_msgs::DynamicArmSrv::Response &res);
    bool zeroService(std_srvs::Trigger::Request  &req,
                     std_srvs::Trigger::Response &res);

    // void callback(dynamic_arm_controller::DynamicArmConfig &config, uint32_t level); // This was in the 2019 elevator controller, not sure if we need it

  private:
    talon_controllers::TalonControllerInterface dynamic_arm_joint_; //interface for the talon joint

    realtime_tools::RealtimeBuffer<DynamicArmCommand> command_buffer_; // this is the buffer for ommands to be published
    ros::ServiceServer dynamic_arm_service_; //service for receiving commands
    ros::ServiceServer dynamic_arm_zeroing_service_; //service for zeroing

    ros::Publisher zeroed_publisher_;
  bool zeroed_;
  bool last_zeroed_;
  bool do_zero_ = false;

  double current_threshold_;
  int max_current_iterations_;
  int current_iterations_{0};

  DynamicReconfigureWrapper<DynamicArmConfig> dynamic_reconfigure_server_;
  DynamicArmConfig config_;

  ros::Time last_time_down_;
  };
}

#endif
