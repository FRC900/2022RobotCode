#ifndef _ROS_SERVICE_TurretSrv_h
#define _ROS_SERVICE_TurretSrv_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace controllers_2020_msgs
{

static const char TURRETSRV[] = "controllers_2020_msgs/TurretSrv";

  class TurretSrvRequest : public ros::Msg
  {
    public:
      typedef double _set_point_type;
      _set_point_type set_point;

    TurretSrvRequest():
      set_point(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_set_point;
      u_set_point.real = this->set_point;
      *(outbuffer + offset + 0) = (u_set_point.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_set_point.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_set_point.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_set_point.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_set_point.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_set_point.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_set_point.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_set_point.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->set_point);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_set_point;
      u_set_point.base = 0;
      u_set_point.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_set_point.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_set_point.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_set_point.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_set_point.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_set_point.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_set_point.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_set_point.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->set_point = u_set_point.real;
      offset += sizeof(this->set_point);
     return offset;
    }

    virtual const char * getType() override { return TURRETSRV; };
    virtual const char * getMD5() override { return "d028aa3c5a4d17f88258ecdcc12644ee"; };

  };

  class TurretSrvResponse : public ros::Msg
  {
    public:

    TurretSrvResponse()
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

    virtual const char * getType() override { return TURRETSRV; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class TurretSrv {
    public:
    typedef TurretSrvRequest Request;
    typedef TurretSrvResponse Response;
  };

}
#endif
