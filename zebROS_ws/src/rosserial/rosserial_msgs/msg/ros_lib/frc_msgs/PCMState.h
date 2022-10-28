#ifndef _ROS_frc_msgs_PCMState_h
#define _ROS_frc_msgs_PCMState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace frc_msgs
{

  class PCMState : public ros::Msg
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
      uint32_t closed_loop_control_length;
      typedef bool _closed_loop_control_type;
      _closed_loop_control_type st_closed_loop_control;
      _closed_loop_control_type * closed_loop_control;
      uint32_t current_too_high_length;
      typedef bool _current_too_high_type;
      _current_too_high_type st_current_too_high;
      _current_too_high_type * current_too_high;
      uint32_t current_too_high_sticky_length;
      typedef bool _current_too_high_sticky_type;
      _current_too_high_sticky_type st_current_too_high_sticky;
      _current_too_high_sticky_type * current_too_high_sticky;
      uint32_t shorted_length;
      typedef bool _shorted_type;
      _shorted_type st_shorted;
      _shorted_type * shorted;
      uint32_t shorted_sticky_length;
      typedef bool _shorted_sticky_type;
      _shorted_sticky_type st_shorted_sticky;
      _shorted_sticky_type * shorted_sticky;
      uint32_t not_connected_length;
      typedef bool _not_connected_type;
      _not_connected_type st_not_connected;
      _not_connected_type * not_connected;
      uint32_t not_connected_sticky_length;
      typedef bool _not_connected_sticky_type;
      _not_connected_sticky_type st_not_connected_sticky;
      _not_connected_sticky_type * not_connected_sticky;
      uint32_t voltage_fault_length;
      typedef bool _voltage_fault_type;
      _voltage_fault_type st_voltage_fault;
      _voltage_fault_type * voltage_fault;
      uint32_t voltage_sticky_fault_length;
      typedef bool _voltage_sticky_fault_type;
      _voltage_sticky_fault_type st_voltage_sticky_fault;
      _voltage_sticky_fault_type * voltage_sticky_fault;
      uint32_t solenoid_disabled_list_length;
      typedef uint32_t _solenoid_disabled_list_type;
      _solenoid_disabled_list_type st_solenoid_disabled_list;
      _solenoid_disabled_list_type * solenoid_disabled_list;

    PCMState():
      header(),
      name_length(0), st_name(), name(nullptr),
      id_length(0), st_id(), id(nullptr),
      compressor_enabled_length(0), st_compressor_enabled(), compressor_enabled(nullptr),
      pressure_switch_length(0), st_pressure_switch(), pressure_switch(nullptr),
      compressor_current_length(0), st_compressor_current(), compressor_current(nullptr),
      closed_loop_control_length(0), st_closed_loop_control(), closed_loop_control(nullptr),
      current_too_high_length(0), st_current_too_high(), current_too_high(nullptr),
      current_too_high_sticky_length(0), st_current_too_high_sticky(), current_too_high_sticky(nullptr),
      shorted_length(0), st_shorted(), shorted(nullptr),
      shorted_sticky_length(0), st_shorted_sticky(), shorted_sticky(nullptr),
      not_connected_length(0), st_not_connected(), not_connected(nullptr),
      not_connected_sticky_length(0), st_not_connected_sticky(), not_connected_sticky(nullptr),
      voltage_fault_length(0), st_voltage_fault(), voltage_fault(nullptr),
      voltage_sticky_fault_length(0), st_voltage_sticky_fault(), voltage_sticky_fault(nullptr),
      solenoid_disabled_list_length(0), st_solenoid_disabled_list(), solenoid_disabled_list(nullptr)
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
      *(outbuffer + offset + 0) = (this->closed_loop_control_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->closed_loop_control_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->closed_loop_control_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->closed_loop_control_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->closed_loop_control_length);
      for( uint32_t i = 0; i < closed_loop_control_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_closed_loop_controli;
      u_closed_loop_controli.real = this->closed_loop_control[i];
      *(outbuffer + offset + 0) = (u_closed_loop_controli.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->closed_loop_control[i]);
      }
      *(outbuffer + offset + 0) = (this->current_too_high_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_too_high_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_too_high_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_too_high_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_too_high_length);
      for( uint32_t i = 0; i < current_too_high_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_current_too_highi;
      u_current_too_highi.real = this->current_too_high[i];
      *(outbuffer + offset + 0) = (u_current_too_highi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->current_too_high[i]);
      }
      *(outbuffer + offset + 0) = (this->current_too_high_sticky_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_too_high_sticky_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_too_high_sticky_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_too_high_sticky_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_too_high_sticky_length);
      for( uint32_t i = 0; i < current_too_high_sticky_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_current_too_high_stickyi;
      u_current_too_high_stickyi.real = this->current_too_high_sticky[i];
      *(outbuffer + offset + 0) = (u_current_too_high_stickyi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->current_too_high_sticky[i]);
      }
      *(outbuffer + offset + 0) = (this->shorted_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->shorted_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->shorted_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->shorted_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->shorted_length);
      for( uint32_t i = 0; i < shorted_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_shortedi;
      u_shortedi.real = this->shorted[i];
      *(outbuffer + offset + 0) = (u_shortedi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->shorted[i]);
      }
      *(outbuffer + offset + 0) = (this->shorted_sticky_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->shorted_sticky_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->shorted_sticky_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->shorted_sticky_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->shorted_sticky_length);
      for( uint32_t i = 0; i < shorted_sticky_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_shorted_stickyi;
      u_shorted_stickyi.real = this->shorted_sticky[i];
      *(outbuffer + offset + 0) = (u_shorted_stickyi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->shorted_sticky[i]);
      }
      *(outbuffer + offset + 0) = (this->not_connected_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->not_connected_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->not_connected_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->not_connected_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->not_connected_length);
      for( uint32_t i = 0; i < not_connected_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_not_connectedi;
      u_not_connectedi.real = this->not_connected[i];
      *(outbuffer + offset + 0) = (u_not_connectedi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->not_connected[i]);
      }
      *(outbuffer + offset + 0) = (this->not_connected_sticky_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->not_connected_sticky_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->not_connected_sticky_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->not_connected_sticky_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->not_connected_sticky_length);
      for( uint32_t i = 0; i < not_connected_sticky_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_not_connected_stickyi;
      u_not_connected_stickyi.real = this->not_connected_sticky[i];
      *(outbuffer + offset + 0) = (u_not_connected_stickyi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->not_connected_sticky[i]);
      }
      *(outbuffer + offset + 0) = (this->voltage_fault_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->voltage_fault_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->voltage_fault_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->voltage_fault_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->voltage_fault_length);
      for( uint32_t i = 0; i < voltage_fault_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_voltage_faulti;
      u_voltage_faulti.real = this->voltage_fault[i];
      *(outbuffer + offset + 0) = (u_voltage_faulti.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->voltage_fault[i]);
      }
      *(outbuffer + offset + 0) = (this->voltage_sticky_fault_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->voltage_sticky_fault_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->voltage_sticky_fault_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->voltage_sticky_fault_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->voltage_sticky_fault_length);
      for( uint32_t i = 0; i < voltage_sticky_fault_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_voltage_sticky_faulti;
      u_voltage_sticky_faulti.real = this->voltage_sticky_fault[i];
      *(outbuffer + offset + 0) = (u_voltage_sticky_faulti.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->voltage_sticky_fault[i]);
      }
      *(outbuffer + offset + 0) = (this->solenoid_disabled_list_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->solenoid_disabled_list_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->solenoid_disabled_list_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->solenoid_disabled_list_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->solenoid_disabled_list_length);
      for( uint32_t i = 0; i < solenoid_disabled_list_length; i++){
      *(outbuffer + offset + 0) = (this->solenoid_disabled_list[i] >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->solenoid_disabled_list[i] >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->solenoid_disabled_list[i] >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->solenoid_disabled_list[i] >> (8 * 3)) & 0xFF;
      offset += sizeof(this->solenoid_disabled_list[i]);
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
      uint32_t closed_loop_control_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      closed_loop_control_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      closed_loop_control_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      closed_loop_control_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->closed_loop_control_length);
      if(closed_loop_control_lengthT > closed_loop_control_length)
        this->closed_loop_control = (bool*)realloc(this->closed_loop_control, closed_loop_control_lengthT * sizeof(bool));
      closed_loop_control_length = closed_loop_control_lengthT;
      for( uint32_t i = 0; i < closed_loop_control_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_closed_loop_control;
      u_st_closed_loop_control.base = 0;
      u_st_closed_loop_control.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_closed_loop_control = u_st_closed_loop_control.real;
      offset += sizeof(this->st_closed_loop_control);
        memcpy( &(this->closed_loop_control[i]), &(this->st_closed_loop_control), sizeof(bool));
      }
      uint32_t current_too_high_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      current_too_high_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      current_too_high_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      current_too_high_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->current_too_high_length);
      if(current_too_high_lengthT > current_too_high_length)
        this->current_too_high = (bool*)realloc(this->current_too_high, current_too_high_lengthT * sizeof(bool));
      current_too_high_length = current_too_high_lengthT;
      for( uint32_t i = 0; i < current_too_high_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_current_too_high;
      u_st_current_too_high.base = 0;
      u_st_current_too_high.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_current_too_high = u_st_current_too_high.real;
      offset += sizeof(this->st_current_too_high);
        memcpy( &(this->current_too_high[i]), &(this->st_current_too_high), sizeof(bool));
      }
      uint32_t current_too_high_sticky_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      current_too_high_sticky_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      current_too_high_sticky_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      current_too_high_sticky_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->current_too_high_sticky_length);
      if(current_too_high_sticky_lengthT > current_too_high_sticky_length)
        this->current_too_high_sticky = (bool*)realloc(this->current_too_high_sticky, current_too_high_sticky_lengthT * sizeof(bool));
      current_too_high_sticky_length = current_too_high_sticky_lengthT;
      for( uint32_t i = 0; i < current_too_high_sticky_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_current_too_high_sticky;
      u_st_current_too_high_sticky.base = 0;
      u_st_current_too_high_sticky.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_current_too_high_sticky = u_st_current_too_high_sticky.real;
      offset += sizeof(this->st_current_too_high_sticky);
        memcpy( &(this->current_too_high_sticky[i]), &(this->st_current_too_high_sticky), sizeof(bool));
      }
      uint32_t shorted_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      shorted_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      shorted_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      shorted_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->shorted_length);
      if(shorted_lengthT > shorted_length)
        this->shorted = (bool*)realloc(this->shorted, shorted_lengthT * sizeof(bool));
      shorted_length = shorted_lengthT;
      for( uint32_t i = 0; i < shorted_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_shorted;
      u_st_shorted.base = 0;
      u_st_shorted.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_shorted = u_st_shorted.real;
      offset += sizeof(this->st_shorted);
        memcpy( &(this->shorted[i]), &(this->st_shorted), sizeof(bool));
      }
      uint32_t shorted_sticky_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      shorted_sticky_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      shorted_sticky_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      shorted_sticky_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->shorted_sticky_length);
      if(shorted_sticky_lengthT > shorted_sticky_length)
        this->shorted_sticky = (bool*)realloc(this->shorted_sticky, shorted_sticky_lengthT * sizeof(bool));
      shorted_sticky_length = shorted_sticky_lengthT;
      for( uint32_t i = 0; i < shorted_sticky_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_shorted_sticky;
      u_st_shorted_sticky.base = 0;
      u_st_shorted_sticky.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_shorted_sticky = u_st_shorted_sticky.real;
      offset += sizeof(this->st_shorted_sticky);
        memcpy( &(this->shorted_sticky[i]), &(this->st_shorted_sticky), sizeof(bool));
      }
      uint32_t not_connected_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      not_connected_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      not_connected_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      not_connected_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->not_connected_length);
      if(not_connected_lengthT > not_connected_length)
        this->not_connected = (bool*)realloc(this->not_connected, not_connected_lengthT * sizeof(bool));
      not_connected_length = not_connected_lengthT;
      for( uint32_t i = 0; i < not_connected_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_not_connected;
      u_st_not_connected.base = 0;
      u_st_not_connected.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_not_connected = u_st_not_connected.real;
      offset += sizeof(this->st_not_connected);
        memcpy( &(this->not_connected[i]), &(this->st_not_connected), sizeof(bool));
      }
      uint32_t not_connected_sticky_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      not_connected_sticky_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      not_connected_sticky_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      not_connected_sticky_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->not_connected_sticky_length);
      if(not_connected_sticky_lengthT > not_connected_sticky_length)
        this->not_connected_sticky = (bool*)realloc(this->not_connected_sticky, not_connected_sticky_lengthT * sizeof(bool));
      not_connected_sticky_length = not_connected_sticky_lengthT;
      for( uint32_t i = 0; i < not_connected_sticky_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_not_connected_sticky;
      u_st_not_connected_sticky.base = 0;
      u_st_not_connected_sticky.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_not_connected_sticky = u_st_not_connected_sticky.real;
      offset += sizeof(this->st_not_connected_sticky);
        memcpy( &(this->not_connected_sticky[i]), &(this->st_not_connected_sticky), sizeof(bool));
      }
      uint32_t voltage_fault_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      voltage_fault_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      voltage_fault_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      voltage_fault_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->voltage_fault_length);
      if(voltage_fault_lengthT > voltage_fault_length)
        this->voltage_fault = (bool*)realloc(this->voltage_fault, voltage_fault_lengthT * sizeof(bool));
      voltage_fault_length = voltage_fault_lengthT;
      for( uint32_t i = 0; i < voltage_fault_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_voltage_fault;
      u_st_voltage_fault.base = 0;
      u_st_voltage_fault.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_voltage_fault = u_st_voltage_fault.real;
      offset += sizeof(this->st_voltage_fault);
        memcpy( &(this->voltage_fault[i]), &(this->st_voltage_fault), sizeof(bool));
      }
      uint32_t voltage_sticky_fault_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      voltage_sticky_fault_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      voltage_sticky_fault_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      voltage_sticky_fault_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->voltage_sticky_fault_length);
      if(voltage_sticky_fault_lengthT > voltage_sticky_fault_length)
        this->voltage_sticky_fault = (bool*)realloc(this->voltage_sticky_fault, voltage_sticky_fault_lengthT * sizeof(bool));
      voltage_sticky_fault_length = voltage_sticky_fault_lengthT;
      for( uint32_t i = 0; i < voltage_sticky_fault_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_voltage_sticky_fault;
      u_st_voltage_sticky_fault.base = 0;
      u_st_voltage_sticky_fault.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_voltage_sticky_fault = u_st_voltage_sticky_fault.real;
      offset += sizeof(this->st_voltage_sticky_fault);
        memcpy( &(this->voltage_sticky_fault[i]), &(this->st_voltage_sticky_fault), sizeof(bool));
      }
      uint32_t solenoid_disabled_list_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      solenoid_disabled_list_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      solenoid_disabled_list_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      solenoid_disabled_list_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->solenoid_disabled_list_length);
      if(solenoid_disabled_list_lengthT > solenoid_disabled_list_length)
        this->solenoid_disabled_list = (uint32_t*)realloc(this->solenoid_disabled_list, solenoid_disabled_list_lengthT * sizeof(uint32_t));
      solenoid_disabled_list_length = solenoid_disabled_list_lengthT;
      for( uint32_t i = 0; i < solenoid_disabled_list_length; i++){
      this->st_solenoid_disabled_list =  ((uint32_t) (*(inbuffer + offset)));
      this->st_solenoid_disabled_list |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->st_solenoid_disabled_list |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->st_solenoid_disabled_list |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->st_solenoid_disabled_list);
        memcpy( &(this->solenoid_disabled_list[i]), &(this->st_solenoid_disabled_list), sizeof(uint32_t));
      }
     return offset;
    }

    virtual const char * getType() override { return "frc_msgs/PCMState"; };
    virtual const char * getMD5() override { return "dfa5347d75a3db124ffa37c63b37e0c3"; };

  };

}
#endif
