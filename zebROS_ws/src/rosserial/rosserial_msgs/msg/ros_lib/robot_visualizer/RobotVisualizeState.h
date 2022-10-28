#ifndef _ROS_robot_visualizer_RobotVisualizeState_h
#define _ROS_robot_visualizer_RobotVisualizeState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace robot_visualizer
{

  class RobotVisualizeState : public ros::Msg
  {
    public:
      typedef double _x_type;
      _x_type x;
      typedef double _y_type;
      _y_type y;
      typedef double _theta_type;
      _theta_type theta;
      typedef int32_t _arm_pos_type;
      _arm_pos_type arm_pos;
      typedef int32_t _intake_pos_type;
      _intake_pos_type intake_pos;

    RobotVisualizeState():
      x(0),
      y(0),
      theta(0),
      arm_pos(0),
      intake_pos(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_x;
      u_x.real = this->x;
      *(outbuffer + offset + 0) = (u_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->x);
      union {
        double real;
        uint64_t base;
      } u_y;
      u_y.real = this->y;
      *(outbuffer + offset + 0) = (u_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->y);
      union {
        double real;
        uint64_t base;
      } u_theta;
      u_theta.real = this->theta;
      *(outbuffer + offset + 0) = (u_theta.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_theta.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_theta.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_theta.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_theta.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_theta.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_theta.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_theta.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->theta);
      union {
        int32_t real;
        uint32_t base;
      } u_arm_pos;
      u_arm_pos.real = this->arm_pos;
      *(outbuffer + offset + 0) = (u_arm_pos.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_arm_pos.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_arm_pos.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_arm_pos.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->arm_pos);
      union {
        int32_t real;
        uint32_t base;
      } u_intake_pos;
      u_intake_pos.real = this->intake_pos;
      *(outbuffer + offset + 0) = (u_intake_pos.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_intake_pos.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_intake_pos.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_intake_pos.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->intake_pos);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_x;
      u_x.base = 0;
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->x = u_x.real;
      offset += sizeof(this->x);
      union {
        double real;
        uint64_t base;
      } u_y;
      u_y.base = 0;
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->y = u_y.real;
      offset += sizeof(this->y);
      union {
        double real;
        uint64_t base;
      } u_theta;
      u_theta.base = 0;
      u_theta.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_theta.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_theta.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_theta.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_theta.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_theta.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_theta.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_theta.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->theta = u_theta.real;
      offset += sizeof(this->theta);
      union {
        int32_t real;
        uint32_t base;
      } u_arm_pos;
      u_arm_pos.base = 0;
      u_arm_pos.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_arm_pos.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_arm_pos.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_arm_pos.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->arm_pos = u_arm_pos.real;
      offset += sizeof(this->arm_pos);
      union {
        int32_t real;
        uint32_t base;
      } u_intake_pos;
      u_intake_pos.base = 0;
      u_intake_pos.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_intake_pos.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_intake_pos.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_intake_pos.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->intake_pos = u_intake_pos.real;
      offset += sizeof(this->intake_pos);
     return offset;
    }

    virtual const char * getType() override { return "robot_visualizer/RobotVisualizeState"; };
    virtual const char * getMD5() override { return "b05f955d3825be7d9796ea13a0701cfb"; };

  };

}
#endif
