#ifndef _ROS_marker_msgs_Marker_h
#define _ROS_marker_msgs_Marker_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Pose.h"

namespace marker_msgs
{

  class Marker : public ros::Msg
  {
    public:
      uint32_t ids_length;
      typedef int32_t _ids_type;
      _ids_type st_ids;
      _ids_type * ids;
      uint32_t ids_confidence_length;
      typedef double _ids_confidence_type;
      _ids_confidence_type st_ids_confidence;
      _ids_confidence_type * ids_confidence;
      typedef geometry_msgs::Pose _pose_type;
      _pose_type pose;

    Marker():
      ids_length(0), st_ids(), ids(nullptr),
      ids_confidence_length(0), st_ids_confidence(), ids_confidence(nullptr),
      pose()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->ids_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->ids_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->ids_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->ids_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ids_length);
      for( uint32_t i = 0; i < ids_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_idsi;
      u_idsi.real = this->ids[i];
      *(outbuffer + offset + 0) = (u_idsi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_idsi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_idsi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_idsi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ids[i]);
      }
      *(outbuffer + offset + 0) = (this->ids_confidence_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->ids_confidence_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->ids_confidence_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->ids_confidence_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ids_confidence_length);
      for( uint32_t i = 0; i < ids_confidence_length; i++){
      union {
        double real;
        uint64_t base;
      } u_ids_confidencei;
      u_ids_confidencei.real = this->ids_confidence[i];
      *(outbuffer + offset + 0) = (u_ids_confidencei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ids_confidencei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ids_confidencei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ids_confidencei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ids_confidencei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ids_confidencei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ids_confidencei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ids_confidencei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ids_confidence[i]);
      }
      offset += this->pose.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t ids_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      ids_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      ids_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      ids_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->ids_length);
      if(ids_lengthT > ids_length)
        this->ids = (int32_t*)realloc(this->ids, ids_lengthT * sizeof(int32_t));
      ids_length = ids_lengthT;
      for( uint32_t i = 0; i < ids_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_ids;
      u_st_ids.base = 0;
      u_st_ids.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_ids.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_ids.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_ids.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_ids = u_st_ids.real;
      offset += sizeof(this->st_ids);
        memcpy( &(this->ids[i]), &(this->st_ids), sizeof(int32_t));
      }
      uint32_t ids_confidence_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      ids_confidence_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      ids_confidence_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      ids_confidence_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->ids_confidence_length);
      if(ids_confidence_lengthT > ids_confidence_length)
        this->ids_confidence = (double*)realloc(this->ids_confidence, ids_confidence_lengthT * sizeof(double));
      ids_confidence_length = ids_confidence_lengthT;
      for( uint32_t i = 0; i < ids_confidence_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_ids_confidence;
      u_st_ids_confidence.base = 0;
      u_st_ids_confidence.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_ids_confidence.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_ids_confidence.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_ids_confidence.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_ids_confidence.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_ids_confidence.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_ids_confidence.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_ids_confidence.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_ids_confidence = u_st_ids_confidence.real;
      offset += sizeof(this->st_ids_confidence);
        memcpy( &(this->ids_confidence[i]), &(this->st_ids_confidence), sizeof(double));
      }
      offset += this->pose.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "marker_msgs/Marker"; };
    virtual const char * getMD5() override { return "30e386538c9eeff614c69452dbde6926"; };

  };

}
#endif
