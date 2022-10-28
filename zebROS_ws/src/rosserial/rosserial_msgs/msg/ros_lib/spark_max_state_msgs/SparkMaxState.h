#ifndef _ROS_spark_max_state_msgs_SparkMaxState_h
#define _ROS_spark_max_state_msgs_SparkMaxState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace spark_max_state_msgs
{

  class SparkMaxState : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t name_length;
      typedef char* _name_type;
      _name_type st_name;
      _name_type * name;
      uint32_t device_id_length;
      typedef int32_t _device_id_type;
      _device_id_type st_device_id;
      _device_id_type * device_id;
      uint32_t set_point_length;
      typedef double _set_point_type;
      _set_point_type st_set_point;
      _set_point_type * set_point;
      uint32_t position_length;
      typedef double _position_type;
      _position_type st_position;
      _position_type * position;
      uint32_t velocity_length;
      typedef double _velocity_type;
      _velocity_type st_velocity;
      _velocity_type * velocity;
      uint32_t forward_limit_switch_length;
      typedef bool _forward_limit_switch_type;
      _forward_limit_switch_type st_forward_limit_switch;
      _forward_limit_switch_type * forward_limit_switch;
      uint32_t reverse_limit_switch_length;
      typedef bool _reverse_limit_switch_type;
      _reverse_limit_switch_type st_reverse_limit_switch;
      _reverse_limit_switch_type * reverse_limit_switch;
      uint32_t forward_softlimit_length;
      typedef double _forward_softlimit_type;
      _forward_softlimit_type st_forward_softlimit;
      _forward_softlimit_type * forward_softlimit;
      uint32_t reverse_softlimit_length;
      typedef double _reverse_softlimit_type;
      _reverse_softlimit_type st_reverse_softlimit;
      _reverse_softlimit_type * reverse_softlimit;
      uint32_t faults_length;
      typedef char* _faults_type;
      _faults_type st_faults;
      _faults_type * faults;
      uint32_t sticky_faults_length;
      typedef char* _sticky_faults_type;
      _sticky_faults_type st_sticky_faults;
      _sticky_faults_type * sticky_faults;
      uint32_t bus_voltage_length;
      typedef double _bus_voltage_type;
      _bus_voltage_type st_bus_voltage;
      _bus_voltage_type * bus_voltage;
      uint32_t applied_output_length;
      typedef double _applied_output_type;
      _applied_output_type st_applied_output;
      _applied_output_type * applied_output;
      uint32_t output_current_length;
      typedef double _output_current_type;
      _output_current_type st_output_current;
      _output_current_type * output_current;
      uint32_t motor_temperature_length;
      typedef double _motor_temperature_type;
      _motor_temperature_type st_motor_temperature;
      _motor_temperature_type * motor_temperature;

    SparkMaxState():
      header(),
      name_length(0), st_name(), name(nullptr),
      device_id_length(0), st_device_id(), device_id(nullptr),
      set_point_length(0), st_set_point(), set_point(nullptr),
      position_length(0), st_position(), position(nullptr),
      velocity_length(0), st_velocity(), velocity(nullptr),
      forward_limit_switch_length(0), st_forward_limit_switch(), forward_limit_switch(nullptr),
      reverse_limit_switch_length(0), st_reverse_limit_switch(), reverse_limit_switch(nullptr),
      forward_softlimit_length(0), st_forward_softlimit(), forward_softlimit(nullptr),
      reverse_softlimit_length(0), st_reverse_softlimit(), reverse_softlimit(nullptr),
      faults_length(0), st_faults(), faults(nullptr),
      sticky_faults_length(0), st_sticky_faults(), sticky_faults(nullptr),
      bus_voltage_length(0), st_bus_voltage(), bus_voltage(nullptr),
      applied_output_length(0), st_applied_output(), applied_output(nullptr),
      output_current_length(0), st_output_current(), output_current(nullptr),
      motor_temperature_length(0), st_motor_temperature(), motor_temperature(nullptr)
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
      *(outbuffer + offset + 0) = (this->device_id_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->device_id_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->device_id_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->device_id_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->device_id_length);
      for( uint32_t i = 0; i < device_id_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_device_idi;
      u_device_idi.real = this->device_id[i];
      *(outbuffer + offset + 0) = (u_device_idi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_device_idi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_device_idi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_device_idi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->device_id[i]);
      }
      *(outbuffer + offset + 0) = (this->set_point_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->set_point_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->set_point_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->set_point_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->set_point_length);
      for( uint32_t i = 0; i < set_point_length; i++){
      union {
        double real;
        uint64_t base;
      } u_set_pointi;
      u_set_pointi.real = this->set_point[i];
      *(outbuffer + offset + 0) = (u_set_pointi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_set_pointi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_set_pointi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_set_pointi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_set_pointi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_set_pointi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_set_pointi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_set_pointi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->set_point[i]);
      }
      *(outbuffer + offset + 0) = (this->position_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->position_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->position_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->position_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->position_length);
      for( uint32_t i = 0; i < position_length; i++){
      union {
        double real;
        uint64_t base;
      } u_positioni;
      u_positioni.real = this->position[i];
      *(outbuffer + offset + 0) = (u_positioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_positioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_positioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_positioni.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_positioni.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_positioni.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_positioni.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_positioni.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->position[i]);
      }
      *(outbuffer + offset + 0) = (this->velocity_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->velocity_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->velocity_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->velocity_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->velocity_length);
      for( uint32_t i = 0; i < velocity_length; i++){
      union {
        double real;
        uint64_t base;
      } u_velocityi;
      u_velocityi.real = this->velocity[i];
      *(outbuffer + offset + 0) = (u_velocityi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_velocityi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_velocityi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_velocityi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_velocityi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_velocityi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_velocityi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_velocityi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->velocity[i]);
      }
      *(outbuffer + offset + 0) = (this->forward_limit_switch_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->forward_limit_switch_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->forward_limit_switch_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->forward_limit_switch_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->forward_limit_switch_length);
      for( uint32_t i = 0; i < forward_limit_switch_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_forward_limit_switchi;
      u_forward_limit_switchi.real = this->forward_limit_switch[i];
      *(outbuffer + offset + 0) = (u_forward_limit_switchi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->forward_limit_switch[i]);
      }
      *(outbuffer + offset + 0) = (this->reverse_limit_switch_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->reverse_limit_switch_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->reverse_limit_switch_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->reverse_limit_switch_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->reverse_limit_switch_length);
      for( uint32_t i = 0; i < reverse_limit_switch_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_reverse_limit_switchi;
      u_reverse_limit_switchi.real = this->reverse_limit_switch[i];
      *(outbuffer + offset + 0) = (u_reverse_limit_switchi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->reverse_limit_switch[i]);
      }
      *(outbuffer + offset + 0) = (this->forward_softlimit_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->forward_softlimit_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->forward_softlimit_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->forward_softlimit_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->forward_softlimit_length);
      for( uint32_t i = 0; i < forward_softlimit_length; i++){
      union {
        double real;
        uint64_t base;
      } u_forward_softlimiti;
      u_forward_softlimiti.real = this->forward_softlimit[i];
      *(outbuffer + offset + 0) = (u_forward_softlimiti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_forward_softlimiti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_forward_softlimiti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_forward_softlimiti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_forward_softlimiti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_forward_softlimiti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_forward_softlimiti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_forward_softlimiti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->forward_softlimit[i]);
      }
      *(outbuffer + offset + 0) = (this->reverse_softlimit_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->reverse_softlimit_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->reverse_softlimit_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->reverse_softlimit_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->reverse_softlimit_length);
      for( uint32_t i = 0; i < reverse_softlimit_length; i++){
      union {
        double real;
        uint64_t base;
      } u_reverse_softlimiti;
      u_reverse_softlimiti.real = this->reverse_softlimit[i];
      *(outbuffer + offset + 0) = (u_reverse_softlimiti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_reverse_softlimiti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_reverse_softlimiti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_reverse_softlimiti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_reverse_softlimiti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_reverse_softlimiti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_reverse_softlimiti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_reverse_softlimiti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->reverse_softlimit[i]);
      }
      *(outbuffer + offset + 0) = (this->faults_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->faults_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->faults_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->faults_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->faults_length);
      for( uint32_t i = 0; i < faults_length; i++){
      uint32_t length_faultsi = strlen(this->faults[i]);
      varToArr(outbuffer + offset, length_faultsi);
      offset += 4;
      memcpy(outbuffer + offset, this->faults[i], length_faultsi);
      offset += length_faultsi;
      }
      *(outbuffer + offset + 0) = (this->sticky_faults_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->sticky_faults_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->sticky_faults_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->sticky_faults_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sticky_faults_length);
      for( uint32_t i = 0; i < sticky_faults_length; i++){
      uint32_t length_sticky_faultsi = strlen(this->sticky_faults[i]);
      varToArr(outbuffer + offset, length_sticky_faultsi);
      offset += 4;
      memcpy(outbuffer + offset, this->sticky_faults[i], length_sticky_faultsi);
      offset += length_sticky_faultsi;
      }
      *(outbuffer + offset + 0) = (this->bus_voltage_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->bus_voltage_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->bus_voltage_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->bus_voltage_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->bus_voltage_length);
      for( uint32_t i = 0; i < bus_voltage_length; i++){
      union {
        double real;
        uint64_t base;
      } u_bus_voltagei;
      u_bus_voltagei.real = this->bus_voltage[i];
      *(outbuffer + offset + 0) = (u_bus_voltagei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_bus_voltagei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_bus_voltagei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_bus_voltagei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_bus_voltagei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_bus_voltagei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_bus_voltagei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_bus_voltagei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->bus_voltage[i]);
      }
      *(outbuffer + offset + 0) = (this->applied_output_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->applied_output_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->applied_output_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->applied_output_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->applied_output_length);
      for( uint32_t i = 0; i < applied_output_length; i++){
      union {
        double real;
        uint64_t base;
      } u_applied_outputi;
      u_applied_outputi.real = this->applied_output[i];
      *(outbuffer + offset + 0) = (u_applied_outputi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_applied_outputi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_applied_outputi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_applied_outputi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_applied_outputi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_applied_outputi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_applied_outputi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_applied_outputi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->applied_output[i]);
      }
      *(outbuffer + offset + 0) = (this->output_current_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->output_current_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->output_current_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->output_current_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->output_current_length);
      for( uint32_t i = 0; i < output_current_length; i++){
      union {
        double real;
        uint64_t base;
      } u_output_currenti;
      u_output_currenti.real = this->output_current[i];
      *(outbuffer + offset + 0) = (u_output_currenti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_output_currenti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_output_currenti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_output_currenti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_output_currenti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_output_currenti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_output_currenti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_output_currenti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->output_current[i]);
      }
      *(outbuffer + offset + 0) = (this->motor_temperature_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motor_temperature_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motor_temperature_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motor_temperature_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motor_temperature_length);
      for( uint32_t i = 0; i < motor_temperature_length; i++){
      union {
        double real;
        uint64_t base;
      } u_motor_temperaturei;
      u_motor_temperaturei.real = this->motor_temperature[i];
      *(outbuffer + offset + 0) = (u_motor_temperaturei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_temperaturei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_temperaturei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_temperaturei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_motor_temperaturei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_motor_temperaturei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_motor_temperaturei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_motor_temperaturei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->motor_temperature[i]);
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
      uint32_t device_id_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      device_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      device_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      device_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->device_id_length);
      if(device_id_lengthT > device_id_length)
        this->device_id = (int32_t*)realloc(this->device_id, device_id_lengthT * sizeof(int32_t));
      device_id_length = device_id_lengthT;
      for( uint32_t i = 0; i < device_id_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_device_id;
      u_st_device_id.base = 0;
      u_st_device_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_device_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_device_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_device_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_device_id = u_st_device_id.real;
      offset += sizeof(this->st_device_id);
        memcpy( &(this->device_id[i]), &(this->st_device_id), sizeof(int32_t));
      }
      uint32_t set_point_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      set_point_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      set_point_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      set_point_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->set_point_length);
      if(set_point_lengthT > set_point_length)
        this->set_point = (double*)realloc(this->set_point, set_point_lengthT * sizeof(double));
      set_point_length = set_point_lengthT;
      for( uint32_t i = 0; i < set_point_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_set_point;
      u_st_set_point.base = 0;
      u_st_set_point.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_set_point.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_set_point.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_set_point.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_set_point.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_set_point.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_set_point.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_set_point.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_set_point = u_st_set_point.real;
      offset += sizeof(this->st_set_point);
        memcpy( &(this->set_point[i]), &(this->st_set_point), sizeof(double));
      }
      uint32_t position_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      position_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      position_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      position_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->position_length);
      if(position_lengthT > position_length)
        this->position = (double*)realloc(this->position, position_lengthT * sizeof(double));
      position_length = position_lengthT;
      for( uint32_t i = 0; i < position_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_position;
      u_st_position.base = 0;
      u_st_position.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_position.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_position.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_position.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_position.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_position.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_position.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_position.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_position = u_st_position.real;
      offset += sizeof(this->st_position);
        memcpy( &(this->position[i]), &(this->st_position), sizeof(double));
      }
      uint32_t velocity_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->velocity_length);
      if(velocity_lengthT > velocity_length)
        this->velocity = (double*)realloc(this->velocity, velocity_lengthT * sizeof(double));
      velocity_length = velocity_lengthT;
      for( uint32_t i = 0; i < velocity_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_velocity;
      u_st_velocity.base = 0;
      u_st_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_velocity = u_st_velocity.real;
      offset += sizeof(this->st_velocity);
        memcpy( &(this->velocity[i]), &(this->st_velocity), sizeof(double));
      }
      uint32_t forward_limit_switch_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      forward_limit_switch_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      forward_limit_switch_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      forward_limit_switch_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->forward_limit_switch_length);
      if(forward_limit_switch_lengthT > forward_limit_switch_length)
        this->forward_limit_switch = (bool*)realloc(this->forward_limit_switch, forward_limit_switch_lengthT * sizeof(bool));
      forward_limit_switch_length = forward_limit_switch_lengthT;
      for( uint32_t i = 0; i < forward_limit_switch_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_forward_limit_switch;
      u_st_forward_limit_switch.base = 0;
      u_st_forward_limit_switch.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_forward_limit_switch = u_st_forward_limit_switch.real;
      offset += sizeof(this->st_forward_limit_switch);
        memcpy( &(this->forward_limit_switch[i]), &(this->st_forward_limit_switch), sizeof(bool));
      }
      uint32_t reverse_limit_switch_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      reverse_limit_switch_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      reverse_limit_switch_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      reverse_limit_switch_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->reverse_limit_switch_length);
      if(reverse_limit_switch_lengthT > reverse_limit_switch_length)
        this->reverse_limit_switch = (bool*)realloc(this->reverse_limit_switch, reverse_limit_switch_lengthT * sizeof(bool));
      reverse_limit_switch_length = reverse_limit_switch_lengthT;
      for( uint32_t i = 0; i < reverse_limit_switch_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_reverse_limit_switch;
      u_st_reverse_limit_switch.base = 0;
      u_st_reverse_limit_switch.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_reverse_limit_switch = u_st_reverse_limit_switch.real;
      offset += sizeof(this->st_reverse_limit_switch);
        memcpy( &(this->reverse_limit_switch[i]), &(this->st_reverse_limit_switch), sizeof(bool));
      }
      uint32_t forward_softlimit_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      forward_softlimit_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      forward_softlimit_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      forward_softlimit_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->forward_softlimit_length);
      if(forward_softlimit_lengthT > forward_softlimit_length)
        this->forward_softlimit = (double*)realloc(this->forward_softlimit, forward_softlimit_lengthT * sizeof(double));
      forward_softlimit_length = forward_softlimit_lengthT;
      for( uint32_t i = 0; i < forward_softlimit_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_forward_softlimit;
      u_st_forward_softlimit.base = 0;
      u_st_forward_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_forward_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_forward_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_forward_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_forward_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_forward_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_forward_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_forward_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_forward_softlimit = u_st_forward_softlimit.real;
      offset += sizeof(this->st_forward_softlimit);
        memcpy( &(this->forward_softlimit[i]), &(this->st_forward_softlimit), sizeof(double));
      }
      uint32_t reverse_softlimit_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      reverse_softlimit_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      reverse_softlimit_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      reverse_softlimit_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->reverse_softlimit_length);
      if(reverse_softlimit_lengthT > reverse_softlimit_length)
        this->reverse_softlimit = (double*)realloc(this->reverse_softlimit, reverse_softlimit_lengthT * sizeof(double));
      reverse_softlimit_length = reverse_softlimit_lengthT;
      for( uint32_t i = 0; i < reverse_softlimit_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_reverse_softlimit;
      u_st_reverse_softlimit.base = 0;
      u_st_reverse_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_reverse_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_reverse_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_reverse_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_reverse_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_reverse_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_reverse_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_reverse_softlimit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_reverse_softlimit = u_st_reverse_softlimit.real;
      offset += sizeof(this->st_reverse_softlimit);
        memcpy( &(this->reverse_softlimit[i]), &(this->st_reverse_softlimit), sizeof(double));
      }
      uint32_t faults_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      faults_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      faults_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      faults_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->faults_length);
      if(faults_lengthT > faults_length)
        this->faults = (char**)realloc(this->faults, faults_lengthT * sizeof(char*));
      faults_length = faults_lengthT;
      for( uint32_t i = 0; i < faults_length; i++){
      uint32_t length_st_faults;
      arrToVar(length_st_faults, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_faults; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_faults-1]=0;
      this->st_faults = (char *)(inbuffer + offset-1);
      offset += length_st_faults;
        memcpy( &(this->faults[i]), &(this->st_faults), sizeof(char*));
      }
      uint32_t sticky_faults_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      sticky_faults_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      sticky_faults_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      sticky_faults_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->sticky_faults_length);
      if(sticky_faults_lengthT > sticky_faults_length)
        this->sticky_faults = (char**)realloc(this->sticky_faults, sticky_faults_lengthT * sizeof(char*));
      sticky_faults_length = sticky_faults_lengthT;
      for( uint32_t i = 0; i < sticky_faults_length; i++){
      uint32_t length_st_sticky_faults;
      arrToVar(length_st_sticky_faults, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_sticky_faults; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_sticky_faults-1]=0;
      this->st_sticky_faults = (char *)(inbuffer + offset-1);
      offset += length_st_sticky_faults;
        memcpy( &(this->sticky_faults[i]), &(this->st_sticky_faults), sizeof(char*));
      }
      uint32_t bus_voltage_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      bus_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      bus_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      bus_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->bus_voltage_length);
      if(bus_voltage_lengthT > bus_voltage_length)
        this->bus_voltage = (double*)realloc(this->bus_voltage, bus_voltage_lengthT * sizeof(double));
      bus_voltage_length = bus_voltage_lengthT;
      for( uint32_t i = 0; i < bus_voltage_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_bus_voltage;
      u_st_bus_voltage.base = 0;
      u_st_bus_voltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_bus_voltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_bus_voltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_bus_voltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_bus_voltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_bus_voltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_bus_voltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_bus_voltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_bus_voltage = u_st_bus_voltage.real;
      offset += sizeof(this->st_bus_voltage);
        memcpy( &(this->bus_voltage[i]), &(this->st_bus_voltage), sizeof(double));
      }
      uint32_t applied_output_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      applied_output_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      applied_output_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      applied_output_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->applied_output_length);
      if(applied_output_lengthT > applied_output_length)
        this->applied_output = (double*)realloc(this->applied_output, applied_output_lengthT * sizeof(double));
      applied_output_length = applied_output_lengthT;
      for( uint32_t i = 0; i < applied_output_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_applied_output;
      u_st_applied_output.base = 0;
      u_st_applied_output.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_applied_output.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_applied_output.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_applied_output.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_applied_output.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_applied_output.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_applied_output.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_applied_output.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_applied_output = u_st_applied_output.real;
      offset += sizeof(this->st_applied_output);
        memcpy( &(this->applied_output[i]), &(this->st_applied_output), sizeof(double));
      }
      uint32_t output_current_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      output_current_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      output_current_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      output_current_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->output_current_length);
      if(output_current_lengthT > output_current_length)
        this->output_current = (double*)realloc(this->output_current, output_current_lengthT * sizeof(double));
      output_current_length = output_current_lengthT;
      for( uint32_t i = 0; i < output_current_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_output_current;
      u_st_output_current.base = 0;
      u_st_output_current.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_output_current.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_output_current.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_output_current.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_output_current.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_output_current.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_output_current.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_output_current.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_output_current = u_st_output_current.real;
      offset += sizeof(this->st_output_current);
        memcpy( &(this->output_current[i]), &(this->st_output_current), sizeof(double));
      }
      uint32_t motor_temperature_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motor_temperature_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motor_temperature_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motor_temperature_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motor_temperature_length);
      if(motor_temperature_lengthT > motor_temperature_length)
        this->motor_temperature = (double*)realloc(this->motor_temperature, motor_temperature_lengthT * sizeof(double));
      motor_temperature_length = motor_temperature_lengthT;
      for( uint32_t i = 0; i < motor_temperature_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_motor_temperature;
      u_st_motor_temperature.base = 0;
      u_st_motor_temperature.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motor_temperature.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motor_temperature.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motor_temperature.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_motor_temperature.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_motor_temperature.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_motor_temperature.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_motor_temperature.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_motor_temperature = u_st_motor_temperature.real;
      offset += sizeof(this->st_motor_temperature);
        memcpy( &(this->motor_temperature[i]), &(this->st_motor_temperature), sizeof(double));
      }
     return offset;
    }

    virtual const char * getType() override { return "spark_max_state_msgs/SparkMaxState"; };
    virtual const char * getMD5() override { return "f8071d0b8c7521aa57b819dc65674dbb"; };

  };

}
#endif
