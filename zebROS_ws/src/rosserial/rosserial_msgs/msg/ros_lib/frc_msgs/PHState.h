#ifndef _ROS_frc_msgs_PHState_h
#define _ROS_frc_msgs_PHState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace frc_msgs
{

  class PHState : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t name_length;
      typedef char* _name_type;
      _name_type st_name;
      _name_type * name;
      uint32_t id_length;
      typedef int32_t _id_type;
      _id_type st_id;
      _id_type * id;
      uint32_t compressor_enabled_length;
      typedef bool _compressor_enabled_type;
      _compressor_enabled_type st_compressor_enabled;
      _compressor_enabled_type * compressor_enabled;
      uint32_t pressure_switch_length;
      typedef bool _pressure_switch_type;
      _pressure_switch_type st_pressure_switch;
      _pressure_switch_type * pressure_switch;
      uint32_t compressor_current_length;
      typedef double _compressor_current_type;
      _compressor_current_type st_compressor_current;
      _compressor_current_type * compressor_current;
      uint32_t analog_voltage0_length;
      typedef double _analog_voltage0_type;
      _analog_voltage0_type st_analog_voltage0;
      _analog_voltage0_type * analog_voltage0;
      uint32_t analog_voltage1_length;
      typedef double _analog_voltage1_type;
      _analog_voltage1_type st_analog_voltage1;
      _analog_voltage1_type * analog_voltage1;
      uint32_t pressure0_length;
      typedef double _pressure0_type;
      _pressure0_type st_pressure0;
      _pressure0_type * pressure0;
      uint32_t pressure1_length;
      typedef double _pressure1_type;
      _pressure1_type st_pressure1;
      _pressure1_type * pressure1;
      uint32_t compressor_min_analog_voltage_length;
      typedef double _compressor_min_analog_voltage_type;
      _compressor_min_analog_voltage_type st_compressor_min_analog_voltage;
      _compressor_min_analog_voltage_type * compressor_min_analog_voltage;
      uint32_t compressor_max_analog_voltage_length;
      typedef double _compressor_max_analog_voltage_type;
      _compressor_max_analog_voltage_type st_compressor_max_analog_voltage;
      _compressor_max_analog_voltage_type * compressor_max_analog_voltage;
      uint32_t compressor_force_disable_length;
      typedef bool _compressor_force_disable_type;
      _compressor_force_disable_type st_compressor_force_disable;
      _compressor_force_disable_type * compressor_force_disable;
      uint32_t compressor_use_digital_length;
      typedef bool _compressor_use_digital_type;
      _compressor_use_digital_type st_compressor_use_digital;
      _compressor_use_digital_type * compressor_use_digital;

    PHState():
      header(),
      name_length(0), st_name(), name(nullptr),
      id_length(0), st_id(), id(nullptr),
      compressor_enabled_length(0), st_compressor_enabled(), compressor_enabled(nullptr),
      pressure_switch_length(0), st_pressure_switch(), pressure_switch(nullptr),
      compressor_current_length(0), st_compressor_current(), compressor_current(nullptr),
      analog_voltage0_length(0), st_analog_voltage0(), analog_voltage0(nullptr),
      analog_voltage1_length(0), st_analog_voltage1(), analog_voltage1(nullptr),
      pressure0_length(0), st_pressure0(), pressure0(nullptr),
      pressure1_length(0), st_pressure1(), pressure1(nullptr),
      compressor_min_analog_voltage_length(0), st_compressor_min_analog_voltage(), compressor_min_analog_voltage(nullptr),
      compressor_max_analog_voltage_length(0), st_compressor_max_analog_voltage(), compressor_max_analog_voltage(nullptr),
      compressor_force_disable_length(0), st_compressor_force_disable(), compressor_force_disable(nullptr),
      compressor_use_digital_length(0), st_compressor_use_digital(), compressor_use_digital(nullptr)
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
      *(outbuffer + offset + 0) = (this->id_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->id_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->id_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->id_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->id_length);
      for( uint32_t i = 0; i < id_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_idi;
      u_idi.real = this->id[i];
      *(outbuffer + offset + 0) = (u_idi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_idi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_idi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_idi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->id[i]);
      }
      *(outbuffer + offset + 0) = (this->compressor_enabled_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->compressor_enabled_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->compressor_enabled_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->compressor_enabled_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->compressor_enabled_length);
      for( uint32_t i = 0; i < compressor_enabled_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_compressor_enabledi;
      u_compressor_enabledi.real = this->compressor_enabled[i];
      *(outbuffer + offset + 0) = (u_compressor_enabledi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->compressor_enabled[i]);
      }
      *(outbuffer + offset + 0) = (this->pressure_switch_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pressure_switch_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pressure_switch_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pressure_switch_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pressure_switch_length);
      for( uint32_t i = 0; i < pressure_switch_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_pressure_switchi;
      u_pressure_switchi.real = this->pressure_switch[i];
      *(outbuffer + offset + 0) = (u_pressure_switchi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pressure_switch[i]);
      }
      *(outbuffer + offset + 0) = (this->compressor_current_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->compressor_current_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->compressor_current_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->compressor_current_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->compressor_current_length);
      for( uint32_t i = 0; i < compressor_current_length; i++){
      union {
        double real;
        uint64_t base;
      } u_compressor_currenti;
      u_compressor_currenti.real = this->compressor_current[i];
      *(outbuffer + offset + 0) = (u_compressor_currenti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_compressor_currenti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_compressor_currenti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_compressor_currenti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_compressor_currenti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_compressor_currenti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_compressor_currenti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_compressor_currenti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->compressor_current[i]);
      }
      *(outbuffer + offset + 0) = (this->analog_voltage0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->analog_voltage0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->analog_voltage0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->analog_voltage0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->analog_voltage0_length);
      for( uint32_t i = 0; i < analog_voltage0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_analog_voltage0i;
      u_analog_voltage0i.real = this->analog_voltage0[i];
      *(outbuffer + offset + 0) = (u_analog_voltage0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_analog_voltage0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_analog_voltage0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_analog_voltage0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_analog_voltage0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_analog_voltage0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_analog_voltage0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_analog_voltage0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->analog_voltage0[i]);
      }
      *(outbuffer + offset + 0) = (this->analog_voltage1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->analog_voltage1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->analog_voltage1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->analog_voltage1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->analog_voltage1_length);
      for( uint32_t i = 0; i < analog_voltage1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_analog_voltage1i;
      u_analog_voltage1i.real = this->analog_voltage1[i];
      *(outbuffer + offset + 0) = (u_analog_voltage1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_analog_voltage1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_analog_voltage1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_analog_voltage1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_analog_voltage1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_analog_voltage1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_analog_voltage1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_analog_voltage1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->analog_voltage1[i]);
      }
      *(outbuffer + offset + 0) = (this->pressure0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pressure0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pressure0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pressure0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pressure0_length);
      for( uint32_t i = 0; i < pressure0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pressure0i;
      u_pressure0i.real = this->pressure0[i];
      *(outbuffer + offset + 0) = (u_pressure0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pressure0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pressure0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pressure0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pressure0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pressure0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pressure0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pressure0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pressure0[i]);
      }
      *(outbuffer + offset + 0) = (this->pressure1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pressure1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pressure1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pressure1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pressure1_length);
      for( uint32_t i = 0; i < pressure1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pressure1i;
      u_pressure1i.real = this->pressure1[i];
      *(outbuffer + offset + 0) = (u_pressure1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pressure1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pressure1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pressure1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pressure1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pressure1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pressure1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pressure1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pressure1[i]);
      }
      *(outbuffer + offset + 0) = (this->compressor_min_analog_voltage_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->compressor_min_analog_voltage_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->compressor_min_analog_voltage_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->compressor_min_analog_voltage_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->compressor_min_analog_voltage_length);
      for( uint32_t i = 0; i < compressor_min_analog_voltage_length; i++){
      union {
        double real;
        uint64_t base;
      } u_compressor_min_analog_voltagei;
      u_compressor_min_analog_voltagei.real = this->compressor_min_analog_voltage[i];
      *(outbuffer + offset + 0) = (u_compressor_min_analog_voltagei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_compressor_min_analog_voltagei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_compressor_min_analog_voltagei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_compressor_min_analog_voltagei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_compressor_min_analog_voltagei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_compressor_min_analog_voltagei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_compressor_min_analog_voltagei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_compressor_min_analog_voltagei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->compressor_min_analog_voltage[i]);
      }
      *(outbuffer + offset + 0) = (this->compressor_max_analog_voltage_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->compressor_max_analog_voltage_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->compressor_max_analog_voltage_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->compressor_max_analog_voltage_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->compressor_max_analog_voltage_length);
      for( uint32_t i = 0; i < compressor_max_analog_voltage_length; i++){
      union {
        double real;
        uint64_t base;
      } u_compressor_max_analog_voltagei;
      u_compressor_max_analog_voltagei.real = this->compressor_max_analog_voltage[i];
      *(outbuffer + offset + 0) = (u_compressor_max_analog_voltagei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_compressor_max_analog_voltagei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_compressor_max_analog_voltagei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_compressor_max_analog_voltagei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_compressor_max_analog_voltagei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_compressor_max_analog_voltagei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_compressor_max_analog_voltagei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_compressor_max_analog_voltagei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->compressor_max_analog_voltage[i]);
      }
      *(outbuffer + offset + 0) = (this->compressor_force_disable_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->compressor_force_disable_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->compressor_force_disable_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->compressor_force_disable_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->compressor_force_disable_length);
      for( uint32_t i = 0; i < compressor_force_disable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_compressor_force_disablei;
      u_compressor_force_disablei.real = this->compressor_force_disable[i];
      *(outbuffer + offset + 0) = (u_compressor_force_disablei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->compressor_force_disable[i]);
      }
      *(outbuffer + offset + 0) = (this->compressor_use_digital_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->compressor_use_digital_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->compressor_use_digital_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->compressor_use_digital_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->compressor_use_digital_length);
      for( uint32_t i = 0; i < compressor_use_digital_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_compressor_use_digitali;
      u_compressor_use_digitali.real = this->compressor_use_digital[i];
      *(outbuffer + offset + 0) = (u_compressor_use_digitali.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->compressor_use_digital[i]);
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
      uint32_t id_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      id_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      id_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      id_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->id_length);
      if(id_lengthT > id_length)
        this->id = (int32_t*)realloc(this->id, id_lengthT * sizeof(int32_t));
      id_length = id_lengthT;
      for( uint32_t i = 0; i < id_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_id;
      u_st_id.base = 0;
      u_st_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_id = u_st_id.real;
      offset += sizeof(this->st_id);
        memcpy( &(this->id[i]), &(this->st_id), sizeof(int32_t));
      }
      uint32_t compressor_enabled_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      compressor_enabled_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      compressor_enabled_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      compressor_enabled_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->compressor_enabled_length);
      if(compressor_enabled_lengthT > compressor_enabled_length)
        this->compressor_enabled = (bool*)realloc(this->compressor_enabled, compressor_enabled_lengthT * sizeof(bool));
      compressor_enabled_length = compressor_enabled_lengthT;
      for( uint32_t i = 0; i < compressor_enabled_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_compressor_enabled;
      u_st_compressor_enabled.base = 0;
      u_st_compressor_enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_compressor_enabled = u_st_compressor_enabled.real;
      offset += sizeof(this->st_compressor_enabled);
        memcpy( &(this->compressor_enabled[i]), &(this->st_compressor_enabled), sizeof(bool));
      }
      uint32_t pressure_switch_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pressure_switch_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pressure_switch_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pressure_switch_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pressure_switch_length);
      if(pressure_switch_lengthT > pressure_switch_length)
        this->pressure_switch = (bool*)realloc(this->pressure_switch, pressure_switch_lengthT * sizeof(bool));
      pressure_switch_length = pressure_switch_lengthT;
      for( uint32_t i = 0; i < pressure_switch_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_pressure_switch;
      u_st_pressure_switch.base = 0;
      u_st_pressure_switch.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_pressure_switch = u_st_pressure_switch.real;
      offset += sizeof(this->st_pressure_switch);
        memcpy( &(this->pressure_switch[i]), &(this->st_pressure_switch), sizeof(bool));
      }
      uint32_t compressor_current_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      compressor_current_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      compressor_current_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      compressor_current_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->compressor_current_length);
      if(compressor_current_lengthT > compressor_current_length)
        this->compressor_current = (double*)realloc(this->compressor_current, compressor_current_lengthT * sizeof(double));
      compressor_current_length = compressor_current_lengthT;
      for( uint32_t i = 0; i < compressor_current_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_compressor_current;
      u_st_compressor_current.base = 0;
      u_st_compressor_current.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_compressor_current.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_compressor_current.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_compressor_current.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_compressor_current.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_compressor_current.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_compressor_current.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_compressor_current.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_compressor_current = u_st_compressor_current.real;
      offset += sizeof(this->st_compressor_current);
        memcpy( &(this->compressor_current[i]), &(this->st_compressor_current), sizeof(double));
      }
      uint32_t analog_voltage0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      analog_voltage0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      analog_voltage0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      analog_voltage0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->analog_voltage0_length);
      if(analog_voltage0_lengthT > analog_voltage0_length)
        this->analog_voltage0 = (double*)realloc(this->analog_voltage0, analog_voltage0_lengthT * sizeof(double));
      analog_voltage0_length = analog_voltage0_lengthT;
      for( uint32_t i = 0; i < analog_voltage0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_analog_voltage0;
      u_st_analog_voltage0.base = 0;
      u_st_analog_voltage0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_analog_voltage0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_analog_voltage0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_analog_voltage0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_analog_voltage0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_analog_voltage0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_analog_voltage0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_analog_voltage0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_analog_voltage0 = u_st_analog_voltage0.real;
      offset += sizeof(this->st_analog_voltage0);
        memcpy( &(this->analog_voltage0[i]), &(this->st_analog_voltage0), sizeof(double));
      }
      uint32_t analog_voltage1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      analog_voltage1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      analog_voltage1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      analog_voltage1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->analog_voltage1_length);
      if(analog_voltage1_lengthT > analog_voltage1_length)
        this->analog_voltage1 = (double*)realloc(this->analog_voltage1, analog_voltage1_lengthT * sizeof(double));
      analog_voltage1_length = analog_voltage1_lengthT;
      for( uint32_t i = 0; i < analog_voltage1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_analog_voltage1;
      u_st_analog_voltage1.base = 0;
      u_st_analog_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_analog_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_analog_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_analog_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_analog_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_analog_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_analog_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_analog_voltage1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_analog_voltage1 = u_st_analog_voltage1.real;
      offset += sizeof(this->st_analog_voltage1);
        memcpy( &(this->analog_voltage1[i]), &(this->st_analog_voltage1), sizeof(double));
      }
      uint32_t pressure0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pressure0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pressure0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pressure0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pressure0_length);
      if(pressure0_lengthT > pressure0_length)
        this->pressure0 = (double*)realloc(this->pressure0, pressure0_lengthT * sizeof(double));
      pressure0_length = pressure0_lengthT;
      for( uint32_t i = 0; i < pressure0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pressure0;
      u_st_pressure0.base = 0;
      u_st_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pressure0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pressure0 = u_st_pressure0.real;
      offset += sizeof(this->st_pressure0);
        memcpy( &(this->pressure0[i]), &(this->st_pressure0), sizeof(double));
      }
      uint32_t pressure1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pressure1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pressure1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pressure1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pressure1_length);
      if(pressure1_lengthT > pressure1_length)
        this->pressure1 = (double*)realloc(this->pressure1, pressure1_lengthT * sizeof(double));
      pressure1_length = pressure1_lengthT;
      for( uint32_t i = 0; i < pressure1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pressure1;
      u_st_pressure1.base = 0;
      u_st_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pressure1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pressure1 = u_st_pressure1.real;
      offset += sizeof(this->st_pressure1);
        memcpy( &(this->pressure1[i]), &(this->st_pressure1), sizeof(double));
      }
      uint32_t compressor_min_analog_voltage_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      compressor_min_analog_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      compressor_min_analog_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      compressor_min_analog_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->compressor_min_analog_voltage_length);
      if(compressor_min_analog_voltage_lengthT > compressor_min_analog_voltage_length)
        this->compressor_min_analog_voltage = (double*)realloc(this->compressor_min_analog_voltage, compressor_min_analog_voltage_lengthT * sizeof(double));
      compressor_min_analog_voltage_length = compressor_min_analog_voltage_lengthT;
      for( uint32_t i = 0; i < compressor_min_analog_voltage_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_compressor_min_analog_voltage;
      u_st_compressor_min_analog_voltage.base = 0;
      u_st_compressor_min_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_compressor_min_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_compressor_min_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_compressor_min_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_compressor_min_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_compressor_min_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_compressor_min_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_compressor_min_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_compressor_min_analog_voltage = u_st_compressor_min_analog_voltage.real;
      offset += sizeof(this->st_compressor_min_analog_voltage);
        memcpy( &(this->compressor_min_analog_voltage[i]), &(this->st_compressor_min_analog_voltage), sizeof(double));
      }
      uint32_t compressor_max_analog_voltage_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      compressor_max_analog_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      compressor_max_analog_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      compressor_max_analog_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->compressor_max_analog_voltage_length);
      if(compressor_max_analog_voltage_lengthT > compressor_max_analog_voltage_length)
        this->compressor_max_analog_voltage = (double*)realloc(this->compressor_max_analog_voltage, compressor_max_analog_voltage_lengthT * sizeof(double));
      compressor_max_analog_voltage_length = compressor_max_analog_voltage_lengthT;
      for( uint32_t i = 0; i < compressor_max_analog_voltage_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_compressor_max_analog_voltage;
      u_st_compressor_max_analog_voltage.base = 0;
      u_st_compressor_max_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_compressor_max_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_compressor_max_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_compressor_max_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_compressor_max_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_compressor_max_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_compressor_max_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_compressor_max_analog_voltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_compressor_max_analog_voltage = u_st_compressor_max_analog_voltage.real;
      offset += sizeof(this->st_compressor_max_analog_voltage);
        memcpy( &(this->compressor_max_analog_voltage[i]), &(this->st_compressor_max_analog_voltage), sizeof(double));
      }
      uint32_t compressor_force_disable_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      compressor_force_disable_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      compressor_force_disable_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      compressor_force_disable_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->compressor_force_disable_length);
      if(compressor_force_disable_lengthT > compressor_force_disable_length)
        this->compressor_force_disable = (bool*)realloc(this->compressor_force_disable, compressor_force_disable_lengthT * sizeof(bool));
      compressor_force_disable_length = compressor_force_disable_lengthT;
      for( uint32_t i = 0; i < compressor_force_disable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_compressor_force_disable;
      u_st_compressor_force_disable.base = 0;
      u_st_compressor_force_disable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_compressor_force_disable = u_st_compressor_force_disable.real;
      offset += sizeof(this->st_compressor_force_disable);
        memcpy( &(this->compressor_force_disable[i]), &(this->st_compressor_force_disable), sizeof(bool));
      }
      uint32_t compressor_use_digital_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      compressor_use_digital_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      compressor_use_digital_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      compressor_use_digital_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->compressor_use_digital_length);
      if(compressor_use_digital_lengthT > compressor_use_digital_length)
        this->compressor_use_digital = (bool*)realloc(this->compressor_use_digital, compressor_use_digital_lengthT * sizeof(bool));
      compressor_use_digital_length = compressor_use_digital_lengthT;
      for( uint32_t i = 0; i < compressor_use_digital_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_compressor_use_digital;
      u_st_compressor_use_digital.base = 0;
      u_st_compressor_use_digital.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_compressor_use_digital = u_st_compressor_use_digital.real;
      offset += sizeof(this->st_compressor_use_digital);
        memcpy( &(this->compressor_use_digital[i]), &(this->st_compressor_use_digital), sizeof(bool));
      }
     return offset;
    }

    virtual const char * getType() override { return "frc_msgs/PHState"; };
    virtual const char * getMD5() override { return "1595307a61a7f26b708c98b82aa1ad21"; };

  };

}
#endif
