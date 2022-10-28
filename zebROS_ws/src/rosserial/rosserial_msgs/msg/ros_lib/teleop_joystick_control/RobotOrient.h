#ifndef _ROS_SERVICE_RobotOrient_h
#define _ROS_SERVICE_RobotOrient_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace teleop_joystick_control
{

static const char ROBOTORIENT[] = "teleop_joystick_control/RobotOrient";

  class RobotOrientRequest : public ros::Msg
  {
    public:
      typedef bool _robot_orient_type;
      _robot_orient_type robot_orient;
      typedef double _offset_angle_type;
      _offset_angle_type offset_angle;

    RobotOrientRequest():
      robot_orient(0),
      offset_angle(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_robot_orient;
      u_robot_orient.real = this->robot_orient;
      *(outbuffer + offset + 0) = (u_robot_orient.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->robot_orient);
      union {
        double real;
        uint64_t base;
      } u_offset_angle;
      u_offset_angle.real = this->offset_angle;
      *(outbuffer + offset + 0) = (u_offset_angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_offset_angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_offset_angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_offset_angle.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_offset_angle.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_offset_angle.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_offset_angle.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_offset_angle.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->offset_angle);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_robot_orient;
      u_robot_orient.base = 0;
      u_robot_orient.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->robot_orient = u_robot_orient.real;
      offset += sizeof(this->robot_orient);
      union {
        double real;
        uint64_t base;
      } u_offset_angle;
      u_offset_angle.base = 0;
      u_offset_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_offset_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_offset_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_offset_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_offset_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_offset_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_offset_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_offset_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->offset_angle = u_offset_angle.real;
      offset += sizeof(this->offset_angle);
     return offset;
    }

    virtual const char * getType() override { return ROBOTORIENT; };
    virtual const char * getMD5() override { return "f707dfd73956df735283490ed81246ab"; };

  };

  class RobotOrientResponse : public ros::Msg
  {
    public:

    RobotOrientResponse()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
     return offset;
    }

    virtual const char * getType() override { return ROBOTORIENT; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class RobotOrient {
    public:
    typedef RobotOrientRequest Request;
    typedef RobotOrientResponse Response;
  };

}
#endif
