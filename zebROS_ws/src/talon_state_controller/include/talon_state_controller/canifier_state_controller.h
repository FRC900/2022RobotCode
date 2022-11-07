/*
 * Original joint_state_controller Author: Wim Meeussen
 */

#ifndef INC_CANIFIER_STATE_CONTROLLER__
#define INC_CANIFIER_STATE_CONTROLLER__

#include <controller_interface/controller.h>
#include <realtime_tools/realtime_publisher.h>
#include <talon_interface/canifier_state_interface.h>
#include <talon_state_msgs/CANifierState.h>
#include <periodic_interval_counter/periodic_interval_counter.h>

namespace canifier_state_controller
{

/**
 * \brief Controller that publishes the state of all talon&victor motor controller on a robot.
 *
 * This controller publishes the state of all resources registered to a \c hardware_interface::CANifierStateInterface to a
 * topic of type \c sensor_msgs/CANifierState. The following is a basic configuration of the controller.
 *
 * \code
 * canifier_state_controller:
 *   type: canifier_state_controller/JointStateController
 *   publish_rate: 50
 * \endcode
 *
 */
class CANifierStateController: public controller_interface::Controller<hardware_interface::canifier::CANifierStateInterface>
{
	public:
		CANifierStateController() : publish_rate_(0.0) {}

		virtual bool init(hardware_interface::canifier::CANifierStateInterface *hw,
						  ros::NodeHandle                            &root_nh,
						  ros::NodeHandle                            &controller_nh) override;
		virtual void starting(const ros::Time &time) override;
		virtual void update(const ros::Time &time, const ros::Duration & /*period*/) override;
		virtual void stopping(const ros::Time & /*time*/) override;

	private:
		std::vector<hardware_interface::canifier::CANifierStateHandle> canifier_state_;
		std::shared_ptr<realtime_tools::RealtimePublisher<talon_state_msgs::CANifierState>> realtime_pub_;
        PeriodicIntervalCounter interval_counter_;
		double publish_rate_;
		size_t num_hw_joints_; ///< Number of joints present in the CANifierStateInterface
};
} // namespace

#endif