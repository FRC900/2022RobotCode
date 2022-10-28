#ifndef _ROS_field_obj_TrackObject_h
#define _ROS_field_obj_TrackObject_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Point32.h"

namespace field_obj
{

  class TrackObject : public ros::Msg
  {
    public:
      typedef geometry_msgs::Point32 _tl_type;
      _tl_type tl;
      typedef geometry_msgs::Point32 _br_type;
      _br_type br;
      typedef uint32_t _id_type;
      _id_type id;
      typedef const char* _label_type;
      _label_type label;
      typedef int32_t _trackID_type;
      _trackID_type trackID;

    TrackObject():
      tl(),
      br(),
      id(0),
      label(""),
      trackID(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->tl.serialize(outbuffer + offset);
      offset += this->br.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->id >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->id >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->id >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->id >> (8 * 3)) & 0xFF;
      offset += sizeof(this->id);
      uint32_t length_label = strlen(this->label);
      varToArr(outbuffer + offset, length_label);
      offset += 4;
      memcpy(outbuffer + offset, this->label, length_label);
      offset += length_label;
      union {
        int32_t real;
        uint32_t base;
      } u_trackID;
      u_trackID.real = this->trackID;
      *(outbuffer + offset + 0) = (u_trackID.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_trackID.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_trackID.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_trackID.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->trackID);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->tl.deserialize(inbuffer + offset);
      offset += this->br.deserialize(inbuffer + offset);
      this->id =  ((uint32_t) (*(inbuffer + offset)));
      this->id |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->id |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->id |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->id);
      uint32_t length_label;
      arrToVar(length_label, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_label; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_label-1]=0;
      this->label = (char *)(inbuffer + offset-1);
      offset += length_label;
      union {
        int32_t real;
        uint32_t base;
      } u_trackID;
      u_trackID.base = 0;
      u_trackID.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_trackID.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_trackID.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_trackID.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->trackID = u_trackID.real;
      offset += sizeof(this->trackID);
     return offset;
    }

    virtual const char * getType() override { return "field_obj/TrackObject"; };
    virtual const char * getMD5() override { return "f77c676257b5d3d144c33219fa7d17e1"; };

  };

}
#endif
