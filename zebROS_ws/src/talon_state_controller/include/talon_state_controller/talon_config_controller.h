
/*
 * Original joint_state_controller Author: Wim Meeussen
 */

#ifndef INC_TALON_CONFIG_CONTROLLER__
#define INC_TALON_CONFIG_CONTROLLER__

#include <controller_interface/controller.h>
#include <realtime_tools/realtime_publisher.h>
#include <talon_interface/talon_state_interface.h>
#include <talon_state_msgs/TalonConfig.h>
#include <periodic_interval_counter/periodic_interval_counter.h>

namespace talon_config_controller
{

/**
 * \brief Controller that publishes the config of all talons in a robot.
 *
 * This controller publishes the config of all resources registered to a \c hardware_interface::TalonStateInterface to a
 * topic of type \c sensor_msgs/TalonConfig. The following is a basic configuration of the controller.
 *
 * \code
 * talon_config_controller:
 *   type: talon_config_controller/TalonConfigController
 *   publish_rate: 50
 * \endcode
 *
 */
class TalonConfigController: public controller_interface::Controller<hardware_interface::TalonStateInterface>
{
	public:
		TalonConfigController() : publish_rate_(0.0) {}

		virtual bool init(hardware_interface::TalonStateInterface *hw,
						  ros::NodeHandle                         &root_nh,
						  ros::NodeHandle                         &controller_nh) override;
		virtual void starting(const ros::Time &time) override;
		virtual void update(const ros::Time &time, const ros::Duration & /*period*/) override;
		virtual void stopping(const ros::Time & /*time*/) override;

	private:
		std::vector<hardware_interface::TalonStateHandle> talon_state_;
		std::shared_ptr<realtime_tools::RealtimePublisher<talon_state_msgs::TalonConfig> > realtime_pub_;
		PeriodicIntervalCounter interval_counter_;
		double publish_rate_;
		size_t num_hw_joints_; ///< Number of joints present in the TalonInterface

		std::string limitSwitchSourceToString(const hardware_interface::LimitSwitchSource source) const;
		std::string remoteLimitSwitchSourceToString(const hardware_interface::RemoteLimitSwitchSource source) const;
		std::string limitSwitchNormalToString(const hardware_interface::LimitSwitchNormal normal) const;
		std::string feedbackDeviceToString(const hardware_interface::FeedbackDevice feedback_device) const;
		std::string remoteSensorSourceToString(const hardware_interface::RemoteSensorSource remote_sensor_source) const;
};

}
#endif