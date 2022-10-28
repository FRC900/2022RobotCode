#ifndef _ROS_SERVICE_IntakeArmSrv_h
#define _ROS_SERVICE_IntakeArmSrv_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace controllers_2020_msgs
{

static const char INTAKEARMSRV[] = "controllers_2020_msgs/IntakeArmSrv";

  class IntakeArmSrvRequest : public ros::Msg
  {
    public:
      typedef bool _intake_arm_extend_type;
      _intake_arm_extend_type intake_arm_extend;

    IntakeArmSrvRequest():
      intake_arm_extend(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_intake_arm_extend;
      u_intake_arm_extend.real = this->intake_arm_extend;
      *(outbuffer + offset + 0) = (u_intake_arm_extend.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->intake_arm_extend);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_intake_arm_extend;
      u_intake_arm_extend.base = 0;
      u_intake_arm_extend.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->intake_arm_extend = u_intake_arm_extend.real;
      offset += sizeof(this->intake_arm_extend);
     return offset;
    }

    virtual const char * getType() override { return INTAKEARMSRV; };
    virtual const char * getMD5() override { return "4ecdf17182d6abb825591844633229d7"; };

  };

  class IntakeArmSrvResponse : public ros::Msg
  {
    public:

    IntakeArmSrvResponse()
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

    virtual const char * getType() override { return INTAKEARMSRV; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class IntakeArmSrv {
    public:
    typedef IntakeArmSrvRequest Request;
    typedef IntakeArmSrvResponse Response;
  };

}
#endif
