#ifndef _ROS_SERVICE_PidfSlot_h
#define _ROS_SERVICE_PidfSlot_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace talon_controller_msgs
{

static const char PIDFSLOT[] = "talon_controller_msgs/PidfSlot";

  class PidfSlotRequest : public ros::Msg
  {
    public:
      typedef int32_t _pidf_slot_type;
      _pidf_slot_type pidf_slot;

    PidfSlotRequest():
      pidf_slot(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_pidf_slot;
      u_pidf_slot.real = this->pidf_slot;
      *(outbuffer + offset + 0) = (u_pidf_slot.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_slot.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_slot.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_slot.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_slot);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_pidf_slot;
      u_pidf_slot.base = 0;
      u_pidf_slot.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pidf_slot.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pidf_slot.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pidf_slot.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pidf_slot = u_pidf_slot.real;
      offset += sizeof(this->pidf_slot);
     return offset;
    }

    virtual const char * getType() override { return PIDFSLOT; };
    virtual const char * getMD5() override { return "699888169b1a41d28b65c42d5f593b44"; };

  };

  class PidfSlotResponse : public ros::Msg
  {
    public:

    PidfSlotResponse()
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

    virtual const char * getType() override { return PIDFSLOT; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class PidfSlot {
    public:
    typedef PidfSlotRequest Request;
    typedef PidfSlotResponse Response;
  };

}
#endif
