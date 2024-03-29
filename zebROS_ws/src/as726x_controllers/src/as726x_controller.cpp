// Controller for the AS726x color sensor. This code allows setting of the
// sensor's configuration values, either with values read from ROS params
// or using dynamic reconfigure

#include "as726x_controllers/as726x_controller.h"

namespace as726x_controller
{

bool AS726xController::convertIndLedCurrentLimit(const std::string &param_str,
		std::atomic<hardware_interface::as726x::IndLedCurrentLimits> &ind_led_current_limit) const
{
	return convertStringToEnum<hardware_interface::as726x::IndLedCurrentLimits>
		(param_str,
		 "ind_led_current_limit",
		 ind_led_current_limit_enum_map_,
		 ind_led_current_limit);
}

bool AS726xController::convertDrvLedCurrentLimit(const std::string &param_str,
		std::atomic<hardware_interface::as726x::DrvLedCurrentLimits> &drv_led_current_limit) const
{
	return convertStringToEnum<hardware_interface::as726x::DrvLedCurrentLimits>
		(param_str,
		 "drv_led_current_limit",
		 drv_led_current_limit_enum_map_,
		 drv_led_current_limit);
}

bool AS726xController::convertChannelGain(const std::string &param_str,
		std::atomic<hardware_interface::as726x::ChannelGain> &channel_gain) const
{
	return convertStringToEnum<hardware_interface::as726x::ChannelGain>
		(param_str,
		 "channel_gain",
		 channel_gain_enum_map_,
		 channel_gain);
}

bool AS726xController::convertConversionType(const std::string &param_str,
		std::atomic<hardware_interface::as726x::ConversionTypes> &conversion_type) const
{
	return convertStringToEnum<hardware_interface::as726x::ConversionTypes>
		(param_str,
		 "conversion_type",
		 conversion_types_enum_map_,
		 conversion_type);
}

bool AS726xController::init(hardware_interface::as726x::AS726xCommandInterface *hw,
		                    ros::NodeHandle                                    &/*root_nh*/,
						    ros::NodeHandle                                    &controller_nh)
{
	std::string joint_name;

	if (!controller_nh.getParam("joint_name", joint_name))
	{
		ROS_ERROR_STREAM("as726x controller - could not read joint_name param");
		return false;
	}
	ROS_INFO("Got joint %s in as726x controller", joint_name.c_str());
	as726x_command_ = hw->getHandle(joint_name);

	std::string param_str;
	ind_led_current_limit_ = hardware_interface::as726x::IndLedCurrentLimits::IND_LIMIT_1MA;
	if (controller_nh.getParam("ind_led_current_limit", param_str))
	{
		if (!convertIndLedCurrentLimit(param_str, ind_led_current_limit_))
			return false;
	}

	bool bool_val;
	controller_nh.param("ind_led_enable", bool_val, false);
	ind_led_enable_= bool_val;

	drv_led_current_limit_ = hardware_interface::as726x::DrvLedCurrentLimits::DRV_LIMIT_12MA5;
	if (controller_nh.getParam("drv_led_current_limit", param_str))
	{
		if (!convertDrvLedCurrentLimit(param_str, drv_led_current_limit_))
			return false;
	}

	controller_nh.param("drv_led_enable", bool_val, false);
	drv_led_enable_ = bool_val;

	conversion_type_ = hardware_interface::as726x::ConversionTypes::ONE_SHOT;
	if (controller_nh.getParam("conversion_type", param_str))
	{
		if (!convertConversionType(param_str, conversion_type_))
			return false;
	}

	channel_gain_ = hardware_interface::as726x::ChannelGain::GAIN_1X;
	if (controller_nh.getParam("channel_gain", param_str))
	{
		if (!convertChannelGain(param_str, channel_gain_))
			return false;
	}

	int integration_time;
	controller_nh.param("integration_time", integration_time, 50);
	integration_time_ = integration_time;

    ddr_.registerEnumVariable<int>
		("ind_led_current_limit",
		 boost::bind(&AS726xController::getIndLedCurrentLimit, this),
		 boost::bind(&as726x_controller::AS726xController::indLedCurrentLimitCB, this, _1),
		 "Current limit for Ind LED",
		 ind_led_current_limit_enum_map_);

    ddr_.registerVariable<bool>
		("ind_led_enable",
		 boost::bind(&AS726xController::getIndLedEnable, this),
		 boost::bind(&AS726xController::indLedEnableCB, this, _1),
		 "Ind LED Enable");

    ddr_.registerEnumVariable<int>
		("drv_led_current_limit",
		 boost::bind(&AS726xController::getDrvLedCurrentLimit, this),
		 boost::bind(&as726x_controller::AS726xController::drvLedCurrentLimitCB, this, _1),
		 "Current limit for Drv LED",
		 drv_led_current_limit_enum_map_);

    ddr_.registerVariable<bool>
		("drv_led_enable",
		 boost::bind(&AS726xController::getDrvLedEnable, this),
		 boost::bind(&AS726xController::drvLedEnableCB, this, _1),
		 "Drv LED Enable");

    ddr_.registerEnumVariable<int>
		("converstion_type",
		 boost::bind(&AS726xController::getConversionType, this),
		 boost::bind(&as726x_controller::AS726xController::conversionTypeCB, this, _1),
		 "Sensor conversion type",
		 conversion_types_enum_map_);

    ddr_.registerEnumVariable<int>
		("channel_gain",
		 boost::bind(&AS726xController::getChannelGain, this),
		 boost::bind(&as726x_controller::AS726xController::channelGainCB, this, _1),
		 "Sensor channel gain",
		 channel_gain_enum_map_);

    ddr_.registerVariable<int>
		("integration_time",
		 boost::bind(&AS726xController::getIntegrationTime, this),
		 boost::bind(&AS726xController::integrationTimeCB, this, _1),
		 "Intergation Time",
		 std::numeric_limits<uint8_t>::min(),
		 std::numeric_limits<uint8_t>::max());

    ddr_.publishServicesTopics();
	return true;
}

void AS726xController::indLedCurrentLimitCB(int ind_led_current_limit)
{
	ind_led_current_limit_ = static_cast<hardware_interface::as726x::IndLedCurrentLimits>(ind_led_current_limit);
}
void AS726xController::indLedEnableCB(bool ind_led_enable)
{
	ind_led_enable_ = ind_led_enable;
}
void AS726xController::drvLedCurrentLimitCB(int drv_led_current_limit)
{
	drv_led_current_limit_ = static_cast<hardware_interface::as726x::DrvLedCurrentLimits>(drv_led_current_limit);
}
void AS726xController::drvLedEnableCB(bool drv_led_enable)
{
	drv_led_enable_ = drv_led_enable;
}
void AS726xController::conversionTypeCB(int conversion_type)
{
	conversion_type_ = static_cast<hardware_interface::as726x::ConversionTypes>(conversion_type);
}
void AS726xController::channelGainCB(int channel_gain)
{
	channel_gain_ = static_cast<hardware_interface::as726x::ChannelGain>(channel_gain);
}
void AS726xController::integrationTimeCB(uint8_t integration_time)
{
	integration_time_ = integration_time;
}

int  AS726xController::getIndLedCurrentLimit(void) const
{
	return ind_led_current_limit_;
}

bool AS726xController::getIndLedEnable(void) const
{
	return ind_led_enable_;
}

int  AS726xController::getDrvLedCurrentLimit(void) const
{
	return drv_led_current_limit_;
}

bool AS726xController::getDrvLedEnable(void) const
{
	return drv_led_enable_;
}

int  AS726xController::getConversionType(void) const
{
	return conversion_type_;
}

int  AS726xController::getChannelGain(void) const
{
	return channel_gain_;
}

int  AS726xController::getIntegrationTime(void) const
{
	return integration_time_;
}


void AS726xController::starting(const ros::Time &/*time*/)
{
}

void AS726xController::update(const ros::Time &/*time*/, const ros::Duration & /*period*/)
{
	as726x_command_->setIndLedCurrentLimit(ind_led_current_limit_.load(std::memory_order_relaxed));
	as726x_command_->setIndLedEnable(ind_led_enable_.load(std::memory_order_relaxed));
	as726x_command_->setDrvLedCurrentLimit(drv_led_current_limit_.load(std::memory_order_relaxed));
	as726x_command_->setDrvLedEnable(drv_led_enable_.load(std::memory_order_relaxed));
	as726x_command_->setConversionType(conversion_type_.load(std::memory_order_relaxed));
	as726x_command_->setGain(channel_gain_.load(std::memory_order_relaxed));
	as726x_command_->setIntegrationTime(integration_time_.load(std::memory_order_relaxed));
}

void AS726xController::stopping(const ros::Time & /*time*/)
{}

}

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(as726x_controller::AS726xController, controller_interface::ControllerBase)
