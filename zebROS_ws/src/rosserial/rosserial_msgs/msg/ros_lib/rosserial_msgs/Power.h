#ifndef _ROS_rosserial_msgs_Power_h
#define _ROS_rosserial_msgs_Power_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace rosserial_msgs
{

  class Power : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef const char* _partName_type;
      _partName_type partName;
      typedef const char* _version_type;
      _version_type version;
      typedef const char* _serialString_type;
      _serialString_type serialString;
      typedef double _voltage1_type;
      _voltage1_type voltage1;
      typedef double _voltage2_type;
      _voltage2_type voltage2;
      typedef double _voltage3_type;
      _voltage3_type voltage3;
      typedef double _current_type;
      _current_type current;
      typedef double _coulombs_type;
      _coulombs_type coulombs;
      typedef double _temp_type;
      _temp_type temp;

    Power():
      header(),
      partName(""),
      version(""),
      serialString(""),
      voltage1(0),
      voltage2(0),
      voltage3(0),
      current(0),
      coulombs(0),
      temp(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      uint32_t length_partName = strlen(this->partName);
      varToArr(outbuffer + offset, length_partName);
      offset += 4;
      memcpy(outbuffer + offset, this->partName, length_partName);
      offset += length_partName;
      uint32_t length_version = strlen(this->version);
      varToArr(outbuffer + offset, length_version);
      offset += 4;
      memcpy(outbuffer + offset, this->version, length_version);
      offset += length_version;
      uint32_t length_serialString = strlen(this->serialString);
      varToArr(outbuffer + offset, length_serialString);
      offset += 4;
      memcpy(outbuffer + offset, this->serialString, length_serialString);
      offset += length_serialString;
      union {
        double real;
        uint64_t base;
      } u_voltage1;
      u_voltage1.real = this->voltage1;
      *(outbuffer + offset + 0) = (u_voltage1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_voltage1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_voltage1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_voltage1.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_voltage1.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_voltage1.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_voltage1.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_voltage1.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->voltage1);
      union {
        double real;
        uint64_t base;
      } u_voltage2;
      u_voltage2.real = this->voltage2;
      *(outbuffer + offset + 0) = (u_voltage2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_voltage2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_voltage2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_voltage2.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_voltage2.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_voltage2.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_voltage2.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_voltage2.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->voltage2);
      union {
        double real;
        uint64_t base;
      } u_voltage3;
      u_voltage3.real = this->voltage3;
      *(outbuffer + offset + 0) = (u_voltage3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_voltage3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_voltage3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_voltage3.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_voltage3.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_voltage3.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_voltage3.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_voltage3.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->voltage3);
      union {
        double real;
        uint64_t base;
      } u_current;
      u_current.real = this->current;
      *(outbuffer + offset + 0) = (u_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_current.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_current.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_current.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_current.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->current);
      union {
        double real;
        uint64_t base;
      } u_coulombs;
      u_coulombs.real = this->coulombs;
      *(outbuffer + offset + 0) = (u_coulombs.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_coulombs.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_coulombs.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_coulombs.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_coulombs.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_coulombs.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_coulombs.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_coulombs.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->coulombs);
      union {
        double real;
        uint64_t base;
      } u_temp;
      u_temp.real = this->temp;
      *(outbuffer + offset + 0) = (u_temp.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_temp.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_temp.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_temp.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_temp.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_temp.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_temp.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_temp.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->temp);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t length_partName;
      arrToVar(length_partName, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_partName; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_partName-1]=0;
      this->partName = (char *)(inbuffer + offset-1);
      offset += length_partName;
      uint32_t length_version;
      arrToVar(length_version, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_version; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_version-1]=0;
      this->version = (char *)(inbuffer + offset-1);
      offset += length_version;
      uint32_t length_serialString;
      arrToVar(length_serialString, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_serialString; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_serialString-1]=0;
      this->serialString = (char *)(inbuffer + offset-1);
      offset += length_serialString;
      union {
        double real;
        uint64_t base;
      } u_voltage1;
      u_voltage1.base = 0;
      u_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->voltage1 = u_voltage1.real;
      offset += sizeof(this->voltage1);
      union {
        double real;
        uint64_t base;
      } u_voltage2;
      u_voltage2.base = 0;
      u_voltage2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_voltage2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_voltage2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_voltage2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_voltage2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_voltage2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_voltage2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_voltage2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->voltage2 = u_voltage2.real;
      offset += sizeof(this->voltage2);
      union {
        double real;
        uint64_t base;
      } u_voltage3;
      u_voltage3.base = 0;
      u_voltage3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_voltage3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_voltage3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_voltage3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_voltage3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_voltage3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_voltage3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_voltage3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->voltage3 = u_voltage3.real;
      offset += sizeof(this->voltage3);
      union {
        double real;
        uint64_t base;
      } u_current;
      u_current.base = 0;
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->current = u_current.real;
      offset += sizeof(this->current);
      union {
        double real;
        uint64_t base;
      } u_coulombs;
      u_coulombs.base = 0;
      u_coulombs.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_coulombs.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_coulombs.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_coulombs.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_coulombs.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_coulombs.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_coulombs.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_coulombs.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->coulombs = u_coulombs.real;
      offset += sizeof(this->coulombs);
      union {
        double real;
        uint64_t base;
      } u_temp;
      u_temp.base = 0;
      u_temp.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_temp.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_temp.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_temp.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_temp.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_temp.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_temp.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_temp.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->temp = u_temp.real;
      offset += sizeof(this->temp);
     return offset;
    }

    virtual const char * getType() override { return "rosserial_msgs/Power"; };
    virtual const char * getMD5() override { return "022c121e79aa6e6764f9a2825fc5e279"; };

  };

}
#endif
