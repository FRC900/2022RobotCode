#ifndef _ROS_SERVICE_CanifierLED_h
#define _ROS_SERVICE_CanifierLED_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace canifier_controller_msgs
{

static const char CANIFIERLED[] = "canifier_controller_msgs/CanifierLED";

  class CanifierLEDRequest : public ros::Msg
  {
    public:
      typedef double _r_type;
      _r_type r;
      typedef double _g_type;
      _g_type g;
      typedef double _b_type;
      _b_type b;

    CanifierLEDRequest():
      r(0),
      g(0),
      b(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_r;
      u_r.real = this->r;
      *(outbuffer + offset + 0) = (u_r.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_r.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_r.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_r.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_r.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_r.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_r.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_r.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->r);
      union {
        double real;
        uint64_t base;
      } u_g;
      u_g.real = this->g;
      *(outbuffer + offset + 0) = (u_g.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_g.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_g.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_g.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_g.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_g.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_g.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_g.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->g);
      union {
        double real;
        uint64_t base;
      } u_b;
      u_b.real = this->b;
      *(outbuffer + offset + 0) = (u_b.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_b.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_b.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_b.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_b.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_b.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_b.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_b.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->b);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_r;
      u_r.base = 0;
      u_r.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_r.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_r.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_r.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_r.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_r.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_r.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_r.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->r = u_r.real;
      offset += sizeof(this->r);
      union {
        double real;
        uint64_t base;
      } u_g;
      u_g.base = 0;
      u_g.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_g.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_g.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_g.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_g.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_g.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_g.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_g.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->g = u_g.real;
      offset += sizeof(this->g);
      union {
        double real;
        uint64_t base;
      } u_b;
      u_b.base = 0;
      u_b.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_b.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_b.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_b.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_b.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_b.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_b.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_b.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->b = u_b.real;
      offset += sizeof(this->b);
     return offset;
    }

    virtual const char * getType() override { return CANIFIERLED; };
    virtual const char * getMD5() override { return "702a54d65f3ced152d1ad49cf1e07bd5"; };

  };

  class CanifierLEDResponse : public ros::Msg
  {
    public:

    CanifierLEDResponse()
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

    virtual const char * getType() override { return CANIFIERLED; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class CanifierLED {
    public:
    typedef CanifierLEDRequest Request;
    typedef CanifierLEDResponse Response;
  };

}
#endif
