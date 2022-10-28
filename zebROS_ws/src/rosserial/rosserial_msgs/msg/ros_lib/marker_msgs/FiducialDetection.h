#ifndef _ROS_marker_msgs_FiducialDetection_h
#define _ROS_marker_msgs_FiducialDetection_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "marker_msgs/Fiducial.h"

namespace marker_msgs
{

  class FiducialDetection : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t camera_d_length;
      typedef double _camera_d_type;
      _camera_d_type st_camera_d;
      _camera_d_type * camera_d;
      double camera_k[9];
      typedef const char* _type_type;
      _type_type type;
      uint32_t fiducial_length;
      typedef marker_msgs::Fiducial _fiducial_type;
      _fiducial_type st_fiducial;
      _fiducial_type * fiducial;

    FiducialDetection():
      header(),
      camera_d_length(0), st_camera_d(), camera_d(nullptr),
      camera_k(),
      type(""),
      fiducial_length(0), st_fiducial(), fiducial(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->camera_d_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->camera_d_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->camera_d_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->camera_d_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->camera_d_length);
      for( uint32_t i = 0; i < camera_d_length; i++){
      union {
        double real;
        uint64_t base;
      } u_camera_di;
      u_camera_di.real = this->camera_d[i];
      *(outbuffer + offset + 0) = (u_camera_di.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_camera_di.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_camera_di.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_camera_di.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_camera_di.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_camera_di.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_camera_di.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_camera_di.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->camera_d[i]);
      }
      for( uint32_t i = 0; i < 9; i++){
      union {
        double real;
        uint64_t base;
      } u_camera_ki;
      u_camera_ki.real = this->camera_k[i];
      *(outbuffer + offset + 0) = (u_camera_ki.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_camera_ki.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_camera_ki.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_camera_ki.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_camera_ki.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_camera_ki.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_camera_ki.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_camera_ki.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->camera_k[i]);
      }
      uint32_t length_type = strlen(this->type);
      varToArr(outbuffer + offset, length_type);
      offset += 4;
      memcpy(outbuffer + offset, this->type, length_type);
      offset += length_type;
      *(outbuffer + offset + 0) = (this->fiducial_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->fiducial_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->fiducial_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->fiducial_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fiducial_length);
      for( uint32_t i = 0; i < fiducial_length; i++){
      offset += this->fiducial[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t camera_d_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      camera_d_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      camera_d_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      camera_d_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->camera_d_length);
      if(camera_d_lengthT > camera_d_length)
        this->camera_d = (double*)realloc(this->camera_d, camera_d_lengthT * sizeof(double));
      camera_d_length = camera_d_lengthT;
      for( uint32_t i = 0; i < camera_d_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_camera_d;
      u_st_camera_d.base = 0;
      u_st_camera_d.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_camera_d.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_camera_d.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_camera_d.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_camera_d.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_camera_d.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_camera_d.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_camera_d.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_camera_d = u_st_camera_d.real;
      offset += sizeof(this->st_camera_d);
        memcpy( &(this->camera_d[i]), &(this->st_camera_d), sizeof(double));
      }
      for( uint32_t i = 0; i < 9; i++){
      union {
        double real;
        uint64_t base;
      } u_camera_ki;
      u_camera_ki.base = 0;
      u_camera_ki.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_camera_ki.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_camera_ki.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_camera_ki.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_camera_ki.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_camera_ki.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_camera_ki.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_camera_ki.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->camera_k[i] = u_camera_ki.real;
      offset += sizeof(this->camera_k[i]);
      }
      uint32_t length_type;
      arrToVar(length_type, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_type; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_type-1]=0;
      this->type = (char *)(inbuffer + offset-1);
      offset += length_type;
      uint32_t fiducial_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      fiducial_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      fiducial_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      fiducial_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->fiducial_length);
      if(fiducial_lengthT > fiducial_length)
        this->fiducial = (marker_msgs::Fiducial*)realloc(this->fiducial, fiducial_lengthT * sizeof(marker_msgs::Fiducial));
      fiducial_length = fiducial_lengthT;
      for( uint32_t i = 0; i < fiducial_length; i++){
      offset += this->st_fiducial.deserialize(inbuffer + offset);
        memcpy( &(this->fiducial[i]), &(this->st_fiducial), sizeof(marker_msgs::Fiducial));
      }
     return offset;
    }

    virtual const char * getType() override { return "marker_msgs/FiducialDetection"; };
    virtual const char * getMD5() override { return "2ebb116fbde270de5551b0dc65e5f333"; };

  };

}
#endif
