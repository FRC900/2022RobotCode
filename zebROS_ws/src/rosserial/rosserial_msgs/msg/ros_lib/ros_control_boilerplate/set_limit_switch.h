#ifndef _ROS_SERVICE_set_limit_switch_h
#define _ROS_SERVICE_set_limit_switch_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace ros_control_boilerplate
{

static const char SET_LIMIT_SWITCH[] = "ros_control_boilerplate/set_limit_switch";

  class set_limit_switchRequest : public ros::Msg
  {
    public:
      typedef uint8_t _target_joint_id_type;
      _target_joint_id_type target_joint_id;
      typedef const char* _target_joint_name_type;
      _target_joint_name_type target_joint_name;
      typedef bool _forward_type;
      _forward_type forward;
      typedef bool _reverse_type;
      _reverse_type reverse;

    set_limit_switchRequest():
      target_joint_id(0),
      target_joint_name(""),
      forward(0),
      reverse(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->target_joint_id >> (8 * 0)) & 0xFF;
      offset += sizeof(this->target_joint_id);
      uint32_t length_target_joint_name = strlen(this->target_joint_name);
      varToArr(outbuffer + offset, length_target_joint_name);
      offset += 4;
      memcpy(outbuffer + offset, this->target_joint_name, length_target_joint_name);
      offset += length_target_joint_name;
      union {
        bool real;
        uint8_t base;
      } u_forward;
      u_forward.real = this->forward;
      *(outbuffer + offset + 0) = (u_forward.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->forward);
      union {
        bool real;
        uint8_t base;
      } u_reverse;
      u_reverse.real = this->reverse;
      *(outbuffer + offset + 0) = (u_reverse.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->reverse);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->target_joint_id =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->target_joint_id);
      uint32_t length_target_joint_name;
      arrToVar(length_target_joint_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_target_joint_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_target_joint_name-1]=0;
      this->target_joint_name = (char *)(inbuffer + offset-1);
      offset += length_target_joint_name;
      union {
        bool real;
        uint8_t base;
      } u_forward;
      u_forward.base = 0;
      u_forward.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->forward = u_forward.real;
      offset += sizeof(this->forward);
      union {
        bool real;
        uint8_t base;
      } u_reverse;
      u_reverse.base = 0;
      u_reverse.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->reverse = u_reverse.real;
      offset += sizeof(this->reverse);
     return offset;
    }

    virtual const char * getType() override { return SET_LIMIT_SWITCH; };
    virtual const char * getMD5() override { return "aea7656fc087d7bb28bae4c37dc4edcd"; };

  };

  class set_limit_switchResponse : public ros::Msg
  {
    public:

    set_limit_switchResponse()
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

    virtual const char * getType() override { return SET_LIMIT_SWITCH; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class set_limit_switch {
    public:
    typedef set_limit_switchRequest Request;
    typedef set_limit_switchResponse Response;
  };

}
#endif
