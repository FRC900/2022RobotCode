#ifndef _ROS_SERVICE_ShooterSrv_h
#define _ROS_SERVICE_ShooterSrv_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace controllers_2020_msgs
{

static const char SHOOTERSRV[] = "controllers_2020_msgs/ShooterSrv";

  class ShooterSrvRequest : public ros::Msg
  {
    public:
      typedef double _set_velocity_type;
      _set_velocity_type set_velocity;
      typedef bool _shooter_hood_raise_type;
      _shooter_hood_raise_type shooter_hood_raise;

    ShooterSrvRequest():
      set_velocity(0),
      shooter_hood_raise(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_set_velocity;
      u_set_velocity.real = this->set_velocity;
      *(outbuffer + offset + 0) = (u_set_velocity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_set_velocity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_set_velocity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_set_velocity.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_set_velocity.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_set_velocity.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_set_velocity.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_set_velocity.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->set_velocity);
      union {
        bool real;
        uint8_t base;
      } u_shooter_hood_raise;
      u_shooter_hood_raise.real = this->shooter_hood_raise;
      *(outbuffer + offset + 0) = (u_shooter_hood_raise.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->shooter_hood_raise);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_set_velocity;
      u_set_velocity.base = 0;
      u_set_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_set_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_set_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_set_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_set_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_set_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_set_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_set_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->set_velocity = u_set_velocity.real;
      offset += sizeof(this->set_velocity);
      union {
        bool real;
        uint8_t base;
      } u_shooter_hood_raise;
      u_shooter_hood_raise.base = 0;
      u_shooter_hood_raise.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->shooter_hood_raise = u_shooter_hood_raise.real;
      offset += sizeof(this->shooter_hood_raise);
     return offset;
    }

    virtual const char * getType() override { return SHOOTERSRV; };
    virtual const char * getMD5() override { return "1f6107a3f7db1b0f7677f52e2d723670"; };

  };

  class ShooterSrvResponse : public ros::Msg
  {
    public:

    ShooterSrvResponse()
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

    virtual const char * getType() override { return SHOOTERSRV; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class ShooterSrv {
    public:
    typedef ShooterSrvRequest Request;
    typedef ShooterSrvResponse Response;
  };

}
#endif
