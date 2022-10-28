#ifndef _ROS_behavior_actions_AutoState_h
#define _ROS_behavior_actions_AutoState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace behavior_actions
{

  class AutoState : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef uint8_t _id_type;
      _id_type id;
      typedef const char* _string_type;
      _string_type string;

    AutoState():
      header(),
      id(0),
      string("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->id >> (8 * 0)) & 0xFF;
      offset += sizeof(this->id);
      uint32_t length_string = strlen(this->string);
      varToArr(outbuffer + offset, length_string);
      offset += 4;
      memcpy(outbuffer + offset, this->string, length_string);
      offset += length_string;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->id =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->id);
      uint32_t length_string;
      arrToVar(length_string, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_string; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_string-1]=0;
      this->string = (char *)(inbuffer + offset-1);
      offset += length_string;
     return offset;
    }

    virtual const char * getType() override { return "behavior_actions/AutoState"; };
    virtual const char * getMD5() override { return "fc6ada30e73c2f37fd07012ebb7d9e49"; };

  };

}
#endif
