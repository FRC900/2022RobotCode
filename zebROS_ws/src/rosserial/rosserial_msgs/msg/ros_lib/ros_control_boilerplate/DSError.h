#ifndef _ROS_SERVICE_DSError_h
#define _ROS_SERVICE_DSError_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace ros_control_boilerplate
{

static const char DSERROR[] = "ros_control_boilerplate/DSError";

  class DSErrorRequest : public ros::Msg
  {
    public:
      typedef int32_t _error_code_type;
      _error_code_type error_code;
      typedef const char* _details_type;
      _details_type details;

    DSErrorRequest():
      error_code(0),
      details("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_error_code;
      u_error_code.real = this->error_code;
      *(outbuffer + offset + 0) = (u_error_code.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_error_code.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_error_code.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_error_code.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->error_code);
      uint32_t length_details = strlen(this->details);
      varToArr(outbuffer + offset, length_details);
      offset += 4;
      memcpy(outbuffer + offset, this->details, length_details);
      offset += length_details;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_error_code;
      u_error_code.base = 0;
      u_error_code.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_error_code.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_error_code.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_error_code.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->error_code = u_error_code.real;
      offset += sizeof(this->error_code);
      uint32_t length_details;
      arrToVar(length_details, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_details; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_details-1]=0;
      this->details = (char *)(inbuffer + offset-1);
      offset += length_details;
     return offset;
    }

    virtual const char * getType() override { return DSERROR; };
    virtual const char * getMD5() override { return "bb20c9435a80162c00c241364a3b1046"; };

  };

  class DSErrorResponse : public ros::Msg
  {
    public:

    DSErrorResponse()
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

    virtual const char * getType() override { return DSERROR; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class DSError {
    public:
    typedef DSErrorRequest Request;
    typedef DSErrorResponse Response;
  };

}
#endif
