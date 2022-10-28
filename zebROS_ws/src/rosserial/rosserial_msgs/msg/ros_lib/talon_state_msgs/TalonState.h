#ifndef _ROS_talon_state_msgs_TalonState_h
#define _ROS_talon_state_msgs_TalonState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace talon_state_msgs
{

  class TalonState : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t name_length;
      typedef char* _name_type;
      _name_type st_name;
      _name_type * name;
      uint32_t talon_mode_length;
      typedef char* _talon_mode_type;
      _talon_mode_type st_talon_mode;
      _talon_mode_type * talon_mode;
      uint32_t demand1_type_length;
      typedef char* _demand1_type_type;
      _demand1_type_type st_demand1_type;
      _demand1_type_type * demand1_type;
      uint32_t demand1_value_length;
      typedef double _demand1_value_type;
      _demand1_value_type st_demand1_value;
      _demand1_value_type * demand1_value;
      uint32_t position_length;
      typedef double _position_type;
      _position_type st_position;
      _position_type * position;
      uint32_t speed_length;
      typedef double _speed_type;
      _speed_type st_speed;
      _speed_type * speed;
      uint32_t output_voltage_length;
      typedef double _output_voltage_type;
      _output_voltage_type st_output_voltage;
      _output_voltage_type * output_voltage;
      uint32_t output_current_length;
      typedef double _output_current_type;
      _output_current_type st_output_current;
      _output_current_type * output_current;
      uint32_t bus_voltage_length;
      typedef double _bus_voltage_type;
      _bus_voltage_type st_bus_voltage;
      _bus_voltage_type * bus_voltage;
      uint32_t motor_output_percent_length;
      typedef double _motor_output_percent_type;
      _motor_output_percent_type st_motor_output_percent;
      _motor_output_percent_type * motor_output_percent;
      uint32_t temperature_length;
      typedef double _temperature_type;
      _temperature_type st_temperature;
      _temperature_type * temperature;
      uint32_t set_point_length;
      typedef double _set_point_type;
      _set_point_type st_set_point;
      _set_point_type * set_point;
      uint32_t closed_loop_error_length;
      typedef double _closed_loop_error_type;
      _closed_loop_error_type st_closed_loop_error;
      _closed_loop_error_type * closed_loop_error;
      uint32_t integral_accumulator_length;
      typedef double _integral_accumulator_type;
      _integral_accumulator_type st_integral_accumulator;
      _integral_accumulator_type * integral_accumulator;
      uint32_t error_derivative_length;
      typedef double _error_derivative_type;
      _error_derivative_type st_error_derivative;
      _error_derivative_type * error_derivative;
      uint32_t closed_loop_target_length;
      typedef double _closed_loop_target_type;
      _closed_loop_target_type st_closed_loop_target;
      _closed_loop_target_type * closed_loop_target;
      uint32_t p_term_length;
      typedef double _p_term_type;
      _p_term_type st_p_term;
      _p_term_type * p_term;
      uint32_t i_term_length;
      typedef double _i_term_type;
      _i_term_type st_i_term;
      _i_term_type * i_term;
      uint32_t d_term_length;
      typedef double _d_term_type;
      _d_term_type st_d_term;
      _d_term_type * d_term;
      uint32_t f_term_length;
      typedef double _f_term_type;
      _f_term_type st_f_term;
      _f_term_type * f_term;
      uint32_t active_trajectory_position_length;
      typedef double _active_trajectory_position_type;
      _active_trajectory_position_type st_active_trajectory_position;
      _active_trajectory_position_type * active_trajectory_position;
      uint32_t active_trajectory_velocity_length;
      typedef double _active_trajectory_velocity_type;
      _active_trajectory_velocity_type st_active_trajectory_velocity;
      _active_trajectory_velocity_type * active_trajectory_velocity;
      uint32_t active_trajectory_arbitrary_feed_forward_length;
      typedef double _active_trajectory_arbitrary_feed_forward_type;
      _active_trajectory_arbitrary_feed_forward_type st_active_trajectory_arbitrary_feed_forward;
      _active_trajectory_arbitrary_feed_forward_type * active_trajectory_arbitrary_feed_forward;
      uint32_t active_trajectory_heading_length;
      typedef double _active_trajectory_heading_type;
      _active_trajectory_heading_type st_active_trajectory_heading;
      _active_trajectory_heading_type * active_trajectory_heading;
      uint32_t forward_limit_switch_length;
      typedef bool _forward_limit_switch_type;
      _forward_limit_switch_type st_forward_limit_switch;
      _forward_limit_switch_type * forward_limit_switch;
      uint32_t reverse_limit_switch_length;
      typedef bool _reverse_limit_switch_type;
      _reverse_limit_switch_type st_reverse_limit_switch;
      _reverse_limit_switch_type * reverse_limit_switch;
      uint32_t forward_softlimit_length;
      typedef bool _forward_softlimit_type;
      _forward_softlimit_type st_forward_softlimit;
      _forward_softlimit_type * forward_softlimit;
      uint32_t reverse_softlimit_length;
      typedef bool _reverse_softlimit_type;
      _reverse_softlimit_type st_reverse_softlimit;
      _reverse_softlimit_type * reverse_softlimit;
      uint32_t motion_profile_top_level_buffer_count_length;
      typedef int32_t _motion_profile_top_level_buffer_count_type;
      _motion_profile_top_level_buffer_count_type st_motion_profile_top_level_buffer_count;
      _motion_profile_top_level_buffer_count_type * motion_profile_top_level_buffer_count;
      uint32_t motion_profile_top_level_buffer_full_length;
      typedef bool _motion_profile_top_level_buffer_full_type;
      _motion_profile_top_level_buffer_full_type st_motion_profile_top_level_buffer_full;
      _motion_profile_top_level_buffer_full_type * motion_profile_top_level_buffer_full;
      uint32_t motion_profile_status_top_buffer_rem_length;
      typedef int32_t _motion_profile_status_top_buffer_rem_type;
      _motion_profile_status_top_buffer_rem_type st_motion_profile_status_top_buffer_rem;
      _motion_profile_status_top_buffer_rem_type * motion_profile_status_top_buffer_rem;
      uint32_t motion_profile_status_top_buffer_cnt_length;
      typedef int32_t _motion_profile_status_top_buffer_cnt_type;
      _motion_profile_status_top_buffer_cnt_type st_motion_profile_status_top_buffer_cnt;
      _motion_profile_status_top_buffer_cnt_type * motion_profile_status_top_buffer_cnt;
      uint32_t motion_profile_status_btm_buffer_cnt_length;
      typedef int32_t _motion_profile_status_btm_buffer_cnt_type;
      _motion_profile_status_btm_buffer_cnt_type st_motion_profile_status_btm_buffer_cnt;
      _motion_profile_status_btm_buffer_cnt_type * motion_profile_status_btm_buffer_cnt;
      uint32_t motion_profile_status_has_underrun_length;
      typedef bool _motion_profile_status_has_underrun_type;
      _motion_profile_status_has_underrun_type st_motion_profile_status_has_underrun;
      _motion_profile_status_has_underrun_type * motion_profile_status_has_underrun;
      uint32_t motion_profile_status_is_underrun_length;
      typedef bool _motion_profile_status_is_underrun_type;
      _motion_profile_status_is_underrun_type st_motion_profile_status_is_underrun;
      _motion_profile_status_is_underrun_type * motion_profile_status_is_underrun;
      uint32_t motion_profile_status_active_point_valid_length;
      typedef bool _motion_profile_status_active_point_valid_type;
      _motion_profile_status_active_point_valid_type st_motion_profile_status_active_point_valid;
      _motion_profile_status_active_point_valid_type * motion_profile_status_active_point_valid;
      uint32_t motion_profile_status_is_last_length;
      typedef bool _motion_profile_status_is_last_type;
      _motion_profile_status_is_last_type st_motion_profile_status_is_last;
      _motion_profile_status_is_last_type * motion_profile_status_is_last;
      uint32_t motion_profile_status_profile_slot_select0_length;
      typedef int32_t _motion_profile_status_profile_slot_select0_type;
      _motion_profile_status_profile_slot_select0_type st_motion_profile_status_profile_slot_select0;
      _motion_profile_status_profile_slot_select0_type * motion_profile_status_profile_slot_select0;
      uint32_t motion_profile_status_profile_slot_select1_length;
      typedef int32_t _motion_profile_status_profile_slot_select1_type;
      _motion_profile_status_profile_slot_select1_type st_motion_profile_status_profile_slot_select1;
      _motion_profile_status_profile_slot_select1_type * motion_profile_status_profile_slot_select1;
      uint32_t motion_profile_status_output_enable_length;
      typedef char* _motion_profile_status_output_enable_type;
      _motion_profile_status_output_enable_type st_motion_profile_status_output_enable;
      _motion_profile_status_output_enable_type * motion_profile_status_output_enable;
      uint32_t motion_profile_time_dur_ms_length;
      typedef int32_t _motion_profile_time_dur_ms_type;
      _motion_profile_time_dur_ms_type st_motion_profile_time_dur_ms;
      _motion_profile_time_dur_ms_type * motion_profile_time_dur_ms;
      uint32_t faults_length;
      typedef char* _faults_type;
      _faults_type st_faults;
      _faults_type * faults;
      uint32_t sticky_faults_length;
      typedef char* _sticky_faults_type;
      _sticky_faults_type st_sticky_faults;
      _sticky_faults_type * sticky_faults;

    TalonState():
      header(),
      name_length(0), st_name(), name(nullptr),
      talon_mode_length(0), st_talon_mode(), talon_mode(nullptr),
      demand1_type_length(0), st_demand1_type(), demand1_type(nullptr),
      demand1_value_length(0), st_demand1_value(), demand1_value(nullptr),
      position_length(0), st_position(), position(nullptr),
      speed_length(0), st_speed(), speed(nullptr),
      output_voltage_length(0), st_output_voltage(), output_voltage(nullptr),
      output_current_length(0), st_output_current(), output_current(nullptr),
      bus_voltage_length(0), st_bus_voltage(), bus_voltage(nullptr),
      motor_output_percent_length(0), st_motor_output_percent(), motor_output_percent(nullptr),
      temperature_length(0), st_temperature(), temperature(nullptr),
      set_point_length(0), st_set_point(), set_point(nullptr),
      closed_loop_error_length(0), st_closed_loop_error(), closed_loop_error(nullptr),
      integral_accumulator_length(0), st_integral_accumulator(), integral_accumulator(nullptr),
      error_derivative_length(0), st_error_derivative(), error_derivative(nullptr),
      closed_loop_target_length(0), st_closed_loop_target(), closed_loop_target(nullptr),
      p_term_length(0), st_p_term(), p_term(nullptr),
      i_term_length(0), st_i_term(), i_term(nullptr),
      d_term_length(0), st_d_term(), d_term(nullptr),
      f_term_length(0), st_f_term(), f_term(nullptr),
      active_trajectory_position_length(0), st_active_trajectory_position(), active_trajectory_position(nullptr),
      active_trajectory_velocity_length(0), st_active_trajectory_velocity(), active_trajectory_velocity(nullptr),
      active_trajectory_arbitrary_feed_forward_length(0), st_active_trajectory_arbitrary_feed_forward(), active_trajectory_arbitrary_feed_forward(nullptr),
      active_trajectory_heading_length(0), st_active_trajectory_heading(), active_trajectory_heading(nullptr),
      forward_limit_switch_length(0), st_forward_limit_switch(), forward_limit_switch(nullptr),
      reverse_limit_switch_length(0), st_reverse_limit_switch(), reverse_limit_switch(nullptr),
      forward_softlimit_length(0), st_forward_softlimit(), forward_softlimit(nullptr),
      reverse_softlimit_length(0), st_reverse_softlimit(), reverse_softlimit(nullptr),
      motion_profile_top_level_buffer_count_length(0), st_motion_profile_top_level_buffer_count(), motion_profile_top_level_buffer_count(nullptr),
      motion_profile_top_level_buffer_full_length(0), st_motion_profile_top_level_buffer_full(), motion_profile_top_level_buffer_full(nullptr),
      motion_profile_status_top_buffer_rem_length(0), st_motion_profile_status_top_buffer_rem(), motion_profile_status_top_buffer_rem(nullptr),
      motion_profile_status_top_buffer_cnt_length(0), st_motion_profile_status_top_buffer_cnt(), motion_profile_status_top_buffer_cnt(nullptr),
      motion_profile_status_btm_buffer_cnt_length(0), st_motion_profile_status_btm_buffer_cnt(), motion_profile_status_btm_buffer_cnt(nullptr),
      motion_profile_status_has_underrun_length(0), st_motion_profile_status_has_underrun(), motion_profile_status_has_underrun(nullptr),
      motion_profile_status_is_underrun_length(0), st_motion_profile_status_is_underrun(), motion_profile_status_is_underrun(nullptr),
      motion_profile_status_active_point_valid_length(0), st_motion_profile_status_active_point_valid(), motion_profile_status_active_point_valid(nullptr),
      motion_profile_status_is_last_length(0), st_motion_profile_status_is_last(), motion_profile_status_is_last(nullptr),
      motion_profile_status_profile_slot_select0_length(0), st_motion_profile_status_profile_slot_select0(), motion_profile_status_profile_slot_select0(nullptr),
      motion_profile_status_profile_slot_select1_length(0), st_motion_profile_status_profile_slot_select1(), motion_profile_status_profile_slot_select1(nullptr),
      motion_profile_status_output_enable_length(0), st_motion_profile_status_output_enable(), motion_profile_status_output_enable(nullptr),
      motion_profile_time_dur_ms_length(0), st_motion_profile_time_dur_ms(), motion_profile_time_dur_ms(nullptr),
      faults_length(0), st_faults(), faults(nullptr),
      sticky_faults_length(0), st_sticky_faults(), sticky_faults(nullptr)
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
      *(outbuffer + offset + 0) = (this->talon_mode_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->talon_mode_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->talon_mode_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->talon_mode_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->talon_mode_length);
      for( uint32_t i = 0; i < talon_mode_length; i++){
      uint32_t length_talon_modei = strlen(this->talon_mode[i]);
      varToArr(outbuffer + offset, length_talon_modei);
      offset += 4;
      memcpy(outbuffer + offset, this->talon_mode[i], length_talon_modei);
      offset += length_talon_modei;
      }
      *(outbuffer + offset + 0) = (this->demand1_type_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->demand1_type_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->demand1_type_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->demand1_type_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->demand1_type_length);
      for( uint32_t i = 0; i < demand1_type_length; i++){
      uint32_t length_demand1_typei = strlen(this->demand1_type[i]);
      varToArr(outbuffer + offset, length_demand1_typei);
      offset += 4;
      memcpy(outbuffer + offset, this->demand1_type[i], length_demand1_typei);
      offset += length_demand1_typei;
      }
      *(outbuffer + offset + 0) = (this->demand1_value_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->demand1_value_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->demand1_value_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->demand1_value_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->demand1_value_length);
      for( uint32_t i = 0; i < demand1_value_length; i++){
      union {
        double real;
        uint64_t base;
      } u_demand1_valuei;
      u_demand1_valuei.real = this->demand1_value[i];
      *(outbuffer + offset + 0) = (u_demand1_valuei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_demand1_valuei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_demand1_valuei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_demand1_valuei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_demand1_valuei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_demand1_valuei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_demand1_valuei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_demand1_valuei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->demand1_value[i]);
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
      *(outbuffer + offset + 0) = (this->speed_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->speed_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->speed_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->speed_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->speed_length);
      for( uint32_t i = 0; i < speed_length; i++){
      union {
        double real;
        uint64_t base;
      } u_speedi;
      u_speedi.real = this->speed[i];
      *(outbuffer + offset + 0) = (u_speedi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_speedi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_speedi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_speedi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_speedi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_speedi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_speedi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_speedi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->speed[i]);
      }
      *(outbuffer + offset + 0) = (this->output_voltage_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->output_voltage_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->output_voltage_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->output_voltage_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->output_voltage_length);
      for( uint32_t i = 0; i < output_voltage_length; i++){
      union {
        double real;
        uint64_t base;
      } u_output_voltagei;
      u_output_voltagei.real = this->output_voltage[i];
      *(outbuffer + offset + 0) = (u_output_voltagei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_output_voltagei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_output_voltagei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_output_voltagei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_output_voltagei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_output_voltagei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_output_voltagei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_output_voltagei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->output_voltage[i]);
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
      *(outbuffer + offset + 0) = (this->motor_output_percent_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motor_output_percent_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motor_output_percent_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motor_output_percent_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motor_output_percent_length);
      for( uint32_t i = 0; i < motor_output_percent_length; i++){
      union {
        double real;
        uint64_t base;
      } u_motor_output_percenti;
      u_motor_output_percenti.real = this->motor_output_percent[i];
      *(outbuffer + offset + 0) = (u_motor_output_percenti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motor_output_percenti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motor_output_percenti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motor_output_percenti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_motor_output_percenti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_motor_output_percenti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_motor_output_percenti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_motor_output_percenti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->motor_output_percent[i]);
      }
      *(outbuffer + offset + 0) = (this->temperature_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->temperature_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->temperature_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->temperature_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->temperature_length);
      for( uint32_t i = 0; i < temperature_length; i++){
      union {
        double real;
        uint64_t base;
      } u_temperaturei;
      u_temperaturei.real = this->temperature[i];
      *(outbuffer + offset + 0) = (u_temperaturei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_temperaturei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_temperaturei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_temperaturei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_temperaturei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_temperaturei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_temperaturei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_temperaturei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->temperature[i]);
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
      *(outbuffer + offset + 0) = (this->closed_loop_error_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->closed_loop_error_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->closed_loop_error_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->closed_loop_error_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->closed_loop_error_length);
      for( uint32_t i = 0; i < closed_loop_error_length; i++){
      union {
        double real;
        uint64_t base;
      } u_closed_loop_errori;
      u_closed_loop_errori.real = this->closed_loop_error[i];
      *(outbuffer + offset + 0) = (u_closed_loop_errori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_closed_loop_errori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_closed_loop_errori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_closed_loop_errori.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_closed_loop_errori.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_closed_loop_errori.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_closed_loop_errori.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_closed_loop_errori.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->closed_loop_error[i]);
      }
      *(outbuffer + offset + 0) = (this->integral_accumulator_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->integral_accumulator_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->integral_accumulator_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->integral_accumulator_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->integral_accumulator_length);
      for( uint32_t i = 0; i < integral_accumulator_length; i++){
      union {
        double real;
        uint64_t base;
      } u_integral_accumulatori;
      u_integral_accumulatori.real = this->integral_accumulator[i];
      *(outbuffer + offset + 0) = (u_integral_accumulatori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_integral_accumulatori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_integral_accumulatori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_integral_accumulatori.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_integral_accumulatori.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_integral_accumulatori.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_integral_accumulatori.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_integral_accumulatori.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->integral_accumulator[i]);
      }
      *(outbuffer + offset + 0) = (this->error_derivative_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->error_derivative_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->error_derivative_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->error_derivative_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->error_derivative_length);
      for( uint32_t i = 0; i < error_derivative_length; i++){
      union {
        double real;
        uint64_t base;
      } u_error_derivativei;
      u_error_derivativei.real = this->error_derivative[i];
      *(outbuffer + offset + 0) = (u_error_derivativei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_error_derivativei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_error_derivativei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_error_derivativei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_error_derivativei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_error_derivativei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_error_derivativei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_error_derivativei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->error_derivative[i]);
      }
      *(outbuffer + offset + 0) = (this->closed_loop_target_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->closed_loop_target_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->closed_loop_target_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->closed_loop_target_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->closed_loop_target_length);
      for( uint32_t i = 0; i < closed_loop_target_length; i++){
      union {
        double real;
        uint64_t base;
      } u_closed_loop_targeti;
      u_closed_loop_targeti.real = this->closed_loop_target[i];
      *(outbuffer + offset + 0) = (u_closed_loop_targeti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_closed_loop_targeti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_closed_loop_targeti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_closed_loop_targeti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_closed_loop_targeti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_closed_loop_targeti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_closed_loop_targeti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_closed_loop_targeti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->closed_loop_target[i]);
      }
      *(outbuffer + offset + 0) = (this->p_term_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->p_term_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->p_term_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->p_term_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->p_term_length);
      for( uint32_t i = 0; i < p_term_length; i++){
      union {
        double real;
        uint64_t base;
      } u_p_termi;
      u_p_termi.real = this->p_term[i];
      *(outbuffer + offset + 0) = (u_p_termi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_p_termi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_p_termi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_p_termi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_p_termi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_p_termi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_p_termi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_p_termi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->p_term[i]);
      }
      *(outbuffer + offset + 0) = (this->i_term_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->i_term_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->i_term_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->i_term_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->i_term_length);
      for( uint32_t i = 0; i < i_term_length; i++){
      union {
        double real;
        uint64_t base;
      } u_i_termi;
      u_i_termi.real = this->i_term[i];
      *(outbuffer + offset + 0) = (u_i_termi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_i_termi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_i_termi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_i_termi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_i_termi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_i_termi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_i_termi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_i_termi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->i_term[i]);
      }
      *(outbuffer + offset + 0) = (this->d_term_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->d_term_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->d_term_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->d_term_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->d_term_length);
      for( uint32_t i = 0; i < d_term_length; i++){
      union {
        double real;
        uint64_t base;
      } u_d_termi;
      u_d_termi.real = this->d_term[i];
      *(outbuffer + offset + 0) = (u_d_termi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_d_termi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_d_termi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_d_termi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_d_termi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_d_termi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_d_termi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_d_termi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->d_term[i]);
      }
      *(outbuffer + offset + 0) = (this->f_term_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->f_term_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->f_term_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->f_term_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->f_term_length);
      for( uint32_t i = 0; i < f_term_length; i++){
      union {
        double real;
        uint64_t base;
      } u_f_termi;
      u_f_termi.real = this->f_term[i];
      *(outbuffer + offset + 0) = (u_f_termi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_f_termi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_f_termi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_f_termi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_f_termi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_f_termi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_f_termi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_f_termi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->f_term[i]);
      }
      *(outbuffer + offset + 0) = (this->active_trajectory_position_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->active_trajectory_position_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->active_trajectory_position_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->active_trajectory_position_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->active_trajectory_position_length);
      for( uint32_t i = 0; i < active_trajectory_position_length; i++){
      union {
        double real;
        uint64_t base;
      } u_active_trajectory_positioni;
      u_active_trajectory_positioni.real = this->active_trajectory_position[i];
      *(outbuffer + offset + 0) = (u_active_trajectory_positioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_active_trajectory_positioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_active_trajectory_positioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_active_trajectory_positioni.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_active_trajectory_positioni.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_active_trajectory_positioni.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_active_trajectory_positioni.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_active_trajectory_positioni.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->active_trajectory_position[i]);
      }
      *(outbuffer + offset + 0) = (this->active_trajectory_velocity_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->active_trajectory_velocity_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->active_trajectory_velocity_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->active_trajectory_velocity_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->active_trajectory_velocity_length);
      for( uint32_t i = 0; i < active_trajectory_velocity_length; i++){
      union {
        double real;
        uint64_t base;
      } u_active_trajectory_velocityi;
      u_active_trajectory_velocityi.real = this->active_trajectory_velocity[i];
      *(outbuffer + offset + 0) = (u_active_trajectory_velocityi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_active_trajectory_velocityi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_active_trajectory_velocityi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_active_trajectory_velocityi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_active_trajectory_velocityi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_active_trajectory_velocityi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_active_trajectory_velocityi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_active_trajectory_velocityi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->active_trajectory_velocity[i]);
      }
      *(outbuffer + offset + 0) = (this->active_trajectory_arbitrary_feed_forward_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->active_trajectory_arbitrary_feed_forward_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->active_trajectory_arbitrary_feed_forward_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->active_trajectory_arbitrary_feed_forward_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->active_trajectory_arbitrary_feed_forward_length);
      for( uint32_t i = 0; i < active_trajectory_arbitrary_feed_forward_length; i++){
      union {
        double real;
        uint64_t base;
      } u_active_trajectory_arbitrary_feed_forwardi;
      u_active_trajectory_arbitrary_feed_forwardi.real = this->active_trajectory_arbitrary_feed_forward[i];
      *(outbuffer + offset + 0) = (u_active_trajectory_arbitrary_feed_forwardi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_active_trajectory_arbitrary_feed_forwardi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_active_trajectory_arbitrary_feed_forwardi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_active_trajectory_arbitrary_feed_forwardi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_active_trajectory_arbitrary_feed_forwardi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_active_trajectory_arbitrary_feed_forwardi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_active_trajectory_arbitrary_feed_forwardi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_active_trajectory_arbitrary_feed_forwardi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->active_trajectory_arbitrary_feed_forward[i]);
      }
      *(outbuffer + offset + 0) = (this->active_trajectory_heading_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->active_trajectory_heading_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->active_trajectory_heading_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->active_trajectory_heading_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->active_trajectory_heading_length);
      for( uint32_t i = 0; i < active_trajectory_heading_length; i++){
      union {
        double real;
        uint64_t base;
      } u_active_trajectory_headingi;
      u_active_trajectory_headingi.real = this->active_trajectory_heading[i];
      *(outbuffer + offset + 0) = (u_active_trajectory_headingi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_active_trajectory_headingi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_active_trajectory_headingi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_active_trajectory_headingi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_active_trajectory_headingi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_active_trajectory_headingi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_active_trajectory_headingi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_active_trajectory_headingi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->active_trajectory_heading[i]);
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
        bool real;
        uint8_t base;
      } u_forward_softlimiti;
      u_forward_softlimiti.real = this->forward_softlimit[i];
      *(outbuffer + offset + 0) = (u_forward_softlimiti.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->forward_softlimit[i]);
      }
      *(outbuffer + offset + 0) = (this->reverse_softlimit_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->reverse_softlimit_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->reverse_softlimit_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->reverse_softlimit_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->reverse_softlimit_length);
      for( uint32_t i = 0; i < reverse_softlimit_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_reverse_softlimiti;
      u_reverse_softlimiti.real = this->reverse_softlimit[i];
      *(outbuffer + offset + 0) = (u_reverse_softlimiti.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->reverse_softlimit[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_profile_top_level_buffer_count_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_top_level_buffer_count_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_top_level_buffer_count_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_top_level_buffer_count_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_top_level_buffer_count_length);
      for( uint32_t i = 0; i < motion_profile_top_level_buffer_count_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_motion_profile_top_level_buffer_counti;
      u_motion_profile_top_level_buffer_counti.real = this->motion_profile_top_level_buffer_count[i];
      *(outbuffer + offset + 0) = (u_motion_profile_top_level_buffer_counti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motion_profile_top_level_buffer_counti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motion_profile_top_level_buffer_counti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motion_profile_top_level_buffer_counti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_top_level_buffer_count[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_profile_top_level_buffer_full_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_top_level_buffer_full_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_top_level_buffer_full_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_top_level_buffer_full_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_top_level_buffer_full_length);
      for( uint32_t i = 0; i < motion_profile_top_level_buffer_full_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_motion_profile_top_level_buffer_fulli;
      u_motion_profile_top_level_buffer_fulli.real = this->motion_profile_top_level_buffer_full[i];
      *(outbuffer + offset + 0) = (u_motion_profile_top_level_buffer_fulli.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->motion_profile_top_level_buffer_full[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_profile_status_top_buffer_rem_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_status_top_buffer_rem_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_status_top_buffer_rem_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_status_top_buffer_rem_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_top_buffer_rem_length);
      for( uint32_t i = 0; i < motion_profile_status_top_buffer_rem_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_motion_profile_status_top_buffer_remi;
      u_motion_profile_status_top_buffer_remi.real = this->motion_profile_status_top_buffer_rem[i];
      *(outbuffer + offset + 0) = (u_motion_profile_status_top_buffer_remi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motion_profile_status_top_buffer_remi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motion_profile_status_top_buffer_remi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motion_profile_status_top_buffer_remi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_top_buffer_rem[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_profile_status_top_buffer_cnt_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_status_top_buffer_cnt_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_status_top_buffer_cnt_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_status_top_buffer_cnt_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_top_buffer_cnt_length);
      for( uint32_t i = 0; i < motion_profile_status_top_buffer_cnt_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_motion_profile_status_top_buffer_cnti;
      u_motion_profile_status_top_buffer_cnti.real = this->motion_profile_status_top_buffer_cnt[i];
      *(outbuffer + offset + 0) = (u_motion_profile_status_top_buffer_cnti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motion_profile_status_top_buffer_cnti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motion_profile_status_top_buffer_cnti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motion_profile_status_top_buffer_cnti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_top_buffer_cnt[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_profile_status_btm_buffer_cnt_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_status_btm_buffer_cnt_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_status_btm_buffer_cnt_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_status_btm_buffer_cnt_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_btm_buffer_cnt_length);
      for( uint32_t i = 0; i < motion_profile_status_btm_buffer_cnt_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_motion_profile_status_btm_buffer_cnti;
      u_motion_profile_status_btm_buffer_cnti.real = this->motion_profile_status_btm_buffer_cnt[i];
      *(outbuffer + offset + 0) = (u_motion_profile_status_btm_buffer_cnti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motion_profile_status_btm_buffer_cnti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motion_profile_status_btm_buffer_cnti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motion_profile_status_btm_buffer_cnti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_btm_buffer_cnt[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_profile_status_has_underrun_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_status_has_underrun_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_status_has_underrun_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_status_has_underrun_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_has_underrun_length);
      for( uint32_t i = 0; i < motion_profile_status_has_underrun_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_motion_profile_status_has_underruni;
      u_motion_profile_status_has_underruni.real = this->motion_profile_status_has_underrun[i];
      *(outbuffer + offset + 0) = (u_motion_profile_status_has_underruni.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->motion_profile_status_has_underrun[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_profile_status_is_underrun_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_status_is_underrun_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_status_is_underrun_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_status_is_underrun_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_is_underrun_length);
      for( uint32_t i = 0; i < motion_profile_status_is_underrun_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_motion_profile_status_is_underruni;
      u_motion_profile_status_is_underruni.real = this->motion_profile_status_is_underrun[i];
      *(outbuffer + offset + 0) = (u_motion_profile_status_is_underruni.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->motion_profile_status_is_underrun[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_profile_status_active_point_valid_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_status_active_point_valid_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_status_active_point_valid_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_status_active_point_valid_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_active_point_valid_length);
      for( uint32_t i = 0; i < motion_profile_status_active_point_valid_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_motion_profile_status_active_point_validi;
      u_motion_profile_status_active_point_validi.real = this->motion_profile_status_active_point_valid[i];
      *(outbuffer + offset + 0) = (u_motion_profile_status_active_point_validi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->motion_profile_status_active_point_valid[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_profile_status_is_last_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_status_is_last_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_status_is_last_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_status_is_last_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_is_last_length);
      for( uint32_t i = 0; i < motion_profile_status_is_last_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_motion_profile_status_is_lasti;
      u_motion_profile_status_is_lasti.real = this->motion_profile_status_is_last[i];
      *(outbuffer + offset + 0) = (u_motion_profile_status_is_lasti.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->motion_profile_status_is_last[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_profile_status_profile_slot_select0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_status_profile_slot_select0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_status_profile_slot_select0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_status_profile_slot_select0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_profile_slot_select0_length);
      for( uint32_t i = 0; i < motion_profile_status_profile_slot_select0_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_motion_profile_status_profile_slot_select0i;
      u_motion_profile_status_profile_slot_select0i.real = this->motion_profile_status_profile_slot_select0[i];
      *(outbuffer + offset + 0) = (u_motion_profile_status_profile_slot_select0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motion_profile_status_profile_slot_select0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motion_profile_status_profile_slot_select0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motion_profile_status_profile_slot_select0i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_profile_slot_select0[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_profile_status_profile_slot_select1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_status_profile_slot_select1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_status_profile_slot_select1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_status_profile_slot_select1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_profile_slot_select1_length);
      for( uint32_t i = 0; i < motion_profile_status_profile_slot_select1_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_motion_profile_status_profile_slot_select1i;
      u_motion_profile_status_profile_slot_select1i.real = this->motion_profile_status_profile_slot_select1[i];
      *(outbuffer + offset + 0) = (u_motion_profile_status_profile_slot_select1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motion_profile_status_profile_slot_select1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motion_profile_status_profile_slot_select1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motion_profile_status_profile_slot_select1i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_profile_slot_select1[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_profile_status_output_enable_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_status_output_enable_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_status_output_enable_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_status_output_enable_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_status_output_enable_length);
      for( uint32_t i = 0; i < motion_profile_status_output_enable_length; i++){
      uint32_t length_motion_profile_status_output_enablei = strlen(this->motion_profile_status_output_enable[i]);
      varToArr(outbuffer + offset, length_motion_profile_status_output_enablei);
      offset += 4;
      memcpy(outbuffer + offset, this->motion_profile_status_output_enable[i], length_motion_profile_status_output_enablei);
      offset += length_motion_profile_status_output_enablei;
      }
      *(outbuffer + offset + 0) = (this->motion_profile_time_dur_ms_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_time_dur_ms_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_time_dur_ms_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_time_dur_ms_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_time_dur_ms_length);
      for( uint32_t i = 0; i < motion_profile_time_dur_ms_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_motion_profile_time_dur_msi;
      u_motion_profile_time_dur_msi.real = this->motion_profile_time_dur_ms[i];
      *(outbuffer + offset + 0) = (u_motion_profile_time_dur_msi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motion_profile_time_dur_msi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motion_profile_time_dur_msi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motion_profile_time_dur_msi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_time_dur_ms[i]);
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
      uint32_t talon_mode_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      talon_mode_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      talon_mode_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      talon_mode_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->talon_mode_length);
      if(talon_mode_lengthT > talon_mode_length)
        this->talon_mode = (char**)realloc(this->talon_mode, talon_mode_lengthT * sizeof(char*));
      talon_mode_length = talon_mode_lengthT;
      for( uint32_t i = 0; i < talon_mode_length; i++){
      uint32_t length_st_talon_mode;
      arrToVar(length_st_talon_mode, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_talon_mode; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_talon_mode-1]=0;
      this->st_talon_mode = (char *)(inbuffer + offset-1);
      offset += length_st_talon_mode;
        memcpy( &(this->talon_mode[i]), &(this->st_talon_mode), sizeof(char*));
      }
      uint32_t demand1_type_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      demand1_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      demand1_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      demand1_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->demand1_type_length);
      if(demand1_type_lengthT > demand1_type_length)
        this->demand1_type = (char**)realloc(this->demand1_type, demand1_type_lengthT * sizeof(char*));
      demand1_type_length = demand1_type_lengthT;
      for( uint32_t i = 0; i < demand1_type_length; i++){
      uint32_t length_st_demand1_type;
      arrToVar(length_st_demand1_type, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_demand1_type; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_demand1_type-1]=0;
      this->st_demand1_type = (char *)(inbuffer + offset-1);
      offset += length_st_demand1_type;
        memcpy( &(this->demand1_type[i]), &(this->st_demand1_type), sizeof(char*));
      }
      uint32_t demand1_value_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      demand1_value_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      demand1_value_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      demand1_value_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->demand1_value_length);
      if(demand1_value_lengthT > demand1_value_length)
        this->demand1_value = (double*)realloc(this->demand1_value, demand1_value_lengthT * sizeof(double));
      demand1_value_length = demand1_value_lengthT;
      for( uint32_t i = 0; i < demand1_value_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_demand1_value;
      u_st_demand1_value.base = 0;
      u_st_demand1_value.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_demand1_value.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_demand1_value.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_demand1_value.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_demand1_value.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_demand1_value.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_demand1_value.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_demand1_value.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_demand1_value = u_st_demand1_value.real;
      offset += sizeof(this->st_demand1_value);
        memcpy( &(this->demand1_value[i]), &(this->st_demand1_value), sizeof(double));
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
      uint32_t speed_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      speed_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      speed_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      speed_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->speed_length);
      if(speed_lengthT > speed_length)
        this->speed = (double*)realloc(this->speed, speed_lengthT * sizeof(double));
      speed_length = speed_lengthT;
      for( uint32_t i = 0; i < speed_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_speed;
      u_st_speed.base = 0;
      u_st_speed.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_speed.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_speed.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_speed.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_speed.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_speed.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_speed.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_speed.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_speed = u_st_speed.real;
      offset += sizeof(this->st_speed);
        memcpy( &(this->speed[i]), &(this->st_speed), sizeof(double));
      }
      uint32_t output_voltage_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      output_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      output_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      output_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->output_voltage_length);
      if(output_voltage_lengthT > output_voltage_length)
        this->output_voltage = (double*)realloc(this->output_voltage, output_voltage_lengthT * sizeof(double));
      output_voltage_length = output_voltage_lengthT;
      for( uint32_t i = 0; i < output_voltage_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_output_voltage;
      u_st_output_voltage.base = 0;
      u_st_output_voltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_output_voltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_output_voltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_output_voltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_output_voltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_output_voltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_output_voltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_output_voltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_output_voltage = u_st_output_voltage.real;
      offset += sizeof(this->st_output_voltage);
        memcpy( &(this->output_voltage[i]), &(this->st_output_voltage), sizeof(double));
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
      uint32_t motor_output_percent_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motor_output_percent_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motor_output_percent_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motor_output_percent_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motor_output_percent_length);
      if(motor_output_percent_lengthT > motor_output_percent_length)
        this->motor_output_percent = (double*)realloc(this->motor_output_percent, motor_output_percent_lengthT * sizeof(double));
      motor_output_percent_length = motor_output_percent_lengthT;
      for( uint32_t i = 0; i < motor_output_percent_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_motor_output_percent;
      u_st_motor_output_percent.base = 0;
      u_st_motor_output_percent.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motor_output_percent.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motor_output_percent.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motor_output_percent.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_motor_output_percent.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_motor_output_percent.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_motor_output_percent.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_motor_output_percent.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_motor_output_percent = u_st_motor_output_percent.real;
      offset += sizeof(this->st_motor_output_percent);
        memcpy( &(this->motor_output_percent[i]), &(this->st_motor_output_percent), sizeof(double));
      }
      uint32_t temperature_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      temperature_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      temperature_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      temperature_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->temperature_length);
      if(temperature_lengthT > temperature_length)
        this->temperature = (double*)realloc(this->temperature, temperature_lengthT * sizeof(double));
      temperature_length = temperature_lengthT;
      for( uint32_t i = 0; i < temperature_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_temperature;
      u_st_temperature.base = 0;
      u_st_temperature.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_temperature.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_temperature.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_temperature.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_temperature.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_temperature.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_temperature.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_temperature.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_temperature = u_st_temperature.real;
      offset += sizeof(this->st_temperature);
        memcpy( &(this->temperature[i]), &(this->st_temperature), sizeof(double));
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
      uint32_t closed_loop_error_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      closed_loop_error_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      closed_loop_error_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      closed_loop_error_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->closed_loop_error_length);
      if(closed_loop_error_lengthT > closed_loop_error_length)
        this->closed_loop_error = (double*)realloc(this->closed_loop_error, closed_loop_error_lengthT * sizeof(double));
      closed_loop_error_length = closed_loop_error_lengthT;
      for( uint32_t i = 0; i < closed_loop_error_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_closed_loop_error;
      u_st_closed_loop_error.base = 0;
      u_st_closed_loop_error.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_closed_loop_error.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_closed_loop_error.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_closed_loop_error.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_closed_loop_error.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_closed_loop_error.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_closed_loop_error.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_closed_loop_error.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_closed_loop_error = u_st_closed_loop_error.real;
      offset += sizeof(this->st_closed_loop_error);
        memcpy( &(this->closed_loop_error[i]), &(this->st_closed_loop_error), sizeof(double));
      }
      uint32_t integral_accumulator_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      integral_accumulator_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      integral_accumulator_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      integral_accumulator_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->integral_accumulator_length);
      if(integral_accumulator_lengthT > integral_accumulator_length)
        this->integral_accumulator = (double*)realloc(this->integral_accumulator, integral_accumulator_lengthT * sizeof(double));
      integral_accumulator_length = integral_accumulator_lengthT;
      for( uint32_t i = 0; i < integral_accumulator_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_integral_accumulator;
      u_st_integral_accumulator.base = 0;
      u_st_integral_accumulator.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_integral_accumulator.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_integral_accumulator.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_integral_accumulator.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_integral_accumulator.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_integral_accumulator.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_integral_accumulator.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_integral_accumulator.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_integral_accumulator = u_st_integral_accumulator.real;
      offset += sizeof(this->st_integral_accumulator);
        memcpy( &(this->integral_accumulator[i]), &(this->st_integral_accumulator), sizeof(double));
      }
      uint32_t error_derivative_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      error_derivative_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      error_derivative_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      error_derivative_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->error_derivative_length);
      if(error_derivative_lengthT > error_derivative_length)
        this->error_derivative = (double*)realloc(this->error_derivative, error_derivative_lengthT * sizeof(double));
      error_derivative_length = error_derivative_lengthT;
      for( uint32_t i = 0; i < error_derivative_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_error_derivative;
      u_st_error_derivative.base = 0;
      u_st_error_derivative.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_error_derivative.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_error_derivative.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_error_derivative.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_error_derivative.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_error_derivative.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_error_derivative.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_error_derivative.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_error_derivative = u_st_error_derivative.real;
      offset += sizeof(this->st_error_derivative);
        memcpy( &(this->error_derivative[i]), &(this->st_error_derivative), sizeof(double));
      }
      uint32_t closed_loop_target_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      closed_loop_target_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      closed_loop_target_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      closed_loop_target_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->closed_loop_target_length);
      if(closed_loop_target_lengthT > closed_loop_target_length)
        this->closed_loop_target = (double*)realloc(this->closed_loop_target, closed_loop_target_lengthT * sizeof(double));
      closed_loop_target_length = closed_loop_target_lengthT;
      for( uint32_t i = 0; i < closed_loop_target_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_closed_loop_target;
      u_st_closed_loop_target.base = 0;
      u_st_closed_loop_target.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_closed_loop_target.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_closed_loop_target.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_closed_loop_target.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_closed_loop_target.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_closed_loop_target.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_closed_loop_target.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_closed_loop_target.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_closed_loop_target = u_st_closed_loop_target.real;
      offset += sizeof(this->st_closed_loop_target);
        memcpy( &(this->closed_loop_target[i]), &(this->st_closed_loop_target), sizeof(double));
      }
      uint32_t p_term_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      p_term_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      p_term_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      p_term_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->p_term_length);
      if(p_term_lengthT > p_term_length)
        this->p_term = (double*)realloc(this->p_term, p_term_lengthT * sizeof(double));
      p_term_length = p_term_lengthT;
      for( uint32_t i = 0; i < p_term_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_p_term;
      u_st_p_term.base = 0;
      u_st_p_term.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_p_term.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_p_term.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_p_term.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_p_term.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_p_term.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_p_term.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_p_term.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_p_term = u_st_p_term.real;
      offset += sizeof(this->st_p_term);
        memcpy( &(this->p_term[i]), &(this->st_p_term), sizeof(double));
      }
      uint32_t i_term_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      i_term_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      i_term_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      i_term_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->i_term_length);
      if(i_term_lengthT > i_term_length)
        this->i_term = (double*)realloc(this->i_term, i_term_lengthT * sizeof(double));
      i_term_length = i_term_lengthT;
      for( uint32_t i = 0; i < i_term_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_i_term;
      u_st_i_term.base = 0;
      u_st_i_term.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_i_term.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_i_term.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_i_term.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_i_term.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_i_term.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_i_term.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_i_term.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_i_term = u_st_i_term.real;
      offset += sizeof(this->st_i_term);
        memcpy( &(this->i_term[i]), &(this->st_i_term), sizeof(double));
      }
      uint32_t d_term_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      d_term_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      d_term_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      d_term_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->d_term_length);
      if(d_term_lengthT > d_term_length)
        this->d_term = (double*)realloc(this->d_term, d_term_lengthT * sizeof(double));
      d_term_length = d_term_lengthT;
      for( uint32_t i = 0; i < d_term_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_d_term;
      u_st_d_term.base = 0;
      u_st_d_term.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_d_term.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_d_term.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_d_term.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_d_term.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_d_term.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_d_term.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_d_term.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_d_term = u_st_d_term.real;
      offset += sizeof(this->st_d_term);
        memcpy( &(this->d_term[i]), &(this->st_d_term), sizeof(double));
      }
      uint32_t f_term_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      f_term_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      f_term_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      f_term_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->f_term_length);
      if(f_term_lengthT > f_term_length)
        this->f_term = (double*)realloc(this->f_term, f_term_lengthT * sizeof(double));
      f_term_length = f_term_lengthT;
      for( uint32_t i = 0; i < f_term_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_f_term;
      u_st_f_term.base = 0;
      u_st_f_term.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_f_term.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_f_term.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_f_term.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_f_term.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_f_term.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_f_term.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_f_term.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_f_term = u_st_f_term.real;
      offset += sizeof(this->st_f_term);
        memcpy( &(this->f_term[i]), &(this->st_f_term), sizeof(double));
      }
      uint32_t active_trajectory_position_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      active_trajectory_position_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      active_trajectory_position_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      active_trajectory_position_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->active_trajectory_position_length);
      if(active_trajectory_position_lengthT > active_trajectory_position_length)
        this->active_trajectory_position = (double*)realloc(this->active_trajectory_position, active_trajectory_position_lengthT * sizeof(double));
      active_trajectory_position_length = active_trajectory_position_lengthT;
      for( uint32_t i = 0; i < active_trajectory_position_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_active_trajectory_position;
      u_st_active_trajectory_position.base = 0;
      u_st_active_trajectory_position.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_active_trajectory_position.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_active_trajectory_position.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_active_trajectory_position.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_active_trajectory_position.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_active_trajectory_position.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_active_trajectory_position.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_active_trajectory_position.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_active_trajectory_position = u_st_active_trajectory_position.real;
      offset += sizeof(this->st_active_trajectory_position);
        memcpy( &(this->active_trajectory_position[i]), &(this->st_active_trajectory_position), sizeof(double));
      }
      uint32_t active_trajectory_velocity_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      active_trajectory_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      active_trajectory_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      active_trajectory_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->active_trajectory_velocity_length);
      if(active_trajectory_velocity_lengthT > active_trajectory_velocity_length)
        this->active_trajectory_velocity = (double*)realloc(this->active_trajectory_velocity, active_trajectory_velocity_lengthT * sizeof(double));
      active_trajectory_velocity_length = active_trajectory_velocity_lengthT;
      for( uint32_t i = 0; i < active_trajectory_velocity_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_active_trajectory_velocity;
      u_st_active_trajectory_velocity.base = 0;
      u_st_active_trajectory_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_active_trajectory_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_active_trajectory_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_active_trajectory_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_active_trajectory_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_active_trajectory_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_active_trajectory_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_active_trajectory_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_active_trajectory_velocity = u_st_active_trajectory_velocity.real;
      offset += sizeof(this->st_active_trajectory_velocity);
        memcpy( &(this->active_trajectory_velocity[i]), &(this->st_active_trajectory_velocity), sizeof(double));
      }
      uint32_t active_trajectory_arbitrary_feed_forward_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      active_trajectory_arbitrary_feed_forward_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      active_trajectory_arbitrary_feed_forward_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      active_trajectory_arbitrary_feed_forward_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->active_trajectory_arbitrary_feed_forward_length);
      if(active_trajectory_arbitrary_feed_forward_lengthT > active_trajectory_arbitrary_feed_forward_length)
        this->active_trajectory_arbitrary_feed_forward = (double*)realloc(this->active_trajectory_arbitrary_feed_forward, active_trajectory_arbitrary_feed_forward_lengthT * sizeof(double));
      active_trajectory_arbitrary_feed_forward_length = active_trajectory_arbitrary_feed_forward_lengthT;
      for( uint32_t i = 0; i < active_trajectory_arbitrary_feed_forward_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_active_trajectory_arbitrary_feed_forward;
      u_st_active_trajectory_arbitrary_feed_forward.base = 0;
      u_st_active_trajectory_arbitrary_feed_forward.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_active_trajectory_arbitrary_feed_forward.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_active_trajectory_arbitrary_feed_forward.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_active_trajectory_arbitrary_feed_forward.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_active_trajectory_arbitrary_feed_forward.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_active_trajectory_arbitrary_feed_forward.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_active_trajectory_arbitrary_feed_forward.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_active_trajectory_arbitrary_feed_forward.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_active_trajectory_arbitrary_feed_forward = u_st_active_trajectory_arbitrary_feed_forward.real;
      offset += sizeof(this->st_active_trajectory_arbitrary_feed_forward);
        memcpy( &(this->active_trajectory_arbitrary_feed_forward[i]), &(this->st_active_trajectory_arbitrary_feed_forward), sizeof(double));
      }
      uint32_t active_trajectory_heading_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      active_trajectory_heading_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      active_trajectory_heading_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      active_trajectory_heading_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->active_trajectory_heading_length);
      if(active_trajectory_heading_lengthT > active_trajectory_heading_length)
        this->active_trajectory_heading = (double*)realloc(this->active_trajectory_heading, active_trajectory_heading_lengthT * sizeof(double));
      active_trajectory_heading_length = active_trajectory_heading_lengthT;
      for( uint32_t i = 0; i < active_trajectory_heading_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_active_trajectory_heading;
      u_st_active_trajectory_heading.base = 0;
      u_st_active_trajectory_heading.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_active_trajectory_heading.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_active_trajectory_heading.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_active_trajectory_heading.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_active_trajectory_heading.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_active_trajectory_heading.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_active_trajectory_heading.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_active_trajectory_heading.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_active_trajectory_heading = u_st_active_trajectory_heading.real;
      offset += sizeof(this->st_active_trajectory_heading);
        memcpy( &(this->active_trajectory_heading[i]), &(this->st_active_trajectory_heading), sizeof(double));
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
        this->forward_softlimit = (bool*)realloc(this->forward_softlimit, forward_softlimit_lengthT * sizeof(bool));
      forward_softlimit_length = forward_softlimit_lengthT;
      for( uint32_t i = 0; i < forward_softlimit_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_forward_softlimit;
      u_st_forward_softlimit.base = 0;
      u_st_forward_softlimit.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_forward_softlimit = u_st_forward_softlimit.real;
      offset += sizeof(this->st_forward_softlimit);
        memcpy( &(this->forward_softlimit[i]), &(this->st_forward_softlimit), sizeof(bool));
      }
      uint32_t reverse_softlimit_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      reverse_softlimit_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      reverse_softlimit_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      reverse_softlimit_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->reverse_softlimit_length);
      if(reverse_softlimit_lengthT > reverse_softlimit_length)
        this->reverse_softlimit = (bool*)realloc(this->reverse_softlimit, reverse_softlimit_lengthT * sizeof(bool));
      reverse_softlimit_length = reverse_softlimit_lengthT;
      for( uint32_t i = 0; i < reverse_softlimit_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_reverse_softlimit;
      u_st_reverse_softlimit.base = 0;
      u_st_reverse_softlimit.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_reverse_softlimit = u_st_reverse_softlimit.real;
      offset += sizeof(this->st_reverse_softlimit);
        memcpy( &(this->reverse_softlimit[i]), &(this->st_reverse_softlimit), sizeof(bool));
      }
      uint32_t motion_profile_top_level_buffer_count_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_top_level_buffer_count_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_top_level_buffer_count_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_top_level_buffer_count_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_top_level_buffer_count_length);
      if(motion_profile_top_level_buffer_count_lengthT > motion_profile_top_level_buffer_count_length)
        this->motion_profile_top_level_buffer_count = (int32_t*)realloc(this->motion_profile_top_level_buffer_count, motion_profile_top_level_buffer_count_lengthT * sizeof(int32_t));
      motion_profile_top_level_buffer_count_length = motion_profile_top_level_buffer_count_lengthT;
      for( uint32_t i = 0; i < motion_profile_top_level_buffer_count_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_motion_profile_top_level_buffer_count;
      u_st_motion_profile_top_level_buffer_count.base = 0;
      u_st_motion_profile_top_level_buffer_count.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motion_profile_top_level_buffer_count.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motion_profile_top_level_buffer_count.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motion_profile_top_level_buffer_count.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_motion_profile_top_level_buffer_count = u_st_motion_profile_top_level_buffer_count.real;
      offset += sizeof(this->st_motion_profile_top_level_buffer_count);
        memcpy( &(this->motion_profile_top_level_buffer_count[i]), &(this->st_motion_profile_top_level_buffer_count), sizeof(int32_t));
      }
      uint32_t motion_profile_top_level_buffer_full_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_top_level_buffer_full_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_top_level_buffer_full_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_top_level_buffer_full_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_top_level_buffer_full_length);
      if(motion_profile_top_level_buffer_full_lengthT > motion_profile_top_level_buffer_full_length)
        this->motion_profile_top_level_buffer_full = (bool*)realloc(this->motion_profile_top_level_buffer_full, motion_profile_top_level_buffer_full_lengthT * sizeof(bool));
      motion_profile_top_level_buffer_full_length = motion_profile_top_level_buffer_full_lengthT;
      for( uint32_t i = 0; i < motion_profile_top_level_buffer_full_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_motion_profile_top_level_buffer_full;
      u_st_motion_profile_top_level_buffer_full.base = 0;
      u_st_motion_profile_top_level_buffer_full.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_motion_profile_top_level_buffer_full = u_st_motion_profile_top_level_buffer_full.real;
      offset += sizeof(this->st_motion_profile_top_level_buffer_full);
        memcpy( &(this->motion_profile_top_level_buffer_full[i]), &(this->st_motion_profile_top_level_buffer_full), sizeof(bool));
      }
      uint32_t motion_profile_status_top_buffer_rem_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_status_top_buffer_rem_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_status_top_buffer_rem_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_status_top_buffer_rem_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_status_top_buffer_rem_length);
      if(motion_profile_status_top_buffer_rem_lengthT > motion_profile_status_top_buffer_rem_length)
        this->motion_profile_status_top_buffer_rem = (int32_t*)realloc(this->motion_profile_status_top_buffer_rem, motion_profile_status_top_buffer_rem_lengthT * sizeof(int32_t));
      motion_profile_status_top_buffer_rem_length = motion_profile_status_top_buffer_rem_lengthT;
      for( uint32_t i = 0; i < motion_profile_status_top_buffer_rem_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_motion_profile_status_top_buffer_rem;
      u_st_motion_profile_status_top_buffer_rem.base = 0;
      u_st_motion_profile_status_top_buffer_rem.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motion_profile_status_top_buffer_rem.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motion_profile_status_top_buffer_rem.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motion_profile_status_top_buffer_rem.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_motion_profile_status_top_buffer_rem = u_st_motion_profile_status_top_buffer_rem.real;
      offset += sizeof(this->st_motion_profile_status_top_buffer_rem);
        memcpy( &(this->motion_profile_status_top_buffer_rem[i]), &(this->st_motion_profile_status_top_buffer_rem), sizeof(int32_t));
      }
      uint32_t motion_profile_status_top_buffer_cnt_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_status_top_buffer_cnt_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_status_top_buffer_cnt_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_status_top_buffer_cnt_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_status_top_buffer_cnt_length);
      if(motion_profile_status_top_buffer_cnt_lengthT > motion_profile_status_top_buffer_cnt_length)
        this->motion_profile_status_top_buffer_cnt = (int32_t*)realloc(this->motion_profile_status_top_buffer_cnt, motion_profile_status_top_buffer_cnt_lengthT * sizeof(int32_t));
      motion_profile_status_top_buffer_cnt_length = motion_profile_status_top_buffer_cnt_lengthT;
      for( uint32_t i = 0; i < motion_profile_status_top_buffer_cnt_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_motion_profile_status_top_buffer_cnt;
      u_st_motion_profile_status_top_buffer_cnt.base = 0;
      u_st_motion_profile_status_top_buffer_cnt.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motion_profile_status_top_buffer_cnt.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motion_profile_status_top_buffer_cnt.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motion_profile_status_top_buffer_cnt.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_motion_profile_status_top_buffer_cnt = u_st_motion_profile_status_top_buffer_cnt.real;
      offset += sizeof(this->st_motion_profile_status_top_buffer_cnt);
        memcpy( &(this->motion_profile_status_top_buffer_cnt[i]), &(this->st_motion_profile_status_top_buffer_cnt), sizeof(int32_t));
      }
      uint32_t motion_profile_status_btm_buffer_cnt_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_status_btm_buffer_cnt_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_status_btm_buffer_cnt_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_status_btm_buffer_cnt_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_status_btm_buffer_cnt_length);
      if(motion_profile_status_btm_buffer_cnt_lengthT > motion_profile_status_btm_buffer_cnt_length)
        this->motion_profile_status_btm_buffer_cnt = (int32_t*)realloc(this->motion_profile_status_btm_buffer_cnt, motion_profile_status_btm_buffer_cnt_lengthT * sizeof(int32_t));
      motion_profile_status_btm_buffer_cnt_length = motion_profile_status_btm_buffer_cnt_lengthT;
      for( uint32_t i = 0; i < motion_profile_status_btm_buffer_cnt_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_motion_profile_status_btm_buffer_cnt;
      u_st_motion_profile_status_btm_buffer_cnt.base = 0;
      u_st_motion_profile_status_btm_buffer_cnt.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motion_profile_status_btm_buffer_cnt.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motion_profile_status_btm_buffer_cnt.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motion_profile_status_btm_buffer_cnt.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_motion_profile_status_btm_buffer_cnt = u_st_motion_profile_status_btm_buffer_cnt.real;
      offset += sizeof(this->st_motion_profile_status_btm_buffer_cnt);
        memcpy( &(this->motion_profile_status_btm_buffer_cnt[i]), &(this->st_motion_profile_status_btm_buffer_cnt), sizeof(int32_t));
      }
      uint32_t motion_profile_status_has_underrun_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_status_has_underrun_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_status_has_underrun_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_status_has_underrun_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_status_has_underrun_length);
      if(motion_profile_status_has_underrun_lengthT > motion_profile_status_has_underrun_length)
        this->motion_profile_status_has_underrun = (bool*)realloc(this->motion_profile_status_has_underrun, motion_profile_status_has_underrun_lengthT * sizeof(bool));
      motion_profile_status_has_underrun_length = motion_profile_status_has_underrun_lengthT;
      for( uint32_t i = 0; i < motion_profile_status_has_underrun_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_motion_profile_status_has_underrun;
      u_st_motion_profile_status_has_underrun.base = 0;
      u_st_motion_profile_status_has_underrun.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_motion_profile_status_has_underrun = u_st_motion_profile_status_has_underrun.real;
      offset += sizeof(this->st_motion_profile_status_has_underrun);
        memcpy( &(this->motion_profile_status_has_underrun[i]), &(this->st_motion_profile_status_has_underrun), sizeof(bool));
      }
      uint32_t motion_profile_status_is_underrun_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_status_is_underrun_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_status_is_underrun_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_status_is_underrun_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_status_is_underrun_length);
      if(motion_profile_status_is_underrun_lengthT > motion_profile_status_is_underrun_length)
        this->motion_profile_status_is_underrun = (bool*)realloc(this->motion_profile_status_is_underrun, motion_profile_status_is_underrun_lengthT * sizeof(bool));
      motion_profile_status_is_underrun_length = motion_profile_status_is_underrun_lengthT;
      for( uint32_t i = 0; i < motion_profile_status_is_underrun_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_motion_profile_status_is_underrun;
      u_st_motion_profile_status_is_underrun.base = 0;
      u_st_motion_profile_status_is_underrun.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_motion_profile_status_is_underrun = u_st_motion_profile_status_is_underrun.real;
      offset += sizeof(this->st_motion_profile_status_is_underrun);
        memcpy( &(this->motion_profile_status_is_underrun[i]), &(this->st_motion_profile_status_is_underrun), sizeof(bool));
      }
      uint32_t motion_profile_status_active_point_valid_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_status_active_point_valid_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_status_active_point_valid_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_status_active_point_valid_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_status_active_point_valid_length);
      if(motion_profile_status_active_point_valid_lengthT > motion_profile_status_active_point_valid_length)
        this->motion_profile_status_active_point_valid = (bool*)realloc(this->motion_profile_status_active_point_valid, motion_profile_status_active_point_valid_lengthT * sizeof(bool));
      motion_profile_status_active_point_valid_length = motion_profile_status_active_point_valid_lengthT;
      for( uint32_t i = 0; i < motion_profile_status_active_point_valid_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_motion_profile_status_active_point_valid;
      u_st_motion_profile_status_active_point_valid.base = 0;
      u_st_motion_profile_status_active_point_valid.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_motion_profile_status_active_point_valid = u_st_motion_profile_status_active_point_valid.real;
      offset += sizeof(this->st_motion_profile_status_active_point_valid);
        memcpy( &(this->motion_profile_status_active_point_valid[i]), &(this->st_motion_profile_status_active_point_valid), sizeof(bool));
      }
      uint32_t motion_profile_status_is_last_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_status_is_last_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_status_is_last_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_status_is_last_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_status_is_last_length);
      if(motion_profile_status_is_last_lengthT > motion_profile_status_is_last_length)
        this->motion_profile_status_is_last = (bool*)realloc(this->motion_profile_status_is_last, motion_profile_status_is_last_lengthT * sizeof(bool));
      motion_profile_status_is_last_length = motion_profile_status_is_last_lengthT;
      for( uint32_t i = 0; i < motion_profile_status_is_last_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_motion_profile_status_is_last;
      u_st_motion_profile_status_is_last.base = 0;
      u_st_motion_profile_status_is_last.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_motion_profile_status_is_last = u_st_motion_profile_status_is_last.real;
      offset += sizeof(this->st_motion_profile_status_is_last);
        memcpy( &(this->motion_profile_status_is_last[i]), &(this->st_motion_profile_status_is_last), sizeof(bool));
      }
      uint32_t motion_profile_status_profile_slot_select0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_status_profile_slot_select0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_status_profile_slot_select0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_status_profile_slot_select0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_status_profile_slot_select0_length);
      if(motion_profile_status_profile_slot_select0_lengthT > motion_profile_status_profile_slot_select0_length)
        this->motion_profile_status_profile_slot_select0 = (int32_t*)realloc(this->motion_profile_status_profile_slot_select0, motion_profile_status_profile_slot_select0_lengthT * sizeof(int32_t));
      motion_profile_status_profile_slot_select0_length = motion_profile_status_profile_slot_select0_lengthT;
      for( uint32_t i = 0; i < motion_profile_status_profile_slot_select0_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_motion_profile_status_profile_slot_select0;
      u_st_motion_profile_status_profile_slot_select0.base = 0;
      u_st_motion_profile_status_profile_slot_select0.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motion_profile_status_profile_slot_select0.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motion_profile_status_profile_slot_select0.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motion_profile_status_profile_slot_select0.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_motion_profile_status_profile_slot_select0 = u_st_motion_profile_status_profile_slot_select0.real;
      offset += sizeof(this->st_motion_profile_status_profile_slot_select0);
        memcpy( &(this->motion_profile_status_profile_slot_select0[i]), &(this->st_motion_profile_status_profile_slot_select0), sizeof(int32_t));
      }
      uint32_t motion_profile_status_profile_slot_select1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_status_profile_slot_select1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_status_profile_slot_select1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_status_profile_slot_select1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_status_profile_slot_select1_length);
      if(motion_profile_status_profile_slot_select1_lengthT > motion_profile_status_profile_slot_select1_length)
        this->motion_profile_status_profile_slot_select1 = (int32_t*)realloc(this->motion_profile_status_profile_slot_select1, motion_profile_status_profile_slot_select1_lengthT * sizeof(int32_t));
      motion_profile_status_profile_slot_select1_length = motion_profile_status_profile_slot_select1_lengthT;
      for( uint32_t i = 0; i < motion_profile_status_profile_slot_select1_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_motion_profile_status_profile_slot_select1;
      u_st_motion_profile_status_profile_slot_select1.base = 0;
      u_st_motion_profile_status_profile_slot_select1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motion_profile_status_profile_slot_select1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motion_profile_status_profile_slot_select1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motion_profile_status_profile_slot_select1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_motion_profile_status_profile_slot_select1 = u_st_motion_profile_status_profile_slot_select1.real;
      offset += sizeof(this->st_motion_profile_status_profile_slot_select1);
        memcpy( &(this->motion_profile_status_profile_slot_select1[i]), &(this->st_motion_profile_status_profile_slot_select1), sizeof(int32_t));
      }
      uint32_t motion_profile_status_output_enable_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_status_output_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_status_output_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_status_output_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_status_output_enable_length);
      if(motion_profile_status_output_enable_lengthT > motion_profile_status_output_enable_length)
        this->motion_profile_status_output_enable = (char**)realloc(this->motion_profile_status_output_enable, motion_profile_status_output_enable_lengthT * sizeof(char*));
      motion_profile_status_output_enable_length = motion_profile_status_output_enable_lengthT;
      for( uint32_t i = 0; i < motion_profile_status_output_enable_length; i++){
      uint32_t length_st_motion_profile_status_output_enable;
      arrToVar(length_st_motion_profile_status_output_enable, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_motion_profile_status_output_enable; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_motion_profile_status_output_enable-1]=0;
      this->st_motion_profile_status_output_enable = (char *)(inbuffer + offset-1);
      offset += length_st_motion_profile_status_output_enable;
        memcpy( &(this->motion_profile_status_output_enable[i]), &(this->st_motion_profile_status_output_enable), sizeof(char*));
      }
      uint32_t motion_profile_time_dur_ms_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_time_dur_ms_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_time_dur_ms_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_time_dur_ms_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_time_dur_ms_length);
      if(motion_profile_time_dur_ms_lengthT > motion_profile_time_dur_ms_length)
        this->motion_profile_time_dur_ms = (int32_t*)realloc(this->motion_profile_time_dur_ms, motion_profile_time_dur_ms_lengthT * sizeof(int32_t));
      motion_profile_time_dur_ms_length = motion_profile_time_dur_ms_lengthT;
      for( uint32_t i = 0; i < motion_profile_time_dur_ms_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_motion_profile_time_dur_ms;
      u_st_motion_profile_time_dur_ms.base = 0;
      u_st_motion_profile_time_dur_ms.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motion_profile_time_dur_ms.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motion_profile_time_dur_ms.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motion_profile_time_dur_ms.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_motion_profile_time_dur_ms = u_st_motion_profile_time_dur_ms.real;
      offset += sizeof(this->st_motion_profile_time_dur_ms);
        memcpy( &(this->motion_profile_time_dur_ms[i]), &(this->st_motion_profile_time_dur_ms), sizeof(int32_t));
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
     return offset;
    }

    virtual const char * getType() override { return "talon_state_msgs/TalonState"; };
    virtual const char * getMD5() override { return "1cbd09f6c8ef5aa69dce068fa437e1fa"; };

  };

}
#endif
