#ifndef _ROS_talon_state_msgs_CANCoderState_h
#define _ROS_talon_state_msgs_CANCoderState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace talon_state_msgs
{

  class CANCoderState : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t name_length;
      typedef char* _name_type;
      _name_type st_name;
      _name_type * name;
      uint32_t device_number_length;
      typedef int8_t _device_number_type;
      _device_number_type st_device_number;
      _device_number_type * device_number;
      uint32_t position_length;
      typedef double _position_type;
      _position_type st_position;
      _position_type * position;
      uint32_t velocity_length;
      typedef double _velocity_type;
      _velocity_type st_velocity;
      _velocity_type * velocity;
      uint32_t absolute_position_length;
      typedef double _absolute_position_type;
      _absolute_position_type st_absolute_position;
      _absolute_position_type * absolute_position;
      uint32_t velocity_meas_period_length;
      typedef char* _velocity_meas_period_type;
      _velocity_meas_period_type st_velocity_meas_period;
      _velocity_meas_period_type * velocity_meas_period;
      uint32_t velocity_meas_window_length;
      typedef int8_t _velocity_meas_window_type;
      _velocity_meas_window_type st_velocity_meas_window;
      _velocity_meas_window_type * velocity_meas_window;
      uint32_t absolute_sensor_range_length;
      typedef char* _absolute_sensor_range_type;
      _absolute_sensor_range_type st_absolute_sensor_range;
      _absolute_sensor_range_type * absolute_sensor_range;
      uint32_t magnet_offset_length;
      typedef double _magnet_offset_type;
      _magnet_offset_type st_magnet_offset;
      _magnet_offset_type * magnet_offset;
      uint32_t initialization_strategy_length;
      typedef char* _initialization_strategy_type;
      _initialization_strategy_type st_initialization_strategy;
      _initialization_strategy_type * initialization_strategy;
      uint32_t feedback_coefficient_length;
      typedef double _feedback_coefficient_type;
      _feedback_coefficient_type st_feedback_coefficient;
      _feedback_coefficient_type * feedback_coefficient;
      uint32_t unit_string_length;
      typedef char* _unit_string_type;
      _unit_string_type st_unit_string;
      _unit_string_type * unit_string;
      uint32_t time_base_length;
      typedef char* _time_base_type;
      _time_base_type st_time_base;
      _time_base_type * time_base;
      uint32_t bus_voltage_length;
      typedef double _bus_voltage_type;
      _bus_voltage_type st_bus_voltage;
      _bus_voltage_type * bus_voltage;
      uint32_t magnet_field_strength_length;
      typedef char* _magnet_field_strength_type;
      _magnet_field_strength_type st_magnet_field_strength;
      _magnet_field_strength_type * magnet_field_strength;
      uint32_t direction_length;
      typedef bool _direction_type;
      _direction_type st_direction;
      _direction_type * direction;
      uint32_t last_timestamp_length;
      typedef double _last_timestamp_type;
      _last_timestamp_type st_last_timestamp;
      _last_timestamp_type * last_timestamp;
      uint32_t sensor_data_status_frame_period_length;
      typedef int8_t _sensor_data_status_frame_period_type;
      _sensor_data_status_frame_period_type st_sensor_data_status_frame_period;
      _sensor_data_status_frame_period_type * sensor_data_status_frame_period;
      uint32_t vbat_and_faults_status_frame_period_length;
      typedef int8_t _vbat_and_faults_status_frame_period_type;
      _vbat_and_faults_status_frame_period_type st_vbat_and_faults_status_frame_period;
      _vbat_and_faults_status_frame_period_type * vbat_and_faults_status_frame_period;
      uint32_t firmware_version_length;
      typedef char* _firmware_version_type;
      _firmware_version_type st_firmware_version;
      _firmware_version_type * firmware_version;
      uint32_t faults_length;
      typedef char* _faults_type;
      _faults_type st_faults;
      _faults_type * faults;
      uint32_t sticky_faults_length;
      typedef char* _sticky_faults_type;
      _sticky_faults_type st_sticky_faults;
      _sticky_faults_type * sticky_faults;
      uint32_t conversion_factor_length;
      typedef double _conversion_factor_type;
      _conversion_factor_type st_conversion_factor;
      _conversion_factor_type * conversion_factor;

    CANCoderState():
      header(),
      name_length(0), st_name(), name(nullptr),
      device_number_length(0), st_device_number(), device_number(nullptr),
      position_length(0), st_position(), position(nullptr),
      velocity_length(0), st_velocity(), velocity(nullptr),
      absolute_position_length(0), st_absolute_position(), absolute_position(nullptr),
      velocity_meas_period_length(0), st_velocity_meas_period(), velocity_meas_period(nullptr),
      velocity_meas_window_length(0), st_velocity_meas_window(), velocity_meas_window(nullptr),
      absolute_sensor_range_length(0), st_absolute_sensor_range(), absolute_sensor_range(nullptr),
      magnet_offset_length(0), st_magnet_offset(), magnet_offset(nullptr),
      initialization_strategy_length(0), st_initialization_strategy(), initialization_strategy(nullptr),
      feedback_coefficient_length(0), st_feedback_coefficient(), feedback_coefficient(nullptr),
      unit_string_length(0), st_unit_string(), unit_string(nullptr),
      time_base_length(0), st_time_base(), time_base(nullptr),
      bus_voltage_length(0), st_bus_voltage(), bus_voltage(nullptr),
      magnet_field_strength_length(0), st_magnet_field_strength(), magnet_field_strength(nullptr),
      direction_length(0), st_direction(), direction(nullptr),
      last_timestamp_length(0), st_last_timestamp(), last_timestamp(nullptr),
      sensor_data_status_frame_period_length(0), st_sensor_data_status_frame_period(), sensor_data_status_frame_period(nullptr),
      vbat_and_faults_status_frame_period_length(0), st_vbat_and_faults_status_frame_period(), vbat_and_faults_status_frame_period(nullptr),
      firmware_version_length(0), st_firmware_version(), firmware_version(nullptr),
      faults_length(0), st_faults(), faults(nullptr),
      sticky_faults_length(0), st_sticky_faults(), sticky_faults(nullptr),
      conversion_factor_length(0), st_conversion_factor(), conversion_factor(nullptr)
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
      *(outbuffer + offset + 0) = (this->device_number_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->device_number_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->device_number_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->device_number_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->device_number_length);
      for( uint32_t i = 0; i < device_number_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_device_numberi;
      u_device_numberi.real = this->device_number[i];
      *(outbuffer + offset + 0) = (u_device_numberi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->device_number[i]);
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
      *(outbuffer + offset + 0) = (this->absolute_position_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->absolute_position_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->absolute_position_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->absolute_position_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->absolute_position_length);
      for( uint32_t i = 0; i < absolute_position_length; i++){
      union {
        double real;
        uint64_t base;
      } u_absolute_positioni;
      u_absolute_positioni.real = this->absolute_position[i];
      *(outbuffer + offset + 0) = (u_absolute_positioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_absolute_positioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_absolute_positioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_absolute_positioni.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_absolute_positioni.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_absolute_positioni.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_absolute_positioni.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_absolute_positioni.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->absolute_position[i]);
      }
      *(outbuffer + offset + 0) = (this->velocity_meas_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->velocity_meas_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->velocity_meas_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->velocity_meas_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->velocity_meas_period_length);
      for( uint32_t i = 0; i < velocity_meas_period_length; i++){
      uint32_t length_velocity_meas_periodi = strlen(this->velocity_meas_period[i]);
      varToArr(outbuffer + offset, length_velocity_meas_periodi);
      offset += 4;
      memcpy(outbuffer + offset, this->velocity_meas_period[i], length_velocity_meas_periodi);
      offset += length_velocity_meas_periodi;
      }
      *(outbuffer + offset + 0) = (this->velocity_meas_window_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->velocity_meas_window_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->velocity_meas_window_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->velocity_meas_window_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->velocity_meas_window_length);
      for( uint32_t i = 0; i < velocity_meas_window_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_velocity_meas_windowi;
      u_velocity_meas_windowi.real = this->velocity_meas_window[i];
      *(outbuffer + offset + 0) = (u_velocity_meas_windowi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->velocity_meas_window[i]);
      }
      *(outbuffer + offset + 0) = (this->absolute_sensor_range_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->absolute_sensor_range_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->absolute_sensor_range_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->absolute_sensor_range_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->absolute_sensor_range_length);
      for( uint32_t i = 0; i < absolute_sensor_range_length; i++){
      uint32_t length_absolute_sensor_rangei = strlen(this->absolute_sensor_range[i]);
      varToArr(outbuffer + offset, length_absolute_sensor_rangei);
      offset += 4;
      memcpy(outbuffer + offset, this->absolute_sensor_range[i], length_absolute_sensor_rangei);
      offset += length_absolute_sensor_rangei;
      }
      *(outbuffer + offset + 0) = (this->magnet_offset_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->magnet_offset_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->magnet_offset_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->magnet_offset_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->magnet_offset_length);
      for( uint32_t i = 0; i < magnet_offset_length; i++){
      union {
        double real;
        uint64_t base;
      } u_magnet_offseti;
      u_magnet_offseti.real = this->magnet_offset[i];
      *(outbuffer + offset + 0) = (u_magnet_offseti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_magnet_offseti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_magnet_offseti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_magnet_offseti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_magnet_offseti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_magnet_offseti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_magnet_offseti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_magnet_offseti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->magnet_offset[i]);
      }
      *(outbuffer + offset + 0) = (this->initialization_strategy_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->initialization_strategy_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->initialization_strategy_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->initialization_strategy_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->initialization_strategy_length);
      for( uint32_t i = 0; i < initialization_strategy_length; i++){
      uint32_t length_initialization_strategyi = strlen(this->initialization_strategy[i]);
      varToArr(outbuffer + offset, length_initialization_strategyi);
      offset += 4;
      memcpy(outbuffer + offset, this->initialization_strategy[i], length_initialization_strategyi);
      offset += length_initialization_strategyi;
      }
      *(outbuffer + offset + 0) = (this->feedback_coefficient_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->feedback_coefficient_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->feedback_coefficient_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->feedback_coefficient_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->feedback_coefficient_length);
      for( uint32_t i = 0; i < feedback_coefficient_length; i++){
      union {
        double real;
        uint64_t base;
      } u_feedback_coefficienti;
      u_feedback_coefficienti.real = this->feedback_coefficient[i];
      *(outbuffer + offset + 0) = (u_feedback_coefficienti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_feedback_coefficienti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_feedback_coefficienti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_feedback_coefficienti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_feedback_coefficienti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_feedback_coefficienti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_feedback_coefficienti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_feedback_coefficienti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->feedback_coefficient[i]);
      }
      *(outbuffer + offset + 0) = (this->unit_string_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->unit_string_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->unit_string_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->unit_string_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->unit_string_length);
      for( uint32_t i = 0; i < unit_string_length; i++){
      uint32_t length_unit_stringi = strlen(this->unit_string[i]);
      varToArr(outbuffer + offset, length_unit_stringi);
      offset += 4;
      memcpy(outbuffer + offset, this->unit_string[i], length_unit_stringi);
      offset += length_unit_stringi;
      }
      *(outbuffer + offset + 0) = (this->time_base_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->time_base_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->time_base_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->time_base_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->time_base_length);
      for( uint32_t i = 0; i < time_base_length; i++){
      uint32_t length_time_basei = strlen(this->time_base[i]);
      varToArr(outbuffer + offset, length_time_basei);
      offset += 4;
      memcpy(outbuffer + offset, this->time_base[i], length_time_basei);
      offset += length_time_basei;
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
      *(outbuffer + offset + 0) = (this->magnet_field_strength_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->magnet_field_strength_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->magnet_field_strength_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->magnet_field_strength_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->magnet_field_strength_length);
      for( uint32_t i = 0; i < magnet_field_strength_length; i++){
      uint32_t length_magnet_field_strengthi = strlen(this->magnet_field_strength[i]);
      varToArr(outbuffer + offset, length_magnet_field_strengthi);
      offset += 4;
      memcpy(outbuffer + offset, this->magnet_field_strength[i], length_magnet_field_strengthi);
      offset += length_magnet_field_strengthi;
      }
      *(outbuffer + offset + 0) = (this->direction_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->direction_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->direction_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->direction_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->direction_length);
      for( uint32_t i = 0; i < direction_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_directioni;
      u_directioni.real = this->direction[i];
      *(outbuffer + offset + 0) = (u_directioni.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->direction[i]);
      }
      *(outbuffer + offset + 0) = (this->last_timestamp_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->last_timestamp_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->last_timestamp_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->last_timestamp_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->last_timestamp_length);
      for( uint32_t i = 0; i < last_timestamp_length; i++){
      union {
        double real;
        uint64_t base;
      } u_last_timestampi;
      u_last_timestampi.real = this->last_timestamp[i];
      *(outbuffer + offset + 0) = (u_last_timestampi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_last_timestampi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_last_timestampi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_last_timestampi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_last_timestampi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_last_timestampi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_last_timestampi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_last_timestampi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->last_timestamp[i]);
      }
      *(outbuffer + offset + 0) = (this->sensor_data_status_frame_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->sensor_data_status_frame_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->sensor_data_status_frame_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->sensor_data_status_frame_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sensor_data_status_frame_period_length);
      for( uint32_t i = 0; i < sensor_data_status_frame_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_sensor_data_status_frame_periodi;
      u_sensor_data_status_frame_periodi.real = this->sensor_data_status_frame_period[i];
      *(outbuffer + offset + 0) = (u_sensor_data_status_frame_periodi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->sensor_data_status_frame_period[i]);
      }
      *(outbuffer + offset + 0) = (this->vbat_and_faults_status_frame_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->vbat_and_faults_status_frame_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->vbat_and_faults_status_frame_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->vbat_and_faults_status_frame_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->vbat_and_faults_status_frame_period_length);
      for( uint32_t i = 0; i < vbat_and_faults_status_frame_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_vbat_and_faults_status_frame_periodi;
      u_vbat_and_faults_status_frame_periodi.real = this->vbat_and_faults_status_frame_period[i];
      *(outbuffer + offset + 0) = (u_vbat_and_faults_status_frame_periodi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->vbat_and_faults_status_frame_period[i]);
      }
      *(outbuffer + offset + 0) = (this->firmware_version_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->firmware_version_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->firmware_version_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->firmware_version_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->firmware_version_length);
      for( uint32_t i = 0; i < firmware_version_length; i++){
      uint32_t length_firmware_versioni = strlen(this->firmware_version[i]);
      varToArr(outbuffer + offset, length_firmware_versioni);
      offset += 4;
      memcpy(outbuffer + offset, this->firmware_version[i], length_firmware_versioni);
      offset += length_firmware_versioni;
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
      *(outbuffer + offset + 0) = (this->conversion_factor_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->conversion_factor_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->conversion_factor_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->conversion_factor_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->conversion_factor_length);
      for( uint32_t i = 0; i < conversion_factor_length; i++){
      union {
        double real;
        uint64_t base;
      } u_conversion_factori;
      u_conversion_factori.real = this->conversion_factor[i];
      *(outbuffer + offset + 0) = (u_conversion_factori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_conversion_factori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_conversion_factori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_conversion_factori.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_conversion_factori.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_conversion_factori.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_conversion_factori.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_conversion_factori.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->conversion_factor[i]);
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
      uint32_t device_number_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      device_number_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      device_number_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      device_number_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->device_number_length);
      if(device_number_lengthT > device_number_length)
        this->device_number = (int8_t*)realloc(this->device_number, device_number_lengthT * sizeof(int8_t));
      device_number_length = device_number_lengthT;
      for( uint32_t i = 0; i < device_number_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_device_number;
      u_st_device_number.base = 0;
      u_st_device_number.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_device_number = u_st_device_number.real;
      offset += sizeof(this->st_device_number);
        memcpy( &(this->device_number[i]), &(this->st_device_number), sizeof(int8_t));
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
      uint32_t absolute_position_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      absolute_position_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      absolute_position_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      absolute_position_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->absolute_position_length);
      if(absolute_position_lengthT > absolute_position_length)
        this->absolute_position = (double*)realloc(this->absolute_position, absolute_position_lengthT * sizeof(double));
      absolute_position_length = absolute_position_lengthT;
      for( uint32_t i = 0; i < absolute_position_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_absolute_position;
      u_st_absolute_position.base = 0;
      u_st_absolute_position.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_absolute_position.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_absolute_position.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_absolute_position.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_absolute_position.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_absolute_position.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_absolute_position.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_absolute_position.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_absolute_position = u_st_absolute_position.real;
      offset += sizeof(this->st_absolute_position);
        memcpy( &(this->absolute_position[i]), &(this->st_absolute_position), sizeof(double));
      }
      uint32_t velocity_meas_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      velocity_meas_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      velocity_meas_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      velocity_meas_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->velocity_meas_period_length);
      if(velocity_meas_period_lengthT > velocity_meas_period_length)
        this->velocity_meas_period = (char**)realloc(this->velocity_meas_period, velocity_meas_period_lengthT * sizeof(char*));
      velocity_meas_period_length = velocity_meas_period_lengthT;
      for( uint32_t i = 0; i < velocity_meas_period_length; i++){
      uint32_t length_st_velocity_meas_period;
      arrToVar(length_st_velocity_meas_period, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_velocity_meas_period; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_velocity_meas_period-1]=0;
      this->st_velocity_meas_period = (char *)(inbuffer + offset-1);
      offset += length_st_velocity_meas_period;
        memcpy( &(this->velocity_meas_period[i]), &(this->st_velocity_meas_period), sizeof(char*));
      }
      uint32_t velocity_meas_window_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      velocity_meas_window_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      velocity_meas_window_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      velocity_meas_window_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->velocity_meas_window_length);
      if(velocity_meas_window_lengthT > velocity_meas_window_length)
        this->velocity_meas_window = (int8_t*)realloc(this->velocity_meas_window, velocity_meas_window_lengthT * sizeof(int8_t));
      velocity_meas_window_length = velocity_meas_window_lengthT;
      for( uint32_t i = 0; i < velocity_meas_window_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_velocity_meas_window;
      u_st_velocity_meas_window.base = 0;
      u_st_velocity_meas_window.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_velocity_meas_window = u_st_velocity_meas_window.real;
      offset += sizeof(this->st_velocity_meas_window);
        memcpy( &(this->velocity_meas_window[i]), &(this->st_velocity_meas_window), sizeof(int8_t));
      }
      uint32_t absolute_sensor_range_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      absolute_sensor_range_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      absolute_sensor_range_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      absolute_sensor_range_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->absolute_sensor_range_length);
      if(absolute_sensor_range_lengthT > absolute_sensor_range_length)
        this->absolute_sensor_range = (char**)realloc(this->absolute_sensor_range, absolute_sensor_range_lengthT * sizeof(char*));
      absolute_sensor_range_length = absolute_sensor_range_lengthT;
      for( uint32_t i = 0; i < absolute_sensor_range_length; i++){
      uint32_t length_st_absolute_sensor_range;
      arrToVar(length_st_absolute_sensor_range, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_absolute_sensor_range; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_absolute_sensor_range-1]=0;
      this->st_absolute_sensor_range = (char *)(inbuffer + offset-1);
      offset += length_st_absolute_sensor_range;
        memcpy( &(this->absolute_sensor_range[i]), &(this->st_absolute_sensor_range), sizeof(char*));
      }
      uint32_t magnet_offset_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      magnet_offset_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      magnet_offset_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      magnet_offset_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->magnet_offset_length);
      if(magnet_offset_lengthT > magnet_offset_length)
        this->magnet_offset = (double*)realloc(this->magnet_offset, magnet_offset_lengthT * sizeof(double));
      magnet_offset_length = magnet_offset_lengthT;
      for( uint32_t i = 0; i < magnet_offset_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_magnet_offset;
      u_st_magnet_offset.base = 0;
      u_st_magnet_offset.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_magnet_offset.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_magnet_offset.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_magnet_offset.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_magnet_offset.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_magnet_offset.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_magnet_offset.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_magnet_offset.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_magnet_offset = u_st_magnet_offset.real;
      offset += sizeof(this->st_magnet_offset);
        memcpy( &(this->magnet_offset[i]), &(this->st_magnet_offset), sizeof(double));
      }
      uint32_t initialization_strategy_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      initialization_strategy_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      initialization_strategy_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      initialization_strategy_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->initialization_strategy_length);
      if(initialization_strategy_lengthT > initialization_strategy_length)
        this->initialization_strategy = (char**)realloc(this->initialization_strategy, initialization_strategy_lengthT * sizeof(char*));
      initialization_strategy_length = initialization_strategy_lengthT;
      for( uint32_t i = 0; i < initialization_strategy_length; i++){
      uint32_t length_st_initialization_strategy;
      arrToVar(length_st_initialization_strategy, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_initialization_strategy; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_initialization_strategy-1]=0;
      this->st_initialization_strategy = (char *)(inbuffer + offset-1);
      offset += length_st_initialization_strategy;
        memcpy( &(this->initialization_strategy[i]), &(this->st_initialization_strategy), sizeof(char*));
      }
      uint32_t feedback_coefficient_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      feedback_coefficient_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      feedback_coefficient_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      feedback_coefficient_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->feedback_coefficient_length);
      if(feedback_coefficient_lengthT > feedback_coefficient_length)
        this->feedback_coefficient = (double*)realloc(this->feedback_coefficient, feedback_coefficient_lengthT * sizeof(double));
      feedback_coefficient_length = feedback_coefficient_lengthT;
      for( uint32_t i = 0; i < feedback_coefficient_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_feedback_coefficient;
      u_st_feedback_coefficient.base = 0;
      u_st_feedback_coefficient.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_feedback_coefficient.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_feedback_coefficient.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_feedback_coefficient.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_feedback_coefficient.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_feedback_coefficient.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_feedback_coefficient.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_feedback_coefficient.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_feedback_coefficient = u_st_feedback_coefficient.real;
      offset += sizeof(this->st_feedback_coefficient);
        memcpy( &(this->feedback_coefficient[i]), &(this->st_feedback_coefficient), sizeof(double));
      }
      uint32_t unit_string_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      unit_string_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      unit_string_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      unit_string_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->unit_string_length);
      if(unit_string_lengthT > unit_string_length)
        this->unit_string = (char**)realloc(this->unit_string, unit_string_lengthT * sizeof(char*));
      unit_string_length = unit_string_lengthT;
      for( uint32_t i = 0; i < unit_string_length; i++){
      uint32_t length_st_unit_string;
      arrToVar(length_st_unit_string, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_unit_string; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_unit_string-1]=0;
      this->st_unit_string = (char *)(inbuffer + offset-1);
      offset += length_st_unit_string;
        memcpy( &(this->unit_string[i]), &(this->st_unit_string), sizeof(char*));
      }
      uint32_t time_base_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      time_base_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      time_base_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      time_base_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->time_base_length);
      if(time_base_lengthT > time_base_length)
        this->time_base = (char**)realloc(this->time_base, time_base_lengthT * sizeof(char*));
      time_base_length = time_base_lengthT;
      for( uint32_t i = 0; i < time_base_length; i++){
      uint32_t length_st_time_base;
      arrToVar(length_st_time_base, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_time_base; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_time_base-1]=0;
      this->st_time_base = (char *)(inbuffer + offset-1);
      offset += length_st_time_base;
        memcpy( &(this->time_base[i]), &(this->st_time_base), sizeof(char*));
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
      uint32_t magnet_field_strength_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      magnet_field_strength_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      magnet_field_strength_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      magnet_field_strength_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->magnet_field_strength_length);
      if(magnet_field_strength_lengthT > magnet_field_strength_length)
        this->magnet_field_strength = (char**)realloc(this->magnet_field_strength, magnet_field_strength_lengthT * sizeof(char*));
      magnet_field_strength_length = magnet_field_strength_lengthT;
      for( uint32_t i = 0; i < magnet_field_strength_length; i++){
      uint32_t length_st_magnet_field_strength;
      arrToVar(length_st_magnet_field_strength, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_magnet_field_strength; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_magnet_field_strength-1]=0;
      this->st_magnet_field_strength = (char *)(inbuffer + offset-1);
      offset += length_st_magnet_field_strength;
        memcpy( &(this->magnet_field_strength[i]), &(this->st_magnet_field_strength), sizeof(char*));
      }
      uint32_t direction_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      direction_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      direction_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      direction_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->direction_length);
      if(direction_lengthT > direction_length)
        this->direction = (bool*)realloc(this->direction, direction_lengthT * sizeof(bool));
      direction_length = direction_lengthT;
      for( uint32_t i = 0; i < direction_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_direction;
      u_st_direction.base = 0;
      u_st_direction.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_direction = u_st_direction.real;
      offset += sizeof(this->st_direction);
        memcpy( &(this->direction[i]), &(this->st_direction), sizeof(bool));
      }
      uint32_t last_timestamp_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      last_timestamp_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      last_timestamp_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      last_timestamp_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->last_timestamp_length);
      if(last_timestamp_lengthT > last_timestamp_length)
        this->last_timestamp = (double*)realloc(this->last_timestamp, last_timestamp_lengthT * sizeof(double));
      last_timestamp_length = last_timestamp_lengthT;
      for( uint32_t i = 0; i < last_timestamp_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_last_timestamp;
      u_st_last_timestamp.base = 0;
      u_st_last_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_last_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_last_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_last_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_last_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_last_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_last_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_last_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_last_timestamp = u_st_last_timestamp.real;
      offset += sizeof(this->st_last_timestamp);
        memcpy( &(this->last_timestamp[i]), &(this->st_last_timestamp), sizeof(double));
      }
      uint32_t sensor_data_status_frame_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      sensor_data_status_frame_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      sensor_data_status_frame_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      sensor_data_status_frame_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->sensor_data_status_frame_period_length);
      if(sensor_data_status_frame_period_lengthT > sensor_data_status_frame_period_length)
        this->sensor_data_status_frame_period = (int8_t*)realloc(this->sensor_data_status_frame_period, sensor_data_status_frame_period_lengthT * sizeof(int8_t));
      sensor_data_status_frame_period_length = sensor_data_status_frame_period_lengthT;
      for( uint32_t i = 0; i < sensor_data_status_frame_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_sensor_data_status_frame_period;
      u_st_sensor_data_status_frame_period.base = 0;
      u_st_sensor_data_status_frame_period.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_sensor_data_status_frame_period = u_st_sensor_data_status_frame_period.real;
      offset += sizeof(this->st_sensor_data_status_frame_period);
        memcpy( &(this->sensor_data_status_frame_period[i]), &(this->st_sensor_data_status_frame_period), sizeof(int8_t));
      }
      uint32_t vbat_and_faults_status_frame_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      vbat_and_faults_status_frame_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      vbat_and_faults_status_frame_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      vbat_and_faults_status_frame_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->vbat_and_faults_status_frame_period_length);
      if(vbat_and_faults_status_frame_period_lengthT > vbat_and_faults_status_frame_period_length)
        this->vbat_and_faults_status_frame_period = (int8_t*)realloc(this->vbat_and_faults_status_frame_period, vbat_and_faults_status_frame_period_lengthT * sizeof(int8_t));
      vbat_and_faults_status_frame_period_length = vbat_and_faults_status_frame_period_lengthT;
      for( uint32_t i = 0; i < vbat_and_faults_status_frame_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_vbat_and_faults_status_frame_period;
      u_st_vbat_and_faults_status_frame_period.base = 0;
      u_st_vbat_and_faults_status_frame_period.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_vbat_and_faults_status_frame_period = u_st_vbat_and_faults_status_frame_period.real;
      offset += sizeof(this->st_vbat_and_faults_status_frame_period);
        memcpy( &(this->vbat_and_faults_status_frame_period[i]), &(this->st_vbat_and_faults_status_frame_period), sizeof(int8_t));
      }
      uint32_t firmware_version_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      firmware_version_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      firmware_version_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      firmware_version_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->firmware_version_length);
      if(firmware_version_lengthT > firmware_version_length)
        this->firmware_version = (char**)realloc(this->firmware_version, firmware_version_lengthT * sizeof(char*));
      firmware_version_length = firmware_version_lengthT;
      for( uint32_t i = 0; i < firmware_version_length; i++){
      uint32_t length_st_firmware_version;
      arrToVar(length_st_firmware_version, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_firmware_version; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_firmware_version-1]=0;
      this->st_firmware_version = (char *)(inbuffer + offset-1);
      offset += length_st_firmware_version;
        memcpy( &(this->firmware_version[i]), &(this->st_firmware_version), sizeof(char*));
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
      uint32_t conversion_factor_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      conversion_factor_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      conversion_factor_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      conversion_factor_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->conversion_factor_length);
      if(conversion_factor_lengthT > conversion_factor_length)
        this->conversion_factor = (double*)realloc(this->conversion_factor, conversion_factor_lengthT * sizeof(double));
      conversion_factor_length = conversion_factor_lengthT;
      for( uint32_t i = 0; i < conversion_factor_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_conversion_factor;
      u_st_conversion_factor.base = 0;
      u_st_conversion_factor.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_conversion_factor.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_conversion_factor.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_conversion_factor.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_conversion_factor.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_conversion_factor.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_conversion_factor.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_conversion_factor.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_conversion_factor = u_st_conversion_factor.real;
      offset += sizeof(this->st_conversion_factor);
        memcpy( &(this->conversion_factor[i]), &(this->st_conversion_factor), sizeof(double));
      }
     return offset;
    }

    virtual const char * getType() override { return "talon_state_msgs/CANCoderState"; };
    virtual const char * getMD5() override { return "fa81d399a1739d98bdbcf3127a976907"; };

  };

}
#endif
