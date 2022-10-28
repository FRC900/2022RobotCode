#ifndef _ROS_SERVICE_LineBreakSensors_h
#define _ROS_SERVICE_LineBreakSensors_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace ros_control_boilerplate
{

static const char LINEBREAKSENSORS[] = "ros_control_boilerplate/LineBreakSensors";

  class LineBreakSensorsRequest : public ros::Msg
  {
    public:
      typedef uint64_t _j_type;
      _j_type j;
      typedef const char* _name_type;
      _name_type name;
      typedef bool _value_type;
      _value_type value;

    LineBreakSensorsRequest():
      j(0),
      name(""),
      value(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->j >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->j >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->j >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->j >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (this->j >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (this->j >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (this->j >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (this->j >> (8 * 7)) & 0xFF;
      offset += sizeof(this->j);
      uint32_t length_name = strlen(this->name);
      varToArr(outbuffer + offset, length_name);
      offset += 4;
      memcpy(outbuffer + offset, this->name, length_name);
      offset += length_name;
      union {
        bool real;
        uint8_t base;
      } u_value;
      u_value.real = this->value;
      *(outbuffer + offset + 0) = (u_value.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->value);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->j =  ((uint64_t) (*(inbuffer + offset)));
      this->j |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->j |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->j |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->j |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      this->j |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      this->j |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      this->j |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      offset += sizeof(this->j);
      uint32_t length_name;
      arrToVar(length_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_name-1]=0;
      this->name = (char *)(inbuffer + offset-1);
      offset += length_name;
      union {
        bool real;
        uint8_t base;
      } u_value;
      u_value.base = 0;
      u_value.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->value = u_value.real;
      offset += sizeof(this->value);
     return offset;
    }

    virtual const char * getType() override { return LINEBREAKSENSORS; };
    virtual const char * getMD5() override { return "6ba4a11e97d96b717271b75f5e116646"; };

  };

  class LineBreakSensorsResponse : public ros::Msg
  {
    public:

    LineBreakSensorsResponse()
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

    virtual const char * getType() override { return LINEBREAKSENSORS; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class LineBreakSensors {
    public:
    typedef LineBreakSensorsRequest Request;
    typedef LineBreakSensorsResponse Response;
  };

}
#endif
