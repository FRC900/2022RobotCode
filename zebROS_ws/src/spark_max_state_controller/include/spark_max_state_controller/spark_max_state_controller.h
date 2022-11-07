#ifndef INC_SPARK_MAX_STATE_CONTROLLER__
#define INC_SPARK_MAX_STATE_CONTROLLER__
/*
 * Original joint_state_controller Author: Wim Meeussen
 */


#include <controller_interface/controller.h>
#include <realtime_tools/realtime_publisher.h>
#include <spark_max_interface/spark_max_state_interface.h>
#include <spark_max_state_msgs/SparkMaxState.h>
#include <periodic_interval_counter/periodic_interval_counter.h>

namespace spark_max_state_controller
{

/**
 * \brief Controller that publishes the state of all spark_max&victor motor controller on a robot.
 *
 * This controller publishes the state of all resources registered to a \c hardware_interface::SparkMaxStateInterface to a
 * topic of type \c sensor_msgs/SparkMaxState. The following is a basic configuration of the controller.
 *
 * \code
 * spark_max_state_controller:
 *   type: spark_max_state_controller/JointStateController
 *   publish_rate: 50
 * \endcode
 *
 */
class SparkMaxStateController: public controller_interface::Controller<hardware_interface::SparkMaxStateInterface>
{
	public:
		SparkMaxStateController() : publish_rate_(0.0) {}

		virtual bool init(hardware_interface::SparkMaxStateInterface *hw,
						  ros::NodeHandle                            &root_nh,
						  ros::NodeHandle                            &controller_nh) override;
		virtual void starting(const ros::Time &time) override;
		virtual void update(const ros::Time &time, const ros::Duration & /*period*/) override;
		virtual void stopping(const ros::Time & /*time*/) override;

	private:
		std::string faultsToString(unsigned faults) const;
		std::vector<hardware_interface::SparkMaxStateHandle> spark_max_state_;
		std::shared_ptr<realtime_tools::RealtimePublisher<spark_max_state_msgs::SparkMaxState> > realtime_pub_;
		PeriodicIntervalCounter interval_counter_;
		double publish_rate_;
		size_t num_hw_joints_; ///< Number of joints present in the SparkMaxStateInterface
};
} // namespace

#endif