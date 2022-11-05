#ifndef _ROS_SERVICE_reset_odometry_h
#define _ROS_SERVICE_reset_odometry_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace zed_interfaces
{

static const char RESET_ODOMETRY[] = "zed_interfaces/reset_odometry";

  class reset_odometryRequest : public ros::Msg
  {
    public:

    reset_odometryRequest()
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

    virtual const char * getType() override { return RESET_ODOMETRY; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class reset_odometryResponse : public ros::Msg
  {
    public:
      typedef bool _reset_done_type;
      _reset_done_type reset_done;

    reset_odometryResponse():
      reset_done(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_reset_done;
      u_reset_done.real = this->reset_done;
      *(outbuffer + offset + 0) = (u_reset_done.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->reset_done);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_reset_done;
      u_reset_done.base = 0;
      u_reset_done.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->reset_done = u_reset_done.real;
      offset += sizeof(this->reset_done);
     return offset;
    }

    virtual const char * getType() override { return RESET_ODOMETRY; };
    virtual const char * getMD5() override { return "e1e87fc9e9e6c154eca93b9fa292cc05"; };

  };

  class reset_odometry {
    public:
    typedef reset_odometryRequest Request;
    typedef reset_odometryResponse Response;
  };

}
#endif
