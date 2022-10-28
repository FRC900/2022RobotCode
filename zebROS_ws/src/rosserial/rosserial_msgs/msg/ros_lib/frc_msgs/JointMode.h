#ifndef _ROS_frc_msgs_JointMode_h
#define _ROS_frc_msgs_JointMode_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace frc_msgs
{

  class JointMode : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t name_length;
      typedef char* _name_type;
      _name_type st_name;
      _name_type * name;
      uint32_t mode_length;
      typedef int8_t _mode_type;
      _mode_type st_mode;
      _mode_type * mode;

    JointMode():
      header(),
      name_length(0), st_name(), name(nullptr),
      mode_length(0), st_mode(), mode(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->name_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->name_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->name_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->name_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->name_length);
      for( uint32_t i = 0; i < name_length; i++){
      uint32_t length_namei = strlen(this->name[i]);
      varToArr(outbuffer + offset, length_namei);
      offset += 4;
      memcpy(outbuffer + offset, this->name[i], length_namei);
      offset += length_namei;
      }
      *(outbuffer + offset + 0) = (this->mode_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->mode_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->mode_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->mode_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->mode_length);
      for( uint32_t i = 0; i < mode_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_modei;
      u_modei.real = this->mode[i];
      *(outbuffer + offset + 0) = (u_modei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->mode[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t name_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      name_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      name_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      name_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->name_length);
      if(name_lengthT > name_length)
        this->name = (char**)realloc(this->name, name_lengthT * sizeof(char*));
      name_length = name_lengthT;
      for( uint32_t i = 0; i < name_length; i++){
      uint32_t length_st_name;
      arrToVar(length_st_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_name-1]=0;
      this->st_name = (char *)(inbuffer + offset-1);
      offset += length_st_name;
        memcpy( &(this->name[i]), &(this->st_name), sizeof(char*));
      }
      uint32_t mode_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      mode_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      mode_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      mode_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->mode_length);
      if(mode_lengthT > mode_length)
        this->mode = (int8_t*)realloc(this->mode, mode_lengthT * sizeof(int8_t));
      mode_length = mode_lengthT;
      for( uint32_t i = 0; i < mode_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_mode;
      u_st_mode.base = 0;
      u_st_mode.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_mode = u_st_mode.real;
      offset += sizeof(this->st_mode);
        memcpy( &(this->mode[i]), &(this->st_mode), sizeof(int8_t));
      }
     return offset;
    }

    virtual const char * getType() override { return "frc_msgs/JointMode"; };
    virtual const char * getMD5() override { return "dcccdb40f481e3e54de88eba79041e70"; };

  };

}
#endif
