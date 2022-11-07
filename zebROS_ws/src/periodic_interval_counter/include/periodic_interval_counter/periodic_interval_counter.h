#ifndef PERIODIC_INTERVAL_COUNTER_INC__
#define PERIODIC_INTERVAL_COUNTER_INC__

#include <ros/console.h>
#include <ros/duration.h>

class PeriodicIntervalCounter
{
public:
    PeriodicIntervalCounter(const double frequency)
        : desired_period_{ros::Duration{1. / frequency}}
        , current_interval_{ros::Duration{0}}
    {
        if (desired_period_ <= ros::Duration{0})
        {
            ROS_ERROR("Periodic Interval Counter update called with desired period <= 0");
            throw std::invalid_argument("Periodic Interval Counter update called with desired period <= 0");
        }
    }

    bool update(const ros::Duration &increment)
    {
        if (increment <= ros::Duration{0})
        {
            ROS_WARN_STREAM("Periodic Interval Counter called with increment <= 0 (" << increment << ")");
            reset();
            return true;
        }
        current_interval_ += increment;
        if (current_interval_ > desired_period_)
        {
            current_interval_ -= desired_period_;
            return true;
        }
        return false;
    }

    void reset(void)
    {
        current_interval_ = ros::Duration{0};
    }

    void force_publish(void)
    {
        current_interval_ = desired_period_;
    }
private:
    ros::Duration desired_period_;
    ros::Duration current_interval_;
};

#endif