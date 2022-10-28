#ifndef _ROS_SERVICE_LoadMusicSrv_h
#define _ROS_SERVICE_LoadMusicSrv_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace talon_controller_msgs
{

static const char LOADMUSICSRV[] = "talon_controller_msgs/LoadMusicSrv";

  class LoadMusicSrvRequest : public ros::Msg
  {
    public:
      typedef const char* _music_path_type;
      _music_path_type music_path;

    LoadMusicSrvRequest():
      music_path("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_music_path = strlen(this->music_path);
      varToArr(outbuffer + offset, length_music_path);
      offset += 4;
      memcpy(outbuffer + offset, this->music_path, length_music_path);
      offset += length_music_path;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_music_path;
      arrToVar(length_music_path, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_music_path; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_music_path-1]=0;
      this->music_path = (char *)(inbuffer + offset-1);
      offset += length_music_path;
     return offset;
    }

    virtual const char * getType() override { return LOADMUSICSRV; };
    virtual const char * getMD5() override { return "b2d09829452828247b2631028a949bf3"; };

  };

  class LoadMusicSrvResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;

    LoadMusicSrvResponse():
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

    virtual const char * getType() override { return LOADMUSICSRV; };
    virtual const char * getMD5() override { return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class LoadMusicSrv {
    public:
    typedef LoadMusicSrvRequest Request;
    typedef LoadMusicSrvResponse Response;
  };

}
#endif
