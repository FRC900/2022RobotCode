#ifndef _ROS_SERVICE_IntakeRollerSrv_h
#define _ROS_SERVICE_IntakeRollerSrv_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace controllers_2020_msgs
{

static const char INTAKEROLLERSRV[] = "controllers_2020_msgs/IntakeRollerSrv";

  class IntakeRollerSrvRequest : public ros::Msg
  {
    public:
      typedef double _percent_out_type;
      _percent_out_type percent_out;

    IntakeRollerSrvRequest():
      percent_out(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_percent_out;
      u_percent_out.real = this->percent_out;
      *(outbuffer + offset + 0) = (u_percent_out.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_percent_out.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_percent_out.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_percent_out.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_percent_out.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_percent_out.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_percent_out.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_percent_out.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->percent_out);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_percent_out;
      u_percent_out.base = 0;
      u_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->percent_out = u_percent_out.real;
      offset += sizeof(this->percent_out);
     return offset;
    }

    virtual const char * getType() override { return INTAKEROLLERSRV; };
    virtual const char * getMD5() override { return "c92a4fd70d6dfad299f64345f56c4a6d"; };

  };

  class IntakeRollerSrvResponse : public ros::Msg
  {
    public:

    IntakeRollerSrvResponse()
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

    virtual const char * getType() override { return INTAKEROLLERSRV; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class IntakeRollerSrv {
    public:
    typedef IntakeRollerSrvRequest Request;
    typedef IntakeRollerSrvResponse Response;
  };

}
#endif
