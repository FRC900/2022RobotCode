#ifndef _ROS_behavior_actions_AutoMode_h
#define _ROS_behavior_actions_AutoMode_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace behavior_actions
{

  class AutoMode : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef int8_t _auto_mode_type;
      _auto_mode_type auto_mode;

    AutoMode():
      header(),
      auto_mode(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        int8_t real;
        uint8_t base;
      } u_auto_mode;
      u_auto_mode.real = this->auto_mode;
      *(outbuffer + offset + 0) = (u_auto_mode.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->auto_mode);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        int8_t real;
        uint8_t base;
      } u_auto_mode;
      u_auto_mode.base = 0;
      u_auto_mode.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->auto_mode = u_auto_mode.real;
      offset += sizeof(this->auto_mode);
     return offset;
    }

    virtual const char * getType() override { return "behavior_actions/AutoMode"; };
    virtual const char * getMD5() override { return "b93e05ce65fe6c5d0c3cbc58e45aa4f1"; };

  };

}
#endif
