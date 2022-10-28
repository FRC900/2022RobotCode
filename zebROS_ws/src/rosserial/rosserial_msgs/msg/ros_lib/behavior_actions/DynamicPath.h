#ifndef _ROS_SERVICE_DynamicPath_h
#define _ROS_SERVICE_DynamicPath_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "nav_msgs/Path.h"

namespace behavior_actions
{

static const char DYNAMICPATH[] = "behavior_actions/DynamicPath";

  class DynamicPathRequest : public ros::Msg
  {
    public:
      typedef const char* _path_name_type;
      _path_name_type path_name;
      typedef nav_msgs::Path _dynamic_path_type;
      _dynamic_path_type dynamic_path;

    DynamicPathRequest():
      path_name(""),
      dynamic_path()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_path_name = strlen(this->path_name);
      varToArr(outbuffer + offset, length_path_name);
      offset += 4;
      memcpy(outbuffer + offset, this->path_name, length_path_name);
      offset += length_path_name;
      offset += this->dynamic_path.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_path_name;
      arrToVar(length_path_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_path_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_path_name-1]=0;
      this->path_name = (char *)(inbuffer + offset-1);
      offset += length_path_name;
      offset += this->dynamic_path.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return DYNAMICPATH; };
    virtual const char * getMD5() override { return "0e0ecfc8383d3e67d39febdf9fc9b9e7"; };

  };

  class DynamicPathResponse : public ros::Msg
  {
    public:

    DynamicPathResponse()
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

    virtual const char * getType() override { return DYNAMICPATH; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class DynamicPath {
    public:
    typedef DynamicPathRequest Request;
    typedef DynamicPathResponse Response;
  };

}
#endif
