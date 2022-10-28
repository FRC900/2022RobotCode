#ifndef _ROS_spark_max_state_msgs_SparkMaxConfig_h
#define _ROS_spark_max_state_msgs_SparkMaxConfig_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace spark_max_state_msgs
{

  class SparkMaxConfig : public ros::Msg
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
      uint32_t motor_type_length;
      typedef char* _motor_type_type;
      _motor_type_type st_motor_type;
      _motor_type_type * motor_type;
      uint32_t inverted_length;
      typedef bool _inverted_type;
      _inverted_type st_inverted;
      _inverted_type * inverted;
      uint32_t p0_length;
      typedef double _p0_type;
      _p0_type st_p0;
      _p0_type * p0;
      uint32_t i0_length;
      typedef double _i0_type;
      _i0_type st_i0;
      _i0_type * i0;
      uint32_t d0_length;
      typedef double _d0_type;
      _d0_type st_d0;
      _d0_type * d0;
      uint32_t f0_length;
      typedef double _f0_type;
      _f0_type st_f0;
      _f0_type * f0;
      uint32_t izone0_length;
      typedef double _izone0_type;
      _izone0_type st_izone0;
      _izone0_type * izone0;
      uint32_t dfilter0_length;
      typedef double _dfilter0_type;
      _dfilter0_type st_dfilter0;
      _dfilter0_type * dfilter0;
      uint32_t pidf_output_min0_length;
      typedef double _pidf_output_min0_type;
      _pidf_output_min0_type st_pidf_output_min0;
      _pidf_output_min0_type * pidf_output_min0;
      uint32_t pidf_output_max0_length;
      typedef double _pidf_output_max0_type;
      _pidf_output_max0_type st_pidf_output_max0;
      _pidf_output_max0_type * pidf_output_max0;
      uint32_t pidf_reference_output0_length;
      typedef double _pidf_reference_output0_type;
      _pidf_reference_output0_type st_pidf_reference_output0;
      _pidf_reference_output0_type * pidf_reference_output0;
      uint32_t pidf_reference_ctrl0_length;
      typedef char* _pidf_reference_ctrl0_type;
      _pidf_reference_ctrl0_type st_pidf_reference_ctrl0;
      _pidf_reference_ctrl0_type * pidf_reference_ctrl0;
      uint32_t pidf_arb_feed_forward0_length;
      typedef double _pidf_arb_feed_forward0_type;
      _pidf_arb_feed_forward0_type st_pidf_arb_feed_forward0;
      _pidf_arb_feed_forward0_type * pidf_arb_feed_forward0;
      uint32_t pidf_arb_feed_forward_units0_length;
      typedef char* _pidf_arb_feed_forward_units0_type;
      _pidf_arb_feed_forward_units0_type st_pidf_arb_feed_forward_units0;
      _pidf_arb_feed_forward_units0_type * pidf_arb_feed_forward_units0;
      uint32_t p1_length;
      typedef double _p1_type;
      _p1_type st_p1;
      _p1_type * p1;
      uint32_t i1_length;
      typedef double _i1_type;
      _i1_type st_i1;
      _i1_type * i1;
      uint32_t d1_length;
      typedef double _d1_type;
      _d1_type st_d1;
      _d1_type * d1;
      uint32_t f1_length;
      typedef double _f1_type;
      _f1_type st_f1;
      _f1_type * f1;
      uint32_t izone1_length;
      typedef double _izone1_type;
      _izone1_type st_izone1;
      _izone1_type * izone1;
      uint32_t dfilter1_length;
      typedef double _dfilter1_type;
      _dfilter1_type st_dfilter1;
      _dfilter1_type * dfilter1;
      uint32_t pidf_output_min1_length;
      typedef double _pidf_output_min1_type;
      _pidf_output_min1_type st_pidf_output_min1;
      _pidf_output_min1_type * pidf_output_min1;
      uint32_t pidf_output_max1_length;
      typedef double _pidf_output_max1_type;
      _pidf_output_max1_type st_pidf_output_max1;
      _pidf_output_max1_type * pidf_output_max1;
      uint32_t pidf_reference_output1_length;
      typedef double _pidf_reference_output1_type;
      _pidf_reference_output1_type st_pidf_reference_output1;
      _pidf_reference_output1_type * pidf_reference_output1;
      uint32_t pidf_reference_ctrl1_length;
      typedef char* _pidf_reference_ctrl1_type;
      _pidf_reference_ctrl1_type st_pidf_reference_ctrl1;
      _pidf_reference_ctrl1_type * pidf_reference_ctrl1;
      uint32_t pidf_arb_feed_forward1_length;
      typedef double _pidf_arb_feed_forward1_type;
      _pidf_arb_feed_forward1_type st_pidf_arb_feed_forward1;
      _pidf_arb_feed_forward1_type * pidf_arb_feed_forward1;
      uint32_t pidf_arb_feed_forward_units1_length;
      typedef char* _pidf_arb_feed_forward_units1_type;
      _pidf_arb_feed_forward_units1_type st_pidf_arb_feed_forward_units1;
      _pidf_arb_feed_forward_units1_type * pidf_arb_feed_forward_units1;
      uint32_t p2_length;
      typedef double _p2_type;
      _p2_type st_p2;
      _p2_type * p2;
      uint32_t i2_length;
      typedef double _i2_type;
      _i2_type st_i2;
      _i2_type * i2;
      uint32_t d2_length;
      typedef double _d2_type;
      _d2_type st_d2;
      _d2_type * d2;
      uint32_t f2_length;
      typedef double _f2_type;
      _f2_type st_f2;
      _f2_type * f2;
      uint32_t izone2_length;
      typedef double _izone2_type;
      _izone2_type st_izone2;
      _izone2_type * izone2;
      uint32_t dfilter2_length;
      typedef double _dfilter2_type;
      _dfilter2_type st_dfilter2;
      _dfilter2_type * dfilter2;
      uint32_t pidf_output_min2_length;
      typedef double _pidf_output_min2_type;
      _pidf_output_min2_type st_pidf_output_min2;
      _pidf_output_min2_type * pidf_output_min2;
      uint32_t pidf_output_max2_length;
      typedef double _pidf_output_max2_type;
      _pidf_output_max2_type st_pidf_output_max2;
      _pidf_output_max2_type * pidf_output_max2;
      uint32_t pidf_reference_output2_length;
      typedef double _pidf_reference_output2_type;
      _pidf_reference_output2_type st_pidf_reference_output2;
      _pidf_reference_output2_type * pidf_reference_output2;
      uint32_t pidf_reference_ctrl2_length;
      typedef char* _pidf_reference_ctrl2_type;
      _pidf_reference_ctrl2_type st_pidf_reference_ctrl2;
      _pidf_reference_ctrl2_type * pidf_reference_ctrl2;
      uint32_t pidf_arb_feed_forward2_length;
      typedef double _pidf_arb_feed_forward2_type;
      _pidf_arb_feed_forward2_type st_pidf_arb_feed_forward2;
      _pidf_arb_feed_forward2_type * pidf_arb_feed_forward2;
      uint32_t pidf_arb_feed_forward_units2_length;
      typedef char* _pidf_arb_feed_forward_units2_type;
      _pidf_arb_feed_forward_units2_type st_pidf_arb_feed_forward_units2;
      _pidf_arb_feed_forward_units2_type * pidf_arb_feed_forward_units2;
      uint32_t p3_length;
      typedef double _p3_type;
      _p3_type st_p3;
      _p3_type * p3;
      uint32_t i3_length;
      typedef double _i3_type;
      _i3_type st_i3;
      _i3_type * i3;
      uint32_t d3_length;
      typedef double _d3_type;
      _d3_type st_d3;
      _d3_type * d3;
      uint32_t f3_length;
      typedef double _f3_type;
      _f3_type st_f3;
      _f3_type * f3;
      uint32_t izone3_length;
      typedef double _izone3_type;
      _izone3_type st_izone3;
      _izone3_type * izone3;
      uint32_t dfilter3_length;
      typedef double _dfilter3_type;
      _dfilter3_type st_dfilter3;
      _dfilter3_type * dfilter3;
      uint32_t pidf_output_min3_length;
      typedef double _pidf_output_min3_type;
      _pidf_output_min3_type st_pidf_output_min3;
      _pidf_output_min3_type * pidf_output_min3;
      uint32_t pidf_output_max3_length;
      typedef double _pidf_output_max3_type;
      _pidf_output_max3_type st_pidf_output_max3;
      _pidf_output_max3_type * pidf_output_max3;
      uint32_t pidf_reference_output3_length;
      typedef double _pidf_reference_output3_type;
      _pidf_reference_output3_type st_pidf_reference_output3;
      _pidf_reference_output3_type * pidf_reference_output3;
      uint32_t pidf_reference_ctrl3_length;
      typedef char* _pidf_reference_ctrl3_type;
      _pidf_reference_ctrl3_type st_pidf_reference_ctrl3;
      _pidf_reference_ctrl3_type * pidf_reference_ctrl3;
      uint32_t pidf_arb_feed_forward3_length;
      typedef double _pidf_arb_feed_forward3_type;
      _pidf_arb_feed_forward3_type st_pidf_arb_feed_forward3;
      _pidf_arb_feed_forward3_type * pidf_arb_feed_forward3;
      uint32_t pidf_arb_feed_forward_units3_length;
      typedef char* _pidf_arb_feed_forward_units3_type;
      _pidf_arb_feed_forward_units3_type st_pidf_arb_feed_forward_units3;
      _pidf_arb_feed_forward_units3_type * pidf_arb_feed_forward_units3;
      uint32_t pidf_reference_slot_length;
      typedef int8_t _pidf_reference_slot_type;
      _pidf_reference_slot_type st_pidf_reference_slot;
      _pidf_reference_slot_type * pidf_reference_slot;
      uint32_t forward_limit_switch_polarity_length;
      typedef char* _forward_limit_switch_polarity_type;
      _forward_limit_switch_polarity_type st_forward_limit_switch_polarity;
      _forward_limit_switch_polarity_type * forward_limit_switch_polarity;
      uint32_t forward_limit_switch_enabled_length;
      typedef bool _forward_limit_switch_enabled_type;
      _forward_limit_switch_enabled_type st_forward_limit_switch_enabled;
      _forward_limit_switch_enabled_type * forward_limit_switch_enabled;
      uint32_t reverse_limit_switch_polarity_length;
      typedef char* _reverse_limit_switch_polarity_type;
      _reverse_limit_switch_polarity_type st_reverse_limit_switch_polarity;
      _reverse_limit_switch_polarity_type * reverse_limit_switch_polarity;
      uint32_t reverse_limit_switch_enabled_length;
      typedef bool _reverse_limit_switch_enabled_type;
      _reverse_limit_switch_enabled_type st_reverse_limit_switch_enabled;
      _reverse_limit_switch_enabled_type * reverse_limit_switch_enabled;
      uint32_t current_limit_length;
      typedef uint32_t _current_limit_type;
      _current_limit_type st_current_limit;
      _current_limit_type * current_limit;
      uint32_t current_limit_stall_length;
      typedef uint32_t _current_limit_stall_type;
      _current_limit_stall_type st_current_limit_stall;
      _current_limit_stall_type * current_limit_stall;
      uint32_t current_limit_free_length;
      typedef uint32_t _current_limit_free_type;
      _current_limit_free_type st_current_limit_free;
      _current_limit_free_type * current_limit_free;
      uint32_t current_limit_rpm_length;
      typedef uint32_t _current_limit_rpm_type;
      _current_limit_rpm_type st_current_limit_rpm;
      _current_limit_rpm_type * current_limit_rpm;
      uint32_t secondary_current_limit_length;
      typedef double _secondary_current_limit_type;
      _secondary_current_limit_type st_secondary_current_limit;
      _secondary_current_limit_type * secondary_current_limit;
      uint32_t secondary_current_limit_cycles_length;
      typedef int32_t _secondary_current_limit_cycles_type;
      _secondary_current_limit_cycles_type st_secondary_current_limit_cycles;
      _secondary_current_limit_cycles_type * secondary_current_limit_cycles;
      uint32_t idle_mode_length;
      typedef char* _idle_mode_type;
      _idle_mode_type st_idle_mode;
      _idle_mode_type * idle_mode;
      uint32_t voltage_compensation_enable_length;
      typedef bool _voltage_compensation_enable_type;
      _voltage_compensation_enable_type st_voltage_compensation_enable;
      _voltage_compensation_enable_type * voltage_compensation_enable;
      uint32_t voltage_compensation_nominal_voltage_length;
      typedef double _voltage_compensation_nominal_voltage_type;
      _voltage_compensation_nominal_voltage_type st_voltage_compensation_nominal_voltage;
      _voltage_compensation_nominal_voltage_type * voltage_compensation_nominal_voltage;
      uint32_t open_loop_ramp_rate_length;
      typedef double _open_loop_ramp_rate_type;
      _open_loop_ramp_rate_type st_open_loop_ramp_rate;
      _open_loop_ramp_rate_type * open_loop_ramp_rate;
      uint32_t closed_loop_ramp_rate_length;
      typedef double _closed_loop_ramp_rate_type;
      _closed_loop_ramp_rate_type st_closed_loop_ramp_rate;
      _closed_loop_ramp_rate_type * closed_loop_ramp_rate;
      uint32_t follower_type_length;
      typedef char* _follower_type_type;
      _follower_type_type st_follower_type;
      _follower_type_type * follower_type;
      uint32_t follower_id_length;
      typedef int32_t _follower_id_type;
      _follower_id_type st_follower_id;
      _follower_id_type * follower_id;
      uint32_t follower_invert_length;
      typedef bool _follower_invert_type;
      _follower_invert_type st_follower_invert;
      _follower_invert_type * follower_invert;
      uint32_t forward_softlimit_enable_length;
      typedef bool _forward_softlimit_enable_type;
      _forward_softlimit_enable_type st_forward_softlimit_enable;
      _forward_softlimit_enable_type * forward_softlimit_enable;
      uint32_t forward_softlimit_length;
      typedef double _forward_softlimit_type;
      _forward_softlimit_type st_forward_softlimit;
      _forward_softlimit_type * forward_softlimit;
      uint32_t reverse_softlimit_enable_length;
      typedef bool _reverse_softlimit_enable_type;
      _reverse_softlimit_enable_type st_reverse_softlimit_enable;
      _reverse_softlimit_enable_type * reverse_softlimit_enable;
      uint32_t reverse_softlimit_length;
      typedef double _reverse_softlimit_type;
      _reverse_softlimit_type st_reverse_softlimit;
      _reverse_softlimit_type * reverse_softlimit;
      uint32_t encoder_ticks_per_rotation_length;
      typedef uint32_t _encoder_ticks_per_rotation_type;
      _encoder_ticks_per_rotation_type st_encoder_ticks_per_rotation;
      _encoder_ticks_per_rotation_type * encoder_ticks_per_rotation;
      uint32_t encoder_type_length;
      typedef char* _encoder_type_type;
      _encoder_type_type st_encoder_type;
      _encoder_type_type * encoder_type;

    SparkMaxConfig():
      header(),
      name_length(0), st_name(), name(nullptr),
      device_id_length(0), st_device_id(), device_id(nullptr),
      motor_type_length(0), st_motor_type(), motor_type(nullptr),
      inverted_length(0), st_inverted(), inverted(nullptr),
      p0_length(0), st_p0(), p0(nullptr),
      i0_length(0), st_i0(), i0(nullptr),
      d0_length(0), st_d0(), d0(nullptr),
      f0_length(0), st_f0(), f0(nullptr),
      izone0_length(0), st_izone0(), izone0(nullptr),
      dfilter0_length(0), st_dfilter0(), dfilter0(nullptr),
      pidf_output_min0_length(0), st_pidf_output_min0(), pidf_output_min0(nullptr),
      pidf_output_max0_length(0), st_pidf_output_max0(), pidf_output_max0(nullptr),
      pidf_reference_output0_length(0), st_pidf_reference_output0(), pidf_reference_output0(nullptr),
      pidf_reference_ctrl0_length(0), st_pidf_reference_ctrl0(), pidf_reference_ctrl0(nullptr),
      pidf_arb_feed_forward0_length(0), st_pidf_arb_feed_forward0(), pidf_arb_feed_forward0(nullptr),
      pidf_arb_feed_forward_units0_length(0), st_pidf_arb_feed_forward_units0(), pidf_arb_feed_forward_units0(nullptr),
      p1_length(0), st_p1(), p1(nullptr),
      i1_length(0), st_i1(), i1(nullptr),
      d1_length(0), st_d1(), d1(nullptr),
      f1_length(0), st_f1(), f1(nullptr),
      izone1_length(0), st_izone1(), izone1(nullptr),
      dfilter1_length(0), st_dfilter1(), dfilter1(nullptr),
      pidf_output_min1_length(0), st_pidf_output_min1(), pidf_output_min1(nullptr),
      pidf_output_max1_length(0), st_pidf_output_max1(), pidf_output_max1(nullptr),
      pidf_reference_output1_length(0), st_pidf_reference_output1(), pidf_reference_output1(nullptr),
      pidf_reference_ctrl1_length(0), st_pidf_reference_ctrl1(), pidf_reference_ctrl1(nullptr),
      pidf_arb_feed_forward1_length(0), st_pidf_arb_feed_forward1(), pidf_arb_feed_forward1(nullptr),
      pidf_arb_feed_forward_units1_length(0), st_pidf_arb_feed_forward_units1(), pidf_arb_feed_forward_units1(nullptr),
      p2_length(0), st_p2(), p2(nullptr),
      i2_length(0), st_i2(), i2(nullptr),
      d2_length(0), st_d2(), d2(nullptr),
      f2_length(0), st_f2(), f2(nullptr),
      izone2_length(0), st_izone2(), izone2(nullptr),
      dfilter2_length(0), st_dfilter2(), dfilter2(nullptr),
      pidf_output_min2_length(0), st_pidf_output_min2(), pidf_output_min2(nullptr),
      pidf_output_max2_length(0), st_pidf_output_max2(), pidf_output_max2(nullptr),
      pidf_reference_output2_length(0), st_pidf_reference_output2(), pidf_reference_output2(nullptr),
      pidf_reference_ctrl2_length(0), st_pidf_reference_ctrl2(), pidf_reference_ctrl2(nullptr),
      pidf_arb_feed_forward2_length(0), st_pidf_arb_feed_forward2(), pidf_arb_feed_forward2(nullptr),
      pidf_arb_feed_forward_units2_length(0), st_pidf_arb_feed_forward_units2(), pidf_arb_feed_forward_units2(nullptr),
      p3_length(0), st_p3(), p3(nullptr),
      i3_length(0), st_i3(), i3(nullptr),
      d3_length(0), st_d3(), d3(nullptr),
      f3_length(0), st_f3(), f3(nullptr),
      izone3_length(0), st_izone3(), izone3(nullptr),
      dfilter3_length(0), st_dfilter3(), dfilter3(nullptr),
      pidf_output_min3_length(0), st_pidf_output_min3(), pidf_output_min3(nullptr),
      pidf_output_max3_length(0), st_pidf_output_max3(), pidf_output_max3(nullptr),
      pidf_reference_output3_length(0), st_pidf_reference_output3(), pidf_reference_output3(nullptr),
      pidf_reference_ctrl3_length(0), st_pidf_reference_ctrl3(), pidf_reference_ctrl3(nullptr),
      pidf_arb_feed_forward3_length(0), st_pidf_arb_feed_forward3(), pidf_arb_feed_forward3(nullptr),
      pidf_arb_feed_forward_units3_length(0), st_pidf_arb_feed_forward_units3(), pidf_arb_feed_forward_units3(nullptr),
      pidf_reference_slot_length(0), st_pidf_reference_slot(), pidf_reference_slot(nullptr),
      forward_limit_switch_polarity_length(0), st_forward_limit_switch_polarity(), forward_limit_switch_polarity(nullptr),
      forward_limit_switch_enabled_length(0), st_forward_limit_switch_enabled(), forward_limit_switch_enabled(nullptr),
      reverse_limit_switch_polarity_length(0), st_reverse_limit_switch_polarity(), reverse_limit_switch_polarity(nullptr),
      reverse_limit_switch_enabled_length(0), st_reverse_limit_switch_enabled(), reverse_limit_switch_enabled(nullptr),
      current_limit_length(0), st_current_limit(), current_limit(nullptr),
      current_limit_stall_length(0), st_current_limit_stall(), current_limit_stall(nullptr),
      current_limit_free_length(0), st_current_limit_free(), current_limit_free(nullptr),
      current_limit_rpm_length(0), st_current_limit_rpm(), current_limit_rpm(nullptr),
      secondary_current_limit_length(0), st_secondary_current_limit(), secondary_current_limit(nullptr),
      secondary_current_limit_cycles_length(0), st_secondary_current_limit_cycles(), secondary_current_limit_cycles(nullptr),
      idle_mode_length(0), st_idle_mode(), idle_mode(nullptr),
      voltage_compensation_enable_length(0), st_voltage_compensation_enable(), voltage_compensation_enable(nullptr),
      voltage_compensation_nominal_voltage_length(0), st_voltage_compensation_nominal_voltage(), voltage_compensation_nominal_voltage(nullptr),
      open_loop_ramp_rate_length(0), st_open_loop_ramp_rate(), open_loop_ramp_rate(nullptr),
      closed_loop_ramp_rate_length(0), st_closed_loop_ramp_rate(), closed_loop_ramp_rate(nullptr),
      follower_type_length(0), st_follower_type(), follower_type(nullptr),
      follower_id_length(0), st_follower_id(), follower_id(nullptr),
      follower_invert_length(0), st_follower_invert(), follower_invert(nullptr),
      forward_softlimit_enable_length(0), st_forward_softlimit_enable(), forward_softlimit_enable(nullptr),
      forward_softlimit_length(0), st_forward_softlimit(), forward_softlimit(nullptr),
      reverse_softlimit_enable_length(0), st_reverse_softlimit_enable(), reverse_softlimit_enable(nullptr),
      reverse_softlimit_length(0), st_reverse_softlimit(), reverse_softlimit(nullptr),
      encoder_ticks_per_rotation_length(0), st_encoder_ticks_per_rotation(), encoder_ticks_per_rotation(nullptr),
      encoder_type_length(0), st_encoder_type(), encoder_type(nullptr)
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
      *(outbuffer + offset + 0) = (this->motor_type_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motor_type_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motor_type_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motor_type_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motor_type_length);
      for( uint32_t i = 0; i < motor_type_length; i++){
      uint32_t length_motor_typei = strlen(this->motor_type[i]);
      varToArr(outbuffer + offset, length_motor_typei);
      offset += 4;
      memcpy(outbuffer + offset, this->motor_type[i], length_motor_typei);
      offset += length_motor_typei;
      }
      *(outbuffer + offset + 0) = (this->inverted_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->inverted_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->inverted_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->inverted_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->inverted_length);
      for( uint32_t i = 0; i < inverted_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_invertedi;
      u_invertedi.real = this->inverted[i];
      *(outbuffer + offset + 0) = (u_invertedi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->inverted[i]);
      }
      *(outbuffer + offset + 0) = (this->p0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->p0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->p0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->p0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->p0_length);
      for( uint32_t i = 0; i < p0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_p0i;
      u_p0i.real = this->p0[i];
      *(outbuffer + offset + 0) = (u_p0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_p0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_p0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_p0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_p0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_p0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_p0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_p0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->p0[i]);
      }
      *(outbuffer + offset + 0) = (this->i0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->i0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->i0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->i0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->i0_length);
      for( uint32_t i = 0; i < i0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_i0i;
      u_i0i.real = this->i0[i];
      *(outbuffer + offset + 0) = (u_i0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_i0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_i0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_i0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_i0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_i0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_i0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_i0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->i0[i]);
      }
      *(outbuffer + offset + 0) = (this->d0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->d0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->d0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->d0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->d0_length);
      for( uint32_t i = 0; i < d0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_d0i;
      u_d0i.real = this->d0[i];
      *(outbuffer + offset + 0) = (u_d0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_d0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_d0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_d0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_d0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_d0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_d0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_d0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->d0[i]);
      }
      *(outbuffer + offset + 0) = (this->f0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->f0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->f0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->f0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->f0_length);
      for( uint32_t i = 0; i < f0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_f0i;
      u_f0i.real = this->f0[i];
      *(outbuffer + offset + 0) = (u_f0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_f0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_f0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_f0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_f0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_f0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_f0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_f0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->f0[i]);
      }
      *(outbuffer + offset + 0) = (this->izone0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->izone0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->izone0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->izone0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->izone0_length);
      for( uint32_t i = 0; i < izone0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_izone0i;
      u_izone0i.real = this->izone0[i];
      *(outbuffer + offset + 0) = (u_izone0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_izone0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_izone0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_izone0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_izone0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_izone0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_izone0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_izone0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->izone0[i]);
      }
      *(outbuffer + offset + 0) = (this->dfilter0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->dfilter0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->dfilter0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->dfilter0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->dfilter0_length);
      for( uint32_t i = 0; i < dfilter0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_dfilter0i;
      u_dfilter0i.real = this->dfilter0[i];
      *(outbuffer + offset + 0) = (u_dfilter0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dfilter0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dfilter0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dfilter0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_dfilter0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_dfilter0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_dfilter0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_dfilter0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->dfilter0[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_output_min0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_output_min0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_output_min0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_output_min0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_output_min0_length);
      for( uint32_t i = 0; i < pidf_output_min0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_output_min0i;
      u_pidf_output_min0i.real = this->pidf_output_min0[i];
      *(outbuffer + offset + 0) = (u_pidf_output_min0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_output_min0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_output_min0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_output_min0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_output_min0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_output_min0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_output_min0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_output_min0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_output_min0[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_output_max0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_output_max0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_output_max0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_output_max0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_output_max0_length);
      for( uint32_t i = 0; i < pidf_output_max0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_output_max0i;
      u_pidf_output_max0i.real = this->pidf_output_max0[i];
      *(outbuffer + offset + 0) = (u_pidf_output_max0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_output_max0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_output_max0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_output_max0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_output_max0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_output_max0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_output_max0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_output_max0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_output_max0[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_reference_output0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_reference_output0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_reference_output0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_reference_output0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_reference_output0_length);
      for( uint32_t i = 0; i < pidf_reference_output0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_reference_output0i;
      u_pidf_reference_output0i.real = this->pidf_reference_output0[i];
      *(outbuffer + offset + 0) = (u_pidf_reference_output0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_reference_output0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_reference_output0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_reference_output0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_reference_output0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_reference_output0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_reference_output0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_reference_output0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_reference_output0[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_reference_ctrl0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_reference_ctrl0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_reference_ctrl0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_reference_ctrl0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_reference_ctrl0_length);
      for( uint32_t i = 0; i < pidf_reference_ctrl0_length; i++){
      uint32_t length_pidf_reference_ctrl0i = strlen(this->pidf_reference_ctrl0[i]);
      varToArr(outbuffer + offset, length_pidf_reference_ctrl0i);
      offset += 4;
      memcpy(outbuffer + offset, this->pidf_reference_ctrl0[i], length_pidf_reference_ctrl0i);
      offset += length_pidf_reference_ctrl0i;
      }
      *(outbuffer + offset + 0) = (this->pidf_arb_feed_forward0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_arb_feed_forward0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_arb_feed_forward0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_arb_feed_forward0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_arb_feed_forward0_length);
      for( uint32_t i = 0; i < pidf_arb_feed_forward0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_arb_feed_forward0i;
      u_pidf_arb_feed_forward0i.real = this->pidf_arb_feed_forward0[i];
      *(outbuffer + offset + 0) = (u_pidf_arb_feed_forward0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_arb_feed_forward0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_arb_feed_forward0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_arb_feed_forward0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_arb_feed_forward0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_arb_feed_forward0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_arb_feed_forward0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_arb_feed_forward0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_arb_feed_forward0[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_arb_feed_forward_units0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_arb_feed_forward_units0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_arb_feed_forward_units0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_arb_feed_forward_units0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_arb_feed_forward_units0_length);
      for( uint32_t i = 0; i < pidf_arb_feed_forward_units0_length; i++){
      uint32_t length_pidf_arb_feed_forward_units0i = strlen(this->pidf_arb_feed_forward_units0[i]);
      varToArr(outbuffer + offset, length_pidf_arb_feed_forward_units0i);
      offset += 4;
      memcpy(outbuffer + offset, this->pidf_arb_feed_forward_units0[i], length_pidf_arb_feed_forward_units0i);
      offset += length_pidf_arb_feed_forward_units0i;
      }
      *(outbuffer + offset + 0) = (this->p1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->p1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->p1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->p1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->p1_length);
      for( uint32_t i = 0; i < p1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_p1i;
      u_p1i.real = this->p1[i];
      *(outbuffer + offset + 0) = (u_p1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_p1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_p1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_p1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_p1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_p1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_p1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_p1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->p1[i]);
      }
      *(outbuffer + offset + 0) = (this->i1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->i1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->i1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->i1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->i1_length);
      for( uint32_t i = 0; i < i1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_i1i;
      u_i1i.real = this->i1[i];
      *(outbuffer + offset + 0) = (u_i1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_i1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_i1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_i1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_i1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_i1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_i1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_i1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->i1[i]);
      }
      *(outbuffer + offset + 0) = (this->d1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->d1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->d1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->d1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->d1_length);
      for( uint32_t i = 0; i < d1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_d1i;
      u_d1i.real = this->d1[i];
      *(outbuffer + offset + 0) = (u_d1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_d1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_d1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_d1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_d1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_d1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_d1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_d1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->d1[i]);
      }
      *(outbuffer + offset + 0) = (this->f1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->f1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->f1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->f1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->f1_length);
      for( uint32_t i = 0; i < f1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_f1i;
      u_f1i.real = this->f1[i];
      *(outbuffer + offset + 0) = (u_f1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_f1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_f1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_f1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_f1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_f1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_f1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_f1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->f1[i]);
      }
      *(outbuffer + offset + 0) = (this->izone1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->izone1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->izone1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->izone1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->izone1_length);
      for( uint32_t i = 0; i < izone1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_izone1i;
      u_izone1i.real = this->izone1[i];
      *(outbuffer + offset + 0) = (u_izone1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_izone1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_izone1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_izone1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_izone1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_izone1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_izone1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_izone1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->izone1[i]);
      }
      *(outbuffer + offset + 0) = (this->dfilter1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->dfilter1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->dfilter1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->dfilter1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->dfilter1_length);
      for( uint32_t i = 0; i < dfilter1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_dfilter1i;
      u_dfilter1i.real = this->dfilter1[i];
      *(outbuffer + offset + 0) = (u_dfilter1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dfilter1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dfilter1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dfilter1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_dfilter1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_dfilter1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_dfilter1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_dfilter1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->dfilter1[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_output_min1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_output_min1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_output_min1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_output_min1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_output_min1_length);
      for( uint32_t i = 0; i < pidf_output_min1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_output_min1i;
      u_pidf_output_min1i.real = this->pidf_output_min1[i];
      *(outbuffer + offset + 0) = (u_pidf_output_min1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_output_min1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_output_min1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_output_min1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_output_min1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_output_min1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_output_min1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_output_min1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_output_min1[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_output_max1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_output_max1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_output_max1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_output_max1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_output_max1_length);
      for( uint32_t i = 0; i < pidf_output_max1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_output_max1i;
      u_pidf_output_max1i.real = this->pidf_output_max1[i];
      *(outbuffer + offset + 0) = (u_pidf_output_max1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_output_max1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_output_max1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_output_max1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_output_max1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_output_max1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_output_max1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_output_max1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_output_max1[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_reference_output1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_reference_output1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_reference_output1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_reference_output1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_reference_output1_length);
      for( uint32_t i = 0; i < pidf_reference_output1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_reference_output1i;
      u_pidf_reference_output1i.real = this->pidf_reference_output1[i];
      *(outbuffer + offset + 0) = (u_pidf_reference_output1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_reference_output1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_reference_output1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_reference_output1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_reference_output1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_reference_output1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_reference_output1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_reference_output1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_reference_output1[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_reference_ctrl1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_reference_ctrl1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_reference_ctrl1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_reference_ctrl1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_reference_ctrl1_length);
      for( uint32_t i = 0; i < pidf_reference_ctrl1_length; i++){
      uint32_t length_pidf_reference_ctrl1i = strlen(this->pidf_reference_ctrl1[i]);
      varToArr(outbuffer + offset, length_pidf_reference_ctrl1i);
      offset += 4;
      memcpy(outbuffer + offset, this->pidf_reference_ctrl1[i], length_pidf_reference_ctrl1i);
      offset += length_pidf_reference_ctrl1i;
      }
      *(outbuffer + offset + 0) = (this->pidf_arb_feed_forward1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_arb_feed_forward1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_arb_feed_forward1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_arb_feed_forward1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_arb_feed_forward1_length);
      for( uint32_t i = 0; i < pidf_arb_feed_forward1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_arb_feed_forward1i;
      u_pidf_arb_feed_forward1i.real = this->pidf_arb_feed_forward1[i];
      *(outbuffer + offset + 0) = (u_pidf_arb_feed_forward1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_arb_feed_forward1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_arb_feed_forward1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_arb_feed_forward1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_arb_feed_forward1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_arb_feed_forward1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_arb_feed_forward1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_arb_feed_forward1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_arb_feed_forward1[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_arb_feed_forward_units1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_arb_feed_forward_units1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_arb_feed_forward_units1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_arb_feed_forward_units1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_arb_feed_forward_units1_length);
      for( uint32_t i = 0; i < pidf_arb_feed_forward_units1_length; i++){
      uint32_t length_pidf_arb_feed_forward_units1i = strlen(this->pidf_arb_feed_forward_units1[i]);
      varToArr(outbuffer + offset, length_pidf_arb_feed_forward_units1i);
      offset += 4;
      memcpy(outbuffer + offset, this->pidf_arb_feed_forward_units1[i], length_pidf_arb_feed_forward_units1i);
      offset += length_pidf_arb_feed_forward_units1i;
      }
      *(outbuffer + offset + 0) = (this->p2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->p2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->p2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->p2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->p2_length);
      for( uint32_t i = 0; i < p2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_p2i;
      u_p2i.real = this->p2[i];
      *(outbuffer + offset + 0) = (u_p2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_p2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_p2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_p2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_p2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_p2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_p2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_p2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->p2[i]);
      }
      *(outbuffer + offset + 0) = (this->i2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->i2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->i2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->i2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->i2_length);
      for( uint32_t i = 0; i < i2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_i2i;
      u_i2i.real = this->i2[i];
      *(outbuffer + offset + 0) = (u_i2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_i2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_i2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_i2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_i2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_i2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_i2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_i2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->i2[i]);
      }
      *(outbuffer + offset + 0) = (this->d2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->d2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->d2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->d2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->d2_length);
      for( uint32_t i = 0; i < d2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_d2i;
      u_d2i.real = this->d2[i];
      *(outbuffer + offset + 0) = (u_d2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_d2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_d2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_d2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_d2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_d2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_d2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_d2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->d2[i]);
      }
      *(outbuffer + offset + 0) = (this->f2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->f2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->f2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->f2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->f2_length);
      for( uint32_t i = 0; i < f2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_f2i;
      u_f2i.real = this->f2[i];
      *(outbuffer + offset + 0) = (u_f2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_f2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_f2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_f2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_f2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_f2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_f2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_f2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->f2[i]);
      }
      *(outbuffer + offset + 0) = (this->izone2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->izone2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->izone2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->izone2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->izone2_length);
      for( uint32_t i = 0; i < izone2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_izone2i;
      u_izone2i.real = this->izone2[i];
      *(outbuffer + offset + 0) = (u_izone2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_izone2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_izone2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_izone2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_izone2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_izone2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_izone2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_izone2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->izone2[i]);
      }
      *(outbuffer + offset + 0) = (this->dfilter2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->dfilter2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->dfilter2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->dfilter2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->dfilter2_length);
      for( uint32_t i = 0; i < dfilter2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_dfilter2i;
      u_dfilter2i.real = this->dfilter2[i];
      *(outbuffer + offset + 0) = (u_dfilter2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dfilter2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dfilter2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dfilter2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_dfilter2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_dfilter2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_dfilter2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_dfilter2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->dfilter2[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_output_min2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_output_min2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_output_min2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_output_min2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_output_min2_length);
      for( uint32_t i = 0; i < pidf_output_min2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_output_min2i;
      u_pidf_output_min2i.real = this->pidf_output_min2[i];
      *(outbuffer + offset + 0) = (u_pidf_output_min2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_output_min2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_output_min2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_output_min2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_output_min2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_output_min2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_output_min2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_output_min2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_output_min2[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_output_max2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_output_max2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_output_max2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_output_max2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_output_max2_length);
      for( uint32_t i = 0; i < pidf_output_max2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_output_max2i;
      u_pidf_output_max2i.real = this->pidf_output_max2[i];
      *(outbuffer + offset + 0) = (u_pidf_output_max2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_output_max2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_output_max2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_output_max2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_output_max2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_output_max2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_output_max2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_output_max2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_output_max2[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_reference_output2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_reference_output2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_reference_output2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_reference_output2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_reference_output2_length);
      for( uint32_t i = 0; i < pidf_reference_output2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_reference_output2i;
      u_pidf_reference_output2i.real = this->pidf_reference_output2[i];
      *(outbuffer + offset + 0) = (u_pidf_reference_output2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_reference_output2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_reference_output2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_reference_output2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_reference_output2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_reference_output2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_reference_output2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_reference_output2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_reference_output2[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_reference_ctrl2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_reference_ctrl2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_reference_ctrl2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_reference_ctrl2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_reference_ctrl2_length);
      for( uint32_t i = 0; i < pidf_reference_ctrl2_length; i++){
      uint32_t length_pidf_reference_ctrl2i = strlen(this->pidf_reference_ctrl2[i]);
      varToArr(outbuffer + offset, length_pidf_reference_ctrl2i);
      offset += 4;
      memcpy(outbuffer + offset, this->pidf_reference_ctrl2[i], length_pidf_reference_ctrl2i);
      offset += length_pidf_reference_ctrl2i;
      }
      *(outbuffer + offset + 0) = (this->pidf_arb_feed_forward2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_arb_feed_forward2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_arb_feed_forward2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_arb_feed_forward2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_arb_feed_forward2_length);
      for( uint32_t i = 0; i < pidf_arb_feed_forward2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_arb_feed_forward2i;
      u_pidf_arb_feed_forward2i.real = this->pidf_arb_feed_forward2[i];
      *(outbuffer + offset + 0) = (u_pidf_arb_feed_forward2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_arb_feed_forward2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_arb_feed_forward2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_arb_feed_forward2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_arb_feed_forward2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_arb_feed_forward2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_arb_feed_forward2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_arb_feed_forward2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_arb_feed_forward2[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_arb_feed_forward_units2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_arb_feed_forward_units2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_arb_feed_forward_units2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_arb_feed_forward_units2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_arb_feed_forward_units2_length);
      for( uint32_t i = 0; i < pidf_arb_feed_forward_units2_length; i++){
      uint32_t length_pidf_arb_feed_forward_units2i = strlen(this->pidf_arb_feed_forward_units2[i]);
      varToArr(outbuffer + offset, length_pidf_arb_feed_forward_units2i);
      offset += 4;
      memcpy(outbuffer + offset, this->pidf_arb_feed_forward_units2[i], length_pidf_arb_feed_forward_units2i);
      offset += length_pidf_arb_feed_forward_units2i;
      }
      *(outbuffer + offset + 0) = (this->p3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->p3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->p3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->p3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->p3_length);
      for( uint32_t i = 0; i < p3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_p3i;
      u_p3i.real = this->p3[i];
      *(outbuffer + offset + 0) = (u_p3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_p3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_p3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_p3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_p3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_p3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_p3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_p3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->p3[i]);
      }
      *(outbuffer + offset + 0) = (this->i3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->i3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->i3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->i3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->i3_length);
      for( uint32_t i = 0; i < i3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_i3i;
      u_i3i.real = this->i3[i];
      *(outbuffer + offset + 0) = (u_i3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_i3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_i3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_i3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_i3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_i3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_i3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_i3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->i3[i]);
      }
      *(outbuffer + offset + 0) = (this->d3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->d3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->d3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->d3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->d3_length);
      for( uint32_t i = 0; i < d3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_d3i;
      u_d3i.real = this->d3[i];
      *(outbuffer + offset + 0) = (u_d3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_d3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_d3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_d3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_d3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_d3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_d3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_d3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->d3[i]);
      }
      *(outbuffer + offset + 0) = (this->f3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->f3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->f3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->f3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->f3_length);
      for( uint32_t i = 0; i < f3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_f3i;
      u_f3i.real = this->f3[i];
      *(outbuffer + offset + 0) = (u_f3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_f3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_f3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_f3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_f3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_f3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_f3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_f3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->f3[i]);
      }
      *(outbuffer + offset + 0) = (this->izone3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->izone3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->izone3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->izone3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->izone3_length);
      for( uint32_t i = 0; i < izone3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_izone3i;
      u_izone3i.real = this->izone3[i];
      *(outbuffer + offset + 0) = (u_izone3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_izone3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_izone3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_izone3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_izone3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_izone3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_izone3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_izone3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->izone3[i]);
      }
      *(outbuffer + offset + 0) = (this->dfilter3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->dfilter3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->dfilter3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->dfilter3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->dfilter3_length);
      for( uint32_t i = 0; i < dfilter3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_dfilter3i;
      u_dfilter3i.real = this->dfilter3[i];
      *(outbuffer + offset + 0) = (u_dfilter3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dfilter3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dfilter3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dfilter3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_dfilter3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_dfilter3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_dfilter3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_dfilter3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->dfilter3[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_output_min3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_output_min3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_output_min3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_output_min3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_output_min3_length);
      for( uint32_t i = 0; i < pidf_output_min3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_output_min3i;
      u_pidf_output_min3i.real = this->pidf_output_min3[i];
      *(outbuffer + offset + 0) = (u_pidf_output_min3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_output_min3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_output_min3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_output_min3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_output_min3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_output_min3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_output_min3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_output_min3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_output_min3[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_output_max3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_output_max3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_output_max3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_output_max3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_output_max3_length);
      for( uint32_t i = 0; i < pidf_output_max3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_output_max3i;
      u_pidf_output_max3i.real = this->pidf_output_max3[i];
      *(outbuffer + offset + 0) = (u_pidf_output_max3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_output_max3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_output_max3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_output_max3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_output_max3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_output_max3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_output_max3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_output_max3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_output_max3[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_reference_output3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_reference_output3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_reference_output3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_reference_output3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_reference_output3_length);
      for( uint32_t i = 0; i < pidf_reference_output3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_reference_output3i;
      u_pidf_reference_output3i.real = this->pidf_reference_output3[i];
      *(outbuffer + offset + 0) = (u_pidf_reference_output3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_reference_output3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_reference_output3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_reference_output3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_reference_output3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_reference_output3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_reference_output3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_reference_output3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_reference_output3[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_reference_ctrl3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_reference_ctrl3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_reference_ctrl3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_reference_ctrl3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_reference_ctrl3_length);
      for( uint32_t i = 0; i < pidf_reference_ctrl3_length; i++){
      uint32_t length_pidf_reference_ctrl3i = strlen(this->pidf_reference_ctrl3[i]);
      varToArr(outbuffer + offset, length_pidf_reference_ctrl3i);
      offset += 4;
      memcpy(outbuffer + offset, this->pidf_reference_ctrl3[i], length_pidf_reference_ctrl3i);
      offset += length_pidf_reference_ctrl3i;
      }
      *(outbuffer + offset + 0) = (this->pidf_arb_feed_forward3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_arb_feed_forward3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_arb_feed_forward3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_arb_feed_forward3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_arb_feed_forward3_length);
      for( uint32_t i = 0; i < pidf_arb_feed_forward3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pidf_arb_feed_forward3i;
      u_pidf_arb_feed_forward3i.real = this->pidf_arb_feed_forward3[i];
      *(outbuffer + offset + 0) = (u_pidf_arb_feed_forward3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pidf_arb_feed_forward3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pidf_arb_feed_forward3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pidf_arb_feed_forward3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pidf_arb_feed_forward3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pidf_arb_feed_forward3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pidf_arb_feed_forward3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pidf_arb_feed_forward3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pidf_arb_feed_forward3[i]);
      }
      *(outbuffer + offset + 0) = (this->pidf_arb_feed_forward_units3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_arb_feed_forward_units3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_arb_feed_forward_units3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_arb_feed_forward_units3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_arb_feed_forward_units3_length);
      for( uint32_t i = 0; i < pidf_arb_feed_forward_units3_length; i++){
      uint32_t length_pidf_arb_feed_forward_units3i = strlen(this->pidf_arb_feed_forward_units3[i]);
      varToArr(outbuffer + offset, length_pidf_arb_feed_forward_units3i);
      offset += 4;
      memcpy(outbuffer + offset, this->pidf_arb_feed_forward_units3[i], length_pidf_arb_feed_forward_units3i);
      offset += length_pidf_arb_feed_forward_units3i;
      }
      *(outbuffer + offset + 0) = (this->pidf_reference_slot_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pidf_reference_slot_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pidf_reference_slot_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pidf_reference_slot_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pidf_reference_slot_length);
      for( uint32_t i = 0; i < pidf_reference_slot_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_pidf_reference_sloti;
      u_pidf_reference_sloti.real = this->pidf_reference_slot[i];
      *(outbuffer + offset + 0) = (u_pidf_reference_sloti.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pidf_reference_slot[i]);
      }
      *(outbuffer + offset + 0) = (this->forward_limit_switch_polarity_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->forward_limit_switch_polarity_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->forward_limit_switch_polarity_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->forward_limit_switch_polarity_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->forward_limit_switch_polarity_length);
      for( uint32_t i = 0; i < forward_limit_switch_polarity_length; i++){
      uint32_t length_forward_limit_switch_polarityi = strlen(this->forward_limit_switch_polarity[i]);
      varToArr(outbuffer + offset, length_forward_limit_switch_polarityi);
      offset += 4;
      memcpy(outbuffer + offset, this->forward_limit_switch_polarity[i], length_forward_limit_switch_polarityi);
      offset += length_forward_limit_switch_polarityi;
      }
      *(outbuffer + offset + 0) = (this->forward_limit_switch_enabled_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->forward_limit_switch_enabled_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->forward_limit_switch_enabled_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->forward_limit_switch_enabled_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->forward_limit_switch_enabled_length);
      for( uint32_t i = 0; i < forward_limit_switch_enabled_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_forward_limit_switch_enabledi;
      u_forward_limit_switch_enabledi.real = this->forward_limit_switch_enabled[i];
      *(outbuffer + offset + 0) = (u_forward_limit_switch_enabledi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->forward_limit_switch_enabled[i]);
      }
      *(outbuffer + offset + 0) = (this->reverse_limit_switch_polarity_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->reverse_limit_switch_polarity_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->reverse_limit_switch_polarity_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->reverse_limit_switch_polarity_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->reverse_limit_switch_polarity_length);
      for( uint32_t i = 0; i < reverse_limit_switch_polarity_length; i++){
      uint32_t length_reverse_limit_switch_polarityi = strlen(this->reverse_limit_switch_polarity[i]);
      varToArr(outbuffer + offset, length_reverse_limit_switch_polarityi);
      offset += 4;
      memcpy(outbuffer + offset, this->reverse_limit_switch_polarity[i], length_reverse_limit_switch_polarityi);
      offset += length_reverse_limit_switch_polarityi;
      }
      *(outbuffer + offset + 0) = (this->reverse_limit_switch_enabled_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->reverse_limit_switch_enabled_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->reverse_limit_switch_enabled_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->reverse_limit_switch_enabled_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->reverse_limit_switch_enabled_length);
      for( uint32_t i = 0; i < reverse_limit_switch_enabled_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_reverse_limit_switch_enabledi;
      u_reverse_limit_switch_enabledi.real = this->reverse_limit_switch_enabled[i];
      *(outbuffer + offset + 0) = (u_reverse_limit_switch_enabledi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->reverse_limit_switch_enabled[i]);
      }
      *(outbuffer + offset + 0) = (this->current_limit_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_limit_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_limit_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_limit_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_length);
      for( uint32_t i = 0; i < current_limit_length; i++){
      *(outbuffer + offset + 0) = (this->current_limit[i] >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_limit[i] >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_limit[i] >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_limit[i] >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit[i]);
      }
      *(outbuffer + offset + 0) = (this->current_limit_stall_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_limit_stall_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_limit_stall_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_limit_stall_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_stall_length);
      for( uint32_t i = 0; i < current_limit_stall_length; i++){
      *(outbuffer + offset + 0) = (this->current_limit_stall[i] >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_limit_stall[i] >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_limit_stall[i] >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_limit_stall[i] >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_stall[i]);
      }
      *(outbuffer + offset + 0) = (this->current_limit_free_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_limit_free_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_limit_free_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_limit_free_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_free_length);
      for( uint32_t i = 0; i < current_limit_free_length; i++){
      *(outbuffer + offset + 0) = (this->current_limit_free[i] >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_limit_free[i] >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_limit_free[i] >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_limit_free[i] >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_free[i]);
      }
      *(outbuffer + offset + 0) = (this->current_limit_rpm_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_limit_rpm_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_limit_rpm_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_limit_rpm_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_rpm_length);
      for( uint32_t i = 0; i < current_limit_rpm_length; i++){
      *(outbuffer + offset + 0) = (this->current_limit_rpm[i] >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_limit_rpm[i] >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_limit_rpm[i] >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_limit_rpm[i] >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_rpm[i]);
      }
      *(outbuffer + offset + 0) = (this->secondary_current_limit_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->secondary_current_limit_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->secondary_current_limit_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->secondary_current_limit_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->secondary_current_limit_length);
      for( uint32_t i = 0; i < secondary_current_limit_length; i++){
      union {
        double real;
        uint64_t base;
      } u_secondary_current_limiti;
      u_secondary_current_limiti.real = this->secondary_current_limit[i];
      *(outbuffer + offset + 0) = (u_secondary_current_limiti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_secondary_current_limiti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_secondary_current_limiti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_secondary_current_limiti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_secondary_current_limiti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_secondary_current_limiti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_secondary_current_limiti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_secondary_current_limiti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->secondary_current_limit[i]);
      }
      *(outbuffer + offset + 0) = (this->secondary_current_limit_cycles_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->secondary_current_limit_cycles_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->secondary_current_limit_cycles_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->secondary_current_limit_cycles_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->secondary_current_limit_cycles_length);
      for( uint32_t i = 0; i < secondary_current_limit_cycles_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_secondary_current_limit_cyclesi;
      u_secondary_current_limit_cyclesi.real = this->secondary_current_limit_cycles[i];
      *(outbuffer + offset + 0) = (u_secondary_current_limit_cyclesi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_secondary_current_limit_cyclesi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_secondary_current_limit_cyclesi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_secondary_current_limit_cyclesi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->secondary_current_limit_cycles[i]);
      }
      *(outbuffer + offset + 0) = (this->idle_mode_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->idle_mode_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->idle_mode_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->idle_mode_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->idle_mode_length);
      for( uint32_t i = 0; i < idle_mode_length; i++){
      uint32_t length_idle_modei = strlen(this->idle_mode[i]);
      varToArr(outbuffer + offset, length_idle_modei);
      offset += 4;
      memcpy(outbuffer + offset, this->idle_mode[i], length_idle_modei);
      offset += length_idle_modei;
      }
      *(outbuffer + offset + 0) = (this->voltage_compensation_enable_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->voltage_compensation_enable_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->voltage_compensation_enable_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->voltage_compensation_enable_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->voltage_compensation_enable_length);
      for( uint32_t i = 0; i < voltage_compensation_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_voltage_compensation_enablei;
      u_voltage_compensation_enablei.real = this->voltage_compensation_enable[i];
      *(outbuffer + offset + 0) = (u_voltage_compensation_enablei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->voltage_compensation_enable[i]);
      }
      *(outbuffer + offset + 0) = (this->voltage_compensation_nominal_voltage_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->voltage_compensation_nominal_voltage_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->voltage_compensation_nominal_voltage_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->voltage_compensation_nominal_voltage_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->voltage_compensation_nominal_voltage_length);
      for( uint32_t i = 0; i < voltage_compensation_nominal_voltage_length; i++){
      union {
        double real;
        uint64_t base;
      } u_voltage_compensation_nominal_voltagei;
      u_voltage_compensation_nominal_voltagei.real = this->voltage_compensation_nominal_voltage[i];
      *(outbuffer + offset + 0) = (u_voltage_compensation_nominal_voltagei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_voltage_compensation_nominal_voltagei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_voltage_compensation_nominal_voltagei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_voltage_compensation_nominal_voltagei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_voltage_compensation_nominal_voltagei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_voltage_compensation_nominal_voltagei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_voltage_compensation_nominal_voltagei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_voltage_compensation_nominal_voltagei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->voltage_compensation_nominal_voltage[i]);
      }
      *(outbuffer + offset + 0) = (this->open_loop_ramp_rate_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->open_loop_ramp_rate_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->open_loop_ramp_rate_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->open_loop_ramp_rate_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->open_loop_ramp_rate_length);
      for( uint32_t i = 0; i < open_loop_ramp_rate_length; i++){
      union {
        double real;
        uint64_t base;
      } u_open_loop_ramp_ratei;
      u_open_loop_ramp_ratei.real = this->open_loop_ramp_rate[i];
      *(outbuffer + offset + 0) = (u_open_loop_ramp_ratei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_open_loop_ramp_ratei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_open_loop_ramp_ratei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_open_loop_ramp_ratei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_open_loop_ramp_ratei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_open_loop_ramp_ratei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_open_loop_ramp_ratei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_open_loop_ramp_ratei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->open_loop_ramp_rate[i]);
      }
      *(outbuffer + offset + 0) = (this->closed_loop_ramp_rate_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->closed_loop_ramp_rate_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->closed_loop_ramp_rate_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->closed_loop_ramp_rate_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->closed_loop_ramp_rate_length);
      for( uint32_t i = 0; i < closed_loop_ramp_rate_length; i++){
      union {
        double real;
        uint64_t base;
      } u_closed_loop_ramp_ratei;
      u_closed_loop_ramp_ratei.real = this->closed_loop_ramp_rate[i];
      *(outbuffer + offset + 0) = (u_closed_loop_ramp_ratei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_closed_loop_ramp_ratei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_closed_loop_ramp_ratei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_closed_loop_ramp_ratei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_closed_loop_ramp_ratei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_closed_loop_ramp_ratei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_closed_loop_ramp_ratei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_closed_loop_ramp_ratei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->closed_loop_ramp_rate[i]);
      }
      *(outbuffer + offset + 0) = (this->follower_type_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->follower_type_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->follower_type_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->follower_type_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->follower_type_length);
      for( uint32_t i = 0; i < follower_type_length; i++){
      uint32_t length_follower_typei = strlen(this->follower_type[i]);
      varToArr(outbuffer + offset, length_follower_typei);
      offset += 4;
      memcpy(outbuffer + offset, this->follower_type[i], length_follower_typei);
      offset += length_follower_typei;
      }
      *(outbuffer + offset + 0) = (this->follower_id_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->follower_id_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->follower_id_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->follower_id_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->follower_id_length);
      for( uint32_t i = 0; i < follower_id_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_follower_idi;
      u_follower_idi.real = this->follower_id[i];
      *(outbuffer + offset + 0) = (u_follower_idi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_follower_idi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_follower_idi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_follower_idi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->follower_id[i]);
      }
      *(outbuffer + offset + 0) = (this->follower_invert_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->follower_invert_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->follower_invert_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->follower_invert_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->follower_invert_length);
      for( uint32_t i = 0; i < follower_invert_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_follower_inverti;
      u_follower_inverti.real = this->follower_invert[i];
      *(outbuffer + offset + 0) = (u_follower_inverti.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->follower_invert[i]);
      }
      *(outbuffer + offset + 0) = (this->forward_softlimit_enable_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->forward_softlimit_enable_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->forward_softlimit_enable_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->forward_softlimit_enable_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->forward_softlimit_enable_length);
      for( uint32_t i = 0; i < forward_softlimit_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_forward_softlimit_enablei;
      u_forward_softlimit_enablei.real = this->forward_softlimit_enable[i];
      *(outbuffer + offset + 0) = (u_forward_softlimit_enablei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->forward_softlimit_enable[i]);
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
      *(outbuffer + offset + 0) = (this->reverse_softlimit_enable_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->reverse_softlimit_enable_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->reverse_softlimit_enable_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->reverse_softlimit_enable_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->reverse_softlimit_enable_length);
      for( uint32_t i = 0; i < reverse_softlimit_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_reverse_softlimit_enablei;
      u_reverse_softlimit_enablei.real = this->reverse_softlimit_enable[i];
      *(outbuffer + offset + 0) = (u_reverse_softlimit_enablei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->reverse_softlimit_enable[i]);
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
      *(outbuffer + offset + 0) = (this->encoder_ticks_per_rotation_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->encoder_ticks_per_rotation_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->encoder_ticks_per_rotation_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->encoder_ticks_per_rotation_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoder_ticks_per_rotation_length);
      for( uint32_t i = 0; i < encoder_ticks_per_rotation_length; i++){
      *(outbuffer + offset + 0) = (this->encoder_ticks_per_rotation[i] >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->encoder_ticks_per_rotation[i] >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->encoder_ticks_per_rotation[i] >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->encoder_ticks_per_rotation[i] >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoder_ticks_per_rotation[i]);
      }
      *(outbuffer + offset + 0) = (this->encoder_type_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->encoder_type_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->encoder_type_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->encoder_type_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoder_type_length);
      for( uint32_t i = 0; i < encoder_type_length; i++){
      uint32_t length_encoder_typei = strlen(this->encoder_type[i]);
      varToArr(outbuffer + offset, length_encoder_typei);
      offset += 4;
      memcpy(outbuffer + offset, this->encoder_type[i], length_encoder_typei);
      offset += length_encoder_typei;
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
      uint32_t motor_type_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motor_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motor_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motor_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motor_type_length);
      if(motor_type_lengthT > motor_type_length)
        this->motor_type = (char**)realloc(this->motor_type, motor_type_lengthT * sizeof(char*));
      motor_type_length = motor_type_lengthT;
      for( uint32_t i = 0; i < motor_type_length; i++){
      uint32_t length_st_motor_type;
      arrToVar(length_st_motor_type, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_motor_type; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_motor_type-1]=0;
      this->st_motor_type = (char *)(inbuffer + offset-1);
      offset += length_st_motor_type;
        memcpy( &(this->motor_type[i]), &(this->st_motor_type), sizeof(char*));
      }
      uint32_t inverted_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      inverted_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      inverted_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      inverted_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->inverted_length);
      if(inverted_lengthT > inverted_length)
        this->inverted = (bool*)realloc(this->inverted, inverted_lengthT * sizeof(bool));
      inverted_length = inverted_lengthT;
      for( uint32_t i = 0; i < inverted_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_inverted;
      u_st_inverted.base = 0;
      u_st_inverted.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_inverted = u_st_inverted.real;
      offset += sizeof(this->st_inverted);
        memcpy( &(this->inverted[i]), &(this->st_inverted), sizeof(bool));
      }
      uint32_t p0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      p0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      p0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      p0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->p0_length);
      if(p0_lengthT > p0_length)
        this->p0 = (double*)realloc(this->p0, p0_lengthT * sizeof(double));
      p0_length = p0_lengthT;
      for( uint32_t i = 0; i < p0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_p0;
      u_st_p0.base = 0;
      u_st_p0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_p0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_p0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_p0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_p0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_p0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_p0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_p0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_p0 = u_st_p0.real;
      offset += sizeof(this->st_p0);
        memcpy( &(this->p0[i]), &(this->st_p0), sizeof(double));
      }
      uint32_t i0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      i0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      i0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      i0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->i0_length);
      if(i0_lengthT > i0_length)
        this->i0 = (double*)realloc(this->i0, i0_lengthT * sizeof(double));
      i0_length = i0_lengthT;
      for( uint32_t i = 0; i < i0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_i0;
      u_st_i0.base = 0;
      u_st_i0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_i0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_i0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_i0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_i0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_i0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_i0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_i0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_i0 = u_st_i0.real;
      offset += sizeof(this->st_i0);
        memcpy( &(this->i0[i]), &(this->st_i0), sizeof(double));
      }
      uint32_t d0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      d0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      d0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      d0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->d0_length);
      if(d0_lengthT > d0_length)
        this->d0 = (double*)realloc(this->d0, d0_lengthT * sizeof(double));
      d0_length = d0_lengthT;
      for( uint32_t i = 0; i < d0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_d0;
      u_st_d0.base = 0;
      u_st_d0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_d0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_d0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_d0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_d0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_d0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_d0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_d0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_d0 = u_st_d0.real;
      offset += sizeof(this->st_d0);
        memcpy( &(this->d0[i]), &(this->st_d0), sizeof(double));
      }
      uint32_t f0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      f0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      f0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      f0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->f0_length);
      if(f0_lengthT > f0_length)
        this->f0 = (double*)realloc(this->f0, f0_lengthT * sizeof(double));
      f0_length = f0_lengthT;
      for( uint32_t i = 0; i < f0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_f0;
      u_st_f0.base = 0;
      u_st_f0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_f0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_f0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_f0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_f0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_f0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_f0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_f0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_f0 = u_st_f0.real;
      offset += sizeof(this->st_f0);
        memcpy( &(this->f0[i]), &(this->st_f0), sizeof(double));
      }
      uint32_t izone0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      izone0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      izone0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      izone0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->izone0_length);
      if(izone0_lengthT > izone0_length)
        this->izone0 = (double*)realloc(this->izone0, izone0_lengthT * sizeof(double));
      izone0_length = izone0_lengthT;
      for( uint32_t i = 0; i < izone0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_izone0;
      u_st_izone0.base = 0;
      u_st_izone0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_izone0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_izone0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_izone0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_izone0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_izone0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_izone0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_izone0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_izone0 = u_st_izone0.real;
      offset += sizeof(this->st_izone0);
        memcpy( &(this->izone0[i]), &(this->st_izone0), sizeof(double));
      }
      uint32_t dfilter0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      dfilter0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      dfilter0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      dfilter0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->dfilter0_length);
      if(dfilter0_lengthT > dfilter0_length)
        this->dfilter0 = (double*)realloc(this->dfilter0, dfilter0_lengthT * sizeof(double));
      dfilter0_length = dfilter0_lengthT;
      for( uint32_t i = 0; i < dfilter0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_dfilter0;
      u_st_dfilter0.base = 0;
      u_st_dfilter0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_dfilter0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_dfilter0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_dfilter0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_dfilter0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_dfilter0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_dfilter0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_dfilter0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_dfilter0 = u_st_dfilter0.real;
      offset += sizeof(this->st_dfilter0);
        memcpy( &(this->dfilter0[i]), &(this->st_dfilter0), sizeof(double));
      }
      uint32_t pidf_output_min0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_output_min0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_output_min0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_output_min0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_output_min0_length);
      if(pidf_output_min0_lengthT > pidf_output_min0_length)
        this->pidf_output_min0 = (double*)realloc(this->pidf_output_min0, pidf_output_min0_lengthT * sizeof(double));
      pidf_output_min0_length = pidf_output_min0_lengthT;
      for( uint32_t i = 0; i < pidf_output_min0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_output_min0;
      u_st_pidf_output_min0.base = 0;
      u_st_pidf_output_min0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_output_min0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_output_min0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_output_min0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_output_min0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_output_min0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_output_min0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_output_min0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_output_min0 = u_st_pidf_output_min0.real;
      offset += sizeof(this->st_pidf_output_min0);
        memcpy( &(this->pidf_output_min0[i]), &(this->st_pidf_output_min0), sizeof(double));
      }
      uint32_t pidf_output_max0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_output_max0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_output_max0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_output_max0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_output_max0_length);
      if(pidf_output_max0_lengthT > pidf_output_max0_length)
        this->pidf_output_max0 = (double*)realloc(this->pidf_output_max0, pidf_output_max0_lengthT * sizeof(double));
      pidf_output_max0_length = pidf_output_max0_lengthT;
      for( uint32_t i = 0; i < pidf_output_max0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_output_max0;
      u_st_pidf_output_max0.base = 0;
      u_st_pidf_output_max0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_output_max0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_output_max0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_output_max0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_output_max0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_output_max0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_output_max0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_output_max0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_output_max0 = u_st_pidf_output_max0.real;
      offset += sizeof(this->st_pidf_output_max0);
        memcpy( &(this->pidf_output_max0[i]), &(this->st_pidf_output_max0), sizeof(double));
      }
      uint32_t pidf_reference_output0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_reference_output0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_reference_output0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_reference_output0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_reference_output0_length);
      if(pidf_reference_output0_lengthT > pidf_reference_output0_length)
        this->pidf_reference_output0 = (double*)realloc(this->pidf_reference_output0, pidf_reference_output0_lengthT * sizeof(double));
      pidf_reference_output0_length = pidf_reference_output0_lengthT;
      for( uint32_t i = 0; i < pidf_reference_output0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_reference_output0;
      u_st_pidf_reference_output0.base = 0;
      u_st_pidf_reference_output0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_reference_output0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_reference_output0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_reference_output0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_reference_output0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_reference_output0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_reference_output0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_reference_output0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_reference_output0 = u_st_pidf_reference_output0.real;
      offset += sizeof(this->st_pidf_reference_output0);
        memcpy( &(this->pidf_reference_output0[i]), &(this->st_pidf_reference_output0), sizeof(double));
      }
      uint32_t pidf_reference_ctrl0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_reference_ctrl0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_reference_ctrl0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_reference_ctrl0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_reference_ctrl0_length);
      if(pidf_reference_ctrl0_lengthT > pidf_reference_ctrl0_length)
        this->pidf_reference_ctrl0 = (char**)realloc(this->pidf_reference_ctrl0, pidf_reference_ctrl0_lengthT * sizeof(char*));
      pidf_reference_ctrl0_length = pidf_reference_ctrl0_lengthT;
      for( uint32_t i = 0; i < pidf_reference_ctrl0_length; i++){
      uint32_t length_st_pidf_reference_ctrl0;
      arrToVar(length_st_pidf_reference_ctrl0, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_pidf_reference_ctrl0; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_pidf_reference_ctrl0-1]=0;
      this->st_pidf_reference_ctrl0 = (char *)(inbuffer + offset-1);
      offset += length_st_pidf_reference_ctrl0;
        memcpy( &(this->pidf_reference_ctrl0[i]), &(this->st_pidf_reference_ctrl0), sizeof(char*));
      }
      uint32_t pidf_arb_feed_forward0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_arb_feed_forward0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_arb_feed_forward0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_arb_feed_forward0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_arb_feed_forward0_length);
      if(pidf_arb_feed_forward0_lengthT > pidf_arb_feed_forward0_length)
        this->pidf_arb_feed_forward0 = (double*)realloc(this->pidf_arb_feed_forward0, pidf_arb_feed_forward0_lengthT * sizeof(double));
      pidf_arb_feed_forward0_length = pidf_arb_feed_forward0_lengthT;
      for( uint32_t i = 0; i < pidf_arb_feed_forward0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_arb_feed_forward0;
      u_st_pidf_arb_feed_forward0.base = 0;
      u_st_pidf_arb_feed_forward0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_arb_feed_forward0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_arb_feed_forward0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_arb_feed_forward0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_arb_feed_forward0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_arb_feed_forward0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_arb_feed_forward0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_arb_feed_forward0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_arb_feed_forward0 = u_st_pidf_arb_feed_forward0.real;
      offset += sizeof(this->st_pidf_arb_feed_forward0);
        memcpy( &(this->pidf_arb_feed_forward0[i]), &(this->st_pidf_arb_feed_forward0), sizeof(double));
      }
      uint32_t pidf_arb_feed_forward_units0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_arb_feed_forward_units0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_arb_feed_forward_units0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_arb_feed_forward_units0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_arb_feed_forward_units0_length);
      if(pidf_arb_feed_forward_units0_lengthT > pidf_arb_feed_forward_units0_length)
        this->pidf_arb_feed_forward_units0 = (char**)realloc(this->pidf_arb_feed_forward_units0, pidf_arb_feed_forward_units0_lengthT * sizeof(char*));
      pidf_arb_feed_forward_units0_length = pidf_arb_feed_forward_units0_lengthT;
      for( uint32_t i = 0; i < pidf_arb_feed_forward_units0_length; i++){
      uint32_t length_st_pidf_arb_feed_forward_units0;
      arrToVar(length_st_pidf_arb_feed_forward_units0, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_pidf_arb_feed_forward_units0; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_pidf_arb_feed_forward_units0-1]=0;
      this->st_pidf_arb_feed_forward_units0 = (char *)(inbuffer + offset-1);
      offset += length_st_pidf_arb_feed_forward_units0;
        memcpy( &(this->pidf_arb_feed_forward_units0[i]), &(this->st_pidf_arb_feed_forward_units0), sizeof(char*));
      }
      uint32_t p1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      p1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      p1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      p1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->p1_length);
      if(p1_lengthT > p1_length)
        this->p1 = (double*)realloc(this->p1, p1_lengthT * sizeof(double));
      p1_length = p1_lengthT;
      for( uint32_t i = 0; i < p1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_p1;
      u_st_p1.base = 0;
      u_st_p1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_p1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_p1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_p1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_p1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_p1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_p1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_p1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_p1 = u_st_p1.real;
      offset += sizeof(this->st_p1);
        memcpy( &(this->p1[i]), &(this->st_p1), sizeof(double));
      }
      uint32_t i1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      i1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      i1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      i1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->i1_length);
      if(i1_lengthT > i1_length)
        this->i1 = (double*)realloc(this->i1, i1_lengthT * sizeof(double));
      i1_length = i1_lengthT;
      for( uint32_t i = 0; i < i1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_i1;
      u_st_i1.base = 0;
      u_st_i1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_i1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_i1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_i1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_i1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_i1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_i1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_i1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_i1 = u_st_i1.real;
      offset += sizeof(this->st_i1);
        memcpy( &(this->i1[i]), &(this->st_i1), sizeof(double));
      }
      uint32_t d1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      d1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      d1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      d1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->d1_length);
      if(d1_lengthT > d1_length)
        this->d1 = (double*)realloc(this->d1, d1_lengthT * sizeof(double));
      d1_length = d1_lengthT;
      for( uint32_t i = 0; i < d1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_d1;
      u_st_d1.base = 0;
      u_st_d1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_d1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_d1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_d1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_d1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_d1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_d1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_d1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_d1 = u_st_d1.real;
      offset += sizeof(this->st_d1);
        memcpy( &(this->d1[i]), &(this->st_d1), sizeof(double));
      }
      uint32_t f1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      f1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      f1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      f1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->f1_length);
      if(f1_lengthT > f1_length)
        this->f1 = (double*)realloc(this->f1, f1_lengthT * sizeof(double));
      f1_length = f1_lengthT;
      for( uint32_t i = 0; i < f1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_f1;
      u_st_f1.base = 0;
      u_st_f1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_f1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_f1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_f1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_f1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_f1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_f1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_f1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_f1 = u_st_f1.real;
      offset += sizeof(this->st_f1);
        memcpy( &(this->f1[i]), &(this->st_f1), sizeof(double));
      }
      uint32_t izone1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      izone1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      izone1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      izone1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->izone1_length);
      if(izone1_lengthT > izone1_length)
        this->izone1 = (double*)realloc(this->izone1, izone1_lengthT * sizeof(double));
      izone1_length = izone1_lengthT;
      for( uint32_t i = 0; i < izone1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_izone1;
      u_st_izone1.base = 0;
      u_st_izone1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_izone1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_izone1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_izone1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_izone1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_izone1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_izone1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_izone1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_izone1 = u_st_izone1.real;
      offset += sizeof(this->st_izone1);
        memcpy( &(this->izone1[i]), &(this->st_izone1), sizeof(double));
      }
      uint32_t dfilter1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      dfilter1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      dfilter1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      dfilter1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->dfilter1_length);
      if(dfilter1_lengthT > dfilter1_length)
        this->dfilter1 = (double*)realloc(this->dfilter1, dfilter1_lengthT * sizeof(double));
      dfilter1_length = dfilter1_lengthT;
      for( uint32_t i = 0; i < dfilter1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_dfilter1;
      u_st_dfilter1.base = 0;
      u_st_dfilter1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_dfilter1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_dfilter1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_dfilter1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_dfilter1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_dfilter1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_dfilter1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_dfilter1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_dfilter1 = u_st_dfilter1.real;
      offset += sizeof(this->st_dfilter1);
        memcpy( &(this->dfilter1[i]), &(this->st_dfilter1), sizeof(double));
      }
      uint32_t pidf_output_min1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_output_min1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_output_min1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_output_min1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_output_min1_length);
      if(pidf_output_min1_lengthT > pidf_output_min1_length)
        this->pidf_output_min1 = (double*)realloc(this->pidf_output_min1, pidf_output_min1_lengthT * sizeof(double));
      pidf_output_min1_length = pidf_output_min1_lengthT;
      for( uint32_t i = 0; i < pidf_output_min1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_output_min1;
      u_st_pidf_output_min1.base = 0;
      u_st_pidf_output_min1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_output_min1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_output_min1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_output_min1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_output_min1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_output_min1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_output_min1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_output_min1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_output_min1 = u_st_pidf_output_min1.real;
      offset += sizeof(this->st_pidf_output_min1);
        memcpy( &(this->pidf_output_min1[i]), &(this->st_pidf_output_min1), sizeof(double));
      }
      uint32_t pidf_output_max1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_output_max1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_output_max1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_output_max1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_output_max1_length);
      if(pidf_output_max1_lengthT > pidf_output_max1_length)
        this->pidf_output_max1 = (double*)realloc(this->pidf_output_max1, pidf_output_max1_lengthT * sizeof(double));
      pidf_output_max1_length = pidf_output_max1_lengthT;
      for( uint32_t i = 0; i < pidf_output_max1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_output_max1;
      u_st_pidf_output_max1.base = 0;
      u_st_pidf_output_max1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_output_max1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_output_max1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_output_max1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_output_max1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_output_max1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_output_max1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_output_max1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_output_max1 = u_st_pidf_output_max1.real;
      offset += sizeof(this->st_pidf_output_max1);
        memcpy( &(this->pidf_output_max1[i]), &(this->st_pidf_output_max1), sizeof(double));
      }
      uint32_t pidf_reference_output1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_reference_output1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_reference_output1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_reference_output1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_reference_output1_length);
      if(pidf_reference_output1_lengthT > pidf_reference_output1_length)
        this->pidf_reference_output1 = (double*)realloc(this->pidf_reference_output1, pidf_reference_output1_lengthT * sizeof(double));
      pidf_reference_output1_length = pidf_reference_output1_lengthT;
      for( uint32_t i = 0; i < pidf_reference_output1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_reference_output1;
      u_st_pidf_reference_output1.base = 0;
      u_st_pidf_reference_output1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_reference_output1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_reference_output1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_reference_output1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_reference_output1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_reference_output1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_reference_output1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_reference_output1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_reference_output1 = u_st_pidf_reference_output1.real;
      offset += sizeof(this->st_pidf_reference_output1);
        memcpy( &(this->pidf_reference_output1[i]), &(this->st_pidf_reference_output1), sizeof(double));
      }
      uint32_t pidf_reference_ctrl1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_reference_ctrl1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_reference_ctrl1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_reference_ctrl1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_reference_ctrl1_length);
      if(pidf_reference_ctrl1_lengthT > pidf_reference_ctrl1_length)
        this->pidf_reference_ctrl1 = (char**)realloc(this->pidf_reference_ctrl1, pidf_reference_ctrl1_lengthT * sizeof(char*));
      pidf_reference_ctrl1_length = pidf_reference_ctrl1_lengthT;
      for( uint32_t i = 0; i < pidf_reference_ctrl1_length; i++){
      uint32_t length_st_pidf_reference_ctrl1;
      arrToVar(length_st_pidf_reference_ctrl1, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_pidf_reference_ctrl1; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_pidf_reference_ctrl1-1]=0;
      this->st_pidf_reference_ctrl1 = (char *)(inbuffer + offset-1);
      offset += length_st_pidf_reference_ctrl1;
        memcpy( &(this->pidf_reference_ctrl1[i]), &(this->st_pidf_reference_ctrl1), sizeof(char*));
      }
      uint32_t pidf_arb_feed_forward1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_arb_feed_forward1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_arb_feed_forward1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_arb_feed_forward1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_arb_feed_forward1_length);
      if(pidf_arb_feed_forward1_lengthT > pidf_arb_feed_forward1_length)
        this->pidf_arb_feed_forward1 = (double*)realloc(this->pidf_arb_feed_forward1, pidf_arb_feed_forward1_lengthT * sizeof(double));
      pidf_arb_feed_forward1_length = pidf_arb_feed_forward1_lengthT;
      for( uint32_t i = 0; i < pidf_arb_feed_forward1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_arb_feed_forward1;
      u_st_pidf_arb_feed_forward1.base = 0;
      u_st_pidf_arb_feed_forward1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_arb_feed_forward1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_arb_feed_forward1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_arb_feed_forward1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_arb_feed_forward1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_arb_feed_forward1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_arb_feed_forward1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_arb_feed_forward1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_arb_feed_forward1 = u_st_pidf_arb_feed_forward1.real;
      offset += sizeof(this->st_pidf_arb_feed_forward1);
        memcpy( &(this->pidf_arb_feed_forward1[i]), &(this->st_pidf_arb_feed_forward1), sizeof(double));
      }
      uint32_t pidf_arb_feed_forward_units1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_arb_feed_forward_units1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_arb_feed_forward_units1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_arb_feed_forward_units1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_arb_feed_forward_units1_length);
      if(pidf_arb_feed_forward_units1_lengthT > pidf_arb_feed_forward_units1_length)
        this->pidf_arb_feed_forward_units1 = (char**)realloc(this->pidf_arb_feed_forward_units1, pidf_arb_feed_forward_units1_lengthT * sizeof(char*));
      pidf_arb_feed_forward_units1_length = pidf_arb_feed_forward_units1_lengthT;
      for( uint32_t i = 0; i < pidf_arb_feed_forward_units1_length; i++){
      uint32_t length_st_pidf_arb_feed_forward_units1;
      arrToVar(length_st_pidf_arb_feed_forward_units1, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_pidf_arb_feed_forward_units1; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_pidf_arb_feed_forward_units1-1]=0;
      this->st_pidf_arb_feed_forward_units1 = (char *)(inbuffer + offset-1);
      offset += length_st_pidf_arb_feed_forward_units1;
        memcpy( &(this->pidf_arb_feed_forward_units1[i]), &(this->st_pidf_arb_feed_forward_units1), sizeof(char*));
      }
      uint32_t p2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      p2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      p2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      p2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->p2_length);
      if(p2_lengthT > p2_length)
        this->p2 = (double*)realloc(this->p2, p2_lengthT * sizeof(double));
      p2_length = p2_lengthT;
      for( uint32_t i = 0; i < p2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_p2;
      u_st_p2.base = 0;
      u_st_p2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_p2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_p2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_p2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_p2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_p2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_p2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_p2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_p2 = u_st_p2.real;
      offset += sizeof(this->st_p2);
        memcpy( &(this->p2[i]), &(this->st_p2), sizeof(double));
      }
      uint32_t i2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      i2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      i2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      i2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->i2_length);
      if(i2_lengthT > i2_length)
        this->i2 = (double*)realloc(this->i2, i2_lengthT * sizeof(double));
      i2_length = i2_lengthT;
      for( uint32_t i = 0; i < i2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_i2;
      u_st_i2.base = 0;
      u_st_i2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_i2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_i2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_i2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_i2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_i2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_i2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_i2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_i2 = u_st_i2.real;
      offset += sizeof(this->st_i2);
        memcpy( &(this->i2[i]), &(this->st_i2), sizeof(double));
      }
      uint32_t d2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      d2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      d2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      d2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->d2_length);
      if(d2_lengthT > d2_length)
        this->d2 = (double*)realloc(this->d2, d2_lengthT * sizeof(double));
      d2_length = d2_lengthT;
      for( uint32_t i = 0; i < d2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_d2;
      u_st_d2.base = 0;
      u_st_d2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_d2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_d2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_d2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_d2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_d2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_d2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_d2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_d2 = u_st_d2.real;
      offset += sizeof(this->st_d2);
        memcpy( &(this->d2[i]), &(this->st_d2), sizeof(double));
      }
      uint32_t f2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      f2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      f2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      f2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->f2_length);
      if(f2_lengthT > f2_length)
        this->f2 = (double*)realloc(this->f2, f2_lengthT * sizeof(double));
      f2_length = f2_lengthT;
      for( uint32_t i = 0; i < f2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_f2;
      u_st_f2.base = 0;
      u_st_f2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_f2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_f2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_f2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_f2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_f2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_f2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_f2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_f2 = u_st_f2.real;
      offset += sizeof(this->st_f2);
        memcpy( &(this->f2[i]), &(this->st_f2), sizeof(double));
      }
      uint32_t izone2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      izone2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      izone2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      izone2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->izone2_length);
      if(izone2_lengthT > izone2_length)
        this->izone2 = (double*)realloc(this->izone2, izone2_lengthT * sizeof(double));
      izone2_length = izone2_lengthT;
      for( uint32_t i = 0; i < izone2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_izone2;
      u_st_izone2.base = 0;
      u_st_izone2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_izone2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_izone2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_izone2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_izone2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_izone2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_izone2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_izone2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_izone2 = u_st_izone2.real;
      offset += sizeof(this->st_izone2);
        memcpy( &(this->izone2[i]), &(this->st_izone2), sizeof(double));
      }
      uint32_t dfilter2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      dfilter2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      dfilter2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      dfilter2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->dfilter2_length);
      if(dfilter2_lengthT > dfilter2_length)
        this->dfilter2 = (double*)realloc(this->dfilter2, dfilter2_lengthT * sizeof(double));
      dfilter2_length = dfilter2_lengthT;
      for( uint32_t i = 0; i < dfilter2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_dfilter2;
      u_st_dfilter2.base = 0;
      u_st_dfilter2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_dfilter2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_dfilter2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_dfilter2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_dfilter2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_dfilter2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_dfilter2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_dfilter2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_dfilter2 = u_st_dfilter2.real;
      offset += sizeof(this->st_dfilter2);
        memcpy( &(this->dfilter2[i]), &(this->st_dfilter2), sizeof(double));
      }
      uint32_t pidf_output_min2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_output_min2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_output_min2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_output_min2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_output_min2_length);
      if(pidf_output_min2_lengthT > pidf_output_min2_length)
        this->pidf_output_min2 = (double*)realloc(this->pidf_output_min2, pidf_output_min2_lengthT * sizeof(double));
      pidf_output_min2_length = pidf_output_min2_lengthT;
      for( uint32_t i = 0; i < pidf_output_min2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_output_min2;
      u_st_pidf_output_min2.base = 0;
      u_st_pidf_output_min2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_output_min2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_output_min2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_output_min2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_output_min2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_output_min2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_output_min2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_output_min2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_output_min2 = u_st_pidf_output_min2.real;
      offset += sizeof(this->st_pidf_output_min2);
        memcpy( &(this->pidf_output_min2[i]), &(this->st_pidf_output_min2), sizeof(double));
      }
      uint32_t pidf_output_max2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_output_max2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_output_max2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_output_max2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_output_max2_length);
      if(pidf_output_max2_lengthT > pidf_output_max2_length)
        this->pidf_output_max2 = (double*)realloc(this->pidf_output_max2, pidf_output_max2_lengthT * sizeof(double));
      pidf_output_max2_length = pidf_output_max2_lengthT;
      for( uint32_t i = 0; i < pidf_output_max2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_output_max2;
      u_st_pidf_output_max2.base = 0;
      u_st_pidf_output_max2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_output_max2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_output_max2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_output_max2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_output_max2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_output_max2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_output_max2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_output_max2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_output_max2 = u_st_pidf_output_max2.real;
      offset += sizeof(this->st_pidf_output_max2);
        memcpy( &(this->pidf_output_max2[i]), &(this->st_pidf_output_max2), sizeof(double));
      }
      uint32_t pidf_reference_output2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_reference_output2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_reference_output2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_reference_output2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_reference_output2_length);
      if(pidf_reference_output2_lengthT > pidf_reference_output2_length)
        this->pidf_reference_output2 = (double*)realloc(this->pidf_reference_output2, pidf_reference_output2_lengthT * sizeof(double));
      pidf_reference_output2_length = pidf_reference_output2_lengthT;
      for( uint32_t i = 0; i < pidf_reference_output2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_reference_output2;
      u_st_pidf_reference_output2.base = 0;
      u_st_pidf_reference_output2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_reference_output2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_reference_output2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_reference_output2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_reference_output2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_reference_output2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_reference_output2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_reference_output2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_reference_output2 = u_st_pidf_reference_output2.real;
      offset += sizeof(this->st_pidf_reference_output2);
        memcpy( &(this->pidf_reference_output2[i]), &(this->st_pidf_reference_output2), sizeof(double));
      }
      uint32_t pidf_reference_ctrl2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_reference_ctrl2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_reference_ctrl2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_reference_ctrl2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_reference_ctrl2_length);
      if(pidf_reference_ctrl2_lengthT > pidf_reference_ctrl2_length)
        this->pidf_reference_ctrl2 = (char**)realloc(this->pidf_reference_ctrl2, pidf_reference_ctrl2_lengthT * sizeof(char*));
      pidf_reference_ctrl2_length = pidf_reference_ctrl2_lengthT;
      for( uint32_t i = 0; i < pidf_reference_ctrl2_length; i++){
      uint32_t length_st_pidf_reference_ctrl2;
      arrToVar(length_st_pidf_reference_ctrl2, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_pidf_reference_ctrl2; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_pidf_reference_ctrl2-1]=0;
      this->st_pidf_reference_ctrl2 = (char *)(inbuffer + offset-1);
      offset += length_st_pidf_reference_ctrl2;
        memcpy( &(this->pidf_reference_ctrl2[i]), &(this->st_pidf_reference_ctrl2), sizeof(char*));
      }
      uint32_t pidf_arb_feed_forward2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_arb_feed_forward2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_arb_feed_forward2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_arb_feed_forward2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_arb_feed_forward2_length);
      if(pidf_arb_feed_forward2_lengthT > pidf_arb_feed_forward2_length)
        this->pidf_arb_feed_forward2 = (double*)realloc(this->pidf_arb_feed_forward2, pidf_arb_feed_forward2_lengthT * sizeof(double));
      pidf_arb_feed_forward2_length = pidf_arb_feed_forward2_lengthT;
      for( uint32_t i = 0; i < pidf_arb_feed_forward2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_arb_feed_forward2;
      u_st_pidf_arb_feed_forward2.base = 0;
      u_st_pidf_arb_feed_forward2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_arb_feed_forward2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_arb_feed_forward2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_arb_feed_forward2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_arb_feed_forward2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_arb_feed_forward2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_arb_feed_forward2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_arb_feed_forward2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_arb_feed_forward2 = u_st_pidf_arb_feed_forward2.real;
      offset += sizeof(this->st_pidf_arb_feed_forward2);
        memcpy( &(this->pidf_arb_feed_forward2[i]), &(this->st_pidf_arb_feed_forward2), sizeof(double));
      }
      uint32_t pidf_arb_feed_forward_units2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_arb_feed_forward_units2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_arb_feed_forward_units2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_arb_feed_forward_units2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_arb_feed_forward_units2_length);
      if(pidf_arb_feed_forward_units2_lengthT > pidf_arb_feed_forward_units2_length)
        this->pidf_arb_feed_forward_units2 = (char**)realloc(this->pidf_arb_feed_forward_units2, pidf_arb_feed_forward_units2_lengthT * sizeof(char*));
      pidf_arb_feed_forward_units2_length = pidf_arb_feed_forward_units2_lengthT;
      for( uint32_t i = 0; i < pidf_arb_feed_forward_units2_length; i++){
      uint32_t length_st_pidf_arb_feed_forward_units2;
      arrToVar(length_st_pidf_arb_feed_forward_units2, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_pidf_arb_feed_forward_units2; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_pidf_arb_feed_forward_units2-1]=0;
      this->st_pidf_arb_feed_forward_units2 = (char *)(inbuffer + offset-1);
      offset += length_st_pidf_arb_feed_forward_units2;
        memcpy( &(this->pidf_arb_feed_forward_units2[i]), &(this->st_pidf_arb_feed_forward_units2), sizeof(char*));
      }
      uint32_t p3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      p3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      p3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      p3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->p3_length);
      if(p3_lengthT > p3_length)
        this->p3 = (double*)realloc(this->p3, p3_lengthT * sizeof(double));
      p3_length = p3_lengthT;
      for( uint32_t i = 0; i < p3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_p3;
      u_st_p3.base = 0;
      u_st_p3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_p3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_p3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_p3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_p3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_p3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_p3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_p3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_p3 = u_st_p3.real;
      offset += sizeof(this->st_p3);
        memcpy( &(this->p3[i]), &(this->st_p3), sizeof(double));
      }
      uint32_t i3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      i3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      i3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      i3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->i3_length);
      if(i3_lengthT > i3_length)
        this->i3 = (double*)realloc(this->i3, i3_lengthT * sizeof(double));
      i3_length = i3_lengthT;
      for( uint32_t i = 0; i < i3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_i3;
      u_st_i3.base = 0;
      u_st_i3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_i3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_i3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_i3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_i3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_i3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_i3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_i3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_i3 = u_st_i3.real;
      offset += sizeof(this->st_i3);
        memcpy( &(this->i3[i]), &(this->st_i3), sizeof(double));
      }
      uint32_t d3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      d3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      d3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      d3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->d3_length);
      if(d3_lengthT > d3_length)
        this->d3 = (double*)realloc(this->d3, d3_lengthT * sizeof(double));
      d3_length = d3_lengthT;
      for( uint32_t i = 0; i < d3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_d3;
      u_st_d3.base = 0;
      u_st_d3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_d3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_d3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_d3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_d3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_d3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_d3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_d3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_d3 = u_st_d3.real;
      offset += sizeof(this->st_d3);
        memcpy( &(this->d3[i]), &(this->st_d3), sizeof(double));
      }
      uint32_t f3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      f3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      f3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      f3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->f3_length);
      if(f3_lengthT > f3_length)
        this->f3 = (double*)realloc(this->f3, f3_lengthT * sizeof(double));
      f3_length = f3_lengthT;
      for( uint32_t i = 0; i < f3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_f3;
      u_st_f3.base = 0;
      u_st_f3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_f3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_f3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_f3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_f3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_f3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_f3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_f3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_f3 = u_st_f3.real;
      offset += sizeof(this->st_f3);
        memcpy( &(this->f3[i]), &(this->st_f3), sizeof(double));
      }
      uint32_t izone3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      izone3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      izone3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      izone3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->izone3_length);
      if(izone3_lengthT > izone3_length)
        this->izone3 = (double*)realloc(this->izone3, izone3_lengthT * sizeof(double));
      izone3_length = izone3_lengthT;
      for( uint32_t i = 0; i < izone3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_izone3;
      u_st_izone3.base = 0;
      u_st_izone3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_izone3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_izone3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_izone3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_izone3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_izone3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_izone3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_izone3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_izone3 = u_st_izone3.real;
      offset += sizeof(this->st_izone3);
        memcpy( &(this->izone3[i]), &(this->st_izone3), sizeof(double));
      }
      uint32_t dfilter3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      dfilter3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      dfilter3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      dfilter3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->dfilter3_length);
      if(dfilter3_lengthT > dfilter3_length)
        this->dfilter3 = (double*)realloc(this->dfilter3, dfilter3_lengthT * sizeof(double));
      dfilter3_length = dfilter3_lengthT;
      for( uint32_t i = 0; i < dfilter3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_dfilter3;
      u_st_dfilter3.base = 0;
      u_st_dfilter3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_dfilter3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_dfilter3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_dfilter3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_dfilter3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_dfilter3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_dfilter3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_dfilter3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_dfilter3 = u_st_dfilter3.real;
      offset += sizeof(this->st_dfilter3);
        memcpy( &(this->dfilter3[i]), &(this->st_dfilter3), sizeof(double));
      }
      uint32_t pidf_output_min3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_output_min3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_output_min3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_output_min3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_output_min3_length);
      if(pidf_output_min3_lengthT > pidf_output_min3_length)
        this->pidf_output_min3 = (double*)realloc(this->pidf_output_min3, pidf_output_min3_lengthT * sizeof(double));
      pidf_output_min3_length = pidf_output_min3_lengthT;
      for( uint32_t i = 0; i < pidf_output_min3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_output_min3;
      u_st_pidf_output_min3.base = 0;
      u_st_pidf_output_min3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_output_min3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_output_min3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_output_min3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_output_min3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_output_min3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_output_min3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_output_min3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_output_min3 = u_st_pidf_output_min3.real;
      offset += sizeof(this->st_pidf_output_min3);
        memcpy( &(this->pidf_output_min3[i]), &(this->st_pidf_output_min3), sizeof(double));
      }
      uint32_t pidf_output_max3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_output_max3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_output_max3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_output_max3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_output_max3_length);
      if(pidf_output_max3_lengthT > pidf_output_max3_length)
        this->pidf_output_max3 = (double*)realloc(this->pidf_output_max3, pidf_output_max3_lengthT * sizeof(double));
      pidf_output_max3_length = pidf_output_max3_lengthT;
      for( uint32_t i = 0; i < pidf_output_max3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_output_max3;
      u_st_pidf_output_max3.base = 0;
      u_st_pidf_output_max3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_output_max3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_output_max3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_output_max3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_output_max3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_output_max3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_output_max3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_output_max3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_output_max3 = u_st_pidf_output_max3.real;
      offset += sizeof(this->st_pidf_output_max3);
        memcpy( &(this->pidf_output_max3[i]), &(this->st_pidf_output_max3), sizeof(double));
      }
      uint32_t pidf_reference_output3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_reference_output3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_reference_output3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_reference_output3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_reference_output3_length);
      if(pidf_reference_output3_lengthT > pidf_reference_output3_length)
        this->pidf_reference_output3 = (double*)realloc(this->pidf_reference_output3, pidf_reference_output3_lengthT * sizeof(double));
      pidf_reference_output3_length = pidf_reference_output3_lengthT;
      for( uint32_t i = 0; i < pidf_reference_output3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_reference_output3;
      u_st_pidf_reference_output3.base = 0;
      u_st_pidf_reference_output3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_reference_output3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_reference_output3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_reference_output3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_reference_output3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_reference_output3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_reference_output3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_reference_output3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_reference_output3 = u_st_pidf_reference_output3.real;
      offset += sizeof(this->st_pidf_reference_output3);
        memcpy( &(this->pidf_reference_output3[i]), &(this->st_pidf_reference_output3), sizeof(double));
      }
      uint32_t pidf_reference_ctrl3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_reference_ctrl3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_reference_ctrl3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_reference_ctrl3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_reference_ctrl3_length);
      if(pidf_reference_ctrl3_lengthT > pidf_reference_ctrl3_length)
        this->pidf_reference_ctrl3 = (char**)realloc(this->pidf_reference_ctrl3, pidf_reference_ctrl3_lengthT * sizeof(char*));
      pidf_reference_ctrl3_length = pidf_reference_ctrl3_lengthT;
      for( uint32_t i = 0; i < pidf_reference_ctrl3_length; i++){
      uint32_t length_st_pidf_reference_ctrl3;
      arrToVar(length_st_pidf_reference_ctrl3, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_pidf_reference_ctrl3; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_pidf_reference_ctrl3-1]=0;
      this->st_pidf_reference_ctrl3 = (char *)(inbuffer + offset-1);
      offset += length_st_pidf_reference_ctrl3;
        memcpy( &(this->pidf_reference_ctrl3[i]), &(this->st_pidf_reference_ctrl3), sizeof(char*));
      }
      uint32_t pidf_arb_feed_forward3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_arb_feed_forward3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_arb_feed_forward3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_arb_feed_forward3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_arb_feed_forward3_length);
      if(pidf_arb_feed_forward3_lengthT > pidf_arb_feed_forward3_length)
        this->pidf_arb_feed_forward3 = (double*)realloc(this->pidf_arb_feed_forward3, pidf_arb_feed_forward3_lengthT * sizeof(double));
      pidf_arb_feed_forward3_length = pidf_arb_feed_forward3_lengthT;
      for( uint32_t i = 0; i < pidf_arb_feed_forward3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pidf_arb_feed_forward3;
      u_st_pidf_arb_feed_forward3.base = 0;
      u_st_pidf_arb_feed_forward3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pidf_arb_feed_forward3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pidf_arb_feed_forward3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pidf_arb_feed_forward3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pidf_arb_feed_forward3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pidf_arb_feed_forward3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pidf_arb_feed_forward3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pidf_arb_feed_forward3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pidf_arb_feed_forward3 = u_st_pidf_arb_feed_forward3.real;
      offset += sizeof(this->st_pidf_arb_feed_forward3);
        memcpy( &(this->pidf_arb_feed_forward3[i]), &(this->st_pidf_arb_feed_forward3), sizeof(double));
      }
      uint32_t pidf_arb_feed_forward_units3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_arb_feed_forward_units3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_arb_feed_forward_units3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_arb_feed_forward_units3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_arb_feed_forward_units3_length);
      if(pidf_arb_feed_forward_units3_lengthT > pidf_arb_feed_forward_units3_length)
        this->pidf_arb_feed_forward_units3 = (char**)realloc(this->pidf_arb_feed_forward_units3, pidf_arb_feed_forward_units3_lengthT * sizeof(char*));
      pidf_arb_feed_forward_units3_length = pidf_arb_feed_forward_units3_lengthT;
      for( uint32_t i = 0; i < pidf_arb_feed_forward_units3_length; i++){
      uint32_t length_st_pidf_arb_feed_forward_units3;
      arrToVar(length_st_pidf_arb_feed_forward_units3, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_pidf_arb_feed_forward_units3; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_pidf_arb_feed_forward_units3-1]=0;
      this->st_pidf_arb_feed_forward_units3 = (char *)(inbuffer + offset-1);
      offset += length_st_pidf_arb_feed_forward_units3;
        memcpy( &(this->pidf_arb_feed_forward_units3[i]), &(this->st_pidf_arb_feed_forward_units3), sizeof(char*));
      }
      uint32_t pidf_reference_slot_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pidf_reference_slot_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pidf_reference_slot_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pidf_reference_slot_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pidf_reference_slot_length);
      if(pidf_reference_slot_lengthT > pidf_reference_slot_length)
        this->pidf_reference_slot = (int8_t*)realloc(this->pidf_reference_slot, pidf_reference_slot_lengthT * sizeof(int8_t));
      pidf_reference_slot_length = pidf_reference_slot_lengthT;
      for( uint32_t i = 0; i < pidf_reference_slot_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_pidf_reference_slot;
      u_st_pidf_reference_slot.base = 0;
      u_st_pidf_reference_slot.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_pidf_reference_slot = u_st_pidf_reference_slot.real;
      offset += sizeof(this->st_pidf_reference_slot);
        memcpy( &(this->pidf_reference_slot[i]), &(this->st_pidf_reference_slot), sizeof(int8_t));
      }
      uint32_t forward_limit_switch_polarity_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      forward_limit_switch_polarity_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      forward_limit_switch_polarity_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      forward_limit_switch_polarity_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->forward_limit_switch_polarity_length);
      if(forward_limit_switch_polarity_lengthT > forward_limit_switch_polarity_length)
        this->forward_limit_switch_polarity = (char**)realloc(this->forward_limit_switch_polarity, forward_limit_switch_polarity_lengthT * sizeof(char*));
      forward_limit_switch_polarity_length = forward_limit_switch_polarity_lengthT;
      for( uint32_t i = 0; i < forward_limit_switch_polarity_length; i++){
      uint32_t length_st_forward_limit_switch_polarity;
      arrToVar(length_st_forward_limit_switch_polarity, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_forward_limit_switch_polarity; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_forward_limit_switch_polarity-1]=0;
      this->st_forward_limit_switch_polarity = (char *)(inbuffer + offset-1);
      offset += length_st_forward_limit_switch_polarity;
        memcpy( &(this->forward_limit_switch_polarity[i]), &(this->st_forward_limit_switch_polarity), sizeof(char*));
      }
      uint32_t forward_limit_switch_enabled_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      forward_limit_switch_enabled_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      forward_limit_switch_enabled_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      forward_limit_switch_enabled_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->forward_limit_switch_enabled_length);
      if(forward_limit_switch_enabled_lengthT > forward_limit_switch_enabled_length)
        this->forward_limit_switch_enabled = (bool*)realloc(this->forward_limit_switch_enabled, forward_limit_switch_enabled_lengthT * sizeof(bool));
      forward_limit_switch_enabled_length = forward_limit_switch_enabled_lengthT;
      for( uint32_t i = 0; i < forward_limit_switch_enabled_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_forward_limit_switch_enabled;
      u_st_forward_limit_switch_enabled.base = 0;
      u_st_forward_limit_switch_enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_forward_limit_switch_enabled = u_st_forward_limit_switch_enabled.real;
      offset += sizeof(this->st_forward_limit_switch_enabled);
        memcpy( &(this->forward_limit_switch_enabled[i]), &(this->st_forward_limit_switch_enabled), sizeof(bool));
      }
      uint32_t reverse_limit_switch_polarity_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      reverse_limit_switch_polarity_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      reverse_limit_switch_polarity_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      reverse_limit_switch_polarity_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->reverse_limit_switch_polarity_length);
      if(reverse_limit_switch_polarity_lengthT > reverse_limit_switch_polarity_length)
        this->reverse_limit_switch_polarity = (char**)realloc(this->reverse_limit_switch_polarity, reverse_limit_switch_polarity_lengthT * sizeof(char*));
      reverse_limit_switch_polarity_length = reverse_limit_switch_polarity_lengthT;
      for( uint32_t i = 0; i < reverse_limit_switch_polarity_length; i++){
      uint32_t length_st_reverse_limit_switch_polarity;
      arrToVar(length_st_reverse_limit_switch_polarity, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_reverse_limit_switch_polarity; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_reverse_limit_switch_polarity-1]=0;
      this->st_reverse_limit_switch_polarity = (char *)(inbuffer + offset-1);
      offset += length_st_reverse_limit_switch_polarity;
        memcpy( &(this->reverse_limit_switch_polarity[i]), &(this->st_reverse_limit_switch_polarity), sizeof(char*));
      }
      uint32_t reverse_limit_switch_enabled_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      reverse_limit_switch_enabled_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      reverse_limit_switch_enabled_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      reverse_limit_switch_enabled_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->reverse_limit_switch_enabled_length);
      if(reverse_limit_switch_enabled_lengthT > reverse_limit_switch_enabled_length)
        this->reverse_limit_switch_enabled = (bool*)realloc(this->reverse_limit_switch_enabled, reverse_limit_switch_enabled_lengthT * sizeof(bool));
      reverse_limit_switch_enabled_length = reverse_limit_switch_enabled_lengthT;
      for( uint32_t i = 0; i < reverse_limit_switch_enabled_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_reverse_limit_switch_enabled;
      u_st_reverse_limit_switch_enabled.base = 0;
      u_st_reverse_limit_switch_enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_reverse_limit_switch_enabled = u_st_reverse_limit_switch_enabled.real;
      offset += sizeof(this->st_reverse_limit_switch_enabled);
        memcpy( &(this->reverse_limit_switch_enabled[i]), &(this->st_reverse_limit_switch_enabled), sizeof(bool));
      }
      uint32_t current_limit_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->current_limit_length);
      if(current_limit_lengthT > current_limit_length)
        this->current_limit = (uint32_t*)realloc(this->current_limit, current_limit_lengthT * sizeof(uint32_t));
      current_limit_length = current_limit_lengthT;
      for( uint32_t i = 0; i < current_limit_length; i++){
      this->st_current_limit =  ((uint32_t) (*(inbuffer + offset)));
      this->st_current_limit |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->st_current_limit |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->st_current_limit |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->st_current_limit);
        memcpy( &(this->current_limit[i]), &(this->st_current_limit), sizeof(uint32_t));
      }
      uint32_t current_limit_stall_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      current_limit_stall_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      current_limit_stall_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      current_limit_stall_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->current_limit_stall_length);
      if(current_limit_stall_lengthT > current_limit_stall_length)
        this->current_limit_stall = (uint32_t*)realloc(this->current_limit_stall, current_limit_stall_lengthT * sizeof(uint32_t));
      current_limit_stall_length = current_limit_stall_lengthT;
      for( uint32_t i = 0; i < current_limit_stall_length; i++){
      this->st_current_limit_stall =  ((uint32_t) (*(inbuffer + offset)));
      this->st_current_limit_stall |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->st_current_limit_stall |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->st_current_limit_stall |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->st_current_limit_stall);
        memcpy( &(this->current_limit_stall[i]), &(this->st_current_limit_stall), sizeof(uint32_t));
      }
      uint32_t current_limit_free_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      current_limit_free_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      current_limit_free_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      current_limit_free_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->current_limit_free_length);
      if(current_limit_free_lengthT > current_limit_free_length)
        this->current_limit_free = (uint32_t*)realloc(this->current_limit_free, current_limit_free_lengthT * sizeof(uint32_t));
      current_limit_free_length = current_limit_free_lengthT;
      for( uint32_t i = 0; i < current_limit_free_length; i++){
      this->st_current_limit_free =  ((uint32_t) (*(inbuffer + offset)));
      this->st_current_limit_free |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->st_current_limit_free |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->st_current_limit_free |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->st_current_limit_free);
        memcpy( &(this->current_limit_free[i]), &(this->st_current_limit_free), sizeof(uint32_t));
      }
      uint32_t current_limit_rpm_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      current_limit_rpm_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      current_limit_rpm_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      current_limit_rpm_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->current_limit_rpm_length);
      if(current_limit_rpm_lengthT > current_limit_rpm_length)
        this->current_limit_rpm = (uint32_t*)realloc(this->current_limit_rpm, current_limit_rpm_lengthT * sizeof(uint32_t));
      current_limit_rpm_length = current_limit_rpm_lengthT;
      for( uint32_t i = 0; i < current_limit_rpm_length; i++){
      this->st_current_limit_rpm =  ((uint32_t) (*(inbuffer + offset)));
      this->st_current_limit_rpm |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->st_current_limit_rpm |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->st_current_limit_rpm |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->st_current_limit_rpm);
        memcpy( &(this->current_limit_rpm[i]), &(this->st_current_limit_rpm), sizeof(uint32_t));
      }
      uint32_t secondary_current_limit_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      secondary_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      secondary_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      secondary_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->secondary_current_limit_length);
      if(secondary_current_limit_lengthT > secondary_current_limit_length)
        this->secondary_current_limit = (double*)realloc(this->secondary_current_limit, secondary_current_limit_lengthT * sizeof(double));
      secondary_current_limit_length = secondary_current_limit_lengthT;
      for( uint32_t i = 0; i < secondary_current_limit_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_secondary_current_limit;
      u_st_secondary_current_limit.base = 0;
      u_st_secondary_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_secondary_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_secondary_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_secondary_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_secondary_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_secondary_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_secondary_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_secondary_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_secondary_current_limit = u_st_secondary_current_limit.real;
      offset += sizeof(this->st_secondary_current_limit);
        memcpy( &(this->secondary_current_limit[i]), &(this->st_secondary_current_limit), sizeof(double));
      }
      uint32_t secondary_current_limit_cycles_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      secondary_current_limit_cycles_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      secondary_current_limit_cycles_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      secondary_current_limit_cycles_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->secondary_current_limit_cycles_length);
      if(secondary_current_limit_cycles_lengthT > secondary_current_limit_cycles_length)
        this->secondary_current_limit_cycles = (int32_t*)realloc(this->secondary_current_limit_cycles, secondary_current_limit_cycles_lengthT * sizeof(int32_t));
      secondary_current_limit_cycles_length = secondary_current_limit_cycles_lengthT;
      for( uint32_t i = 0; i < secondary_current_limit_cycles_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_secondary_current_limit_cycles;
      u_st_secondary_current_limit_cycles.base = 0;
      u_st_secondary_current_limit_cycles.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_secondary_current_limit_cycles.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_secondary_current_limit_cycles.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_secondary_current_limit_cycles.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_secondary_current_limit_cycles = u_st_secondary_current_limit_cycles.real;
      offset += sizeof(this->st_secondary_current_limit_cycles);
        memcpy( &(this->secondary_current_limit_cycles[i]), &(this->st_secondary_current_limit_cycles), sizeof(int32_t));
      }
      uint32_t idle_mode_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      idle_mode_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      idle_mode_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      idle_mode_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->idle_mode_length);
      if(idle_mode_lengthT > idle_mode_length)
        this->idle_mode = (char**)realloc(this->idle_mode, idle_mode_lengthT * sizeof(char*));
      idle_mode_length = idle_mode_lengthT;
      for( uint32_t i = 0; i < idle_mode_length; i++){
      uint32_t length_st_idle_mode;
      arrToVar(length_st_idle_mode, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_idle_mode; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_idle_mode-1]=0;
      this->st_idle_mode = (char *)(inbuffer + offset-1);
      offset += length_st_idle_mode;
        memcpy( &(this->idle_mode[i]), &(this->st_idle_mode), sizeof(char*));
      }
      uint32_t voltage_compensation_enable_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      voltage_compensation_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      voltage_compensation_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      voltage_compensation_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->voltage_compensation_enable_length);
      if(voltage_compensation_enable_lengthT > voltage_compensation_enable_length)
        this->voltage_compensation_enable = (bool*)realloc(this->voltage_compensation_enable, voltage_compensation_enable_lengthT * sizeof(bool));
      voltage_compensation_enable_length = voltage_compensation_enable_lengthT;
      for( uint32_t i = 0; i < voltage_compensation_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_voltage_compensation_enable;
      u_st_voltage_compensation_enable.base = 0;
      u_st_voltage_compensation_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_voltage_compensation_enable = u_st_voltage_compensation_enable.real;
      offset += sizeof(this->st_voltage_compensation_enable);
        memcpy( &(this->voltage_compensation_enable[i]), &(this->st_voltage_compensation_enable), sizeof(bool));
      }
      uint32_t voltage_compensation_nominal_voltage_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      voltage_compensation_nominal_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      voltage_compensation_nominal_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      voltage_compensation_nominal_voltage_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->voltage_compensation_nominal_voltage_length);
      if(voltage_compensation_nominal_voltage_lengthT > voltage_compensation_nominal_voltage_length)
        this->voltage_compensation_nominal_voltage = (double*)realloc(this->voltage_compensation_nominal_voltage, voltage_compensation_nominal_voltage_lengthT * sizeof(double));
      voltage_compensation_nominal_voltage_length = voltage_compensation_nominal_voltage_lengthT;
      for( uint32_t i = 0; i < voltage_compensation_nominal_voltage_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_voltage_compensation_nominal_voltage;
      u_st_voltage_compensation_nominal_voltage.base = 0;
      u_st_voltage_compensation_nominal_voltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_voltage_compensation_nominal_voltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_voltage_compensation_nominal_voltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_voltage_compensation_nominal_voltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_voltage_compensation_nominal_voltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_voltage_compensation_nominal_voltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_voltage_compensation_nominal_voltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_voltage_compensation_nominal_voltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_voltage_compensation_nominal_voltage = u_st_voltage_compensation_nominal_voltage.real;
      offset += sizeof(this->st_voltage_compensation_nominal_voltage);
        memcpy( &(this->voltage_compensation_nominal_voltage[i]), &(this->st_voltage_compensation_nominal_voltage), sizeof(double));
      }
      uint32_t open_loop_ramp_rate_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      open_loop_ramp_rate_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      open_loop_ramp_rate_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      open_loop_ramp_rate_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->open_loop_ramp_rate_length);
      if(open_loop_ramp_rate_lengthT > open_loop_ramp_rate_length)
        this->open_loop_ramp_rate = (double*)realloc(this->open_loop_ramp_rate, open_loop_ramp_rate_lengthT * sizeof(double));
      open_loop_ramp_rate_length = open_loop_ramp_rate_lengthT;
      for( uint32_t i = 0; i < open_loop_ramp_rate_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_open_loop_ramp_rate;
      u_st_open_loop_ramp_rate.base = 0;
      u_st_open_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_open_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_open_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_open_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_open_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_open_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_open_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_open_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_open_loop_ramp_rate = u_st_open_loop_ramp_rate.real;
      offset += sizeof(this->st_open_loop_ramp_rate);
        memcpy( &(this->open_loop_ramp_rate[i]), &(this->st_open_loop_ramp_rate), sizeof(double));
      }
      uint32_t closed_loop_ramp_rate_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      closed_loop_ramp_rate_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      closed_loop_ramp_rate_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      closed_loop_ramp_rate_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->closed_loop_ramp_rate_length);
      if(closed_loop_ramp_rate_lengthT > closed_loop_ramp_rate_length)
        this->closed_loop_ramp_rate = (double*)realloc(this->closed_loop_ramp_rate, closed_loop_ramp_rate_lengthT * sizeof(double));
      closed_loop_ramp_rate_length = closed_loop_ramp_rate_lengthT;
      for( uint32_t i = 0; i < closed_loop_ramp_rate_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_closed_loop_ramp_rate;
      u_st_closed_loop_ramp_rate.base = 0;
      u_st_closed_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_closed_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_closed_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_closed_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_closed_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_closed_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_closed_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_closed_loop_ramp_rate.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_closed_loop_ramp_rate = u_st_closed_loop_ramp_rate.real;
      offset += sizeof(this->st_closed_loop_ramp_rate);
        memcpy( &(this->closed_loop_ramp_rate[i]), &(this->st_closed_loop_ramp_rate), sizeof(double));
      }
      uint32_t follower_type_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      follower_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      follower_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      follower_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->follower_type_length);
      if(follower_type_lengthT > follower_type_length)
        this->follower_type = (char**)realloc(this->follower_type, follower_type_lengthT * sizeof(char*));
      follower_type_length = follower_type_lengthT;
      for( uint32_t i = 0; i < follower_type_length; i++){
      uint32_t length_st_follower_type;
      arrToVar(length_st_follower_type, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_follower_type; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_follower_type-1]=0;
      this->st_follower_type = (char *)(inbuffer + offset-1);
      offset += length_st_follower_type;
        memcpy( &(this->follower_type[i]), &(this->st_follower_type), sizeof(char*));
      }
      uint32_t follower_id_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      follower_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      follower_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      follower_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->follower_id_length);
      if(follower_id_lengthT > follower_id_length)
        this->follower_id = (int32_t*)realloc(this->follower_id, follower_id_lengthT * sizeof(int32_t));
      follower_id_length = follower_id_lengthT;
      for( uint32_t i = 0; i < follower_id_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_follower_id;
      u_st_follower_id.base = 0;
      u_st_follower_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_follower_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_follower_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_follower_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_follower_id = u_st_follower_id.real;
      offset += sizeof(this->st_follower_id);
        memcpy( &(this->follower_id[i]), &(this->st_follower_id), sizeof(int32_t));
      }
      uint32_t follower_invert_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      follower_invert_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      follower_invert_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      follower_invert_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->follower_invert_length);
      if(follower_invert_lengthT > follower_invert_length)
        this->follower_invert = (bool*)realloc(this->follower_invert, follower_invert_lengthT * sizeof(bool));
      follower_invert_length = follower_invert_lengthT;
      for( uint32_t i = 0; i < follower_invert_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_follower_invert;
      u_st_follower_invert.base = 0;
      u_st_follower_invert.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_follower_invert = u_st_follower_invert.real;
      offset += sizeof(this->st_follower_invert);
        memcpy( &(this->follower_invert[i]), &(this->st_follower_invert), sizeof(bool));
      }
      uint32_t forward_softlimit_enable_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      forward_softlimit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      forward_softlimit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      forward_softlimit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->forward_softlimit_enable_length);
      if(forward_softlimit_enable_lengthT > forward_softlimit_enable_length)
        this->forward_softlimit_enable = (bool*)realloc(this->forward_softlimit_enable, forward_softlimit_enable_lengthT * sizeof(bool));
      forward_softlimit_enable_length = forward_softlimit_enable_lengthT;
      for( uint32_t i = 0; i < forward_softlimit_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_forward_softlimit_enable;
      u_st_forward_softlimit_enable.base = 0;
      u_st_forward_softlimit_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_forward_softlimit_enable = u_st_forward_softlimit_enable.real;
      offset += sizeof(this->st_forward_softlimit_enable);
        memcpy( &(this->forward_softlimit_enable[i]), &(this->st_forward_softlimit_enable), sizeof(bool));
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
      uint32_t reverse_softlimit_enable_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      reverse_softlimit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      reverse_softlimit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      reverse_softlimit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->reverse_softlimit_enable_length);
      if(reverse_softlimit_enable_lengthT > reverse_softlimit_enable_length)
        this->reverse_softlimit_enable = (bool*)realloc(this->reverse_softlimit_enable, reverse_softlimit_enable_lengthT * sizeof(bool));
      reverse_softlimit_enable_length = reverse_softlimit_enable_lengthT;
      for( uint32_t i = 0; i < reverse_softlimit_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_reverse_softlimit_enable;
      u_st_reverse_softlimit_enable.base = 0;
      u_st_reverse_softlimit_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_reverse_softlimit_enable = u_st_reverse_softlimit_enable.real;
      offset += sizeof(this->st_reverse_softlimit_enable);
        memcpy( &(this->reverse_softlimit_enable[i]), &(this->st_reverse_softlimit_enable), sizeof(bool));
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
      uint32_t encoder_ticks_per_rotation_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      encoder_ticks_per_rotation_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      encoder_ticks_per_rotation_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      encoder_ticks_per_rotation_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->encoder_ticks_per_rotation_length);
      if(encoder_ticks_per_rotation_lengthT > encoder_ticks_per_rotation_length)
        this->encoder_ticks_per_rotation = (uint32_t*)realloc(this->encoder_ticks_per_rotation, encoder_ticks_per_rotation_lengthT * sizeof(uint32_t));
      encoder_ticks_per_rotation_length = encoder_ticks_per_rotation_lengthT;
      for( uint32_t i = 0; i < encoder_ticks_per_rotation_length; i++){
      this->st_encoder_ticks_per_rotation =  ((uint32_t) (*(inbuffer + offset)));
      this->st_encoder_ticks_per_rotation |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->st_encoder_ticks_per_rotation |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->st_encoder_ticks_per_rotation |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->st_encoder_ticks_per_rotation);
        memcpy( &(this->encoder_ticks_per_rotation[i]), &(this->st_encoder_ticks_per_rotation), sizeof(uint32_t));
      }
      uint32_t encoder_type_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      encoder_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      encoder_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      encoder_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->encoder_type_length);
      if(encoder_type_lengthT > encoder_type_length)
        this->encoder_type = (char**)realloc(this->encoder_type, encoder_type_lengthT * sizeof(char*));
      encoder_type_length = encoder_type_lengthT;
      for( uint32_t i = 0; i < encoder_type_length; i++){
      uint32_t length_st_encoder_type;
      arrToVar(length_st_encoder_type, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_encoder_type; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_encoder_type-1]=0;
      this->st_encoder_type = (char *)(inbuffer + offset-1);
      offset += length_st_encoder_type;
        memcpy( &(this->encoder_type[i]), &(this->st_encoder_type), sizeof(char*));
      }
     return offset;
    }

    virtual const char * getType() override { return "spark_max_state_msgs/SparkMaxConfig"; };
    virtual const char * getMD5() override { return "4c5a42aa36491a08702b4155a0bdaab9"; };

  };

}
#endif
