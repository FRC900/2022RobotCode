#ifndef _ROS_SERVICE_Intake_h
#define _ROS_SERVICE_Intake_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace controllers_2022_msgs
{

static const char INTAKE[] = "controllers_2022_msgs/Intake";

  class IntakeRequest : public ros::Msg
  {
    public:
      typedef bool _intake_arm_extend_type;
      _intake_arm_extend_type intake_arm_extend;
      typedef double _percent_out_type;
      _percent_out_type percent_out;

    IntakeRequest():
      intake_arm_extend(0),
      percent_out(0)
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
        bool real;
        uint8_t base;
      } u_intake_arm_extend;
      u_intake_arm_extend.base = 0;
      u_intake_arm_extend.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->intake_arm_extend = u_intake_arm_extend.real;
      offset += sizeof(this->intake_arm_extend);
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

    virtual const char * getType() override { return INTAKE; };
    virtual const char * getMD5() override { return "42d3bd439bcbeed417527ac4a69f52f0"; };

  };

  class IntakeResponse : public ros::Msg
  {
    public:

    IntakeResponse()
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

    virtual const char * getType() override { return INTAKE; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class Intake {
    public:
    typedef IntakeRequest Request;
    typedef IntakeResponse Response;
  };

}
#endif
