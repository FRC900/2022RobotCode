#ifndef _ROS_SERVICE_OrientStrafingAngle_h
#define _ROS_SERVICE_OrientStrafingAngle_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace teleop_joystick_control
{

static const char ORIENTSTRAFINGANGLE[] = "teleop_joystick_control/OrientStrafingAngle";

  class OrientStrafingAngleRequest : public ros::Msg
  {
    public:
      typedef double _angle_type;
      _angle_type angle;

    OrientStrafingAngleRequest():
      angle(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_angle;
      u_angle.real = this->angle;
      *(outbuffer + offset + 0) = (u_angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_angle.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_angle.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_angle.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_angle.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_angle.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->angle);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_angle;
      u_angle.base = 0;
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->angle = u_angle.real;
      offset += sizeof(this->angle);
     return offset;
    }

    virtual const char * getType() override { return ORIENTSTRAFINGANGLE; };
    virtual const char * getMD5() override { return "4edb55038e2b888976a0c0c56935341c"; };

  };

  class OrientStrafingAngleResponse : public ros::Msg
  {
    public:

    OrientStrafingAngleResponse()
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

    virtual const char * getType() override { return ORIENTSTRAFINGANGLE; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class OrientStrafingAngle {
    public:
    typedef OrientStrafingAngleRequest Request;
    typedef OrientStrafingAngleResponse Response;
  };

}
#endif
