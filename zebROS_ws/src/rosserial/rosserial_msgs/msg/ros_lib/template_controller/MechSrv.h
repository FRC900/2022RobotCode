#ifndef _ROS_SERVICE_MechSrv_h
#define _ROS_SERVICE_MechSrv_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace template_controller
{

static const char MECHSRV[] = "template_controller/MechSrv";

  class MechSrvRequest : public ros::Msg
  {
    public:

    MechSrvRequest()
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

    virtual const char * getType() override { return MECHSRV; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class MechSrvResponse : public ros::Msg
  {
    public:

    MechSrvResponse()
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

    virtual const char * getType() override { return MECHSRV; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class MechSrv {
    public:
    typedef MechSrvRequest Request;
    typedef MechSrvResponse Response;
  };

}
#endif
