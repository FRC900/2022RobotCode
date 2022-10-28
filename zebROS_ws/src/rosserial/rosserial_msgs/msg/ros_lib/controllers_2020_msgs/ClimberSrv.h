#ifndef _ROS_SERVICE_ClimberSrv_h
#define _ROS_SERVICE_ClimberSrv_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace controllers_2020_msgs
{

static const char CLIMBERSRV[] = "controllers_2020_msgs/ClimberSrv";

  class ClimberSrvRequest : public ros::Msg
  {
    public:
      typedef double _winch_percent_out_type;
      _winch_percent_out_type winch_percent_out;
      typedef bool _climber_deploy_type;
      _climber_deploy_type climber_deploy;
      typedef bool _climber_elevator_brake_type;
      _climber_elevator_brake_type climber_elevator_brake;

    ClimberSrvRequest():
      winch_percent_out(0),
      climber_deploy(0),
      climber_elevator_brake(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_winch_percent_out;
      u_winch_percent_out.real = this->winch_percent_out;
      *(outbuffer + offset + 0) = (u_winch_percent_out.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_winch_percent_out.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_winch_percent_out.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_winch_percent_out.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_winch_percent_out.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_winch_percent_out.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_winch_percent_out.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_winch_percent_out.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->winch_percent_out);
      union {
        bool real;
        uint8_t base;
      } u_climber_deploy;
      u_climber_deploy.real = this->climber_deploy;
      *(outbuffer + offset + 0) = (u_climber_deploy.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->climber_deploy);
      union {
        bool real;
        uint8_t base;
      } u_climber_elevator_brake;
      u_climber_elevator_brake.real = this->climber_elevator_brake;
      *(outbuffer + offset + 0) = (u_climber_elevator_brake.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->climber_elevator_brake);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_winch_percent_out;
      u_winch_percent_out.base = 0;
      u_winch_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_winch_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_winch_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_winch_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_winch_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_winch_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_winch_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_winch_percent_out.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->winch_percent_out = u_winch_percent_out.real;
      offset += sizeof(this->winch_percent_out);
      union {
        bool real;
        uint8_t base;
      } u_climber_deploy;
      u_climber_deploy.base = 0;
      u_climber_deploy.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->climber_deploy = u_climber_deploy.real;
      offset += sizeof(this->climber_deploy);
      union {
        bool real;
        uint8_t base;
      } u_climber_elevator_brake;
      u_climber_elevator_brake.base = 0;
      u_climber_elevator_brake.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->climber_elevator_brake = u_climber_elevator_brake.real;
      offset += sizeof(this->climber_elevator_brake);
     return offset;
    }

    virtual const char * getType() override { return CLIMBERSRV; };
    virtual const char * getMD5() override { return "2b17769a5230013048d3bf464b7c1cc9"; };

  };

  class ClimberSrvResponse : public ros::Msg
  {
    public:

    ClimberSrvResponse()
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

    virtual const char * getType() override { return CLIMBERSRV; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class ClimberSrv {
    public:
    typedef ClimberSrvRequest Request;
    typedef ClimberSrvResponse Response;
  };

}
#endif
