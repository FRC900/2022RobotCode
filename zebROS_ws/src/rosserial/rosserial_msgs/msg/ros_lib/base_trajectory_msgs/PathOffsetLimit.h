#ifndef _ROS_base_trajectory_msgs_PathOffsetLimit_h
#define _ROS_base_trajectory_msgs_PathOffsetLimit_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace base_trajectory_msgs
{

  class PathOffsetLimit : public ros::Msg
  {
    public:
      typedef double _min_x_type;
      _min_x_type min_x;
      typedef double _max_x_type;
      _max_x_type max_x;
      typedef double _min_y_type;
      _min_y_type min_y;
      typedef double _max_y_type;
      _max_y_type max_y;

    PathOffsetLimit():
      min_x(0),
      max_x(0),
      min_y(0),
      max_y(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_min_x;
      u_min_x.real = this->min_x;
      *(outbuffer + offset + 0) = (u_min_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_min_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_min_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_min_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_min_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_min_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_min_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_min_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->min_x);
      union {
        double real;
        uint64_t base;
      } u_max_x;
      u_max_x.real = this->max_x;
      *(outbuffer + offset + 0) = (u_max_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_x);
      union {
        double real;
        uint64_t base;
      } u_min_y;
      u_min_y.real = this->min_y;
      *(outbuffer + offset + 0) = (u_min_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_min_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_min_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_min_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_min_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_min_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_min_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_min_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->min_y);
      union {
        double real;
        uint64_t base;
      } u_max_y;
      u_max_y.real = this->max_y;
      *(outbuffer + offset + 0) = (u_max_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_y);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_min_x;
      u_min_x.base = 0;
      u_min_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_min_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_min_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_min_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_min_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_min_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_min_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_min_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->min_x = u_min_x.real;
      offset += sizeof(this->min_x);
      union {
        double real;
        uint64_t base;
      } u_max_x;
      u_max_x.base = 0;
      u_max_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_x = u_max_x.real;
      offset += sizeof(this->max_x);
      union {
        double real;
        uint64_t base;
      } u_min_y;
      u_min_y.base = 0;
      u_min_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_min_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_min_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_min_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_min_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_min_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_min_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_min_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->min_y = u_min_y.real;
      offset += sizeof(this->min_y);
      union {
        double real;
        uint64_t base;
      } u_max_y;
      u_max_y.base = 0;
      u_max_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_y = u_max_y.real;
      offset += sizeof(this->max_y);
     return offset;
    }

    virtual const char * getType() override { return "base_trajectory_msgs/PathOffsetLimit"; };
    virtual const char * getMD5() override { return "fc0c729c91ed7c9ff87de87e57ec320d"; };

  };

}
#endif
