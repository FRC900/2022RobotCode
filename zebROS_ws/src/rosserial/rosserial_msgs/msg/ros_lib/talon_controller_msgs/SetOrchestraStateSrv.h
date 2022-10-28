#ifndef _ROS_SERVICE_SetOrchestraStateSrv_h
#define _ROS_SERVICE_SetOrchestraStateSrv_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace talon_controller_msgs
{

static const char SETORCHESTRASTATESRV[] = "talon_controller_msgs/SetOrchestraStateSrv";

  class SetOrchestraStateSrvRequest : public ros::Msg
  {
    public:
      typedef uint8_t _state_type;
      _state_type state;
      enum { PLAY = 0 };
      enum { PAUSE = 1 };
      enum { STOP = 2 };

    SetOrchestraStateSrvRequest():
      state(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->state >> (8 * 0)) & 0xFF;
      offset += sizeof(this->state);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->state =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->state);
     return offset;
    }

    virtual const char * getType() override { return SETORCHESTRASTATESRV; };
    virtual const char * getMD5() override { return "ce8fb99e2a98856db6fbbe45b58a3a97"; };

  };

  class SetOrchestraStateSrvResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;

    SetOrchestraStateSrvResponse():
      success(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.real = this->success;
      *(outbuffer + offset + 0) = (u_success.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->success);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.base = 0;
      u_success.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->success = u_success.real;
      offset += sizeof(this->success);
     return offset;
    }

    virtual const char * getType() override { return SETORCHESTRASTATESRV; };
    virtual const char * getMD5() override { return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class SetOrchestraStateSrv {
    public:
    typedef SetOrchestraStateSrvRequest Request;
    typedef SetOrchestraStateSrvResponse Response;
  };

}
#endif
