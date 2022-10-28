#ifndef _ROS_field_obj_Object_h
#define _ROS_field_obj_Object_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Point.h"

namespace field_obj
{

  class Object : public ros::Msg
  {
    public:
      typedef geometry_msgs::Point _location_type;
      _location_type location;
      typedef double _angle_type;
      _angle_type angle;
      typedef const char* _id_type;
      _id_type id;
      typedef float _confidence_type;
      _confidence_type confidence;

    Object():
      location(),
      angle(0),
      id(""),
      confidence(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->location.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_angle;
      u_angle.real = this->angle;
      *(outbuffer + offset + 0) = (u_angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_angle.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_angle.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_angle.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_angle.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_angle.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->angle);
      uint32_t length_id = strlen(this->id);
      varToArr(outbuffer + offset, length_id);
      offset += 4;
      memcpy(outbuffer + offset, this->id, length_id);
      offset += length_id;
      union {
        float real;
        uint32_t base;
      } u_confidence;
      u_confidence.real = this->confidence;
      *(outbuffer + offset + 0) = (u_confidence.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_confidence.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_confidence.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_confidence.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->confidence);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->location.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_angle;
      u_angle.base = 0;
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->angle = u_angle.real;
      offset += sizeof(this->angle);
      uint32_t length_id;
      arrToVar(length_id, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_id; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_id-1]=0;
      this->id = (char *)(inbuffer + offset-1);
      offset += length_id;
      union {
        float real;
        uint32_t base;
      } u_confidence;
      u_confidence.base = 0;
      u_confidence.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_confidence.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_confidence.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_confidence.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->confidence = u_confidence.real;
      offset += sizeof(this->confidence);
     return offset;
    }

    virtual const char * getType() override { return "field_obj/Object"; };
    virtual const char * getMD5() override { return "c422b5470f2b5fe3c27a52396b683fdd"; };

  };

}
#endif
