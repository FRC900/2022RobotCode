#ifndef _ROS_as726x_msgs_AS726xCalibratedChannelData_h
#define _ROS_as726x_msgs_AS726xCalibratedChannelData_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace as726x_msgs
{

  class AS726xCalibratedChannelData : public ros::Msg
  {
    public:
      uint32_t calibrated_channel_data_length;
      typedef float _calibrated_channel_data_type;
      _calibrated_channel_data_type st_calibrated_channel_data;
      _calibrated_channel_data_type * calibrated_channel_data;

    AS726xCalibratedChannelData():
      calibrated_channel_data_length(0), st_calibrated_channel_data(), calibrated_channel_data(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->calibrated_channel_data_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->calibrated_channel_data_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->calibrated_channel_data_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->calibrated_channel_data_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->calibrated_channel_data_length);
      for( uint32_t i = 0; i < calibrated_channel_data_length; i++){
      union {
        float real;
        uint32_t base;
      } u_calibrated_channel_datai;
      u_calibrated_channel_datai.real = this->calibrated_channel_data[i];
      *(outbuffer + offset + 0) = (u_calibrated_channel_datai.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_calibrated_channel_datai.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_calibrated_channel_datai.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_calibrated_channel_datai.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->calibrated_channel_data[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t calibrated_channel_data_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      calibrated_channel_data_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      calibrated_channel_data_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      calibrated_channel_data_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->calibrated_channel_data_length);
      if(calibrated_channel_data_lengthT > calibrated_channel_data_length)
        this->calibrated_channel_data = (float*)realloc(this->calibrated_channel_data, calibrated_channel_data_lengthT * sizeof(float));
      calibrated_channel_data_length = calibrated_channel_data_lengthT;
      for( uint32_t i = 0; i < calibrated_channel_data_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_calibrated_channel_data;
      u_st_calibrated_channel_data.base = 0;
      u_st_calibrated_channel_data.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_calibrated_channel_data.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_calibrated_channel_data.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_calibrated_channel_data.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_calibrated_channel_data = u_st_calibrated_channel_data.real;
      offset += sizeof(this->st_calibrated_channel_data);
        memcpy( &(this->calibrated_channel_data[i]), &(this->st_calibrated_channel_data), sizeof(float));
      }
     return offset;
    }

    virtual const char * getType() override { return "as726x_msgs/AS726xCalibratedChannelData"; };
    virtual const char * getMD5() override { return "50310a2a6db13ce92a0037226e161289"; };

  };

}
#endif
