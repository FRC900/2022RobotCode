#ifndef _ROS_behavior_actions_ShooterOffset_h
#define _ROS_behavior_actions_ShooterOffset_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace behavior_actions
{

  class ShooterOffset : public ros::Msg
  {
    public:
      typedef double _turret_offset_type;
      _turret_offset_type turret_offset;
      typedef double _speed_offset_type;
      _speed_offset_type speed_offset;

    ShooterOffset():
      turret_offset(0),
      speed_offset(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_turret_offset;
      u_turret_offset.real = this->turret_offset;
      *(outbuffer + offset + 0) = (u_turret_offset.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_turret_offset.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_turret_offset.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_turret_offset.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_turret_offset.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_turret_offset.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_turret_offset.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_turret_offset.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->turret_offset);
      union {
        double real;
        uint64_t base;
      } u_speed_offset;
      u_speed_offset.real = this->speed_offset;
      *(outbuffer + offset + 0) = (u_speed_offset.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_speed_offset.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_speed_offset.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_speed_offset.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_speed_offset.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_speed_offset.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_speed_offset.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_speed_offset.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->speed_offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_turret_offset;
      u_turret_offset.base = 0;
      u_turret_offset.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_turret_offset.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_turret_offset.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_turret_offset.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_turret_offset.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_turret_offset.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_turret_offset.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_turret_offset.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->turret_offset = u_turret_offset.real;
      offset += sizeof(this->turret_offset);
      union {
        double real;
        uint64_t base;
      } u_speed_offset;
      u_speed_offset.base = 0;
      u_speed_offset.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_speed_offset.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_speed_offset.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_speed_offset.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_speed_offset.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_speed_offset.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_speed_offset.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_speed_offset.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->speed_offset = u_speed_offset.real;
      offset += sizeof(this->speed_offset);
     return offset;
    }

    virtual const char * getType() override { return "behavior_actions/ShooterOffset"; };
    virtual const char * getMD5() override { return "81172b59f8374b85e668a347f2808dbd"; };

  };

}
#endif
