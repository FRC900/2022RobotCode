/*
 * Original joint_state_controller Author: Wim Meeussen
 */

#ifndef INC_TALON_STATE_CONTROLLER__
#define INC_TALON_STATE_CONTROLLER__

#include <controller_interface/controller.h>
#include <realtime_tools/realtime_buffer.h>
#include <realtime_tools/realtime_publisher.h>
#include <talon_interface/talon_state_interface.h>
#include <talon_state_msgs/TalonState.h>
#include <periodic_interval_counter/periodic_interval_counter.h>

namespace talon_state_controller
{

/**
 * \brief Controller that publishes the state of all talon&victor motor controller on a robot.
 *
 * This controller publishes the state of all resources registered to a \c hardware_interface::TalonStateInterface to a
 * topic of type \c sensor_msgs/TalonState. The following is a basic configuration of the controller.
 *
 * \code
 * talon_state_controller:
 *   type: talon_state_controller/JointStateController
 *   publish_rate: 50
 * \endcode
 *
 */
class TalonStateController: public controller_interface::Controller<hardware_interface::TalonStateInterface>
{
	public:
		TalonStateController() : publish_rate_(0.0) {}

		bool init(hardware_interface::TalonStateInterface *hw,
						  ros::NodeHandle                         &root_nh,
						  ros::NodeHandle                         &controller_nh) override;
		void starting(const ros::Time &time) override;
		void update(const ros::Time &time, const ros::Duration & /*period*/) override;
		void stopping(const ros::Time & /*time*/) override;

	private:
		std::vector<hardware_interface::TalonStateHandle> talon_state_;
		std::shared_ptr<realtime_tools::RealtimePublisher<talon_state_msgs::TalonState> > realtime_pub_;
		PeriodicIntervalCounter interval_counter_;
		double publish_rate_;
		size_t num_hw_joints_; ///< Number of joints present in the TalonStateInterface
};
} // namespace

namespace state_listener_controller
{
class TalonStateListenerController :
	public controller_interface::Controller<hardware_interface::RemoteTalonStateInterface>
{
	public:
		TalonStateListenerController();
		~TalonStateListenerController();

		bool init(hardware_interface::RemoteTalonStateInterface *hw, ros::NodeHandle &n) override;
		void starting(const ros::Time & /*time*/) override;
		void stopping(const ros::Time & /*time*/) override;
		void update(const ros::Time & /*time*/, const ros::Duration & /*period*/) override;

	private:
		ros::Subscriber sub_command_;
		std::vector<std::string> joint_names_;
		std::vector<hardware_interface::TalonWritableStateHandle> handles_;

		// Real-time buffer holds the last command value read from the
		// "command" topic.
		realtime_tools::RealtimeBuffer<std::vector<std::optional<hardware_interface::TalonHWState>>> command_buffer_;

		void commandCB(const talon_state_msgs::TalonStateConstPtr &msg);
};

} // namespace state_listener_controller

#endif