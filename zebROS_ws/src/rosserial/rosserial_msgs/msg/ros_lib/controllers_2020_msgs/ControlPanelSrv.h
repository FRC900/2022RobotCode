#ifndef _ROS_SERVICE_ControlPanelSrv_h
#define _ROS_SERVICE_ControlPanelSrv_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace controllers_2020_msgs
{

static const char CONTROLPANELSRV[] = "controllers_2020_msgs/ControlPanelSrv";

  class ControlPanelSrvRequest : public ros::Msg
  {
    public:
      typedef double _control_panel_rotations_type;
      _control_panel_rotations_type control_panel_rotations;

    ControlPanelSrvRequest():
      control_panel_rotations(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_control_panel_rotations;
      u_control_panel_rotations.real = this->control_panel_rotations;
      *(outbuffer + offset + 0) = (u_control_panel_rotations.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_control_panel_rotations.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_control_panel_rotations.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_control_panel_rotations.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_control_panel_rotations.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_control_panel_rotations.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_control_panel_rotations.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_control_panel_rotations.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->control_panel_rotations);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_control_panel_rotations;
      u_control_panel_rotations.base = 0;
      u_control_panel_rotations.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_control_panel_rotations.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_control_panel_rotations.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_control_panel_rotations.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_control_panel_rotations.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_control_panel_rotations.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_control_panel_rotations.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_control_panel_rotations.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->control_panel_rotations = u_control_panel_rotations.real;
      offset += sizeof(this->control_panel_rotations);
     return offset;
    }

    virtual const char * getType() override { return CONTROLPANELSRV; };
    virtual const char * getMD5() override { return "a45693eb06f00af476004c4b2b237039"; };

  };

  class ControlPanelSrvResponse : public ros::Msg
  {
    public:

    ControlPanelSrvResponse()
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

    virtual const char * getType() override { return CONTROLPANELSRV; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class ControlPanelSrv {
    public:
    typedef ControlPanelSrvRequest Request;
    typedef ControlPanelSrvResponse Response;
  };

}
#endif
