#ifndef _ROS_marker_msgs_MarkerWithCovariance_h
#define _ROS_marker_msgs_MarkerWithCovariance_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "marker_msgs/Marker.h"

namespace marker_msgs
{

  class MarkerWithCovariance : public ros::Msg
  {
    public:
      typedef marker_msgs::Marker _marker_type;
      _marker_type marker;
      double covariance[36];

    MarkerWithCovariance():
      marker(),
      covariance()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->marker.serialize(outbuffer + offset);
      for( uint32_t i = 0; i < 36; i++){
      union {
        double real;
        uint64_t base;
      } u_covariancei;
      u_covariancei.real = this->covariance[i];
      *(outbuffer + offset + 0) = (u_covariancei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_covariancei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_covariancei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_covariancei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_covariancei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_covariancei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_covariancei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_covariancei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->covariance[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->marker.deserialize(inbuffer + offset);
      for( uint32_t i = 0; i < 36; i++){
      union {
        double real;
        uint64_t base;
      } u_covariancei;
      u_covariancei.base = 0;
      u_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_covariancei.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->covariance[i] = u_covariancei.real;
      offset += sizeof(this->covariance[i]);
      }
     return offset;
    }

    virtual const char * getType() override { return "marker_msgs/MarkerWithCovariance"; };
    virtual const char * getMD5() override { return "ace241bc4ec8f4b399c13e05763be31a"; };

  };

}
#endif
