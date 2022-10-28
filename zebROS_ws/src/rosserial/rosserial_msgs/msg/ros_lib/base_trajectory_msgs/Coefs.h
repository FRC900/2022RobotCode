#ifndef _ROS_base_trajectory_msgs_Coefs_h
#define _ROS_base_trajectory_msgs_Coefs_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace base_trajectory_msgs
{

  class Coefs : public ros::Msg
  {
    public:
      uint32_t spline_length;
      typedef double _spline_type;
      _spline_type st_spline;
      _spline_type * spline;

    Coefs():
      spline_length(0), st_spline(), spline(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->spline_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->spline_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->spline_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->spline_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->spline_length);
      for( uint32_t i = 0; i < spline_length; i++){
      union {
        double real;
        uint64_t base;
      } u_splinei;
      u_splinei.real = this->spline[i];
      *(outbuffer + offset + 0) = (u_splinei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_splinei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_splinei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_splinei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_splinei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_splinei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_splinei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_splinei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->spline[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t spline_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      spline_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      spline_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      spline_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->spline_length);
      if(spline_lengthT > spline_length)
        this->spline = (double*)realloc(this->spline, spline_lengthT * sizeof(double));
      spline_length = spline_lengthT;
      for( uint32_t i = 0; i < spline_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_spline;
      u_st_spline.base = 0;
      u_st_spline.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_spline.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_spline.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_spline.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_spline.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_spline.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_spline.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_spline.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_spline = u_st_spline.real;
      offset += sizeof(this->st_spline);
        memcpy( &(this->spline[i]), &(this->st_spline), sizeof(double));
      }
     return offset;
    }

    virtual const char * getType() override { return "base_trajectory_msgs/Coefs"; };
    virtual const char * getMD5() override { return "369e2ee5470491d0958d361c6498cf95"; };

  };

}
#endif
