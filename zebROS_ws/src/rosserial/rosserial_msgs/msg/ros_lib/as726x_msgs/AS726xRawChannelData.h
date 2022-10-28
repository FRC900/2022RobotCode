#ifndef _ROS_as726x_msgs_AS726xRawChannelData_h
#define _ROS_as726x_msgs_AS726xRawChannelData_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace as726x_msgs
{

  class AS726xRawChannelData : public ros::Msg
  {
    public:
      uint32_t raw_channel_data_length;
      typedef uint16_t _raw_channel_data_type;
      _raw_channel_data_type st_raw_channel_data;
      _raw_channel_data_type * raw_channel_data;

    AS726xRawChannelData():
      raw_channel_data_length(0), st_raw_channel_data(), raw_channel_data(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->raw_channel_data_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->raw_channel_data_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->raw_channel_data_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->raw_channel_data_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->raw_channel_data_length);
      for( uint32_t i = 0; i < raw_channel_data_length; i++){
      *(outbuffer + offset + 0) = (this->raw_channel_data[i] >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->raw_channel_data[i] >> (8 * 1)) & 0xFF;
      offset += sizeof(this->raw_channel_data[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t raw_channel_data_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      raw_channel_data_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      raw_channel_data_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      raw_channel_data_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->raw_channel_data_length);
      if(raw_channel_data_lengthT > raw_channel_data_length)
        this->raw_channel_data = (uint16_t*)realloc(this->raw_channel_data, raw_channel_data_lengthT * sizeof(uint16_t));
      raw_channel_data_length = raw_channel_data_lengthT;
      for( uint32_t i = 0; i < raw_channel_data_length; i++){
      this->st_raw_channel_data =  ((uint16_t) (*(inbuffer + offset)));
      this->st_raw_channel_data |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->st_raw_channel_data);
        memcpy( &(this->raw_channel_data[i]), &(this->st_raw_channel_data), sizeof(uint16_t));
      }
     return offset;
    }

    virtual const char * getType() override { return "as726x_msgs/AS726xRawChannelData"; };
    virtual const char * getMD5() override { return "f8a98dfcbc908afac5ec975e6ab15037"; };

  };

}
#endif
