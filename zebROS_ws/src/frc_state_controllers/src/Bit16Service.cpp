#include "ros/ros.h"
#include <atomic>

#include "frc_state_controllers/bits16.h"

std::atomic<bool> bits16 = false;

bool use16bits(frc_state_controllers::bits16::Request  &req,
         frc_state_controllers::bits16::Response &res)
{
  // if updating you don't care about return value
  if (req.update) 
  {
      bits16 = req.bits16;
  }
  // if not updating, gives the current value of bits 16
  return bits16;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "use_16_bits");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("use_16_bits_server", use16bits);
  ROS_INFO("Started use_16_bits_server");
  ros::spin();

  return 0;
}