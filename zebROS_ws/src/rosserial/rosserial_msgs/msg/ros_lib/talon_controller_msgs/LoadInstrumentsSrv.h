#ifndef _ROS_SERVICE_LoadInstrumentsSrv_h
#define _ROS_SERVICE_LoadInstrumentsSrv_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace talon_controller_msgs
{

static const char LOADINSTRUMENTSSRV[] = "talon_controller_msgs/LoadInstrumentsSrv";

  class LoadInstrumentsSrvRequest : public ros::Msg
  {
    public:
      uint32_t instruments_length;
      typedef char* _instruments_type;
      _instruments_type st_instruments;
      _instruments_type * instruments;

    LoadInstrumentsSrvRequest():
      instruments_length(0), st_instruments(), instruments(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->instruments_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->instruments_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->instruments_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->instruments_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->instruments_length);
      for( uint32_t i = 0; i < instruments_length; i++){
      uint32_t length_instrumentsi = strlen(this->instruments[i]);
      varToArr(outbuffer + offset, length_instrumentsi);
      offset += 4;
      memcpy(outbuffer + offset, this->instruments[i], length_instrumentsi);
      offset += length_instrumentsi;
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t instruments_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      instruments_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      instruments_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      instruments_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->instruments_length);
      if(instruments_lengthT > instruments_length)
        this->instruments = (char**)realloc(this->instruments, instruments_lengthT * sizeof(char*));
      instruments_length = instruments_lengthT;
      for( uint32_t i = 0; i < instruments_length; i++){
      uint32_t length_st_instruments;
      arrToVar(length_st_instruments, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_instruments; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_instruments-1]=0;
      this->st_instruments = (char *)(inbuffer + offset-1);
      offset += length_st_instruments;
        memcpy( &(this->instruments[i]), &(this->st_instruments), sizeof(char*));
      }
     return offset;
    }

    virtual const char * getType() override { return LOADINSTRUMENTSSRV; };
    virtual const char * getMD5() override { return "6ec6ab5c37a9a13d84f429925668a375"; };

  };

  class LoadInstrumentsSrvResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;

    LoadInstrumentsSrvResponse():
      success(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.real = this->success;
      *(outbuffer + offset + 0) = (u_success.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->success);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.base = 0;
      u_success.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->success = u_success.real;
      offset += sizeof(this->success);
     return offset;
    }

    virtual const char * getType() override { return LOADINSTRUMENTSSRV; };
    virtual const char * getMD5() override { return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class LoadInstrumentsSrv {
    public:
    typedef LoadInstrumentsSrvRequest Request;
    typedef LoadInstrumentsSrvResponse Response;
  };

}
#endif
