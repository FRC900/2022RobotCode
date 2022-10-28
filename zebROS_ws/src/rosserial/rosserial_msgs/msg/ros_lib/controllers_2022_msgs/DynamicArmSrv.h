#ifndef _ROS_SERVICE_DynamicArmSrv_h
#define _ROS_SERVICE_DynamicArmSrv_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace controllers_2022_msgs
{

static const char DYNAMICARMSRV[] = "controllers_2022_msgs/DynamicArmSrv";

  class DynamicArmSrvRequest : public ros::Msg
  {
    public:
      typedef double _data_type;
      _data_type data;
      typedef bool _use_percent_output_type;
      _use_percent_output_type use_percent_output;
      typedef uint8_t _profile_type;
      _profile_type profile;
      enum { RETRACT = 0 };
      enum { EXTEND = 1 };
      enum { TRANSITION = 2 };
      enum { TRAVERSAL = 3 };
      enum { GROUND_TO_MID = 4 };

    DynamicArmSrvRequest():
      data(0),
      use_percent_output(0),
      profile(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_data;
      u_data.real = this->data;
      *(outbuffer + offset + 0) = (u_data.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_data.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_data.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_data.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_data.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_data.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_data.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_data.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->data);
      union {
        bool real;
        uint8_t base;
      } u_use_percent_output;
      u_use_percent_output.real = this->use_percent_output;
      *(outbuffer + offset + 0) = (u_use_percent_output.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->use_percent_output);
      *(outbuffer + offset + 0) = (this->profile >> (8 * 0)) & 0xFF;
      offset += sizeof(this->profile);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_data;
      u_data.base = 0;
      u_data.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_data.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_data.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_data.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_data.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_data.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_data.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_data.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->data = u_data.real;
      offset += sizeof(this->data);
      union {
        bool real;
        uint8_t base;
      } u_use_percent_output;
      u_use_percent_output.base = 0;
      u_use_percent_output.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->use_percent_output = u_use_percent_output.real;
      offset += sizeof(this->use_percent_output);
      this->profile =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->profile);
     return offset;
    }

    virtual const char * getType() override { return DYNAMICARMSRV; };
    virtual const char * getMD5() override { return "999d23b7b2c1ff25392a4c7c3fd92a38"; };

  };

  class DynamicArmSrvResponse : public ros::Msg
  {
    public:

    DynamicArmSrvResponse()
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

    virtual const char * getType() override { return DYNAMICARMSRV; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class DynamicArmSrv {
    public:
    typedef DynamicArmSrvRequest Request;
    typedef DynamicArmSrvResponse Response;
  };

}
#endif
