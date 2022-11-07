#ifndef INC_SPARK_MAX_CONFIG_CONTROLLER__
#define INC_SPARK_MAX_CONFIG_CONTROLLER__
/*
 * Original joint_state_controller Author: Wim Meeussen
 */

#include <controller_interface/controller.h>
#include <realtime_tools/realtime_publisher.h>
#include <spark_max_interface/spark_max_state_interface.h>
#include <spark_max_state_msgs/SparkMaxConfig.h>
#include <periodic_interval_counter/periodic_interval_counter.h>

namespace spark_max_config_controller
{

/**
 * \brief Controller that publishes the config of all spark_maxs in a robot.
 *
 * This controller publishes the config of all resources registered to a \c hardware_interface::SparkMaxConfigInterface to a
 * topic of type \c sensor_msgs/SparkMaxConfig. The following is a basic configuration of the controller.
 *
 * \code
 * spark_max_config_controller:
 *   type: spark_max_config_controller/SparkMaxConfigController
 *   publish_rate: 50
 * \endcode
 *
 */
class SparkMaxConfigController: public controller_interface::Controller<hardware_interface::SparkMaxStateInterface>
{
	public:
		SparkMaxConfigController() : publish_rate_(0.0) {}

		virtual bool init(hardware_interface::SparkMaxStateInterface *hw,
						  ros::NodeHandle                            &root_nh,
						  ros::NodeHandle                            &controller_nh) override;
		virtual void starting(const ros::Time &time) override;
		virtual void update(const ros::Time &time, const ros::Duration & /*period*/) override;
		virtual void stopping(const ros::Time & /*time*/) override;

	private:
		std::vector<hardware_interface::SparkMaxStateHandle> spark_max_state_;
		std::shared_ptr<realtime_tools::RealtimePublisher<spark_max_state_msgs::SparkMaxConfig> > realtime_pub_;
		PeriodicIntervalCounter interval_counter_;
		double publish_rate_;
		size_t num_hw_joints_; ///< Number of joints present in the SparkMaxInterface

		std::string motorTypeToString(hardware_interface::MotorType motor_type) const;
		std::string controlTypeToString(hardware_interface::ControlType control_type) const;
		std::string arbFFUnitsToString(hardware_interface::ArbFFUnits arb_ff_units) const;
		std::string limitSwitchPolarityToString(hardware_interface::LimitSwitchPolarity limit_switch_polarity) const;
		std::string idleModeToString(hardware_interface::IdleMode idle_mode) const;
		std::string externalFollowerToString(hardware_interface::ExternalFollower external_follower) const;
		std::string sensorTypeToString(hardware_interface::SensorType sensor_type) const;
};

}

#endif