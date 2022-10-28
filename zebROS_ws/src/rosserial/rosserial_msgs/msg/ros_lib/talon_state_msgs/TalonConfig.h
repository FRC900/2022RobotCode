#ifndef _ROS_talon_state_msgs_TalonConfig_h
#define _ROS_talon_state_msgs_TalonConfig_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace talon_state_msgs
{

  class TalonConfig : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t name_length;
      typedef char* _name_type;
      _name_type st_name;
      _name_type * name;
      uint32_t can_id_length;
      typedef int8_t _can_id_type;
      _can_id_type st_can_id;
      _can_id_type * can_id;
      uint32_t feedback_coefficient_length;
      typedef double _feedback_coefficient_type;
      _feedback_coefficient_type st_feedback_coefficient;
      _feedback_coefficient_type * feedback_coefficient;
      uint32_t feedback_sensor_length;
      typedef char* _feedback_sensor_type;
      _feedback_sensor_type st_feedback_sensor;
      _feedback_sensor_type * feedback_sensor;
      uint32_t remote_feedback_sensor_length;
      typedef char* _remote_feedback_sensor_type;
      _remote_feedback_sensor_type st_remote_feedback_sensor;
      _remote_feedback_sensor_type * remote_feedback_sensor;
      uint32_t remote_feedback_device_id0_length;
      typedef int8_t _remote_feedback_device_id0_type;
      _remote_feedback_device_id0_type st_remote_feedback_device_id0;
      _remote_feedback_device_id0_type * remote_feedback_device_id0;
      uint32_t remote_feedback_filter0_length;
      typedef char* _remote_feedback_filter0_type;
      _remote_feedback_filter0_type st_remote_feedback_filter0;
      _remote_feedback_filter0_type * remote_feedback_filter0;
      uint32_t remote_feedback_device_id1_length;
      typedef int8_t _remote_feedback_device_id1_type;
      _remote_feedback_device_id1_type st_remote_feedback_device_id1;
      _remote_feedback_device_id1_type * remote_feedback_device_id1;
      uint32_t remote_feedback_filter1_length;
      typedef char* _remote_feedback_filter1_type;
      _remote_feedback_filter1_type st_remote_feedback_filter1;
      _remote_feedback_filter1_type * remote_feedback_filter1;
      uint32_t sensor_term_sum0_length;
      typedef char* _sensor_term_sum0_type;
      _sensor_term_sum0_type st_sensor_term_sum0;
      _sensor_term_sum0_type * sensor_term_sum0;
      uint32_t sensor_term_sum1_length;
      typedef char* _sensor_term_sum1_type;
      _sensor_term_sum1_type st_sensor_term_sum1;
      _sensor_term_sum1_type * sensor_term_sum1;
      uint32_t sensor_term_diff0_length;
      typedef char* _sensor_term_diff0_type;
      _sensor_term_diff0_type st_sensor_term_diff0;
      _sensor_term_diff0_type * sensor_term_diff0;
      uint32_t sensor_term_diff1_length;
      typedef char* _sensor_term_diff1_type;
      _sensor_term_diff1_type st_sensor_term_diff1;
      _sensor_term_diff1_type * sensor_term_diff1;
      uint32_t encoder_ticks_per_rotation_length;
      typedef int32_t _encoder_ticks_per_rotation_type;
      _encoder_ticks_per_rotation_type st_encoder_ticks_per_rotation;
      _encoder_ticks_per_rotation_type * encoder_ticks_per_rotation;
      uint32_t pid_slot_length;
      typedef int32_t _pid_slot_type;
      _pid_slot_type st_pid_slot;
      _pid_slot_type * pid_slot;
      uint32_t pid_p0_length;
      typedef double _pid_p0_type;
      _pid_p0_type st_pid_p0;
      _pid_p0_type * pid_p0;
      uint32_t pid_i0_length;
      typedef double _pid_i0_type;
      _pid_i0_type st_pid_i0;
      _pid_i0_type * pid_i0;
      uint32_t pid_d0_length;
      typedef double _pid_d0_type;
      _pid_d0_type st_pid_d0;
      _pid_d0_type * pid_d0;
      uint32_t pid_f0_length;
      typedef double _pid_f0_type;
      _pid_f0_type st_pid_f0;
      _pid_f0_type * pid_f0;
      uint32_t pid_izone0_length;
      typedef int32_t _pid_izone0_type;
      _pid_izone0_type st_pid_izone0;
      _pid_izone0_type * pid_izone0;
      uint32_t pid_allowable_closed_loop_error0_length;
      typedef int32_t _pid_allowable_closed_loop_error0_type;
      _pid_allowable_closed_loop_error0_type st_pid_allowable_closed_loop_error0;
      _pid_allowable_closed_loop_error0_type * pid_allowable_closed_loop_error0;
      uint32_t pid_max_integral_accumulator0_length;
      typedef double _pid_max_integral_accumulator0_type;
      _pid_max_integral_accumulator0_type st_pid_max_integral_accumulator0;
      _pid_max_integral_accumulator0_type * pid_max_integral_accumulator0;
      uint32_t pid_closed_loop_peak_output0_length;
      typedef double _pid_closed_loop_peak_output0_type;
      _pid_closed_loop_peak_output0_type st_pid_closed_loop_peak_output0;
      _pid_closed_loop_peak_output0_type * pid_closed_loop_peak_output0;
      uint32_t pid_closed_loop_period0_length;
      typedef int32_t _pid_closed_loop_period0_type;
      _pid_closed_loop_period0_type st_pid_closed_loop_period0;
      _pid_closed_loop_period0_type * pid_closed_loop_period0;
      uint32_t pid_p1_length;
      typedef double _pid_p1_type;
      _pid_p1_type st_pid_p1;
      _pid_p1_type * pid_p1;
      uint32_t pid_i1_length;
      typedef double _pid_i1_type;
      _pid_i1_type st_pid_i1;
      _pid_i1_type * pid_i1;
      uint32_t pid_d1_length;
      typedef double _pid_d1_type;
      _pid_d1_type st_pid_d1;
      _pid_d1_type * pid_d1;
      uint32_t pid_f1_length;
      typedef double _pid_f1_type;
      _pid_f1_type st_pid_f1;
      _pid_f1_type * pid_f1;
      uint32_t pid_izone1_length;
      typedef int32_t _pid_izone1_type;
      _pid_izone1_type st_pid_izone1;
      _pid_izone1_type * pid_izone1;
      uint32_t pid_allowable_closed_loop_error1_length;
      typedef int32_t _pid_allowable_closed_loop_error1_type;
      _pid_allowable_closed_loop_error1_type st_pid_allowable_closed_loop_error1;
      _pid_allowable_closed_loop_error1_type * pid_allowable_closed_loop_error1;
      uint32_t pid_max_integral_accumulator1_length;
      typedef double _pid_max_integral_accumulator1_type;
      _pid_max_integral_accumulator1_type st_pid_max_integral_accumulator1;
      _pid_max_integral_accumulator1_type * pid_max_integral_accumulator1;
      uint32_t pid_closed_loop_peak_output1_length;
      typedef double _pid_closed_loop_peak_output1_type;
      _pid_closed_loop_peak_output1_type st_pid_closed_loop_peak_output1;
      _pid_closed_loop_peak_output1_type * pid_closed_loop_peak_output1;
      uint32_t pid_closed_loop_period1_length;
      typedef int32_t _pid_closed_loop_period1_type;
      _pid_closed_loop_period1_type st_pid_closed_loop_period1;
      _pid_closed_loop_period1_type * pid_closed_loop_period1;
      uint32_t pid_p2_length;
      typedef double _pid_p2_type;
      _pid_p2_type st_pid_p2;
      _pid_p2_type * pid_p2;
      uint32_t pid_i2_length;
      typedef double _pid_i2_type;
      _pid_i2_type st_pid_i2;
      _pid_i2_type * pid_i2;
      uint32_t pid_d2_length;
      typedef double _pid_d2_type;
      _pid_d2_type st_pid_d2;
      _pid_d2_type * pid_d2;
      uint32_t pid_f2_length;
      typedef double _pid_f2_type;
      _pid_f2_type st_pid_f2;
      _pid_f2_type * pid_f2;
      uint32_t pid_izone2_length;
      typedef int32_t _pid_izone2_type;
      _pid_izone2_type st_pid_izone2;
      _pid_izone2_type * pid_izone2;
      uint32_t pid_allowable_closed_loop_error2_length;
      typedef int32_t _pid_allowable_closed_loop_error2_type;
      _pid_allowable_closed_loop_error2_type st_pid_allowable_closed_loop_error2;
      _pid_allowable_closed_loop_error2_type * pid_allowable_closed_loop_error2;
      uint32_t pid_max_integral_accumulator2_length;
      typedef double _pid_max_integral_accumulator2_type;
      _pid_max_integral_accumulator2_type st_pid_max_integral_accumulator2;
      _pid_max_integral_accumulator2_type * pid_max_integral_accumulator2;
      uint32_t pid_closed_loop_peak_output2_length;
      typedef double _pid_closed_loop_peak_output2_type;
      _pid_closed_loop_peak_output2_type st_pid_closed_loop_peak_output2;
      _pid_closed_loop_peak_output2_type * pid_closed_loop_peak_output2;
      uint32_t pid_closed_loop_period2_length;
      typedef int32_t _pid_closed_loop_period2_type;
      _pid_closed_loop_period2_type st_pid_closed_loop_period2;
      _pid_closed_loop_period2_type * pid_closed_loop_period2;
      uint32_t pid_p3_length;
      typedef double _pid_p3_type;
      _pid_p3_type st_pid_p3;
      _pid_p3_type * pid_p3;
      uint32_t pid_i3_length;
      typedef double _pid_i3_type;
      _pid_i3_type st_pid_i3;
      _pid_i3_type * pid_i3;
      uint32_t pid_d3_length;
      typedef double _pid_d3_type;
      _pid_d3_type st_pid_d3;
      _pid_d3_type * pid_d3;
      uint32_t pid_f3_length;
      typedef double _pid_f3_type;
      _pid_f3_type st_pid_f3;
      _pid_f3_type * pid_f3;
      uint32_t pid_izone3_length;
      typedef int32_t _pid_izone3_type;
      _pid_izone3_type st_pid_izone3;
      _pid_izone3_type * pid_izone3;
      uint32_t pid_allowable_closed_loop_error3_length;
      typedef int32_t _pid_allowable_closed_loop_error3_type;
      _pid_allowable_closed_loop_error3_type st_pid_allowable_closed_loop_error3;
      _pid_allowable_closed_loop_error3_type * pid_allowable_closed_loop_error3;
      uint32_t pid_max_integral_accumulator3_length;
      typedef double _pid_max_integral_accumulator3_type;
      _pid_max_integral_accumulator3_type st_pid_max_integral_accumulator3;
      _pid_max_integral_accumulator3_type * pid_max_integral_accumulator3;
      uint32_t pid_closed_loop_peak_output3_length;
      typedef double _pid_closed_loop_peak_output3_type;
      _pid_closed_loop_peak_output3_type st_pid_closed_loop_peak_output3;
      _pid_closed_loop_peak_output3_type * pid_closed_loop_peak_output3;
      uint32_t pid_closed_loop_period3_length;
      typedef int32_t _pid_closed_loop_period3_type;
      _pid_closed_loop_period3_type st_pid_closed_loop_period3;
      _pid_closed_loop_period3_type * pid_closed_loop_period3;
      uint32_t aux_pid_polarity_length;
      typedef bool _aux_pid_polarity_type;
      _aux_pid_polarity_type st_aux_pid_polarity;
      _aux_pid_polarity_type * aux_pid_polarity;
      uint32_t invert_length;
      typedef bool _invert_type;
      _invert_type st_invert;
      _invert_type * invert;
      uint32_t sensorPhase_length;
      typedef bool _sensorPhase_type;
      _sensorPhase_type st_sensorPhase;
      _sensorPhase_type * sensorPhase;
      uint32_t neutral_mode_length;
      typedef char* _neutral_mode_type;
      _neutral_mode_type st_neutral_mode;
      _neutral_mode_type * neutral_mode;
      uint32_t closed_loop_ramp_length;
      typedef double _closed_loop_ramp_type;
      _closed_loop_ramp_type st_closed_loop_ramp;
      _closed_loop_ramp_type * closed_loop_ramp;
      uint32_t open_loop_ramp_length;
      typedef double _open_loop_ramp_type;
      _open_loop_ramp_type st_open_loop_ramp;
      _open_loop_ramp_type * open_loop_ramp;
      uint32_t peak_output_forward_length;
      typedef double _peak_output_forward_type;
      _peak_output_forward_type st_peak_output_forward;
      _peak_output_forward_type * peak_output_forward;
      uint32_t peak_output_reverse_length;
      typedef double _peak_output_reverse_type;
      _peak_output_reverse_type st_peak_output_reverse;
      _peak_output_reverse_type * peak_output_reverse;
      uint32_t nominal_output_forward_length;
      typedef double _nominal_output_forward_type;
      _nominal_output_forward_type st_nominal_output_forward;
      _nominal_output_forward_type * nominal_output_forward;
      uint32_t nominal_output_reverse_length;
      typedef double _nominal_output_reverse_type;
      _nominal_output_reverse_type st_nominal_output_reverse;
      _nominal_output_reverse_type * nominal_output_reverse;
      uint32_t neutral_deadband_length;
      typedef double _neutral_deadband_type;
      _neutral_deadband_type st_neutral_deadband;
      _neutral_deadband_type * neutral_deadband;
      uint32_t voltage_compensation_saturation_length;
      typedef double _voltage_compensation_saturation_type;
      _voltage_compensation_saturation_type st_voltage_compensation_saturation;
      _voltage_compensation_saturation_type * voltage_compensation_saturation;
      uint32_t voltage_measurement_filter_length;
      typedef int32_t _voltage_measurement_filter_type;
      _voltage_measurement_filter_type st_voltage_measurement_filter;
      _voltage_measurement_filter_type * voltage_measurement_filter;
      uint32_t voltage_compensation_enable_length;
      typedef bool _voltage_compensation_enable_type;
      _voltage_compensation_enable_type st_voltage_compensation_enable;
      _voltage_compensation_enable_type * voltage_compensation_enable;
      uint32_t velocity_measurement_period_length;
      typedef int32_t _velocity_measurement_period_type;
      _velocity_measurement_period_type st_velocity_measurement_period;
      _velocity_measurement_period_type * velocity_measurement_period;
      uint32_t velocity_measurement_window_length;
      typedef int32_t _velocity_measurement_window_type;
      _velocity_measurement_window_type st_velocity_measurement_window;
      _velocity_measurement_window_type * velocity_measurement_window;
      uint32_t limit_switch_local_forward_source_length;
      typedef char* _limit_switch_local_forward_source_type;
      _limit_switch_local_forward_source_type st_limit_switch_local_forward_source;
      _limit_switch_local_forward_source_type * limit_switch_local_forward_source;
      uint32_t limit_switch_local_forward_normal_length;
      typedef char* _limit_switch_local_forward_normal_type;
      _limit_switch_local_forward_normal_type st_limit_switch_local_forward_normal;
      _limit_switch_local_forward_normal_type * limit_switch_local_forward_normal;
      uint32_t limit_switch_local_reverse_source_length;
      typedef char* _limit_switch_local_reverse_source_type;
      _limit_switch_local_reverse_source_type st_limit_switch_local_reverse_source;
      _limit_switch_local_reverse_source_type * limit_switch_local_reverse_source;
      uint32_t limit_switch_local_reverse_normal_length;
      typedef char* _limit_switch_local_reverse_normal_type;
      _limit_switch_local_reverse_normal_type st_limit_switch_local_reverse_normal;
      _limit_switch_local_reverse_normal_type * limit_switch_local_reverse_normal;
      uint32_t limit_switch_remote_forward_source_length;
      typedef char* _limit_switch_remote_forward_source_type;
      _limit_switch_remote_forward_source_type st_limit_switch_remote_forward_source;
      _limit_switch_remote_forward_source_type * limit_switch_remote_forward_source;
      uint32_t limit_switch_remote_forward_normal_length;
      typedef char* _limit_switch_remote_forward_normal_type;
      _limit_switch_remote_forward_normal_type st_limit_switch_remote_forward_normal;
      _limit_switch_remote_forward_normal_type * limit_switch_remote_forward_normal;
      uint32_t limit_switch_remote_forward_id_length;
      typedef uint8_t _limit_switch_remote_forward_id_type;
      _limit_switch_remote_forward_id_type st_limit_switch_remote_forward_id;
      _limit_switch_remote_forward_id_type * limit_switch_remote_forward_id;
      uint32_t limit_switch_remote_reverse_source_length;
      typedef char* _limit_switch_remote_reverse_source_type;
      _limit_switch_remote_reverse_source_type st_limit_switch_remote_reverse_source;
      _limit_switch_remote_reverse_source_type * limit_switch_remote_reverse_source;
      uint32_t limit_switch_remote_reverse_normal_length;
      typedef char* _limit_switch_remote_reverse_normal_type;
      _limit_switch_remote_reverse_normal_type st_limit_switch_remote_reverse_normal;
      _limit_switch_remote_reverse_normal_type * limit_switch_remote_reverse_normal;
      uint32_t limit_switch_remote_reverse_id_length;
      typedef uint8_t _limit_switch_remote_reverse_id_type;
      _limit_switch_remote_reverse_id_type st_limit_switch_remote_reverse_id;
      _limit_switch_remote_reverse_id_type * limit_switch_remote_reverse_id;
      uint32_t clear_position_on_limit_f_length;
      typedef bool _clear_position_on_limit_f_type;
      _clear_position_on_limit_f_type st_clear_position_on_limit_f;
      _clear_position_on_limit_f_type * clear_position_on_limit_f;
      uint32_t clear_position_on_limit_r_length;
      typedef bool _clear_position_on_limit_r_type;
      _clear_position_on_limit_r_type st_clear_position_on_limit_r;
      _clear_position_on_limit_r_type * clear_position_on_limit_r;
      uint32_t softlimit_forward_threshold_length;
      typedef double _softlimit_forward_threshold_type;
      _softlimit_forward_threshold_type st_softlimit_forward_threshold;
      _softlimit_forward_threshold_type * softlimit_forward_threshold;
      uint32_t softlimit_forward_enable_length;
      typedef bool _softlimit_forward_enable_type;
      _softlimit_forward_enable_type st_softlimit_forward_enable;
      _softlimit_forward_enable_type * softlimit_forward_enable;
      uint32_t softlimit_reverse_threshold_length;
      typedef double _softlimit_reverse_threshold_type;
      _softlimit_reverse_threshold_type st_softlimit_reverse_threshold;
      _softlimit_reverse_threshold_type * softlimit_reverse_threshold;
      uint32_t softlimit_reverse_enable_length;
      typedef bool _softlimit_reverse_enable_type;
      _softlimit_reverse_enable_type st_softlimit_reverse_enable;
      _softlimit_reverse_enable_type * softlimit_reverse_enable;
      uint32_t softlimits_override_enable_length;
      typedef bool _softlimits_override_enable_type;
      _softlimits_override_enable_type st_softlimits_override_enable;
      _softlimits_override_enable_type * softlimits_override_enable;
      uint32_t current_limit_peak_amps_length;
      typedef int32_t _current_limit_peak_amps_type;
      _current_limit_peak_amps_type st_current_limit_peak_amps;
      _current_limit_peak_amps_type * current_limit_peak_amps;
      uint32_t current_limit_peak_msec_length;
      typedef int32_t _current_limit_peak_msec_type;
      _current_limit_peak_msec_type st_current_limit_peak_msec;
      _current_limit_peak_msec_type * current_limit_peak_msec;
      uint32_t current_limit_continuous_amps_length;
      typedef int32_t _current_limit_continuous_amps_type;
      _current_limit_continuous_amps_type st_current_limit_continuous_amps;
      _current_limit_continuous_amps_type * current_limit_continuous_amps;
      uint32_t current_limit_enable_length;
      typedef bool _current_limit_enable_type;
      _current_limit_enable_type st_current_limit_enable;
      _current_limit_enable_type * current_limit_enable;
      uint32_t supply_current_limit_length;
      typedef double _supply_current_limit_type;
      _supply_current_limit_type st_supply_current_limit;
      _supply_current_limit_type * supply_current_limit;
      uint32_t supply_current_trigger_threshold_current_length;
      typedef double _supply_current_trigger_threshold_current_type;
      _supply_current_trigger_threshold_current_type st_supply_current_trigger_threshold_current;
      _supply_current_trigger_threshold_current_type * supply_current_trigger_threshold_current;
      uint32_t supply_current_trigger_threshold_time_length;
      typedef double _supply_current_trigger_threshold_time_type;
      _supply_current_trigger_threshold_time_type st_supply_current_trigger_threshold_time;
      _supply_current_trigger_threshold_time_type * supply_current_trigger_threshold_time;
      uint32_t supply_current_limit_enable_length;
      typedef bool _supply_current_limit_enable_type;
      _supply_current_limit_enable_type st_supply_current_limit_enable;
      _supply_current_limit_enable_type * supply_current_limit_enable;
      uint32_t stator_current_limit_length;
      typedef double _stator_current_limit_type;
      _stator_current_limit_type st_stator_current_limit;
      _stator_current_limit_type * stator_current_limit;
      uint32_t stator_current_trigger_threshold_current_length;
      typedef double _stator_current_trigger_threshold_current_type;
      _stator_current_trigger_threshold_current_type st_stator_current_trigger_threshold_current;
      _stator_current_trigger_threshold_current_type * stator_current_trigger_threshold_current;
      uint32_t stator_current_trigger_threshold_time_length;
      typedef double _stator_current_trigger_threshold_time_type;
      _stator_current_trigger_threshold_time_type st_stator_current_trigger_threshold_time;
      _stator_current_trigger_threshold_time_type * stator_current_trigger_threshold_time;
      uint32_t stator_current_limit_enable_length;
      typedef bool _stator_current_limit_enable_type;
      _stator_current_limit_enable_type st_stator_current_limit_enable;
      _stator_current_limit_enable_type * stator_current_limit_enable;
      uint32_t motion_cruise_velocity_length;
      typedef double _motion_cruise_velocity_type;
      _motion_cruise_velocity_type st_motion_cruise_velocity;
      _motion_cruise_velocity_type * motion_cruise_velocity;
      uint32_t motion_acceleration_length;
      typedef double _motion_acceleration_type;
      _motion_acceleration_type st_motion_acceleration;
      _motion_acceleration_type * motion_acceleration;
      uint32_t motion_s_curve_strength_length;
      typedef uint8_t _motion_s_curve_strength_type;
      _motion_s_curve_strength_type st_motion_s_curve_strength;
      _motion_s_curve_strength_type * motion_s_curve_strength;
      uint32_t status_1_general_period_length;
      typedef uint8_t _status_1_general_period_type;
      _status_1_general_period_type st_status_1_general_period;
      _status_1_general_period_type * status_1_general_period;
      uint32_t status_2_feedback0_period_length;
      typedef uint8_t _status_2_feedback0_period_type;
      _status_2_feedback0_period_type st_status_2_feedback0_period;
      _status_2_feedback0_period_type * status_2_feedback0_period;
      uint32_t status_3_quadrature_period_length;
      typedef uint8_t _status_3_quadrature_period_type;
      _status_3_quadrature_period_type st_status_3_quadrature_period;
      _status_3_quadrature_period_type * status_3_quadrature_period;
      uint32_t status_4_aintempvbat_period_length;
      typedef uint8_t _status_4_aintempvbat_period_type;
      _status_4_aintempvbat_period_type st_status_4_aintempvbat_period;
      _status_4_aintempvbat_period_type * status_4_aintempvbat_period;
      uint32_t status_6_misc_period_length;
      typedef uint8_t _status_6_misc_period_type;
      _status_6_misc_period_type st_status_6_misc_period;
      _status_6_misc_period_type * status_6_misc_period;
      uint32_t status_7_commstatus_period_length;
      typedef uint8_t _status_7_commstatus_period_type;
      _status_7_commstatus_period_type st_status_7_commstatus_period;
      _status_7_commstatus_period_type * status_7_commstatus_period;
      uint32_t status_8_pulsewidth_period_length;
      typedef uint8_t _status_8_pulsewidth_period_type;
      _status_8_pulsewidth_period_type st_status_8_pulsewidth_period;
      _status_8_pulsewidth_period_type * status_8_pulsewidth_period;
      uint32_t status_9_motprofbuffer_period_length;
      typedef uint8_t _status_9_motprofbuffer_period_type;
      _status_9_motprofbuffer_period_type st_status_9_motprofbuffer_period;
      _status_9_motprofbuffer_period_type * status_9_motprofbuffer_period;
      uint32_t status_10_motionmagic_period_length;
      typedef uint8_t _status_10_motionmagic_period_type;
      _status_10_motionmagic_period_type st_status_10_motionmagic_period;
      _status_10_motionmagic_period_type * status_10_motionmagic_period;
      uint32_t status_11_uartgadgeteer_period_length;
      typedef uint8_t _status_11_uartgadgeteer_period_type;
      _status_11_uartgadgeteer_period_type st_status_11_uartgadgeteer_period;
      _status_11_uartgadgeteer_period_type * status_11_uartgadgeteer_period;
      uint32_t status_12_feedback1_period_length;
      typedef uint8_t _status_12_feedback1_period_type;
      _status_12_feedback1_period_type st_status_12_feedback1_period;
      _status_12_feedback1_period_type * status_12_feedback1_period;
      uint32_t status_13_base_pidf0_period_length;
      typedef uint8_t _status_13_base_pidf0_period_type;
      _status_13_base_pidf0_period_type st_status_13_base_pidf0_period;
      _status_13_base_pidf0_period_type * status_13_base_pidf0_period;
      uint32_t status_14_turn_pidf1_period_length;
      typedef uint8_t _status_14_turn_pidf1_period_type;
      _status_14_turn_pidf1_period_type st_status_14_turn_pidf1_period;
      _status_14_turn_pidf1_period_type * status_14_turn_pidf1_period;
      uint32_t status_15_firmwareapistatus_period_length;
      typedef uint8_t _status_15_firmwareapistatus_period_type;
      _status_15_firmwareapistatus_period_type st_status_15_firmwareapistatus_period;
      _status_15_firmwareapistatus_period_type * status_15_firmwareapistatus_period;
      uint32_t status_17_targets1_period_length;
      typedef uint8_t _status_17_targets1_period_type;
      _status_17_targets1_period_type st_status_17_targets1_period;
      _status_17_targets1_period_type * status_17_targets1_period;
      uint32_t status_brushless_current_period_length;
      typedef uint8_t _status_brushless_current_period_type;
      _status_brushless_current_period_type st_status_brushless_current_period;
      _status_brushless_current_period_type * status_brushless_current_period;
      uint32_t control_3_general_period_length;
      typedef uint8_t _control_3_general_period_type;
      _control_3_general_period_type st_control_3_general_period;
      _control_3_general_period_type * control_3_general_period;
      uint32_t control_4_advanced_period_length;
      typedef uint8_t _control_4_advanced_period_type;
      _control_4_advanced_period_type st_control_4_advanced_period;
      _control_4_advanced_period_type * control_4_advanced_period;
      uint32_t control_5_feedbackoutputoverride_period_length;
      typedef uint8_t _control_5_feedbackoutputoverride_period_type;
      _control_5_feedbackoutputoverride_period_type st_control_5_feedbackoutputoverride_period;
      _control_5_feedbackoutputoverride_period_type * control_5_feedbackoutputoverride_period;
      uint32_t control_6_motprofaddtrajpoint_period_length;
      typedef uint8_t _control_6_motprofaddtrajpoint_period_type;
      _control_6_motprofaddtrajpoint_period_type st_control_6_motprofaddtrajpoint_period;
      _control_6_motprofaddtrajpoint_period_type * control_6_motprofaddtrajpoint_period;
      uint32_t motion_profile_trajectory_period_length;
      typedef double _motion_profile_trajectory_period_type;
      _motion_profile_trajectory_period_type st_motion_profile_trajectory_period;
      _motion_profile_trajectory_period_type * motion_profile_trajectory_period;
      uint32_t conversion_factor_length;
      typedef double _conversion_factor_type;
      _conversion_factor_type st_conversion_factor;
      _conversion_factor_type * conversion_factor;
      uint32_t motor_commutation_length;
      typedef char* _motor_commutation_type;
      _motor_commutation_type st_motor_commutation;
      _motor_commutation_type * motor_commutation;
      uint32_t absolute_sensor_range_length;
      typedef char* _absolute_sensor_range_type;
      _absolute_sensor_range_type st_absolute_sensor_range;
      _absolute_sensor_range_type * absolute_sensor_range;
      uint32_t sensor_initialization_strategy_length;
      typedef char* _sensor_initialization_strategy_type;
      _sensor_initialization_strategy_type st_sensor_initialization_strategy;
      _sensor_initialization_strategy_type * sensor_initialization_strategy;
      uint32_t firmware_version_length;
      typedef char* _firmware_version_type;
      _firmware_version_type st_firmware_version;
      _firmware_version_type * firmware_version;
      uint32_t water_game_length;
      typedef bool _water_game_type;
      _water_game_type st_water_game;
      _water_game_type * water_game;

    TalonConfig():
      header(),
      name_length(0), st_name(), name(nullptr),
      can_id_length(0), st_can_id(), can_id(nullptr),
      feedback_coefficient_length(0), st_feedback_coefficient(), feedback_coefficient(nullptr),
      feedback_sensor_length(0), st_feedback_sensor(), feedback_sensor(nullptr),
      remote_feedback_sensor_length(0), st_remote_feedback_sensor(), remote_feedback_sensor(nullptr),
      remote_feedback_device_id0_length(0), st_remote_feedback_device_id0(), remote_feedback_device_id0(nullptr),
      remote_feedback_filter0_length(0), st_remote_feedback_filter0(), remote_feedback_filter0(nullptr),
      remote_feedback_device_id1_length(0), st_remote_feedback_device_id1(), remote_feedback_device_id1(nullptr),
      remote_feedback_filter1_length(0), st_remote_feedback_filter1(), remote_feedback_filter1(nullptr),
      sensor_term_sum0_length(0), st_sensor_term_sum0(), sensor_term_sum0(nullptr),
      sensor_term_sum1_length(0), st_sensor_term_sum1(), sensor_term_sum1(nullptr),
      sensor_term_diff0_length(0), st_sensor_term_diff0(), sensor_term_diff0(nullptr),
      sensor_term_diff1_length(0), st_sensor_term_diff1(), sensor_term_diff1(nullptr),
      encoder_ticks_per_rotation_length(0), st_encoder_ticks_per_rotation(), encoder_ticks_per_rotation(nullptr),
      pid_slot_length(0), st_pid_slot(), pid_slot(nullptr),
      pid_p0_length(0), st_pid_p0(), pid_p0(nullptr),
      pid_i0_length(0), st_pid_i0(), pid_i0(nullptr),
      pid_d0_length(0), st_pid_d0(), pid_d0(nullptr),
      pid_f0_length(0), st_pid_f0(), pid_f0(nullptr),
      pid_izone0_length(0), st_pid_izone0(), pid_izone0(nullptr),
      pid_allowable_closed_loop_error0_length(0), st_pid_allowable_closed_loop_error0(), pid_allowable_closed_loop_error0(nullptr),
      pid_max_integral_accumulator0_length(0), st_pid_max_integral_accumulator0(), pid_max_integral_accumulator0(nullptr),
      pid_closed_loop_peak_output0_length(0), st_pid_closed_loop_peak_output0(), pid_closed_loop_peak_output0(nullptr),
      pid_closed_loop_period0_length(0), st_pid_closed_loop_period0(), pid_closed_loop_period0(nullptr),
      pid_p1_length(0), st_pid_p1(), pid_p1(nullptr),
      pid_i1_length(0), st_pid_i1(), pid_i1(nullptr),
      pid_d1_length(0), st_pid_d1(), pid_d1(nullptr),
      pid_f1_length(0), st_pid_f1(), pid_f1(nullptr),
      pid_izone1_length(0), st_pid_izone1(), pid_izone1(nullptr),
      pid_allowable_closed_loop_error1_length(0), st_pid_allowable_closed_loop_error1(), pid_allowable_closed_loop_error1(nullptr),
      pid_max_integral_accumulator1_length(0), st_pid_max_integral_accumulator1(), pid_max_integral_accumulator1(nullptr),
      pid_closed_loop_peak_output1_length(0), st_pid_closed_loop_peak_output1(), pid_closed_loop_peak_output1(nullptr),
      pid_closed_loop_period1_length(0), st_pid_closed_loop_period1(), pid_closed_loop_period1(nullptr),
      pid_p2_length(0), st_pid_p2(), pid_p2(nullptr),
      pid_i2_length(0), st_pid_i2(), pid_i2(nullptr),
      pid_d2_length(0), st_pid_d2(), pid_d2(nullptr),
      pid_f2_length(0), st_pid_f2(), pid_f2(nullptr),
      pid_izone2_length(0), st_pid_izone2(), pid_izone2(nullptr),
      pid_allowable_closed_loop_error2_length(0), st_pid_allowable_closed_loop_error2(), pid_allowable_closed_loop_error2(nullptr),
      pid_max_integral_accumulator2_length(0), st_pid_max_integral_accumulator2(), pid_max_integral_accumulator2(nullptr),
      pid_closed_loop_peak_output2_length(0), st_pid_closed_loop_peak_output2(), pid_closed_loop_peak_output2(nullptr),
      pid_closed_loop_period2_length(0), st_pid_closed_loop_period2(), pid_closed_loop_period2(nullptr),
      pid_p3_length(0), st_pid_p3(), pid_p3(nullptr),
      pid_i3_length(0), st_pid_i3(), pid_i3(nullptr),
      pid_d3_length(0), st_pid_d3(), pid_d3(nullptr),
      pid_f3_length(0), st_pid_f3(), pid_f3(nullptr),
      pid_izone3_length(0), st_pid_izone3(), pid_izone3(nullptr),
      pid_allowable_closed_loop_error3_length(0), st_pid_allowable_closed_loop_error3(), pid_allowable_closed_loop_error3(nullptr),
      pid_max_integral_accumulator3_length(0), st_pid_max_integral_accumulator3(), pid_max_integral_accumulator3(nullptr),
      pid_closed_loop_peak_output3_length(0), st_pid_closed_loop_peak_output3(), pid_closed_loop_peak_output3(nullptr),
      pid_closed_loop_period3_length(0), st_pid_closed_loop_period3(), pid_closed_loop_period3(nullptr),
      aux_pid_polarity_length(0), st_aux_pid_polarity(), aux_pid_polarity(nullptr),
      invert_length(0), st_invert(), invert(nullptr),
      sensorPhase_length(0), st_sensorPhase(), sensorPhase(nullptr),
      neutral_mode_length(0), st_neutral_mode(), neutral_mode(nullptr),
      closed_loop_ramp_length(0), st_closed_loop_ramp(), closed_loop_ramp(nullptr),
      open_loop_ramp_length(0), st_open_loop_ramp(), open_loop_ramp(nullptr),
      peak_output_forward_length(0), st_peak_output_forward(), peak_output_forward(nullptr),
      peak_output_reverse_length(0), st_peak_output_reverse(), peak_output_reverse(nullptr),
      nominal_output_forward_length(0), st_nominal_output_forward(), nominal_output_forward(nullptr),
      nominal_output_reverse_length(0), st_nominal_output_reverse(), nominal_output_reverse(nullptr),
      neutral_deadband_length(0), st_neutral_deadband(), neutral_deadband(nullptr),
      voltage_compensation_saturation_length(0), st_voltage_compensation_saturation(), voltage_compensation_saturation(nullptr),
      voltage_measurement_filter_length(0), st_voltage_measurement_filter(), voltage_measurement_filter(nullptr),
      voltage_compensation_enable_length(0), st_voltage_compensation_enable(), voltage_compensation_enable(nullptr),
      velocity_measurement_period_length(0), st_velocity_measurement_period(), velocity_measurement_period(nullptr),
      velocity_measurement_window_length(0), st_velocity_measurement_window(), velocity_measurement_window(nullptr),
      limit_switch_local_forward_source_length(0), st_limit_switch_local_forward_source(), limit_switch_local_forward_source(nullptr),
      limit_switch_local_forward_normal_length(0), st_limit_switch_local_forward_normal(), limit_switch_local_forward_normal(nullptr),
      limit_switch_local_reverse_source_length(0), st_limit_switch_local_reverse_source(), limit_switch_local_reverse_source(nullptr),
      limit_switch_local_reverse_normal_length(0), st_limit_switch_local_reverse_normal(), limit_switch_local_reverse_normal(nullptr),
      limit_switch_remote_forward_source_length(0), st_limit_switch_remote_forward_source(), limit_switch_remote_forward_source(nullptr),
      limit_switch_remote_forward_normal_length(0), st_limit_switch_remote_forward_normal(), limit_switch_remote_forward_normal(nullptr),
      limit_switch_remote_forward_id_length(0), st_limit_switch_remote_forward_id(), limit_switch_remote_forward_id(nullptr),
      limit_switch_remote_reverse_source_length(0), st_limit_switch_remote_reverse_source(), limit_switch_remote_reverse_source(nullptr),
      limit_switch_remote_reverse_normal_length(0), st_limit_switch_remote_reverse_normal(), limit_switch_remote_reverse_normal(nullptr),
      limit_switch_remote_reverse_id_length(0), st_limit_switch_remote_reverse_id(), limit_switch_remote_reverse_id(nullptr),
      clear_position_on_limit_f_length(0), st_clear_position_on_limit_f(), clear_position_on_limit_f(nullptr),
      clear_position_on_limit_r_length(0), st_clear_position_on_limit_r(), clear_position_on_limit_r(nullptr),
      softlimit_forward_threshold_length(0), st_softlimit_forward_threshold(), softlimit_forward_threshold(nullptr),
      softlimit_forward_enable_length(0), st_softlimit_forward_enable(), softlimit_forward_enable(nullptr),
      softlimit_reverse_threshold_length(0), st_softlimit_reverse_threshold(), softlimit_reverse_threshold(nullptr),
      softlimit_reverse_enable_length(0), st_softlimit_reverse_enable(), softlimit_reverse_enable(nullptr),
      softlimits_override_enable_length(0), st_softlimits_override_enable(), softlimits_override_enable(nullptr),
      current_limit_peak_amps_length(0), st_current_limit_peak_amps(), current_limit_peak_amps(nullptr),
      current_limit_peak_msec_length(0), st_current_limit_peak_msec(), current_limit_peak_msec(nullptr),
      current_limit_continuous_amps_length(0), st_current_limit_continuous_amps(), current_limit_continuous_amps(nullptr),
      current_limit_enable_length(0), st_current_limit_enable(), current_limit_enable(nullptr),
      supply_current_limit_length(0), st_supply_current_limit(), supply_current_limit(nullptr),
      supply_current_trigger_threshold_current_length(0), st_supply_current_trigger_threshold_current(), supply_current_trigger_threshold_current(nullptr),
      supply_current_trigger_threshold_time_length(0), st_supply_current_trigger_threshold_time(), supply_current_trigger_threshold_time(nullptr),
      supply_current_limit_enable_length(0), st_supply_current_limit_enable(), supply_current_limit_enable(nullptr),
      stator_current_limit_length(0), st_stator_current_limit(), stator_current_limit(nullptr),
      stator_current_trigger_threshold_current_length(0), st_stator_current_trigger_threshold_current(), stator_current_trigger_threshold_current(nullptr),
      stator_current_trigger_threshold_time_length(0), st_stator_current_trigger_threshold_time(), stator_current_trigger_threshold_time(nullptr),
      stator_current_limit_enable_length(0), st_stator_current_limit_enable(), stator_current_limit_enable(nullptr),
      motion_cruise_velocity_length(0), st_motion_cruise_velocity(), motion_cruise_velocity(nullptr),
      motion_acceleration_length(0), st_motion_acceleration(), motion_acceleration(nullptr),
      motion_s_curve_strength_length(0), st_motion_s_curve_strength(), motion_s_curve_strength(nullptr),
      status_1_general_period_length(0), st_status_1_general_period(), status_1_general_period(nullptr),
      status_2_feedback0_period_length(0), st_status_2_feedback0_period(), status_2_feedback0_period(nullptr),
      status_3_quadrature_period_length(0), st_status_3_quadrature_period(), status_3_quadrature_period(nullptr),
      status_4_aintempvbat_period_length(0), st_status_4_aintempvbat_period(), status_4_aintempvbat_period(nullptr),
      status_6_misc_period_length(0), st_status_6_misc_period(), status_6_misc_period(nullptr),
      status_7_commstatus_period_length(0), st_status_7_commstatus_period(), status_7_commstatus_period(nullptr),
      status_8_pulsewidth_period_length(0), st_status_8_pulsewidth_period(), status_8_pulsewidth_period(nullptr),
      status_9_motprofbuffer_period_length(0), st_status_9_motprofbuffer_period(), status_9_motprofbuffer_period(nullptr),
      status_10_motionmagic_period_length(0), st_status_10_motionmagic_period(), status_10_motionmagic_period(nullptr),
      status_11_uartgadgeteer_period_length(0), st_status_11_uartgadgeteer_period(), status_11_uartgadgeteer_period(nullptr),
      status_12_feedback1_period_length(0), st_status_12_feedback1_period(), status_12_feedback1_period(nullptr),
      status_13_base_pidf0_period_length(0), st_status_13_base_pidf0_period(), status_13_base_pidf0_period(nullptr),
      status_14_turn_pidf1_period_length(0), st_status_14_turn_pidf1_period(), status_14_turn_pidf1_period(nullptr),
      status_15_firmwareapistatus_period_length(0), st_status_15_firmwareapistatus_period(), status_15_firmwareapistatus_period(nullptr),
      status_17_targets1_period_length(0), st_status_17_targets1_period(), status_17_targets1_period(nullptr),
      status_brushless_current_period_length(0), st_status_brushless_current_period(), status_brushless_current_period(nullptr),
      control_3_general_period_length(0), st_control_3_general_period(), control_3_general_period(nullptr),
      control_4_advanced_period_length(0), st_control_4_advanced_period(), control_4_advanced_period(nullptr),
      control_5_feedbackoutputoverride_period_length(0), st_control_5_feedbackoutputoverride_period(), control_5_feedbackoutputoverride_period(nullptr),
      control_6_motprofaddtrajpoint_period_length(0), st_control_6_motprofaddtrajpoint_period(), control_6_motprofaddtrajpoint_period(nullptr),
      motion_profile_trajectory_period_length(0), st_motion_profile_trajectory_period(), motion_profile_trajectory_period(nullptr),
      conversion_factor_length(0), st_conversion_factor(), conversion_factor(nullptr),
      motor_commutation_length(0), st_motor_commutation(), motor_commutation(nullptr),
      absolute_sensor_range_length(0), st_absolute_sensor_range(), absolute_sensor_range(nullptr),
      sensor_initialization_strategy_length(0), st_sensor_initialization_strategy(), sensor_initialization_strategy(nullptr),
      firmware_version_length(0), st_firmware_version(), firmware_version(nullptr),
      water_game_length(0), st_water_game(), water_game(nullptr)
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
      *(outbuffer + offset + 0) = (this->can_id_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->can_id_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->can_id_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->can_id_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->can_id_length);
      for( uint32_t i = 0; i < can_id_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_can_idi;
      u_can_idi.real = this->can_id[i];
      *(outbuffer + offset + 0) = (u_can_idi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->can_id[i]);
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
      *(outbuffer + offset + 0) = (this->feedback_sensor_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->feedback_sensor_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->feedback_sensor_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->feedback_sensor_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->feedback_sensor_length);
      for( uint32_t i = 0; i < feedback_sensor_length; i++){
      uint32_t length_feedback_sensori = strlen(this->feedback_sensor[i]);
      varToArr(outbuffer + offset, length_feedback_sensori);
      offset += 4;
      memcpy(outbuffer + offset, this->feedback_sensor[i], length_feedback_sensori);
      offset += length_feedback_sensori;
      }
      *(outbuffer + offset + 0) = (this->remote_feedback_sensor_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->remote_feedback_sensor_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->remote_feedback_sensor_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->remote_feedback_sensor_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->remote_feedback_sensor_length);
      for( uint32_t i = 0; i < remote_feedback_sensor_length; i++){
      uint32_t length_remote_feedback_sensori = strlen(this->remote_feedback_sensor[i]);
      varToArr(outbuffer + offset, length_remote_feedback_sensori);
      offset += 4;
      memcpy(outbuffer + offset, this->remote_feedback_sensor[i], length_remote_feedback_sensori);
      offset += length_remote_feedback_sensori;
      }
      *(outbuffer + offset + 0) = (this->remote_feedback_device_id0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->remote_feedback_device_id0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->remote_feedback_device_id0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->remote_feedback_device_id0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->remote_feedback_device_id0_length);
      for( uint32_t i = 0; i < remote_feedback_device_id0_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_remote_feedback_device_id0i;
      u_remote_feedback_device_id0i.real = this->remote_feedback_device_id0[i];
      *(outbuffer + offset + 0) = (u_remote_feedback_device_id0i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->remote_feedback_device_id0[i]);
      }
      *(outbuffer + offset + 0) = (this->remote_feedback_filter0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->remote_feedback_filter0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->remote_feedback_filter0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->remote_feedback_filter0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->remote_feedback_filter0_length);
      for( uint32_t i = 0; i < remote_feedback_filter0_length; i++){
      uint32_t length_remote_feedback_filter0i = strlen(this->remote_feedback_filter0[i]);
      varToArr(outbuffer + offset, length_remote_feedback_filter0i);
      offset += 4;
      memcpy(outbuffer + offset, this->remote_feedback_filter0[i], length_remote_feedback_filter0i);
      offset += length_remote_feedback_filter0i;
      }
      *(outbuffer + offset + 0) = (this->remote_feedback_device_id1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->remote_feedback_device_id1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->remote_feedback_device_id1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->remote_feedback_device_id1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->remote_feedback_device_id1_length);
      for( uint32_t i = 0; i < remote_feedback_device_id1_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_remote_feedback_device_id1i;
      u_remote_feedback_device_id1i.real = this->remote_feedback_device_id1[i];
      *(outbuffer + offset + 0) = (u_remote_feedback_device_id1i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->remote_feedback_device_id1[i]);
      }
      *(outbuffer + offset + 0) = (this->remote_feedback_filter1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->remote_feedback_filter1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->remote_feedback_filter1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->remote_feedback_filter1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->remote_feedback_filter1_length);
      for( uint32_t i = 0; i < remote_feedback_filter1_length; i++){
      uint32_t length_remote_feedback_filter1i = strlen(this->remote_feedback_filter1[i]);
      varToArr(outbuffer + offset, length_remote_feedback_filter1i);
      offset += 4;
      memcpy(outbuffer + offset, this->remote_feedback_filter1[i], length_remote_feedback_filter1i);
      offset += length_remote_feedback_filter1i;
      }
      *(outbuffer + offset + 0) = (this->sensor_term_sum0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->sensor_term_sum0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->sensor_term_sum0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->sensor_term_sum0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sensor_term_sum0_length);
      for( uint32_t i = 0; i < sensor_term_sum0_length; i++){
      uint32_t length_sensor_term_sum0i = strlen(this->sensor_term_sum0[i]);
      varToArr(outbuffer + offset, length_sensor_term_sum0i);
      offset += 4;
      memcpy(outbuffer + offset, this->sensor_term_sum0[i], length_sensor_term_sum0i);
      offset += length_sensor_term_sum0i;
      }
      *(outbuffer + offset + 0) = (this->sensor_term_sum1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->sensor_term_sum1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->sensor_term_sum1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->sensor_term_sum1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sensor_term_sum1_length);
      for( uint32_t i = 0; i < sensor_term_sum1_length; i++){
      uint32_t length_sensor_term_sum1i = strlen(this->sensor_term_sum1[i]);
      varToArr(outbuffer + offset, length_sensor_term_sum1i);
      offset += 4;
      memcpy(outbuffer + offset, this->sensor_term_sum1[i], length_sensor_term_sum1i);
      offset += length_sensor_term_sum1i;
      }
      *(outbuffer + offset + 0) = (this->sensor_term_diff0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->sensor_term_diff0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->sensor_term_diff0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->sensor_term_diff0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sensor_term_diff0_length);
      for( uint32_t i = 0; i < sensor_term_diff0_length; i++){
      uint32_t length_sensor_term_diff0i = strlen(this->sensor_term_diff0[i]);
      varToArr(outbuffer + offset, length_sensor_term_diff0i);
      offset += 4;
      memcpy(outbuffer + offset, this->sensor_term_diff0[i], length_sensor_term_diff0i);
      offset += length_sensor_term_diff0i;
      }
      *(outbuffer + offset + 0) = (this->sensor_term_diff1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->sensor_term_diff1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->sensor_term_diff1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->sensor_term_diff1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sensor_term_diff1_length);
      for( uint32_t i = 0; i < sensor_term_diff1_length; i++){
      uint32_t length_sensor_term_diff1i = strlen(this->sensor_term_diff1[i]);
      varToArr(outbuffer + offset, length_sensor_term_diff1i);
      offset += 4;
      memcpy(outbuffer + offset, this->sensor_term_diff1[i], length_sensor_term_diff1i);
      offset += length_sensor_term_diff1i;
      }
      *(outbuffer + offset + 0) = (this->encoder_ticks_per_rotation_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->encoder_ticks_per_rotation_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->encoder_ticks_per_rotation_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->encoder_ticks_per_rotation_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoder_ticks_per_rotation_length);
      for( uint32_t i = 0; i < encoder_ticks_per_rotation_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_encoder_ticks_per_rotationi;
      u_encoder_ticks_per_rotationi.real = this->encoder_ticks_per_rotation[i];
      *(outbuffer + offset + 0) = (u_encoder_ticks_per_rotationi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_encoder_ticks_per_rotationi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_encoder_ticks_per_rotationi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_encoder_ticks_per_rotationi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->encoder_ticks_per_rotation[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_slot_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_slot_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_slot_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_slot_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_slot_length);
      for( uint32_t i = 0; i < pid_slot_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pid_sloti;
      u_pid_sloti.real = this->pid_slot[i];
      *(outbuffer + offset + 0) = (u_pid_sloti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_sloti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_sloti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_sloti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_slot[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_p0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_p0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_p0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_p0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_p0_length);
      for( uint32_t i = 0; i < pid_p0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_p0i;
      u_pid_p0i.real = this->pid_p0[i];
      *(outbuffer + offset + 0) = (u_pid_p0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_p0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_p0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_p0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_p0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_p0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_p0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_p0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_p0[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_i0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_i0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_i0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_i0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_i0_length);
      for( uint32_t i = 0; i < pid_i0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_i0i;
      u_pid_i0i.real = this->pid_i0[i];
      *(outbuffer + offset + 0) = (u_pid_i0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_i0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_i0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_i0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_i0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_i0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_i0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_i0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_i0[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_d0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_d0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_d0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_d0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_d0_length);
      for( uint32_t i = 0; i < pid_d0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_d0i;
      u_pid_d0i.real = this->pid_d0[i];
      *(outbuffer + offset + 0) = (u_pid_d0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_d0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_d0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_d0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_d0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_d0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_d0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_d0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_d0[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_f0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_f0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_f0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_f0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_f0_length);
      for( uint32_t i = 0; i < pid_f0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_f0i;
      u_pid_f0i.real = this->pid_f0[i];
      *(outbuffer + offset + 0) = (u_pid_f0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_f0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_f0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_f0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_f0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_f0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_f0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_f0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_f0[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_izone0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_izone0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_izone0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_izone0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_izone0_length);
      for( uint32_t i = 0; i < pid_izone0_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pid_izone0i;
      u_pid_izone0i.real = this->pid_izone0[i];
      *(outbuffer + offset + 0) = (u_pid_izone0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_izone0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_izone0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_izone0i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_izone0[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_allowable_closed_loop_error0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_allowable_closed_loop_error0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_allowable_closed_loop_error0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_allowable_closed_loop_error0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_allowable_closed_loop_error0_length);
      for( uint32_t i = 0; i < pid_allowable_closed_loop_error0_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pid_allowable_closed_loop_error0i;
      u_pid_allowable_closed_loop_error0i.real = this->pid_allowable_closed_loop_error0[i];
      *(outbuffer + offset + 0) = (u_pid_allowable_closed_loop_error0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_allowable_closed_loop_error0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_allowable_closed_loop_error0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_allowable_closed_loop_error0i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_allowable_closed_loop_error0[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_max_integral_accumulator0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_max_integral_accumulator0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_max_integral_accumulator0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_max_integral_accumulator0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_max_integral_accumulator0_length);
      for( uint32_t i = 0; i < pid_max_integral_accumulator0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_max_integral_accumulator0i;
      u_pid_max_integral_accumulator0i.real = this->pid_max_integral_accumulator0[i];
      *(outbuffer + offset + 0) = (u_pid_max_integral_accumulator0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_max_integral_accumulator0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_max_integral_accumulator0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_max_integral_accumulator0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_max_integral_accumulator0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_max_integral_accumulator0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_max_integral_accumulator0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_max_integral_accumulator0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_max_integral_accumulator0[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_closed_loop_peak_output0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_closed_loop_peak_output0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_closed_loop_peak_output0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_closed_loop_peak_output0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_peak_output0_length);
      for( uint32_t i = 0; i < pid_closed_loop_peak_output0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_closed_loop_peak_output0i;
      u_pid_closed_loop_peak_output0i.real = this->pid_closed_loop_peak_output0[i];
      *(outbuffer + offset + 0) = (u_pid_closed_loop_peak_output0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_closed_loop_peak_output0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_closed_loop_peak_output0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_closed_loop_peak_output0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_closed_loop_peak_output0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_closed_loop_peak_output0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_closed_loop_peak_output0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_closed_loop_peak_output0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_peak_output0[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_closed_loop_period0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_closed_loop_period0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_closed_loop_period0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_closed_loop_period0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_period0_length);
      for( uint32_t i = 0; i < pid_closed_loop_period0_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pid_closed_loop_period0i;
      u_pid_closed_loop_period0i.real = this->pid_closed_loop_period0[i];
      *(outbuffer + offset + 0) = (u_pid_closed_loop_period0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_closed_loop_period0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_closed_loop_period0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_closed_loop_period0i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_period0[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_p1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_p1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_p1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_p1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_p1_length);
      for( uint32_t i = 0; i < pid_p1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_p1i;
      u_pid_p1i.real = this->pid_p1[i];
      *(outbuffer + offset + 0) = (u_pid_p1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_p1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_p1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_p1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_p1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_p1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_p1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_p1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_p1[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_i1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_i1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_i1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_i1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_i1_length);
      for( uint32_t i = 0; i < pid_i1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_i1i;
      u_pid_i1i.real = this->pid_i1[i];
      *(outbuffer + offset + 0) = (u_pid_i1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_i1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_i1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_i1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_i1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_i1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_i1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_i1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_i1[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_d1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_d1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_d1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_d1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_d1_length);
      for( uint32_t i = 0; i < pid_d1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_d1i;
      u_pid_d1i.real = this->pid_d1[i];
      *(outbuffer + offset + 0) = (u_pid_d1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_d1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_d1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_d1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_d1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_d1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_d1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_d1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_d1[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_f1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_f1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_f1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_f1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_f1_length);
      for( uint32_t i = 0; i < pid_f1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_f1i;
      u_pid_f1i.real = this->pid_f1[i];
      *(outbuffer + offset + 0) = (u_pid_f1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_f1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_f1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_f1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_f1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_f1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_f1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_f1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_f1[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_izone1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_izone1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_izone1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_izone1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_izone1_length);
      for( uint32_t i = 0; i < pid_izone1_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pid_izone1i;
      u_pid_izone1i.real = this->pid_izone1[i];
      *(outbuffer + offset + 0) = (u_pid_izone1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_izone1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_izone1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_izone1i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_izone1[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_allowable_closed_loop_error1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_allowable_closed_loop_error1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_allowable_closed_loop_error1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_allowable_closed_loop_error1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_allowable_closed_loop_error1_length);
      for( uint32_t i = 0; i < pid_allowable_closed_loop_error1_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pid_allowable_closed_loop_error1i;
      u_pid_allowable_closed_loop_error1i.real = this->pid_allowable_closed_loop_error1[i];
      *(outbuffer + offset + 0) = (u_pid_allowable_closed_loop_error1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_allowable_closed_loop_error1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_allowable_closed_loop_error1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_allowable_closed_loop_error1i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_allowable_closed_loop_error1[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_max_integral_accumulator1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_max_integral_accumulator1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_max_integral_accumulator1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_max_integral_accumulator1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_max_integral_accumulator1_length);
      for( uint32_t i = 0; i < pid_max_integral_accumulator1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_max_integral_accumulator1i;
      u_pid_max_integral_accumulator1i.real = this->pid_max_integral_accumulator1[i];
      *(outbuffer + offset + 0) = (u_pid_max_integral_accumulator1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_max_integral_accumulator1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_max_integral_accumulator1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_max_integral_accumulator1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_max_integral_accumulator1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_max_integral_accumulator1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_max_integral_accumulator1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_max_integral_accumulator1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_max_integral_accumulator1[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_closed_loop_peak_output1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_closed_loop_peak_output1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_closed_loop_peak_output1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_closed_loop_peak_output1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_peak_output1_length);
      for( uint32_t i = 0; i < pid_closed_loop_peak_output1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_closed_loop_peak_output1i;
      u_pid_closed_loop_peak_output1i.real = this->pid_closed_loop_peak_output1[i];
      *(outbuffer + offset + 0) = (u_pid_closed_loop_peak_output1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_closed_loop_peak_output1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_closed_loop_peak_output1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_closed_loop_peak_output1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_closed_loop_peak_output1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_closed_loop_peak_output1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_closed_loop_peak_output1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_closed_loop_peak_output1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_peak_output1[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_closed_loop_period1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_closed_loop_period1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_closed_loop_period1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_closed_loop_period1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_period1_length);
      for( uint32_t i = 0; i < pid_closed_loop_period1_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pid_closed_loop_period1i;
      u_pid_closed_loop_period1i.real = this->pid_closed_loop_period1[i];
      *(outbuffer + offset + 0) = (u_pid_closed_loop_period1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_closed_loop_period1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_closed_loop_period1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_closed_loop_period1i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_period1[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_p2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_p2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_p2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_p2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_p2_length);
      for( uint32_t i = 0; i < pid_p2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_p2i;
      u_pid_p2i.real = this->pid_p2[i];
      *(outbuffer + offset + 0) = (u_pid_p2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_p2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_p2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_p2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_p2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_p2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_p2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_p2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_p2[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_i2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_i2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_i2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_i2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_i2_length);
      for( uint32_t i = 0; i < pid_i2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_i2i;
      u_pid_i2i.real = this->pid_i2[i];
      *(outbuffer + offset + 0) = (u_pid_i2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_i2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_i2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_i2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_i2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_i2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_i2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_i2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_i2[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_d2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_d2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_d2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_d2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_d2_length);
      for( uint32_t i = 0; i < pid_d2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_d2i;
      u_pid_d2i.real = this->pid_d2[i];
      *(outbuffer + offset + 0) = (u_pid_d2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_d2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_d2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_d2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_d2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_d2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_d2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_d2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_d2[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_f2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_f2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_f2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_f2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_f2_length);
      for( uint32_t i = 0; i < pid_f2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_f2i;
      u_pid_f2i.real = this->pid_f2[i];
      *(outbuffer + offset + 0) = (u_pid_f2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_f2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_f2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_f2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_f2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_f2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_f2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_f2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_f2[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_izone2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_izone2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_izone2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_izone2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_izone2_length);
      for( uint32_t i = 0; i < pid_izone2_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pid_izone2i;
      u_pid_izone2i.real = this->pid_izone2[i];
      *(outbuffer + offset + 0) = (u_pid_izone2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_izone2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_izone2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_izone2i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_izone2[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_allowable_closed_loop_error2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_allowable_closed_loop_error2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_allowable_closed_loop_error2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_allowable_closed_loop_error2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_allowable_closed_loop_error2_length);
      for( uint32_t i = 0; i < pid_allowable_closed_loop_error2_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pid_allowable_closed_loop_error2i;
      u_pid_allowable_closed_loop_error2i.real = this->pid_allowable_closed_loop_error2[i];
      *(outbuffer + offset + 0) = (u_pid_allowable_closed_loop_error2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_allowable_closed_loop_error2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_allowable_closed_loop_error2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_allowable_closed_loop_error2i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_allowable_closed_loop_error2[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_max_integral_accumulator2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_max_integral_accumulator2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_max_integral_accumulator2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_max_integral_accumulator2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_max_integral_accumulator2_length);
      for( uint32_t i = 0; i < pid_max_integral_accumulator2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_max_integral_accumulator2i;
      u_pid_max_integral_accumulator2i.real = this->pid_max_integral_accumulator2[i];
      *(outbuffer + offset + 0) = (u_pid_max_integral_accumulator2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_max_integral_accumulator2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_max_integral_accumulator2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_max_integral_accumulator2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_max_integral_accumulator2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_max_integral_accumulator2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_max_integral_accumulator2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_max_integral_accumulator2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_max_integral_accumulator2[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_closed_loop_peak_output2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_closed_loop_peak_output2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_closed_loop_peak_output2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_closed_loop_peak_output2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_peak_output2_length);
      for( uint32_t i = 0; i < pid_closed_loop_peak_output2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_closed_loop_peak_output2i;
      u_pid_closed_loop_peak_output2i.real = this->pid_closed_loop_peak_output2[i];
      *(outbuffer + offset + 0) = (u_pid_closed_loop_peak_output2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_closed_loop_peak_output2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_closed_loop_peak_output2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_closed_loop_peak_output2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_closed_loop_peak_output2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_closed_loop_peak_output2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_closed_loop_peak_output2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_closed_loop_peak_output2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_peak_output2[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_closed_loop_period2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_closed_loop_period2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_closed_loop_period2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_closed_loop_period2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_period2_length);
      for( uint32_t i = 0; i < pid_closed_loop_period2_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pid_closed_loop_period2i;
      u_pid_closed_loop_period2i.real = this->pid_closed_loop_period2[i];
      *(outbuffer + offset + 0) = (u_pid_closed_loop_period2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_closed_loop_period2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_closed_loop_period2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_closed_loop_period2i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_period2[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_p3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_p3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_p3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_p3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_p3_length);
      for( uint32_t i = 0; i < pid_p3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_p3i;
      u_pid_p3i.real = this->pid_p3[i];
      *(outbuffer + offset + 0) = (u_pid_p3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_p3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_p3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_p3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_p3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_p3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_p3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_p3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_p3[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_i3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_i3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_i3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_i3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_i3_length);
      for( uint32_t i = 0; i < pid_i3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_i3i;
      u_pid_i3i.real = this->pid_i3[i];
      *(outbuffer + offset + 0) = (u_pid_i3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_i3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_i3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_i3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_i3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_i3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_i3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_i3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_i3[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_d3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_d3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_d3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_d3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_d3_length);
      for( uint32_t i = 0; i < pid_d3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_d3i;
      u_pid_d3i.real = this->pid_d3[i];
      *(outbuffer + offset + 0) = (u_pid_d3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_d3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_d3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_d3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_d3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_d3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_d3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_d3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_d3[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_f3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_f3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_f3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_f3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_f3_length);
      for( uint32_t i = 0; i < pid_f3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_f3i;
      u_pid_f3i.real = this->pid_f3[i];
      *(outbuffer + offset + 0) = (u_pid_f3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_f3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_f3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_f3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_f3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_f3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_f3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_f3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_f3[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_izone3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_izone3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_izone3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_izone3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_izone3_length);
      for( uint32_t i = 0; i < pid_izone3_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pid_izone3i;
      u_pid_izone3i.real = this->pid_izone3[i];
      *(outbuffer + offset + 0) = (u_pid_izone3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_izone3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_izone3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_izone3i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_izone3[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_allowable_closed_loop_error3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_allowable_closed_loop_error3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_allowable_closed_loop_error3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_allowable_closed_loop_error3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_allowable_closed_loop_error3_length);
      for( uint32_t i = 0; i < pid_allowable_closed_loop_error3_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pid_allowable_closed_loop_error3i;
      u_pid_allowable_closed_loop_error3i.real = this->pid_allowable_closed_loop_error3[i];
      *(outbuffer + offset + 0) = (u_pid_allowable_closed_loop_error3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_allowable_closed_loop_error3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_allowable_closed_loop_error3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_allowable_closed_loop_error3i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_allowable_closed_loop_error3[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_max_integral_accumulator3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_max_integral_accumulator3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_max_integral_accumulator3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_max_integral_accumulator3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_max_integral_accumulator3_length);
      for( uint32_t i = 0; i < pid_max_integral_accumulator3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_max_integral_accumulator3i;
      u_pid_max_integral_accumulator3i.real = this->pid_max_integral_accumulator3[i];
      *(outbuffer + offset + 0) = (u_pid_max_integral_accumulator3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_max_integral_accumulator3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_max_integral_accumulator3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_max_integral_accumulator3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_max_integral_accumulator3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_max_integral_accumulator3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_max_integral_accumulator3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_max_integral_accumulator3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_max_integral_accumulator3[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_closed_loop_peak_output3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_closed_loop_peak_output3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_closed_loop_peak_output3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_closed_loop_peak_output3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_peak_output3_length);
      for( uint32_t i = 0; i < pid_closed_loop_peak_output3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pid_closed_loop_peak_output3i;
      u_pid_closed_loop_peak_output3i.real = this->pid_closed_loop_peak_output3[i];
      *(outbuffer + offset + 0) = (u_pid_closed_loop_peak_output3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_closed_loop_peak_output3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_closed_loop_peak_output3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_closed_loop_peak_output3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pid_closed_loop_peak_output3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pid_closed_loop_peak_output3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pid_closed_loop_peak_output3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pid_closed_loop_peak_output3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_peak_output3[i]);
      }
      *(outbuffer + offset + 0) = (this->pid_closed_loop_period3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pid_closed_loop_period3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pid_closed_loop_period3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pid_closed_loop_period3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_period3_length);
      for( uint32_t i = 0; i < pid_closed_loop_period3_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_pid_closed_loop_period3i;
      u_pid_closed_loop_period3i.real = this->pid_closed_loop_period3[i];
      *(outbuffer + offset + 0) = (u_pid_closed_loop_period3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pid_closed_loop_period3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pid_closed_loop_period3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pid_closed_loop_period3i.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pid_closed_loop_period3[i]);
      }
      *(outbuffer + offset + 0) = (this->aux_pid_polarity_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->aux_pid_polarity_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->aux_pid_polarity_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->aux_pid_polarity_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->aux_pid_polarity_length);
      for( uint32_t i = 0; i < aux_pid_polarity_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_aux_pid_polarityi;
      u_aux_pid_polarityi.real = this->aux_pid_polarity[i];
      *(outbuffer + offset + 0) = (u_aux_pid_polarityi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->aux_pid_polarity[i]);
      }
      *(outbuffer + offset + 0) = (this->invert_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->invert_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->invert_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->invert_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->invert_length);
      for( uint32_t i = 0; i < invert_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_inverti;
      u_inverti.real = this->invert[i];
      *(outbuffer + offset + 0) = (u_inverti.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->invert[i]);
      }
      *(outbuffer + offset + 0) = (this->sensorPhase_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->sensorPhase_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->sensorPhase_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->sensorPhase_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sensorPhase_length);
      for( uint32_t i = 0; i < sensorPhase_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_sensorPhasei;
      u_sensorPhasei.real = this->sensorPhase[i];
      *(outbuffer + offset + 0) = (u_sensorPhasei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->sensorPhase[i]);
      }
      *(outbuffer + offset + 0) = (this->neutral_mode_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->neutral_mode_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->neutral_mode_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->neutral_mode_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->neutral_mode_length);
      for( uint32_t i = 0; i < neutral_mode_length; i++){
      uint32_t length_neutral_modei = strlen(this->neutral_mode[i]);
      varToArr(outbuffer + offset, length_neutral_modei);
      offset += 4;
      memcpy(outbuffer + offset, this->neutral_mode[i], length_neutral_modei);
      offset += length_neutral_modei;
      }
      *(outbuffer + offset + 0) = (this->closed_loop_ramp_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->closed_loop_ramp_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->closed_loop_ramp_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->closed_loop_ramp_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->closed_loop_ramp_length);
      for( uint32_t i = 0; i < closed_loop_ramp_length; i++){
      union {
        double real;
        uint64_t base;
      } u_closed_loop_rampi;
      u_closed_loop_rampi.real = this->closed_loop_ramp[i];
      *(outbuffer + offset + 0) = (u_closed_loop_rampi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_closed_loop_rampi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_closed_loop_rampi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_closed_loop_rampi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_closed_loop_rampi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_closed_loop_rampi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_closed_loop_rampi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_closed_loop_rampi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->closed_loop_ramp[i]);
      }
      *(outbuffer + offset + 0) = (this->open_loop_ramp_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->open_loop_ramp_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->open_loop_ramp_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->open_loop_ramp_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->open_loop_ramp_length);
      for( uint32_t i = 0; i < open_loop_ramp_length; i++){
      union {
        double real;
        uint64_t base;
      } u_open_loop_rampi;
      u_open_loop_rampi.real = this->open_loop_ramp[i];
      *(outbuffer + offset + 0) = (u_open_loop_rampi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_open_loop_rampi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_open_loop_rampi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_open_loop_rampi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_open_loop_rampi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_open_loop_rampi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_open_loop_rampi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_open_loop_rampi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->open_loop_ramp[i]);
      }
      *(outbuffer + offset + 0) = (this->peak_output_forward_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->peak_output_forward_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->peak_output_forward_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->peak_output_forward_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->peak_output_forward_length);
      for( uint32_t i = 0; i < peak_output_forward_length; i++){
      union {
        double real;
        uint64_t base;
      } u_peak_output_forwardi;
      u_peak_output_forwardi.real = this->peak_output_forward[i];
      *(outbuffer + offset + 0) = (u_peak_output_forwardi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_peak_output_forwardi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_peak_output_forwardi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_peak_output_forwardi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_peak_output_forwardi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_peak_output_forwardi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_peak_output_forwardi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_peak_output_forwardi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->peak_output_forward[i]);
      }
      *(outbuffer + offset + 0) = (this->peak_output_reverse_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->peak_output_reverse_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->peak_output_reverse_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->peak_output_reverse_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->peak_output_reverse_length);
      for( uint32_t i = 0; i < peak_output_reverse_length; i++){
      union {
        double real;
        uint64_t base;
      } u_peak_output_reversei;
      u_peak_output_reversei.real = this->peak_output_reverse[i];
      *(outbuffer + offset + 0) = (u_peak_output_reversei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_peak_output_reversei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_peak_output_reversei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_peak_output_reversei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_peak_output_reversei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_peak_output_reversei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_peak_output_reversei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_peak_output_reversei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->peak_output_reverse[i]);
      }
      *(outbuffer + offset + 0) = (this->nominal_output_forward_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->nominal_output_forward_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->nominal_output_forward_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->nominal_output_forward_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->nominal_output_forward_length);
      for( uint32_t i = 0; i < nominal_output_forward_length; i++){
      union {
        double real;
        uint64_t base;
      } u_nominal_output_forwardi;
      u_nominal_output_forwardi.real = this->nominal_output_forward[i];
      *(outbuffer + offset + 0) = (u_nominal_output_forwardi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_nominal_output_forwardi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_nominal_output_forwardi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_nominal_output_forwardi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_nominal_output_forwardi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_nominal_output_forwardi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_nominal_output_forwardi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_nominal_output_forwardi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->nominal_output_forward[i]);
      }
      *(outbuffer + offset + 0) = (this->nominal_output_reverse_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->nominal_output_reverse_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->nominal_output_reverse_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->nominal_output_reverse_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->nominal_output_reverse_length);
      for( uint32_t i = 0; i < nominal_output_reverse_length; i++){
      union {
        double real;
        uint64_t base;
      } u_nominal_output_reversei;
      u_nominal_output_reversei.real = this->nominal_output_reverse[i];
      *(outbuffer + offset + 0) = (u_nominal_output_reversei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_nominal_output_reversei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_nominal_output_reversei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_nominal_output_reversei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_nominal_output_reversei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_nominal_output_reversei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_nominal_output_reversei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_nominal_output_reversei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->nominal_output_reverse[i]);
      }
      *(outbuffer + offset + 0) = (this->neutral_deadband_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->neutral_deadband_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->neutral_deadband_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->neutral_deadband_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->neutral_deadband_length);
      for( uint32_t i = 0; i < neutral_deadband_length; i++){
      union {
        double real;
        uint64_t base;
      } u_neutral_deadbandi;
      u_neutral_deadbandi.real = this->neutral_deadband[i];
      *(outbuffer + offset + 0) = (u_neutral_deadbandi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_neutral_deadbandi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_neutral_deadbandi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_neutral_deadbandi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_neutral_deadbandi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_neutral_deadbandi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_neutral_deadbandi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_neutral_deadbandi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->neutral_deadband[i]);
      }
      *(outbuffer + offset + 0) = (this->voltage_compensation_saturation_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->voltage_compensation_saturation_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->voltage_compensation_saturation_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->voltage_compensation_saturation_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->voltage_compensation_saturation_length);
      for( uint32_t i = 0; i < voltage_compensation_saturation_length; i++){
      union {
        double real;
        uint64_t base;
      } u_voltage_compensation_saturationi;
      u_voltage_compensation_saturationi.real = this->voltage_compensation_saturation[i];
      *(outbuffer + offset + 0) = (u_voltage_compensation_saturationi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_voltage_compensation_saturationi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_voltage_compensation_saturationi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_voltage_compensation_saturationi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_voltage_compensation_saturationi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_voltage_compensation_saturationi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_voltage_compensation_saturationi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_voltage_compensation_saturationi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->voltage_compensation_saturation[i]);
      }
      *(outbuffer + offset + 0) = (this->voltage_measurement_filter_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->voltage_measurement_filter_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->voltage_measurement_filter_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->voltage_measurement_filter_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->voltage_measurement_filter_length);
      for( uint32_t i = 0; i < voltage_measurement_filter_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_voltage_measurement_filteri;
      u_voltage_measurement_filteri.real = this->voltage_measurement_filter[i];
      *(outbuffer + offset + 0) = (u_voltage_measurement_filteri.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_voltage_measurement_filteri.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_voltage_measurement_filteri.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_voltage_measurement_filteri.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->voltage_measurement_filter[i]);
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
      *(outbuffer + offset + 0) = (this->velocity_measurement_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->velocity_measurement_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->velocity_measurement_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->velocity_measurement_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->velocity_measurement_period_length);
      for( uint32_t i = 0; i < velocity_measurement_period_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_velocity_measurement_periodi;
      u_velocity_measurement_periodi.real = this->velocity_measurement_period[i];
      *(outbuffer + offset + 0) = (u_velocity_measurement_periodi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_velocity_measurement_periodi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_velocity_measurement_periodi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_velocity_measurement_periodi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->velocity_measurement_period[i]);
      }
      *(outbuffer + offset + 0) = (this->velocity_measurement_window_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->velocity_measurement_window_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->velocity_measurement_window_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->velocity_measurement_window_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->velocity_measurement_window_length);
      for( uint32_t i = 0; i < velocity_measurement_window_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_velocity_measurement_windowi;
      u_velocity_measurement_windowi.real = this->velocity_measurement_window[i];
      *(outbuffer + offset + 0) = (u_velocity_measurement_windowi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_velocity_measurement_windowi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_velocity_measurement_windowi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_velocity_measurement_windowi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->velocity_measurement_window[i]);
      }
      *(outbuffer + offset + 0) = (this->limit_switch_local_forward_source_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->limit_switch_local_forward_source_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->limit_switch_local_forward_source_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->limit_switch_local_forward_source_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->limit_switch_local_forward_source_length);
      for( uint32_t i = 0; i < limit_switch_local_forward_source_length; i++){
      uint32_t length_limit_switch_local_forward_sourcei = strlen(this->limit_switch_local_forward_source[i]);
      varToArr(outbuffer + offset, length_limit_switch_local_forward_sourcei);
      offset += 4;
      memcpy(outbuffer + offset, this->limit_switch_local_forward_source[i], length_limit_switch_local_forward_sourcei);
      offset += length_limit_switch_local_forward_sourcei;
      }
      *(outbuffer + offset + 0) = (this->limit_switch_local_forward_normal_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->limit_switch_local_forward_normal_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->limit_switch_local_forward_normal_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->limit_switch_local_forward_normal_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->limit_switch_local_forward_normal_length);
      for( uint32_t i = 0; i < limit_switch_local_forward_normal_length; i++){
      uint32_t length_limit_switch_local_forward_normali = strlen(this->limit_switch_local_forward_normal[i]);
      varToArr(outbuffer + offset, length_limit_switch_local_forward_normali);
      offset += 4;
      memcpy(outbuffer + offset, this->limit_switch_local_forward_normal[i], length_limit_switch_local_forward_normali);
      offset += length_limit_switch_local_forward_normali;
      }
      *(outbuffer + offset + 0) = (this->limit_switch_local_reverse_source_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->limit_switch_local_reverse_source_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->limit_switch_local_reverse_source_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->limit_switch_local_reverse_source_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->limit_switch_local_reverse_source_length);
      for( uint32_t i = 0; i < limit_switch_local_reverse_source_length; i++){
      uint32_t length_limit_switch_local_reverse_sourcei = strlen(this->limit_switch_local_reverse_source[i]);
      varToArr(outbuffer + offset, length_limit_switch_local_reverse_sourcei);
      offset += 4;
      memcpy(outbuffer + offset, this->limit_switch_local_reverse_source[i], length_limit_switch_local_reverse_sourcei);
      offset += length_limit_switch_local_reverse_sourcei;
      }
      *(outbuffer + offset + 0) = (this->limit_switch_local_reverse_normal_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->limit_switch_local_reverse_normal_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->limit_switch_local_reverse_normal_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->limit_switch_local_reverse_normal_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->limit_switch_local_reverse_normal_length);
      for( uint32_t i = 0; i < limit_switch_local_reverse_normal_length; i++){
      uint32_t length_limit_switch_local_reverse_normali = strlen(this->limit_switch_local_reverse_normal[i]);
      varToArr(outbuffer + offset, length_limit_switch_local_reverse_normali);
      offset += 4;
      memcpy(outbuffer + offset, this->limit_switch_local_reverse_normal[i], length_limit_switch_local_reverse_normali);
      offset += length_limit_switch_local_reverse_normali;
      }
      *(outbuffer + offset + 0) = (this->limit_switch_remote_forward_source_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->limit_switch_remote_forward_source_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->limit_switch_remote_forward_source_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->limit_switch_remote_forward_source_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->limit_switch_remote_forward_source_length);
      for( uint32_t i = 0; i < limit_switch_remote_forward_source_length; i++){
      uint32_t length_limit_switch_remote_forward_sourcei = strlen(this->limit_switch_remote_forward_source[i]);
      varToArr(outbuffer + offset, length_limit_switch_remote_forward_sourcei);
      offset += 4;
      memcpy(outbuffer + offset, this->limit_switch_remote_forward_source[i], length_limit_switch_remote_forward_sourcei);
      offset += length_limit_switch_remote_forward_sourcei;
      }
      *(outbuffer + offset + 0) = (this->limit_switch_remote_forward_normal_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->limit_switch_remote_forward_normal_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->limit_switch_remote_forward_normal_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->limit_switch_remote_forward_normal_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->limit_switch_remote_forward_normal_length);
      for( uint32_t i = 0; i < limit_switch_remote_forward_normal_length; i++){
      uint32_t length_limit_switch_remote_forward_normali = strlen(this->limit_switch_remote_forward_normal[i]);
      varToArr(outbuffer + offset, length_limit_switch_remote_forward_normali);
      offset += 4;
      memcpy(outbuffer + offset, this->limit_switch_remote_forward_normal[i], length_limit_switch_remote_forward_normali);
      offset += length_limit_switch_remote_forward_normali;
      }
      *(outbuffer + offset + 0) = (this->limit_switch_remote_forward_id_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->limit_switch_remote_forward_id_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->limit_switch_remote_forward_id_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->limit_switch_remote_forward_id_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->limit_switch_remote_forward_id_length);
      for( uint32_t i = 0; i < limit_switch_remote_forward_id_length; i++){
      *(outbuffer + offset + 0) = (this->limit_switch_remote_forward_id[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->limit_switch_remote_forward_id[i]);
      }
      *(outbuffer + offset + 0) = (this->limit_switch_remote_reverse_source_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->limit_switch_remote_reverse_source_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->limit_switch_remote_reverse_source_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->limit_switch_remote_reverse_source_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->limit_switch_remote_reverse_source_length);
      for( uint32_t i = 0; i < limit_switch_remote_reverse_source_length; i++){
      uint32_t length_limit_switch_remote_reverse_sourcei = strlen(this->limit_switch_remote_reverse_source[i]);
      varToArr(outbuffer + offset, length_limit_switch_remote_reverse_sourcei);
      offset += 4;
      memcpy(outbuffer + offset, this->limit_switch_remote_reverse_source[i], length_limit_switch_remote_reverse_sourcei);
      offset += length_limit_switch_remote_reverse_sourcei;
      }
      *(outbuffer + offset + 0) = (this->limit_switch_remote_reverse_normal_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->limit_switch_remote_reverse_normal_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->limit_switch_remote_reverse_normal_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->limit_switch_remote_reverse_normal_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->limit_switch_remote_reverse_normal_length);
      for( uint32_t i = 0; i < limit_switch_remote_reverse_normal_length; i++){
      uint32_t length_limit_switch_remote_reverse_normali = strlen(this->limit_switch_remote_reverse_normal[i]);
      varToArr(outbuffer + offset, length_limit_switch_remote_reverse_normali);
      offset += 4;
      memcpy(outbuffer + offset, this->limit_switch_remote_reverse_normal[i], length_limit_switch_remote_reverse_normali);
      offset += length_limit_switch_remote_reverse_normali;
      }
      *(outbuffer + offset + 0) = (this->limit_switch_remote_reverse_id_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->limit_switch_remote_reverse_id_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->limit_switch_remote_reverse_id_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->limit_switch_remote_reverse_id_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->limit_switch_remote_reverse_id_length);
      for( uint32_t i = 0; i < limit_switch_remote_reverse_id_length; i++){
      *(outbuffer + offset + 0) = (this->limit_switch_remote_reverse_id[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->limit_switch_remote_reverse_id[i]);
      }
      *(outbuffer + offset + 0) = (this->clear_position_on_limit_f_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->clear_position_on_limit_f_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->clear_position_on_limit_f_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->clear_position_on_limit_f_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->clear_position_on_limit_f_length);
      for( uint32_t i = 0; i < clear_position_on_limit_f_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_clear_position_on_limit_fi;
      u_clear_position_on_limit_fi.real = this->clear_position_on_limit_f[i];
      *(outbuffer + offset + 0) = (u_clear_position_on_limit_fi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->clear_position_on_limit_f[i]);
      }
      *(outbuffer + offset + 0) = (this->clear_position_on_limit_r_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->clear_position_on_limit_r_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->clear_position_on_limit_r_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->clear_position_on_limit_r_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->clear_position_on_limit_r_length);
      for( uint32_t i = 0; i < clear_position_on_limit_r_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_clear_position_on_limit_ri;
      u_clear_position_on_limit_ri.real = this->clear_position_on_limit_r[i];
      *(outbuffer + offset + 0) = (u_clear_position_on_limit_ri.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->clear_position_on_limit_r[i]);
      }
      *(outbuffer + offset + 0) = (this->softlimit_forward_threshold_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->softlimit_forward_threshold_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->softlimit_forward_threshold_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->softlimit_forward_threshold_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->softlimit_forward_threshold_length);
      for( uint32_t i = 0; i < softlimit_forward_threshold_length; i++){
      union {
        double real;
        uint64_t base;
      } u_softlimit_forward_thresholdi;
      u_softlimit_forward_thresholdi.real = this->softlimit_forward_threshold[i];
      *(outbuffer + offset + 0) = (u_softlimit_forward_thresholdi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_softlimit_forward_thresholdi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_softlimit_forward_thresholdi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_softlimit_forward_thresholdi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_softlimit_forward_thresholdi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_softlimit_forward_thresholdi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_softlimit_forward_thresholdi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_softlimit_forward_thresholdi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->softlimit_forward_threshold[i]);
      }
      *(outbuffer + offset + 0) = (this->softlimit_forward_enable_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->softlimit_forward_enable_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->softlimit_forward_enable_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->softlimit_forward_enable_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->softlimit_forward_enable_length);
      for( uint32_t i = 0; i < softlimit_forward_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_softlimit_forward_enablei;
      u_softlimit_forward_enablei.real = this->softlimit_forward_enable[i];
      *(outbuffer + offset + 0) = (u_softlimit_forward_enablei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->softlimit_forward_enable[i]);
      }
      *(outbuffer + offset + 0) = (this->softlimit_reverse_threshold_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->softlimit_reverse_threshold_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->softlimit_reverse_threshold_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->softlimit_reverse_threshold_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->softlimit_reverse_threshold_length);
      for( uint32_t i = 0; i < softlimit_reverse_threshold_length; i++){
      union {
        double real;
        uint64_t base;
      } u_softlimit_reverse_thresholdi;
      u_softlimit_reverse_thresholdi.real = this->softlimit_reverse_threshold[i];
      *(outbuffer + offset + 0) = (u_softlimit_reverse_thresholdi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_softlimit_reverse_thresholdi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_softlimit_reverse_thresholdi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_softlimit_reverse_thresholdi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_softlimit_reverse_thresholdi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_softlimit_reverse_thresholdi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_softlimit_reverse_thresholdi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_softlimit_reverse_thresholdi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->softlimit_reverse_threshold[i]);
      }
      *(outbuffer + offset + 0) = (this->softlimit_reverse_enable_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->softlimit_reverse_enable_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->softlimit_reverse_enable_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->softlimit_reverse_enable_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->softlimit_reverse_enable_length);
      for( uint32_t i = 0; i < softlimit_reverse_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_softlimit_reverse_enablei;
      u_softlimit_reverse_enablei.real = this->softlimit_reverse_enable[i];
      *(outbuffer + offset + 0) = (u_softlimit_reverse_enablei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->softlimit_reverse_enable[i]);
      }
      *(outbuffer + offset + 0) = (this->softlimits_override_enable_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->softlimits_override_enable_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->softlimits_override_enable_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->softlimits_override_enable_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->softlimits_override_enable_length);
      for( uint32_t i = 0; i < softlimits_override_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_softlimits_override_enablei;
      u_softlimits_override_enablei.real = this->softlimits_override_enable[i];
      *(outbuffer + offset + 0) = (u_softlimits_override_enablei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->softlimits_override_enable[i]);
      }
      *(outbuffer + offset + 0) = (this->current_limit_peak_amps_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_limit_peak_amps_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_limit_peak_amps_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_limit_peak_amps_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_peak_amps_length);
      for( uint32_t i = 0; i < current_limit_peak_amps_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_current_limit_peak_ampsi;
      u_current_limit_peak_ampsi.real = this->current_limit_peak_amps[i];
      *(outbuffer + offset + 0) = (u_current_limit_peak_ampsi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current_limit_peak_ampsi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current_limit_peak_ampsi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current_limit_peak_ampsi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_peak_amps[i]);
      }
      *(outbuffer + offset + 0) = (this->current_limit_peak_msec_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_limit_peak_msec_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_limit_peak_msec_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_limit_peak_msec_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_peak_msec_length);
      for( uint32_t i = 0; i < current_limit_peak_msec_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_current_limit_peak_mseci;
      u_current_limit_peak_mseci.real = this->current_limit_peak_msec[i];
      *(outbuffer + offset + 0) = (u_current_limit_peak_mseci.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current_limit_peak_mseci.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current_limit_peak_mseci.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current_limit_peak_mseci.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_peak_msec[i]);
      }
      *(outbuffer + offset + 0) = (this->current_limit_continuous_amps_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_limit_continuous_amps_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_limit_continuous_amps_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_limit_continuous_amps_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_continuous_amps_length);
      for( uint32_t i = 0; i < current_limit_continuous_amps_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_current_limit_continuous_ampsi;
      u_current_limit_continuous_ampsi.real = this->current_limit_continuous_amps[i];
      *(outbuffer + offset + 0) = (u_current_limit_continuous_ampsi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current_limit_continuous_ampsi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current_limit_continuous_ampsi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current_limit_continuous_ampsi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_continuous_amps[i]);
      }
      *(outbuffer + offset + 0) = (this->current_limit_enable_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->current_limit_enable_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->current_limit_enable_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->current_limit_enable_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_limit_enable_length);
      for( uint32_t i = 0; i < current_limit_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_current_limit_enablei;
      u_current_limit_enablei.real = this->current_limit_enable[i];
      *(outbuffer + offset + 0) = (u_current_limit_enablei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->current_limit_enable[i]);
      }
      *(outbuffer + offset + 0) = (this->supply_current_limit_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->supply_current_limit_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->supply_current_limit_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->supply_current_limit_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->supply_current_limit_length);
      for( uint32_t i = 0; i < supply_current_limit_length; i++){
      union {
        double real;
        uint64_t base;
      } u_supply_current_limiti;
      u_supply_current_limiti.real = this->supply_current_limit[i];
      *(outbuffer + offset + 0) = (u_supply_current_limiti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_supply_current_limiti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_supply_current_limiti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_supply_current_limiti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_supply_current_limiti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_supply_current_limiti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_supply_current_limiti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_supply_current_limiti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->supply_current_limit[i]);
      }
      *(outbuffer + offset + 0) = (this->supply_current_trigger_threshold_current_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->supply_current_trigger_threshold_current_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->supply_current_trigger_threshold_current_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->supply_current_trigger_threshold_current_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->supply_current_trigger_threshold_current_length);
      for( uint32_t i = 0; i < supply_current_trigger_threshold_current_length; i++){
      union {
        double real;
        uint64_t base;
      } u_supply_current_trigger_threshold_currenti;
      u_supply_current_trigger_threshold_currenti.real = this->supply_current_trigger_threshold_current[i];
      *(outbuffer + offset + 0) = (u_supply_current_trigger_threshold_currenti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_supply_current_trigger_threshold_currenti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_supply_current_trigger_threshold_currenti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_supply_current_trigger_threshold_currenti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_supply_current_trigger_threshold_currenti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_supply_current_trigger_threshold_currenti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_supply_current_trigger_threshold_currenti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_supply_current_trigger_threshold_currenti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->supply_current_trigger_threshold_current[i]);
      }
      *(outbuffer + offset + 0) = (this->supply_current_trigger_threshold_time_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->supply_current_trigger_threshold_time_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->supply_current_trigger_threshold_time_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->supply_current_trigger_threshold_time_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->supply_current_trigger_threshold_time_length);
      for( uint32_t i = 0; i < supply_current_trigger_threshold_time_length; i++){
      union {
        double real;
        uint64_t base;
      } u_supply_current_trigger_threshold_timei;
      u_supply_current_trigger_threshold_timei.real = this->supply_current_trigger_threshold_time[i];
      *(outbuffer + offset + 0) = (u_supply_current_trigger_threshold_timei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_supply_current_trigger_threshold_timei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_supply_current_trigger_threshold_timei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_supply_current_trigger_threshold_timei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_supply_current_trigger_threshold_timei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_supply_current_trigger_threshold_timei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_supply_current_trigger_threshold_timei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_supply_current_trigger_threshold_timei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->supply_current_trigger_threshold_time[i]);
      }
      *(outbuffer + offset + 0) = (this->supply_current_limit_enable_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->supply_current_limit_enable_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->supply_current_limit_enable_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->supply_current_limit_enable_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->supply_current_limit_enable_length);
      for( uint32_t i = 0; i < supply_current_limit_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_supply_current_limit_enablei;
      u_supply_current_limit_enablei.real = this->supply_current_limit_enable[i];
      *(outbuffer + offset + 0) = (u_supply_current_limit_enablei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->supply_current_limit_enable[i]);
      }
      *(outbuffer + offset + 0) = (this->stator_current_limit_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->stator_current_limit_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->stator_current_limit_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->stator_current_limit_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stator_current_limit_length);
      for( uint32_t i = 0; i < stator_current_limit_length; i++){
      union {
        double real;
        uint64_t base;
      } u_stator_current_limiti;
      u_stator_current_limiti.real = this->stator_current_limit[i];
      *(outbuffer + offset + 0) = (u_stator_current_limiti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_stator_current_limiti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_stator_current_limiti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_stator_current_limiti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_stator_current_limiti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_stator_current_limiti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_stator_current_limiti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_stator_current_limiti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->stator_current_limit[i]);
      }
      *(outbuffer + offset + 0) = (this->stator_current_trigger_threshold_current_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->stator_current_trigger_threshold_current_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->stator_current_trigger_threshold_current_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->stator_current_trigger_threshold_current_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stator_current_trigger_threshold_current_length);
      for( uint32_t i = 0; i < stator_current_trigger_threshold_current_length; i++){
      union {
        double real;
        uint64_t base;
      } u_stator_current_trigger_threshold_currenti;
      u_stator_current_trigger_threshold_currenti.real = this->stator_current_trigger_threshold_current[i];
      *(outbuffer + offset + 0) = (u_stator_current_trigger_threshold_currenti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_stator_current_trigger_threshold_currenti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_stator_current_trigger_threshold_currenti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_stator_current_trigger_threshold_currenti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_stator_current_trigger_threshold_currenti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_stator_current_trigger_threshold_currenti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_stator_current_trigger_threshold_currenti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_stator_current_trigger_threshold_currenti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->stator_current_trigger_threshold_current[i]);
      }
      *(outbuffer + offset + 0) = (this->stator_current_trigger_threshold_time_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->stator_current_trigger_threshold_time_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->stator_current_trigger_threshold_time_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->stator_current_trigger_threshold_time_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stator_current_trigger_threshold_time_length);
      for( uint32_t i = 0; i < stator_current_trigger_threshold_time_length; i++){
      union {
        double real;
        uint64_t base;
      } u_stator_current_trigger_threshold_timei;
      u_stator_current_trigger_threshold_timei.real = this->stator_current_trigger_threshold_time[i];
      *(outbuffer + offset + 0) = (u_stator_current_trigger_threshold_timei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_stator_current_trigger_threshold_timei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_stator_current_trigger_threshold_timei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_stator_current_trigger_threshold_timei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_stator_current_trigger_threshold_timei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_stator_current_trigger_threshold_timei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_stator_current_trigger_threshold_timei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_stator_current_trigger_threshold_timei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->stator_current_trigger_threshold_time[i]);
      }
      *(outbuffer + offset + 0) = (this->stator_current_limit_enable_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->stator_current_limit_enable_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->stator_current_limit_enable_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->stator_current_limit_enable_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stator_current_limit_enable_length);
      for( uint32_t i = 0; i < stator_current_limit_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_stator_current_limit_enablei;
      u_stator_current_limit_enablei.real = this->stator_current_limit_enable[i];
      *(outbuffer + offset + 0) = (u_stator_current_limit_enablei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->stator_current_limit_enable[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_cruise_velocity_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_cruise_velocity_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_cruise_velocity_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_cruise_velocity_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_cruise_velocity_length);
      for( uint32_t i = 0; i < motion_cruise_velocity_length; i++){
      union {
        double real;
        uint64_t base;
      } u_motion_cruise_velocityi;
      u_motion_cruise_velocityi.real = this->motion_cruise_velocity[i];
      *(outbuffer + offset + 0) = (u_motion_cruise_velocityi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motion_cruise_velocityi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motion_cruise_velocityi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motion_cruise_velocityi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_motion_cruise_velocityi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_motion_cruise_velocityi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_motion_cruise_velocityi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_motion_cruise_velocityi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->motion_cruise_velocity[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_acceleration_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_acceleration_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_acceleration_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_acceleration_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_acceleration_length);
      for( uint32_t i = 0; i < motion_acceleration_length; i++){
      union {
        double real;
        uint64_t base;
      } u_motion_accelerationi;
      u_motion_accelerationi.real = this->motion_acceleration[i];
      *(outbuffer + offset + 0) = (u_motion_accelerationi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motion_accelerationi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motion_accelerationi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motion_accelerationi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_motion_accelerationi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_motion_accelerationi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_motion_accelerationi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_motion_accelerationi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->motion_acceleration[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_s_curve_strength_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_s_curve_strength_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_s_curve_strength_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_s_curve_strength_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_s_curve_strength_length);
      for( uint32_t i = 0; i < motion_s_curve_strength_length; i++){
      *(outbuffer + offset + 0) = (this->motion_s_curve_strength[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->motion_s_curve_strength[i]);
      }
      *(outbuffer + offset + 0) = (this->status_1_general_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_1_general_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_1_general_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_1_general_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_1_general_period_length);
      for( uint32_t i = 0; i < status_1_general_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_1_general_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_1_general_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_2_feedback0_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_2_feedback0_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_2_feedback0_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_2_feedback0_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_2_feedback0_period_length);
      for( uint32_t i = 0; i < status_2_feedback0_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_2_feedback0_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_2_feedback0_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_3_quadrature_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_3_quadrature_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_3_quadrature_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_3_quadrature_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_3_quadrature_period_length);
      for( uint32_t i = 0; i < status_3_quadrature_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_3_quadrature_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_3_quadrature_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_4_aintempvbat_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_4_aintempvbat_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_4_aintempvbat_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_4_aintempvbat_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_4_aintempvbat_period_length);
      for( uint32_t i = 0; i < status_4_aintempvbat_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_4_aintempvbat_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_4_aintempvbat_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_6_misc_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_6_misc_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_6_misc_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_6_misc_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_6_misc_period_length);
      for( uint32_t i = 0; i < status_6_misc_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_6_misc_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_6_misc_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_7_commstatus_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_7_commstatus_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_7_commstatus_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_7_commstatus_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_7_commstatus_period_length);
      for( uint32_t i = 0; i < status_7_commstatus_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_7_commstatus_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_7_commstatus_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_8_pulsewidth_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_8_pulsewidth_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_8_pulsewidth_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_8_pulsewidth_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_8_pulsewidth_period_length);
      for( uint32_t i = 0; i < status_8_pulsewidth_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_8_pulsewidth_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_8_pulsewidth_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_9_motprofbuffer_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_9_motprofbuffer_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_9_motprofbuffer_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_9_motprofbuffer_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_9_motprofbuffer_period_length);
      for( uint32_t i = 0; i < status_9_motprofbuffer_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_9_motprofbuffer_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_9_motprofbuffer_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_10_motionmagic_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_10_motionmagic_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_10_motionmagic_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_10_motionmagic_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_10_motionmagic_period_length);
      for( uint32_t i = 0; i < status_10_motionmagic_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_10_motionmagic_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_10_motionmagic_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_11_uartgadgeteer_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_11_uartgadgeteer_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_11_uartgadgeteer_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_11_uartgadgeteer_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_11_uartgadgeteer_period_length);
      for( uint32_t i = 0; i < status_11_uartgadgeteer_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_11_uartgadgeteer_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_11_uartgadgeteer_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_12_feedback1_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_12_feedback1_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_12_feedback1_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_12_feedback1_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_12_feedback1_period_length);
      for( uint32_t i = 0; i < status_12_feedback1_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_12_feedback1_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_12_feedback1_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_13_base_pidf0_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_13_base_pidf0_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_13_base_pidf0_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_13_base_pidf0_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_13_base_pidf0_period_length);
      for( uint32_t i = 0; i < status_13_base_pidf0_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_13_base_pidf0_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_13_base_pidf0_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_14_turn_pidf1_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_14_turn_pidf1_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_14_turn_pidf1_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_14_turn_pidf1_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_14_turn_pidf1_period_length);
      for( uint32_t i = 0; i < status_14_turn_pidf1_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_14_turn_pidf1_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_14_turn_pidf1_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_15_firmwareapistatus_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_15_firmwareapistatus_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_15_firmwareapistatus_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_15_firmwareapistatus_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_15_firmwareapistatus_period_length);
      for( uint32_t i = 0; i < status_15_firmwareapistatus_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_15_firmwareapistatus_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_15_firmwareapistatus_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_17_targets1_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_17_targets1_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_17_targets1_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_17_targets1_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_17_targets1_period_length);
      for( uint32_t i = 0; i < status_17_targets1_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_17_targets1_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_17_targets1_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_brushless_current_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_brushless_current_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_brushless_current_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_brushless_current_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_brushless_current_period_length);
      for( uint32_t i = 0; i < status_brushless_current_period_length; i++){
      *(outbuffer + offset + 0) = (this->status_brushless_current_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_brushless_current_period[i]);
      }
      *(outbuffer + offset + 0) = (this->control_3_general_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->control_3_general_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->control_3_general_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->control_3_general_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->control_3_general_period_length);
      for( uint32_t i = 0; i < control_3_general_period_length; i++){
      *(outbuffer + offset + 0) = (this->control_3_general_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->control_3_general_period[i]);
      }
      *(outbuffer + offset + 0) = (this->control_4_advanced_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->control_4_advanced_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->control_4_advanced_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->control_4_advanced_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->control_4_advanced_period_length);
      for( uint32_t i = 0; i < control_4_advanced_period_length; i++){
      *(outbuffer + offset + 0) = (this->control_4_advanced_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->control_4_advanced_period[i]);
      }
      *(outbuffer + offset + 0) = (this->control_5_feedbackoutputoverride_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->control_5_feedbackoutputoverride_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->control_5_feedbackoutputoverride_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->control_5_feedbackoutputoverride_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->control_5_feedbackoutputoverride_period_length);
      for( uint32_t i = 0; i < control_5_feedbackoutputoverride_period_length; i++){
      *(outbuffer + offset + 0) = (this->control_5_feedbackoutputoverride_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->control_5_feedbackoutputoverride_period[i]);
      }
      *(outbuffer + offset + 0) = (this->control_6_motprofaddtrajpoint_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->control_6_motprofaddtrajpoint_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->control_6_motprofaddtrajpoint_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->control_6_motprofaddtrajpoint_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->control_6_motprofaddtrajpoint_period_length);
      for( uint32_t i = 0; i < control_6_motprofaddtrajpoint_period_length; i++){
      *(outbuffer + offset + 0) = (this->control_6_motprofaddtrajpoint_period[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->control_6_motprofaddtrajpoint_period[i]);
      }
      *(outbuffer + offset + 0) = (this->motion_profile_trajectory_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motion_profile_trajectory_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motion_profile_trajectory_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motion_profile_trajectory_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_profile_trajectory_period_length);
      for( uint32_t i = 0; i < motion_profile_trajectory_period_length; i++){
      union {
        double real;
        uint64_t base;
      } u_motion_profile_trajectory_periodi;
      u_motion_profile_trajectory_periodi.real = this->motion_profile_trajectory_period[i];
      *(outbuffer + offset + 0) = (u_motion_profile_trajectory_periodi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motion_profile_trajectory_periodi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motion_profile_trajectory_periodi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motion_profile_trajectory_periodi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_motion_profile_trajectory_periodi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_motion_profile_trajectory_periodi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_motion_profile_trajectory_periodi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_motion_profile_trajectory_periodi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->motion_profile_trajectory_period[i]);
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
      *(outbuffer + offset + 0) = (this->motor_commutation_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motor_commutation_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motor_commutation_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motor_commutation_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motor_commutation_length);
      for( uint32_t i = 0; i < motor_commutation_length; i++){
      uint32_t length_motor_commutationi = strlen(this->motor_commutation[i]);
      varToArr(outbuffer + offset, length_motor_commutationi);
      offset += 4;
      memcpy(outbuffer + offset, this->motor_commutation[i], length_motor_commutationi);
      offset += length_motor_commutationi;
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
      *(outbuffer + offset + 0) = (this->sensor_initialization_strategy_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->sensor_initialization_strategy_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->sensor_initialization_strategy_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->sensor_initialization_strategy_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sensor_initialization_strategy_length);
      for( uint32_t i = 0; i < sensor_initialization_strategy_length; i++){
      uint32_t length_sensor_initialization_strategyi = strlen(this->sensor_initialization_strategy[i]);
      varToArr(outbuffer + offset, length_sensor_initialization_strategyi);
      offset += 4;
      memcpy(outbuffer + offset, this->sensor_initialization_strategy[i], length_sensor_initialization_strategyi);
      offset += length_sensor_initialization_strategyi;
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
      *(outbuffer + offset + 0) = (this->water_game_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->water_game_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->water_game_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->water_game_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->water_game_length);
      for( uint32_t i = 0; i < water_game_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_water_gamei;
      u_water_gamei.real = this->water_game[i];
      *(outbuffer + offset + 0) = (u_water_gamei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->water_game[i]);
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
      uint32_t can_id_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      can_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      can_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      can_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->can_id_length);
      if(can_id_lengthT > can_id_length)
        this->can_id = (int8_t*)realloc(this->can_id, can_id_lengthT * sizeof(int8_t));
      can_id_length = can_id_lengthT;
      for( uint32_t i = 0; i < can_id_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_can_id;
      u_st_can_id.base = 0;
      u_st_can_id.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_can_id = u_st_can_id.real;
      offset += sizeof(this->st_can_id);
        memcpy( &(this->can_id[i]), &(this->st_can_id), sizeof(int8_t));
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
      uint32_t feedback_sensor_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      feedback_sensor_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      feedback_sensor_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      feedback_sensor_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->feedback_sensor_length);
      if(feedback_sensor_lengthT > feedback_sensor_length)
        this->feedback_sensor = (char**)realloc(this->feedback_sensor, feedback_sensor_lengthT * sizeof(char*));
      feedback_sensor_length = feedback_sensor_lengthT;
      for( uint32_t i = 0; i < feedback_sensor_length; i++){
      uint32_t length_st_feedback_sensor;
      arrToVar(length_st_feedback_sensor, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_feedback_sensor; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_feedback_sensor-1]=0;
      this->st_feedback_sensor = (char *)(inbuffer + offset-1);
      offset += length_st_feedback_sensor;
        memcpy( &(this->feedback_sensor[i]), &(this->st_feedback_sensor), sizeof(char*));
      }
      uint32_t remote_feedback_sensor_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      remote_feedback_sensor_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      remote_feedback_sensor_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      remote_feedback_sensor_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->remote_feedback_sensor_length);
      if(remote_feedback_sensor_lengthT > remote_feedback_sensor_length)
        this->remote_feedback_sensor = (char**)realloc(this->remote_feedback_sensor, remote_feedback_sensor_lengthT * sizeof(char*));
      remote_feedback_sensor_length = remote_feedback_sensor_lengthT;
      for( uint32_t i = 0; i < remote_feedback_sensor_length; i++){
      uint32_t length_st_remote_feedback_sensor;
      arrToVar(length_st_remote_feedback_sensor, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_remote_feedback_sensor; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_remote_feedback_sensor-1]=0;
      this->st_remote_feedback_sensor = (char *)(inbuffer + offset-1);
      offset += length_st_remote_feedback_sensor;
        memcpy( &(this->remote_feedback_sensor[i]), &(this->st_remote_feedback_sensor), sizeof(char*));
      }
      uint32_t remote_feedback_device_id0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      remote_feedback_device_id0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      remote_feedback_device_id0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      remote_feedback_device_id0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->remote_feedback_device_id0_length);
      if(remote_feedback_device_id0_lengthT > remote_feedback_device_id0_length)
        this->remote_feedback_device_id0 = (int8_t*)realloc(this->remote_feedback_device_id0, remote_feedback_device_id0_lengthT * sizeof(int8_t));
      remote_feedback_device_id0_length = remote_feedback_device_id0_lengthT;
      for( uint32_t i = 0; i < remote_feedback_device_id0_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_remote_feedback_device_id0;
      u_st_remote_feedback_device_id0.base = 0;
      u_st_remote_feedback_device_id0.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_remote_feedback_device_id0 = u_st_remote_feedback_device_id0.real;
      offset += sizeof(this->st_remote_feedback_device_id0);
        memcpy( &(this->remote_feedback_device_id0[i]), &(this->st_remote_feedback_device_id0), sizeof(int8_t));
      }
      uint32_t remote_feedback_filter0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      remote_feedback_filter0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      remote_feedback_filter0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      remote_feedback_filter0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->remote_feedback_filter0_length);
      if(remote_feedback_filter0_lengthT > remote_feedback_filter0_length)
        this->remote_feedback_filter0 = (char**)realloc(this->remote_feedback_filter0, remote_feedback_filter0_lengthT * sizeof(char*));
      remote_feedback_filter0_length = remote_feedback_filter0_lengthT;
      for( uint32_t i = 0; i < remote_feedback_filter0_length; i++){
      uint32_t length_st_remote_feedback_filter0;
      arrToVar(length_st_remote_feedback_filter0, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_remote_feedback_filter0; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_remote_feedback_filter0-1]=0;
      this->st_remote_feedback_filter0 = (char *)(inbuffer + offset-1);
      offset += length_st_remote_feedback_filter0;
        memcpy( &(this->remote_feedback_filter0[i]), &(this->st_remote_feedback_filter0), sizeof(char*));
      }
      uint32_t remote_feedback_device_id1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      remote_feedback_device_id1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      remote_feedback_device_id1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      remote_feedback_device_id1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->remote_feedback_device_id1_length);
      if(remote_feedback_device_id1_lengthT > remote_feedback_device_id1_length)
        this->remote_feedback_device_id1 = (int8_t*)realloc(this->remote_feedback_device_id1, remote_feedback_device_id1_lengthT * sizeof(int8_t));
      remote_feedback_device_id1_length = remote_feedback_device_id1_lengthT;
      for( uint32_t i = 0; i < remote_feedback_device_id1_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_remote_feedback_device_id1;
      u_st_remote_feedback_device_id1.base = 0;
      u_st_remote_feedback_device_id1.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_remote_feedback_device_id1 = u_st_remote_feedback_device_id1.real;
      offset += sizeof(this->st_remote_feedback_device_id1);
        memcpy( &(this->remote_feedback_device_id1[i]), &(this->st_remote_feedback_device_id1), sizeof(int8_t));
      }
      uint32_t remote_feedback_filter1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      remote_feedback_filter1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      remote_feedback_filter1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      remote_feedback_filter1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->remote_feedback_filter1_length);
      if(remote_feedback_filter1_lengthT > remote_feedback_filter1_length)
        this->remote_feedback_filter1 = (char**)realloc(this->remote_feedback_filter1, remote_feedback_filter1_lengthT * sizeof(char*));
      remote_feedback_filter1_length = remote_feedback_filter1_lengthT;
      for( uint32_t i = 0; i < remote_feedback_filter1_length; i++){
      uint32_t length_st_remote_feedback_filter1;
      arrToVar(length_st_remote_feedback_filter1, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_remote_feedback_filter1; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_remote_feedback_filter1-1]=0;
      this->st_remote_feedback_filter1 = (char *)(inbuffer + offset-1);
      offset += length_st_remote_feedback_filter1;
        memcpy( &(this->remote_feedback_filter1[i]), &(this->st_remote_feedback_filter1), sizeof(char*));
      }
      uint32_t sensor_term_sum0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      sensor_term_sum0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      sensor_term_sum0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      sensor_term_sum0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->sensor_term_sum0_length);
      if(sensor_term_sum0_lengthT > sensor_term_sum0_length)
        this->sensor_term_sum0 = (char**)realloc(this->sensor_term_sum0, sensor_term_sum0_lengthT * sizeof(char*));
      sensor_term_sum0_length = sensor_term_sum0_lengthT;
      for( uint32_t i = 0; i < sensor_term_sum0_length; i++){
      uint32_t length_st_sensor_term_sum0;
      arrToVar(length_st_sensor_term_sum0, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_sensor_term_sum0; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_sensor_term_sum0-1]=0;
      this->st_sensor_term_sum0 = (char *)(inbuffer + offset-1);
      offset += length_st_sensor_term_sum0;
        memcpy( &(this->sensor_term_sum0[i]), &(this->st_sensor_term_sum0), sizeof(char*));
      }
      uint32_t sensor_term_sum1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      sensor_term_sum1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      sensor_term_sum1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      sensor_term_sum1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->sensor_term_sum1_length);
      if(sensor_term_sum1_lengthT > sensor_term_sum1_length)
        this->sensor_term_sum1 = (char**)realloc(this->sensor_term_sum1, sensor_term_sum1_lengthT * sizeof(char*));
      sensor_term_sum1_length = sensor_term_sum1_lengthT;
      for( uint32_t i = 0; i < sensor_term_sum1_length; i++){
      uint32_t length_st_sensor_term_sum1;
      arrToVar(length_st_sensor_term_sum1, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_sensor_term_sum1; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_sensor_term_sum1-1]=0;
      this->st_sensor_term_sum1 = (char *)(inbuffer + offset-1);
      offset += length_st_sensor_term_sum1;
        memcpy( &(this->sensor_term_sum1[i]), &(this->st_sensor_term_sum1), sizeof(char*));
      }
      uint32_t sensor_term_diff0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      sensor_term_diff0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      sensor_term_diff0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      sensor_term_diff0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->sensor_term_diff0_length);
      if(sensor_term_diff0_lengthT > sensor_term_diff0_length)
        this->sensor_term_diff0 = (char**)realloc(this->sensor_term_diff0, sensor_term_diff0_lengthT * sizeof(char*));
      sensor_term_diff0_length = sensor_term_diff0_lengthT;
      for( uint32_t i = 0; i < sensor_term_diff0_length; i++){
      uint32_t length_st_sensor_term_diff0;
      arrToVar(length_st_sensor_term_diff0, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_sensor_term_diff0; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_sensor_term_diff0-1]=0;
      this->st_sensor_term_diff0 = (char *)(inbuffer + offset-1);
      offset += length_st_sensor_term_diff0;
        memcpy( &(this->sensor_term_diff0[i]), &(this->st_sensor_term_diff0), sizeof(char*));
      }
      uint32_t sensor_term_diff1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      sensor_term_diff1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      sensor_term_diff1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      sensor_term_diff1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->sensor_term_diff1_length);
      if(sensor_term_diff1_lengthT > sensor_term_diff1_length)
        this->sensor_term_diff1 = (char**)realloc(this->sensor_term_diff1, sensor_term_diff1_lengthT * sizeof(char*));
      sensor_term_diff1_length = sensor_term_diff1_lengthT;
      for( uint32_t i = 0; i < sensor_term_diff1_length; i++){
      uint32_t length_st_sensor_term_diff1;
      arrToVar(length_st_sensor_term_diff1, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_sensor_term_diff1; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_sensor_term_diff1-1]=0;
      this->st_sensor_term_diff1 = (char *)(inbuffer + offset-1);
      offset += length_st_sensor_term_diff1;
        memcpy( &(this->sensor_term_diff1[i]), &(this->st_sensor_term_diff1), sizeof(char*));
      }
      uint32_t encoder_ticks_per_rotation_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      encoder_ticks_per_rotation_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      encoder_ticks_per_rotation_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      encoder_ticks_per_rotation_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->encoder_ticks_per_rotation_length);
      if(encoder_ticks_per_rotation_lengthT > encoder_ticks_per_rotation_length)
        this->encoder_ticks_per_rotation = (int32_t*)realloc(this->encoder_ticks_per_rotation, encoder_ticks_per_rotation_lengthT * sizeof(int32_t));
      encoder_ticks_per_rotation_length = encoder_ticks_per_rotation_lengthT;
      for( uint32_t i = 0; i < encoder_ticks_per_rotation_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_encoder_ticks_per_rotation;
      u_st_encoder_ticks_per_rotation.base = 0;
      u_st_encoder_ticks_per_rotation.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_encoder_ticks_per_rotation.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_encoder_ticks_per_rotation.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_encoder_ticks_per_rotation.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_encoder_ticks_per_rotation = u_st_encoder_ticks_per_rotation.real;
      offset += sizeof(this->st_encoder_ticks_per_rotation);
        memcpy( &(this->encoder_ticks_per_rotation[i]), &(this->st_encoder_ticks_per_rotation), sizeof(int32_t));
      }
      uint32_t pid_slot_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_slot_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_slot_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_slot_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_slot_length);
      if(pid_slot_lengthT > pid_slot_length)
        this->pid_slot = (int32_t*)realloc(this->pid_slot, pid_slot_lengthT * sizeof(int32_t));
      pid_slot_length = pid_slot_lengthT;
      for( uint32_t i = 0; i < pid_slot_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_pid_slot;
      u_st_pid_slot.base = 0;
      u_st_pid_slot.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_slot.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_slot.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_slot.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pid_slot = u_st_pid_slot.real;
      offset += sizeof(this->st_pid_slot);
        memcpy( &(this->pid_slot[i]), &(this->st_pid_slot), sizeof(int32_t));
      }
      uint32_t pid_p0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_p0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_p0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_p0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_p0_length);
      if(pid_p0_lengthT > pid_p0_length)
        this->pid_p0 = (double*)realloc(this->pid_p0, pid_p0_lengthT * sizeof(double));
      pid_p0_length = pid_p0_lengthT;
      for( uint32_t i = 0; i < pid_p0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_p0;
      u_st_pid_p0.base = 0;
      u_st_pid_p0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_p0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_p0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_p0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_p0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_p0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_p0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_p0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_p0 = u_st_pid_p0.real;
      offset += sizeof(this->st_pid_p0);
        memcpy( &(this->pid_p0[i]), &(this->st_pid_p0), sizeof(double));
      }
      uint32_t pid_i0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_i0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_i0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_i0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_i0_length);
      if(pid_i0_lengthT > pid_i0_length)
        this->pid_i0 = (double*)realloc(this->pid_i0, pid_i0_lengthT * sizeof(double));
      pid_i0_length = pid_i0_lengthT;
      for( uint32_t i = 0; i < pid_i0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_i0;
      u_st_pid_i0.base = 0;
      u_st_pid_i0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_i0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_i0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_i0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_i0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_i0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_i0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_i0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_i0 = u_st_pid_i0.real;
      offset += sizeof(this->st_pid_i0);
        memcpy( &(this->pid_i0[i]), &(this->st_pid_i0), sizeof(double));
      }
      uint32_t pid_d0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_d0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_d0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_d0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_d0_length);
      if(pid_d0_lengthT > pid_d0_length)
        this->pid_d0 = (double*)realloc(this->pid_d0, pid_d0_lengthT * sizeof(double));
      pid_d0_length = pid_d0_lengthT;
      for( uint32_t i = 0; i < pid_d0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_d0;
      u_st_pid_d0.base = 0;
      u_st_pid_d0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_d0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_d0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_d0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_d0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_d0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_d0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_d0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_d0 = u_st_pid_d0.real;
      offset += sizeof(this->st_pid_d0);
        memcpy( &(this->pid_d0[i]), &(this->st_pid_d0), sizeof(double));
      }
      uint32_t pid_f0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_f0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_f0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_f0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_f0_length);
      if(pid_f0_lengthT > pid_f0_length)
        this->pid_f0 = (double*)realloc(this->pid_f0, pid_f0_lengthT * sizeof(double));
      pid_f0_length = pid_f0_lengthT;
      for( uint32_t i = 0; i < pid_f0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_f0;
      u_st_pid_f0.base = 0;
      u_st_pid_f0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_f0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_f0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_f0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_f0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_f0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_f0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_f0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_f0 = u_st_pid_f0.real;
      offset += sizeof(this->st_pid_f0);
        memcpy( &(this->pid_f0[i]), &(this->st_pid_f0), sizeof(double));
      }
      uint32_t pid_izone0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_izone0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_izone0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_izone0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_izone0_length);
      if(pid_izone0_lengthT > pid_izone0_length)
        this->pid_izone0 = (int32_t*)realloc(this->pid_izone0, pid_izone0_lengthT * sizeof(int32_t));
      pid_izone0_length = pid_izone0_lengthT;
      for( uint32_t i = 0; i < pid_izone0_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_pid_izone0;
      u_st_pid_izone0.base = 0;
      u_st_pid_izone0.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_izone0.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_izone0.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_izone0.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pid_izone0 = u_st_pid_izone0.real;
      offset += sizeof(this->st_pid_izone0);
        memcpy( &(this->pid_izone0[i]), &(this->st_pid_izone0), sizeof(int32_t));
      }
      uint32_t pid_allowable_closed_loop_error0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_allowable_closed_loop_error0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_allowable_closed_loop_error0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_allowable_closed_loop_error0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_allowable_closed_loop_error0_length);
      if(pid_allowable_closed_loop_error0_lengthT > pid_allowable_closed_loop_error0_length)
        this->pid_allowable_closed_loop_error0 = (int32_t*)realloc(this->pid_allowable_closed_loop_error0, pid_allowable_closed_loop_error0_lengthT * sizeof(int32_t));
      pid_allowable_closed_loop_error0_length = pid_allowable_closed_loop_error0_lengthT;
      for( uint32_t i = 0; i < pid_allowable_closed_loop_error0_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_pid_allowable_closed_loop_error0;
      u_st_pid_allowable_closed_loop_error0.base = 0;
      u_st_pid_allowable_closed_loop_error0.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_allowable_closed_loop_error0.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_allowable_closed_loop_error0.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_allowable_closed_loop_error0.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pid_allowable_closed_loop_error0 = u_st_pid_allowable_closed_loop_error0.real;
      offset += sizeof(this->st_pid_allowable_closed_loop_error0);
        memcpy( &(this->pid_allowable_closed_loop_error0[i]), &(this->st_pid_allowable_closed_loop_error0), sizeof(int32_t));
      }
      uint32_t pid_max_integral_accumulator0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_max_integral_accumulator0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_max_integral_accumulator0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_max_integral_accumulator0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_max_integral_accumulator0_length);
      if(pid_max_integral_accumulator0_lengthT > pid_max_integral_accumulator0_length)
        this->pid_max_integral_accumulator0 = (double*)realloc(this->pid_max_integral_accumulator0, pid_max_integral_accumulator0_lengthT * sizeof(double));
      pid_max_integral_accumulator0_length = pid_max_integral_accumulator0_lengthT;
      for( uint32_t i = 0; i < pid_max_integral_accumulator0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_max_integral_accumulator0;
      u_st_pid_max_integral_accumulator0.base = 0;
      u_st_pid_max_integral_accumulator0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_max_integral_accumulator0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_max_integral_accumulator0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_max_integral_accumulator0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_max_integral_accumulator0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_max_integral_accumulator0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_max_integral_accumulator0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_max_integral_accumulator0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_max_integral_accumulator0 = u_st_pid_max_integral_accumulator0.real;
      offset += sizeof(this->st_pid_max_integral_accumulator0);
        memcpy( &(this->pid_max_integral_accumulator0[i]), &(this->st_pid_max_integral_accumulator0), sizeof(double));
      }
      uint32_t pid_closed_loop_peak_output0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_closed_loop_peak_output0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_closed_loop_peak_output0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_closed_loop_peak_output0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_closed_loop_peak_output0_length);
      if(pid_closed_loop_peak_output0_lengthT > pid_closed_loop_peak_output0_length)
        this->pid_closed_loop_peak_output0 = (double*)realloc(this->pid_closed_loop_peak_output0, pid_closed_loop_peak_output0_lengthT * sizeof(double));
      pid_closed_loop_peak_output0_length = pid_closed_loop_peak_output0_lengthT;
      for( uint32_t i = 0; i < pid_closed_loop_peak_output0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_closed_loop_peak_output0;
      u_st_pid_closed_loop_peak_output0.base = 0;
      u_st_pid_closed_loop_peak_output0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_closed_loop_peak_output0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_closed_loop_peak_output0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_closed_loop_peak_output0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_closed_loop_peak_output0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_closed_loop_peak_output0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_closed_loop_peak_output0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_closed_loop_peak_output0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_closed_loop_peak_output0 = u_st_pid_closed_loop_peak_output0.real;
      offset += sizeof(this->st_pid_closed_loop_peak_output0);
        memcpy( &(this->pid_closed_loop_peak_output0[i]), &(this->st_pid_closed_loop_peak_output0), sizeof(double));
      }
      uint32_t pid_closed_loop_period0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_closed_loop_period0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_closed_loop_period0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_closed_loop_period0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_closed_loop_period0_length);
      if(pid_closed_loop_period0_lengthT > pid_closed_loop_period0_length)
        this->pid_closed_loop_period0 = (int32_t*)realloc(this->pid_closed_loop_period0, pid_closed_loop_period0_lengthT * sizeof(int32_t));
      pid_closed_loop_period0_length = pid_closed_loop_period0_lengthT;
      for( uint32_t i = 0; i < pid_closed_loop_period0_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_pid_closed_loop_period0;
      u_st_pid_closed_loop_period0.base = 0;
      u_st_pid_closed_loop_period0.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_closed_loop_period0.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_closed_loop_period0.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_closed_loop_period0.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pid_closed_loop_period0 = u_st_pid_closed_loop_period0.real;
      offset += sizeof(this->st_pid_closed_loop_period0);
        memcpy( &(this->pid_closed_loop_period0[i]), &(this->st_pid_closed_loop_period0), sizeof(int32_t));
      }
      uint32_t pid_p1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_p1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_p1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_p1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_p1_length);
      if(pid_p1_lengthT > pid_p1_length)
        this->pid_p1 = (double*)realloc(this->pid_p1, pid_p1_lengthT * sizeof(double));
      pid_p1_length = pid_p1_lengthT;
      for( uint32_t i = 0; i < pid_p1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_p1;
      u_st_pid_p1.base = 0;
      u_st_pid_p1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_p1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_p1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_p1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_p1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_p1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_p1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_p1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_p1 = u_st_pid_p1.real;
      offset += sizeof(this->st_pid_p1);
        memcpy( &(this->pid_p1[i]), &(this->st_pid_p1), sizeof(double));
      }
      uint32_t pid_i1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_i1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_i1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_i1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_i1_length);
      if(pid_i1_lengthT > pid_i1_length)
        this->pid_i1 = (double*)realloc(this->pid_i1, pid_i1_lengthT * sizeof(double));
      pid_i1_length = pid_i1_lengthT;
      for( uint32_t i = 0; i < pid_i1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_i1;
      u_st_pid_i1.base = 0;
      u_st_pid_i1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_i1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_i1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_i1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_i1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_i1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_i1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_i1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_i1 = u_st_pid_i1.real;
      offset += sizeof(this->st_pid_i1);
        memcpy( &(this->pid_i1[i]), &(this->st_pid_i1), sizeof(double));
      }
      uint32_t pid_d1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_d1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_d1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_d1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_d1_length);
      if(pid_d1_lengthT > pid_d1_length)
        this->pid_d1 = (double*)realloc(this->pid_d1, pid_d1_lengthT * sizeof(double));
      pid_d1_length = pid_d1_lengthT;
      for( uint32_t i = 0; i < pid_d1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_d1;
      u_st_pid_d1.base = 0;
      u_st_pid_d1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_d1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_d1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_d1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_d1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_d1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_d1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_d1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_d1 = u_st_pid_d1.real;
      offset += sizeof(this->st_pid_d1);
        memcpy( &(this->pid_d1[i]), &(this->st_pid_d1), sizeof(double));
      }
      uint32_t pid_f1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_f1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_f1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_f1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_f1_length);
      if(pid_f1_lengthT > pid_f1_length)
        this->pid_f1 = (double*)realloc(this->pid_f1, pid_f1_lengthT * sizeof(double));
      pid_f1_length = pid_f1_lengthT;
      for( uint32_t i = 0; i < pid_f1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_f1;
      u_st_pid_f1.base = 0;
      u_st_pid_f1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_f1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_f1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_f1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_f1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_f1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_f1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_f1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_f1 = u_st_pid_f1.real;
      offset += sizeof(this->st_pid_f1);
        memcpy( &(this->pid_f1[i]), &(this->st_pid_f1), sizeof(double));
      }
      uint32_t pid_izone1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_izone1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_izone1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_izone1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_izone1_length);
      if(pid_izone1_lengthT > pid_izone1_length)
        this->pid_izone1 = (int32_t*)realloc(this->pid_izone1, pid_izone1_lengthT * sizeof(int32_t));
      pid_izone1_length = pid_izone1_lengthT;
      for( uint32_t i = 0; i < pid_izone1_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_pid_izone1;
      u_st_pid_izone1.base = 0;
      u_st_pid_izone1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_izone1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_izone1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_izone1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pid_izone1 = u_st_pid_izone1.real;
      offset += sizeof(this->st_pid_izone1);
        memcpy( &(this->pid_izone1[i]), &(this->st_pid_izone1), sizeof(int32_t));
      }
      uint32_t pid_allowable_closed_loop_error1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_allowable_closed_loop_error1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_allowable_closed_loop_error1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_allowable_closed_loop_error1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_allowable_closed_loop_error1_length);
      if(pid_allowable_closed_loop_error1_lengthT > pid_allowable_closed_loop_error1_length)
        this->pid_allowable_closed_loop_error1 = (int32_t*)realloc(this->pid_allowable_closed_loop_error1, pid_allowable_closed_loop_error1_lengthT * sizeof(int32_t));
      pid_allowable_closed_loop_error1_length = pid_allowable_closed_loop_error1_lengthT;
      for( uint32_t i = 0; i < pid_allowable_closed_loop_error1_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_pid_allowable_closed_loop_error1;
      u_st_pid_allowable_closed_loop_error1.base = 0;
      u_st_pid_allowable_closed_loop_error1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_allowable_closed_loop_error1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_allowable_closed_loop_error1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_allowable_closed_loop_error1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pid_allowable_closed_loop_error1 = u_st_pid_allowable_closed_loop_error1.real;
      offset += sizeof(this->st_pid_allowable_closed_loop_error1);
        memcpy( &(this->pid_allowable_closed_loop_error1[i]), &(this->st_pid_allowable_closed_loop_error1), sizeof(int32_t));
      }
      uint32_t pid_max_integral_accumulator1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_max_integral_accumulator1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_max_integral_accumulator1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_max_integral_accumulator1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_max_integral_accumulator1_length);
      if(pid_max_integral_accumulator1_lengthT > pid_max_integral_accumulator1_length)
        this->pid_max_integral_accumulator1 = (double*)realloc(this->pid_max_integral_accumulator1, pid_max_integral_accumulator1_lengthT * sizeof(double));
      pid_max_integral_accumulator1_length = pid_max_integral_accumulator1_lengthT;
      for( uint32_t i = 0; i < pid_max_integral_accumulator1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_max_integral_accumulator1;
      u_st_pid_max_integral_accumulator1.base = 0;
      u_st_pid_max_integral_accumulator1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_max_integral_accumulator1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_max_integral_accumulator1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_max_integral_accumulator1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_max_integral_accumulator1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_max_integral_accumulator1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_max_integral_accumulator1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_max_integral_accumulator1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_max_integral_accumulator1 = u_st_pid_max_integral_accumulator1.real;
      offset += sizeof(this->st_pid_max_integral_accumulator1);
        memcpy( &(this->pid_max_integral_accumulator1[i]), &(this->st_pid_max_integral_accumulator1), sizeof(double));
      }
      uint32_t pid_closed_loop_peak_output1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_closed_loop_peak_output1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_closed_loop_peak_output1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_closed_loop_peak_output1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_closed_loop_peak_output1_length);
      if(pid_closed_loop_peak_output1_lengthT > pid_closed_loop_peak_output1_length)
        this->pid_closed_loop_peak_output1 = (double*)realloc(this->pid_closed_loop_peak_output1, pid_closed_loop_peak_output1_lengthT * sizeof(double));
      pid_closed_loop_peak_output1_length = pid_closed_loop_peak_output1_lengthT;
      for( uint32_t i = 0; i < pid_closed_loop_peak_output1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_closed_loop_peak_output1;
      u_st_pid_closed_loop_peak_output1.base = 0;
      u_st_pid_closed_loop_peak_output1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_closed_loop_peak_output1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_closed_loop_peak_output1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_closed_loop_peak_output1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_closed_loop_peak_output1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_closed_loop_peak_output1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_closed_loop_peak_output1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_closed_loop_peak_output1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_closed_loop_peak_output1 = u_st_pid_closed_loop_peak_output1.real;
      offset += sizeof(this->st_pid_closed_loop_peak_output1);
        memcpy( &(this->pid_closed_loop_peak_output1[i]), &(this->st_pid_closed_loop_peak_output1), sizeof(double));
      }
      uint32_t pid_closed_loop_period1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_closed_loop_period1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_closed_loop_period1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_closed_loop_period1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_closed_loop_period1_length);
      if(pid_closed_loop_period1_lengthT > pid_closed_loop_period1_length)
        this->pid_closed_loop_period1 = (int32_t*)realloc(this->pid_closed_loop_period1, pid_closed_loop_period1_lengthT * sizeof(int32_t));
      pid_closed_loop_period1_length = pid_closed_loop_period1_lengthT;
      for( uint32_t i = 0; i < pid_closed_loop_period1_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_pid_closed_loop_period1;
      u_st_pid_closed_loop_period1.base = 0;
      u_st_pid_closed_loop_period1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_closed_loop_period1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_closed_loop_period1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_closed_loop_period1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pid_closed_loop_period1 = u_st_pid_closed_loop_period1.real;
      offset += sizeof(this->st_pid_closed_loop_period1);
        memcpy( &(this->pid_closed_loop_period1[i]), &(this->st_pid_closed_loop_period1), sizeof(int32_t));
      }
      uint32_t pid_p2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_p2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_p2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_p2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_p2_length);
      if(pid_p2_lengthT > pid_p2_length)
        this->pid_p2 = (double*)realloc(this->pid_p2, pid_p2_lengthT * sizeof(double));
      pid_p2_length = pid_p2_lengthT;
      for( uint32_t i = 0; i < pid_p2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_p2;
      u_st_pid_p2.base = 0;
      u_st_pid_p2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_p2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_p2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_p2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_p2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_p2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_p2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_p2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_p2 = u_st_pid_p2.real;
      offset += sizeof(this->st_pid_p2);
        memcpy( &(this->pid_p2[i]), &(this->st_pid_p2), sizeof(double));
      }
      uint32_t pid_i2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_i2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_i2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_i2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_i2_length);
      if(pid_i2_lengthT > pid_i2_length)
        this->pid_i2 = (double*)realloc(this->pid_i2, pid_i2_lengthT * sizeof(double));
      pid_i2_length = pid_i2_lengthT;
      for( uint32_t i = 0; i < pid_i2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_i2;
      u_st_pid_i2.base = 0;
      u_st_pid_i2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_i2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_i2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_i2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_i2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_i2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_i2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_i2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_i2 = u_st_pid_i2.real;
      offset += sizeof(this->st_pid_i2);
        memcpy( &(this->pid_i2[i]), &(this->st_pid_i2), sizeof(double));
      }
      uint32_t pid_d2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_d2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_d2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_d2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_d2_length);
      if(pid_d2_lengthT > pid_d2_length)
        this->pid_d2 = (double*)realloc(this->pid_d2, pid_d2_lengthT * sizeof(double));
      pid_d2_length = pid_d2_lengthT;
      for( uint32_t i = 0; i < pid_d2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_d2;
      u_st_pid_d2.base = 0;
      u_st_pid_d2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_d2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_d2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_d2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_d2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_d2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_d2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_d2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_d2 = u_st_pid_d2.real;
      offset += sizeof(this->st_pid_d2);
        memcpy( &(this->pid_d2[i]), &(this->st_pid_d2), sizeof(double));
      }
      uint32_t pid_f2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_f2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_f2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_f2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_f2_length);
      if(pid_f2_lengthT > pid_f2_length)
        this->pid_f2 = (double*)realloc(this->pid_f2, pid_f2_lengthT * sizeof(double));
      pid_f2_length = pid_f2_lengthT;
      for( uint32_t i = 0; i < pid_f2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_f2;
      u_st_pid_f2.base = 0;
      u_st_pid_f2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_f2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_f2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_f2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_f2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_f2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_f2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_f2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_f2 = u_st_pid_f2.real;
      offset += sizeof(this->st_pid_f2);
        memcpy( &(this->pid_f2[i]), &(this->st_pid_f2), sizeof(double));
      }
      uint32_t pid_izone2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_izone2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_izone2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_izone2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_izone2_length);
      if(pid_izone2_lengthT > pid_izone2_length)
        this->pid_izone2 = (int32_t*)realloc(this->pid_izone2, pid_izone2_lengthT * sizeof(int32_t));
      pid_izone2_length = pid_izone2_lengthT;
      for( uint32_t i = 0; i < pid_izone2_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_pid_izone2;
      u_st_pid_izone2.base = 0;
      u_st_pid_izone2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_izone2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_izone2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_izone2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pid_izone2 = u_st_pid_izone2.real;
      offset += sizeof(this->st_pid_izone2);
        memcpy( &(this->pid_izone2[i]), &(this->st_pid_izone2), sizeof(int32_t));
      }
      uint32_t pid_allowable_closed_loop_error2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_allowable_closed_loop_error2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_allowable_closed_loop_error2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_allowable_closed_loop_error2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_allowable_closed_loop_error2_length);
      if(pid_allowable_closed_loop_error2_lengthT > pid_allowable_closed_loop_error2_length)
        this->pid_allowable_closed_loop_error2 = (int32_t*)realloc(this->pid_allowable_closed_loop_error2, pid_allowable_closed_loop_error2_lengthT * sizeof(int32_t));
      pid_allowable_closed_loop_error2_length = pid_allowable_closed_loop_error2_lengthT;
      for( uint32_t i = 0; i < pid_allowable_closed_loop_error2_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_pid_allowable_closed_loop_error2;
      u_st_pid_allowable_closed_loop_error2.base = 0;
      u_st_pid_allowable_closed_loop_error2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_allowable_closed_loop_error2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_allowable_closed_loop_error2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_allowable_closed_loop_error2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pid_allowable_closed_loop_error2 = u_st_pid_allowable_closed_loop_error2.real;
      offset += sizeof(this->st_pid_allowable_closed_loop_error2);
        memcpy( &(this->pid_allowable_closed_loop_error2[i]), &(this->st_pid_allowable_closed_loop_error2), sizeof(int32_t));
      }
      uint32_t pid_max_integral_accumulator2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_max_integral_accumulator2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_max_integral_accumulator2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_max_integral_accumulator2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_max_integral_accumulator2_length);
      if(pid_max_integral_accumulator2_lengthT > pid_max_integral_accumulator2_length)
        this->pid_max_integral_accumulator2 = (double*)realloc(this->pid_max_integral_accumulator2, pid_max_integral_accumulator2_lengthT * sizeof(double));
      pid_max_integral_accumulator2_length = pid_max_integral_accumulator2_lengthT;
      for( uint32_t i = 0; i < pid_max_integral_accumulator2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_max_integral_accumulator2;
      u_st_pid_max_integral_accumulator2.base = 0;
      u_st_pid_max_integral_accumulator2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_max_integral_accumulator2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_max_integral_accumulator2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_max_integral_accumulator2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_max_integral_accumulator2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_max_integral_accumulator2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_max_integral_accumulator2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_max_integral_accumulator2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_max_integral_accumulator2 = u_st_pid_max_integral_accumulator2.real;
      offset += sizeof(this->st_pid_max_integral_accumulator2);
        memcpy( &(this->pid_max_integral_accumulator2[i]), &(this->st_pid_max_integral_accumulator2), sizeof(double));
      }
      uint32_t pid_closed_loop_peak_output2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_closed_loop_peak_output2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_closed_loop_peak_output2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_closed_loop_peak_output2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_closed_loop_peak_output2_length);
      if(pid_closed_loop_peak_output2_lengthT > pid_closed_loop_peak_output2_length)
        this->pid_closed_loop_peak_output2 = (double*)realloc(this->pid_closed_loop_peak_output2, pid_closed_loop_peak_output2_lengthT * sizeof(double));
      pid_closed_loop_peak_output2_length = pid_closed_loop_peak_output2_lengthT;
      for( uint32_t i = 0; i < pid_closed_loop_peak_output2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_closed_loop_peak_output2;
      u_st_pid_closed_loop_peak_output2.base = 0;
      u_st_pid_closed_loop_peak_output2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_closed_loop_peak_output2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_closed_loop_peak_output2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_closed_loop_peak_output2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_closed_loop_peak_output2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_closed_loop_peak_output2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_closed_loop_peak_output2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_closed_loop_peak_output2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_closed_loop_peak_output2 = u_st_pid_closed_loop_peak_output2.real;
      offset += sizeof(this->st_pid_closed_loop_peak_output2);
        memcpy( &(this->pid_closed_loop_peak_output2[i]), &(this->st_pid_closed_loop_peak_output2), sizeof(double));
      }
      uint32_t pid_closed_loop_period2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_closed_loop_period2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_closed_loop_period2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_closed_loop_period2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_closed_loop_period2_length);
      if(pid_closed_loop_period2_lengthT > pid_closed_loop_period2_length)
        this->pid_closed_loop_period2 = (int32_t*)realloc(this->pid_closed_loop_period2, pid_closed_loop_period2_lengthT * sizeof(int32_t));
      pid_closed_loop_period2_length = pid_closed_loop_period2_lengthT;
      for( uint32_t i = 0; i < pid_closed_loop_period2_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_pid_closed_loop_period2;
      u_st_pid_closed_loop_period2.base = 0;
      u_st_pid_closed_loop_period2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_closed_loop_period2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_closed_loop_period2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_closed_loop_period2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pid_closed_loop_period2 = u_st_pid_closed_loop_period2.real;
      offset += sizeof(this->st_pid_closed_loop_period2);
        memcpy( &(this->pid_closed_loop_period2[i]), &(this->st_pid_closed_loop_period2), sizeof(int32_t));
      }
      uint32_t pid_p3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_p3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_p3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_p3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_p3_length);
      if(pid_p3_lengthT > pid_p3_length)
        this->pid_p3 = (double*)realloc(this->pid_p3, pid_p3_lengthT * sizeof(double));
      pid_p3_length = pid_p3_lengthT;
      for( uint32_t i = 0; i < pid_p3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_p3;
      u_st_pid_p3.base = 0;
      u_st_pid_p3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_p3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_p3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_p3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_p3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_p3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_p3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_p3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_p3 = u_st_pid_p3.real;
      offset += sizeof(this->st_pid_p3);
        memcpy( &(this->pid_p3[i]), &(this->st_pid_p3), sizeof(double));
      }
      uint32_t pid_i3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_i3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_i3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_i3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_i3_length);
      if(pid_i3_lengthT > pid_i3_length)
        this->pid_i3 = (double*)realloc(this->pid_i3, pid_i3_lengthT * sizeof(double));
      pid_i3_length = pid_i3_lengthT;
      for( uint32_t i = 0; i < pid_i3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_i3;
      u_st_pid_i3.base = 0;
      u_st_pid_i3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_i3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_i3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_i3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_i3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_i3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_i3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_i3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_i3 = u_st_pid_i3.real;
      offset += sizeof(this->st_pid_i3);
        memcpy( &(this->pid_i3[i]), &(this->st_pid_i3), sizeof(double));
      }
      uint32_t pid_d3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_d3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_d3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_d3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_d3_length);
      if(pid_d3_lengthT > pid_d3_length)
        this->pid_d3 = (double*)realloc(this->pid_d3, pid_d3_lengthT * sizeof(double));
      pid_d3_length = pid_d3_lengthT;
      for( uint32_t i = 0; i < pid_d3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_d3;
      u_st_pid_d3.base = 0;
      u_st_pid_d3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_d3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_d3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_d3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_d3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_d3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_d3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_d3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_d3 = u_st_pid_d3.real;
      offset += sizeof(this->st_pid_d3);
        memcpy( &(this->pid_d3[i]), &(this->st_pid_d3), sizeof(double));
      }
      uint32_t pid_f3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_f3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_f3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_f3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_f3_length);
      if(pid_f3_lengthT > pid_f3_length)
        this->pid_f3 = (double*)realloc(this->pid_f3, pid_f3_lengthT * sizeof(double));
      pid_f3_length = pid_f3_lengthT;
      for( uint32_t i = 0; i < pid_f3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_f3;
      u_st_pid_f3.base = 0;
      u_st_pid_f3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_f3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_f3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_f3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_f3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_f3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_f3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_f3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_f3 = u_st_pid_f3.real;
      offset += sizeof(this->st_pid_f3);
        memcpy( &(this->pid_f3[i]), &(this->st_pid_f3), sizeof(double));
      }
      uint32_t pid_izone3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_izone3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_izone3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_izone3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_izone3_length);
      if(pid_izone3_lengthT > pid_izone3_length)
        this->pid_izone3 = (int32_t*)realloc(this->pid_izone3, pid_izone3_lengthT * sizeof(int32_t));
      pid_izone3_length = pid_izone3_lengthT;
      for( uint32_t i = 0; i < pid_izone3_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_pid_izone3;
      u_st_pid_izone3.base = 0;
      u_st_pid_izone3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_izone3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_izone3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_izone3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pid_izone3 = u_st_pid_izone3.real;
      offset += sizeof(this->st_pid_izone3);
        memcpy( &(this->pid_izone3[i]), &(this->st_pid_izone3), sizeof(int32_t));
      }
      uint32_t pid_allowable_closed_loop_error3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_allowable_closed_loop_error3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_allowable_closed_loop_error3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_allowable_closed_loop_error3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_allowable_closed_loop_error3_length);
      if(pid_allowable_closed_loop_error3_lengthT > pid_allowable_closed_loop_error3_length)
        this->pid_allowable_closed_loop_error3 = (int32_t*)realloc(this->pid_allowable_closed_loop_error3, pid_allowable_closed_loop_error3_lengthT * sizeof(int32_t));
      pid_allowable_closed_loop_error3_length = pid_allowable_closed_loop_error3_lengthT;
      for( uint32_t i = 0; i < pid_allowable_closed_loop_error3_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_pid_allowable_closed_loop_error3;
      u_st_pid_allowable_closed_loop_error3.base = 0;
      u_st_pid_allowable_closed_loop_error3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_allowable_closed_loop_error3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_allowable_closed_loop_error3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_allowable_closed_loop_error3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pid_allowable_closed_loop_error3 = u_st_pid_allowable_closed_loop_error3.real;
      offset += sizeof(this->st_pid_allowable_closed_loop_error3);
        memcpy( &(this->pid_allowable_closed_loop_error3[i]), &(this->st_pid_allowable_closed_loop_error3), sizeof(int32_t));
      }
      uint32_t pid_max_integral_accumulator3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_max_integral_accumulator3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_max_integral_accumulator3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_max_integral_accumulator3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_max_integral_accumulator3_length);
      if(pid_max_integral_accumulator3_lengthT > pid_max_integral_accumulator3_length)
        this->pid_max_integral_accumulator3 = (double*)realloc(this->pid_max_integral_accumulator3, pid_max_integral_accumulator3_lengthT * sizeof(double));
      pid_max_integral_accumulator3_length = pid_max_integral_accumulator3_lengthT;
      for( uint32_t i = 0; i < pid_max_integral_accumulator3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_max_integral_accumulator3;
      u_st_pid_max_integral_accumulator3.base = 0;
      u_st_pid_max_integral_accumulator3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_max_integral_accumulator3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_max_integral_accumulator3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_max_integral_accumulator3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_max_integral_accumulator3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_max_integral_accumulator3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_max_integral_accumulator3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_max_integral_accumulator3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_max_integral_accumulator3 = u_st_pid_max_integral_accumulator3.real;
      offset += sizeof(this->st_pid_max_integral_accumulator3);
        memcpy( &(this->pid_max_integral_accumulator3[i]), &(this->st_pid_max_integral_accumulator3), sizeof(double));
      }
      uint32_t pid_closed_loop_peak_output3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_closed_loop_peak_output3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_closed_loop_peak_output3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_closed_loop_peak_output3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_closed_loop_peak_output3_length);
      if(pid_closed_loop_peak_output3_lengthT > pid_closed_loop_peak_output3_length)
        this->pid_closed_loop_peak_output3 = (double*)realloc(this->pid_closed_loop_peak_output3, pid_closed_loop_peak_output3_lengthT * sizeof(double));
      pid_closed_loop_peak_output3_length = pid_closed_loop_peak_output3_lengthT;
      for( uint32_t i = 0; i < pid_closed_loop_peak_output3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pid_closed_loop_peak_output3;
      u_st_pid_closed_loop_peak_output3.base = 0;
      u_st_pid_closed_loop_peak_output3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_closed_loop_peak_output3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_closed_loop_peak_output3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_closed_loop_peak_output3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pid_closed_loop_peak_output3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pid_closed_loop_peak_output3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pid_closed_loop_peak_output3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pid_closed_loop_peak_output3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pid_closed_loop_peak_output3 = u_st_pid_closed_loop_peak_output3.real;
      offset += sizeof(this->st_pid_closed_loop_peak_output3);
        memcpy( &(this->pid_closed_loop_peak_output3[i]), &(this->st_pid_closed_loop_peak_output3), sizeof(double));
      }
      uint32_t pid_closed_loop_period3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pid_closed_loop_period3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pid_closed_loop_period3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pid_closed_loop_period3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pid_closed_loop_period3_length);
      if(pid_closed_loop_period3_lengthT > pid_closed_loop_period3_length)
        this->pid_closed_loop_period3 = (int32_t*)realloc(this->pid_closed_loop_period3, pid_closed_loop_period3_lengthT * sizeof(int32_t));
      pid_closed_loop_period3_length = pid_closed_loop_period3_lengthT;
      for( uint32_t i = 0; i < pid_closed_loop_period3_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_pid_closed_loop_period3;
      u_st_pid_closed_loop_period3.base = 0;
      u_st_pid_closed_loop_period3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pid_closed_loop_period3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pid_closed_loop_period3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pid_closed_loop_period3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pid_closed_loop_period3 = u_st_pid_closed_loop_period3.real;
      offset += sizeof(this->st_pid_closed_loop_period3);
        memcpy( &(this->pid_closed_loop_period3[i]), &(this->st_pid_closed_loop_period3), sizeof(int32_t));
      }
      uint32_t aux_pid_polarity_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      aux_pid_polarity_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      aux_pid_polarity_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      aux_pid_polarity_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->aux_pid_polarity_length);
      if(aux_pid_polarity_lengthT > aux_pid_polarity_length)
        this->aux_pid_polarity = (bool*)realloc(this->aux_pid_polarity, aux_pid_polarity_lengthT * sizeof(bool));
      aux_pid_polarity_length = aux_pid_polarity_lengthT;
      for( uint32_t i = 0; i < aux_pid_polarity_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_aux_pid_polarity;
      u_st_aux_pid_polarity.base = 0;
      u_st_aux_pid_polarity.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_aux_pid_polarity = u_st_aux_pid_polarity.real;
      offset += sizeof(this->st_aux_pid_polarity);
        memcpy( &(this->aux_pid_polarity[i]), &(this->st_aux_pid_polarity), sizeof(bool));
      }
      uint32_t invert_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      invert_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      invert_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      invert_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->invert_length);
      if(invert_lengthT > invert_length)
        this->invert = (bool*)realloc(this->invert, invert_lengthT * sizeof(bool));
      invert_length = invert_lengthT;
      for( uint32_t i = 0; i < invert_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_invert;
      u_st_invert.base = 0;
      u_st_invert.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_invert = u_st_invert.real;
      offset += sizeof(this->st_invert);
        memcpy( &(this->invert[i]), &(this->st_invert), sizeof(bool));
      }
      uint32_t sensorPhase_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      sensorPhase_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      sensorPhase_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      sensorPhase_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->sensorPhase_length);
      if(sensorPhase_lengthT > sensorPhase_length)
        this->sensorPhase = (bool*)realloc(this->sensorPhase, sensorPhase_lengthT * sizeof(bool));
      sensorPhase_length = sensorPhase_lengthT;
      for( uint32_t i = 0; i < sensorPhase_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_sensorPhase;
      u_st_sensorPhase.base = 0;
      u_st_sensorPhase.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_sensorPhase = u_st_sensorPhase.real;
      offset += sizeof(this->st_sensorPhase);
        memcpy( &(this->sensorPhase[i]), &(this->st_sensorPhase), sizeof(bool));
      }
      uint32_t neutral_mode_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      neutral_mode_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      neutral_mode_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      neutral_mode_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->neutral_mode_length);
      if(neutral_mode_lengthT > neutral_mode_length)
        this->neutral_mode = (char**)realloc(this->neutral_mode, neutral_mode_lengthT * sizeof(char*));
      neutral_mode_length = neutral_mode_lengthT;
      for( uint32_t i = 0; i < neutral_mode_length; i++){
      uint32_t length_st_neutral_mode;
      arrToVar(length_st_neutral_mode, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_neutral_mode; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_neutral_mode-1]=0;
      this->st_neutral_mode = (char *)(inbuffer + offset-1);
      offset += length_st_neutral_mode;
        memcpy( &(this->neutral_mode[i]), &(this->st_neutral_mode), sizeof(char*));
      }
      uint32_t closed_loop_ramp_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      closed_loop_ramp_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      closed_loop_ramp_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      closed_loop_ramp_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->closed_loop_ramp_length);
      if(closed_loop_ramp_lengthT > closed_loop_ramp_length)
        this->closed_loop_ramp = (double*)realloc(this->closed_loop_ramp, closed_loop_ramp_lengthT * sizeof(double));
      closed_loop_ramp_length = closed_loop_ramp_lengthT;
      for( uint32_t i = 0; i < closed_loop_ramp_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_closed_loop_ramp;
      u_st_closed_loop_ramp.base = 0;
      u_st_closed_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_closed_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_closed_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_closed_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_closed_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_closed_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_closed_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_closed_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_closed_loop_ramp = u_st_closed_loop_ramp.real;
      offset += sizeof(this->st_closed_loop_ramp);
        memcpy( &(this->closed_loop_ramp[i]), &(this->st_closed_loop_ramp), sizeof(double));
      }
      uint32_t open_loop_ramp_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      open_loop_ramp_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      open_loop_ramp_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      open_loop_ramp_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->open_loop_ramp_length);
      if(open_loop_ramp_lengthT > open_loop_ramp_length)
        this->open_loop_ramp = (double*)realloc(this->open_loop_ramp, open_loop_ramp_lengthT * sizeof(double));
      open_loop_ramp_length = open_loop_ramp_lengthT;
      for( uint32_t i = 0; i < open_loop_ramp_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_open_loop_ramp;
      u_st_open_loop_ramp.base = 0;
      u_st_open_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_open_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_open_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_open_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_open_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_open_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_open_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_open_loop_ramp.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_open_loop_ramp = u_st_open_loop_ramp.real;
      offset += sizeof(this->st_open_loop_ramp);
        memcpy( &(this->open_loop_ramp[i]), &(this->st_open_loop_ramp), sizeof(double));
      }
      uint32_t peak_output_forward_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      peak_output_forward_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      peak_output_forward_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      peak_output_forward_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->peak_output_forward_length);
      if(peak_output_forward_lengthT > peak_output_forward_length)
        this->peak_output_forward = (double*)realloc(this->peak_output_forward, peak_output_forward_lengthT * sizeof(double));
      peak_output_forward_length = peak_output_forward_lengthT;
      for( uint32_t i = 0; i < peak_output_forward_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_peak_output_forward;
      u_st_peak_output_forward.base = 0;
      u_st_peak_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_peak_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_peak_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_peak_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_peak_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_peak_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_peak_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_peak_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_peak_output_forward = u_st_peak_output_forward.real;
      offset += sizeof(this->st_peak_output_forward);
        memcpy( &(this->peak_output_forward[i]), &(this->st_peak_output_forward), sizeof(double));
      }
      uint32_t peak_output_reverse_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      peak_output_reverse_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      peak_output_reverse_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      peak_output_reverse_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->peak_output_reverse_length);
      if(peak_output_reverse_lengthT > peak_output_reverse_length)
        this->peak_output_reverse = (double*)realloc(this->peak_output_reverse, peak_output_reverse_lengthT * sizeof(double));
      peak_output_reverse_length = peak_output_reverse_lengthT;
      for( uint32_t i = 0; i < peak_output_reverse_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_peak_output_reverse;
      u_st_peak_output_reverse.base = 0;
      u_st_peak_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_peak_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_peak_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_peak_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_peak_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_peak_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_peak_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_peak_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_peak_output_reverse = u_st_peak_output_reverse.real;
      offset += sizeof(this->st_peak_output_reverse);
        memcpy( &(this->peak_output_reverse[i]), &(this->st_peak_output_reverse), sizeof(double));
      }
      uint32_t nominal_output_forward_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      nominal_output_forward_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      nominal_output_forward_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      nominal_output_forward_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->nominal_output_forward_length);
      if(nominal_output_forward_lengthT > nominal_output_forward_length)
        this->nominal_output_forward = (double*)realloc(this->nominal_output_forward, nominal_output_forward_lengthT * sizeof(double));
      nominal_output_forward_length = nominal_output_forward_lengthT;
      for( uint32_t i = 0; i < nominal_output_forward_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_nominal_output_forward;
      u_st_nominal_output_forward.base = 0;
      u_st_nominal_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_nominal_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_nominal_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_nominal_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_nominal_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_nominal_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_nominal_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_nominal_output_forward.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_nominal_output_forward = u_st_nominal_output_forward.real;
      offset += sizeof(this->st_nominal_output_forward);
        memcpy( &(this->nominal_output_forward[i]), &(this->st_nominal_output_forward), sizeof(double));
      }
      uint32_t nominal_output_reverse_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      nominal_output_reverse_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      nominal_output_reverse_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      nominal_output_reverse_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->nominal_output_reverse_length);
      if(nominal_output_reverse_lengthT > nominal_output_reverse_length)
        this->nominal_output_reverse = (double*)realloc(this->nominal_output_reverse, nominal_output_reverse_lengthT * sizeof(double));
      nominal_output_reverse_length = nominal_output_reverse_lengthT;
      for( uint32_t i = 0; i < nominal_output_reverse_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_nominal_output_reverse;
      u_st_nominal_output_reverse.base = 0;
      u_st_nominal_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_nominal_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_nominal_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_nominal_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_nominal_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_nominal_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_nominal_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_nominal_output_reverse.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_nominal_output_reverse = u_st_nominal_output_reverse.real;
      offset += sizeof(this->st_nominal_output_reverse);
        memcpy( &(this->nominal_output_reverse[i]), &(this->st_nominal_output_reverse), sizeof(double));
      }
      uint32_t neutral_deadband_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      neutral_deadband_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      neutral_deadband_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      neutral_deadband_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->neutral_deadband_length);
      if(neutral_deadband_lengthT > neutral_deadband_length)
        this->neutral_deadband = (double*)realloc(this->neutral_deadband, neutral_deadband_lengthT * sizeof(double));
      neutral_deadband_length = neutral_deadband_lengthT;
      for( uint32_t i = 0; i < neutral_deadband_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_neutral_deadband;
      u_st_neutral_deadband.base = 0;
      u_st_neutral_deadband.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_neutral_deadband.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_neutral_deadband.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_neutral_deadband.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_neutral_deadband.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_neutral_deadband.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_neutral_deadband.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_neutral_deadband.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_neutral_deadband = u_st_neutral_deadband.real;
      offset += sizeof(this->st_neutral_deadband);
        memcpy( &(this->neutral_deadband[i]), &(this->st_neutral_deadband), sizeof(double));
      }
      uint32_t voltage_compensation_saturation_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      voltage_compensation_saturation_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      voltage_compensation_saturation_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      voltage_compensation_saturation_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->voltage_compensation_saturation_length);
      if(voltage_compensation_saturation_lengthT > voltage_compensation_saturation_length)
        this->voltage_compensation_saturation = (double*)realloc(this->voltage_compensation_saturation, voltage_compensation_saturation_lengthT * sizeof(double));
      voltage_compensation_saturation_length = voltage_compensation_saturation_lengthT;
      for( uint32_t i = 0; i < voltage_compensation_saturation_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_voltage_compensation_saturation;
      u_st_voltage_compensation_saturation.base = 0;
      u_st_voltage_compensation_saturation.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_voltage_compensation_saturation.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_voltage_compensation_saturation.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_voltage_compensation_saturation.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_voltage_compensation_saturation.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_voltage_compensation_saturation.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_voltage_compensation_saturation.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_voltage_compensation_saturation.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_voltage_compensation_saturation = u_st_voltage_compensation_saturation.real;
      offset += sizeof(this->st_voltage_compensation_saturation);
        memcpy( &(this->voltage_compensation_saturation[i]), &(this->st_voltage_compensation_saturation), sizeof(double));
      }
      uint32_t voltage_measurement_filter_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      voltage_measurement_filter_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      voltage_measurement_filter_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      voltage_measurement_filter_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->voltage_measurement_filter_length);
      if(voltage_measurement_filter_lengthT > voltage_measurement_filter_length)
        this->voltage_measurement_filter = (int32_t*)realloc(this->voltage_measurement_filter, voltage_measurement_filter_lengthT * sizeof(int32_t));
      voltage_measurement_filter_length = voltage_measurement_filter_lengthT;
      for( uint32_t i = 0; i < voltage_measurement_filter_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_voltage_measurement_filter;
      u_st_voltage_measurement_filter.base = 0;
      u_st_voltage_measurement_filter.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_voltage_measurement_filter.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_voltage_measurement_filter.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_voltage_measurement_filter.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_voltage_measurement_filter = u_st_voltage_measurement_filter.real;
      offset += sizeof(this->st_voltage_measurement_filter);
        memcpy( &(this->voltage_measurement_filter[i]), &(this->st_voltage_measurement_filter), sizeof(int32_t));
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
      uint32_t velocity_measurement_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      velocity_measurement_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      velocity_measurement_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      velocity_measurement_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->velocity_measurement_period_length);
      if(velocity_measurement_period_lengthT > velocity_measurement_period_length)
        this->velocity_measurement_period = (int32_t*)realloc(this->velocity_measurement_period, velocity_measurement_period_lengthT * sizeof(int32_t));
      velocity_measurement_period_length = velocity_measurement_period_lengthT;
      for( uint32_t i = 0; i < velocity_measurement_period_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_velocity_measurement_period;
      u_st_velocity_measurement_period.base = 0;
      u_st_velocity_measurement_period.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_velocity_measurement_period.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_velocity_measurement_period.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_velocity_measurement_period.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_velocity_measurement_period = u_st_velocity_measurement_period.real;
      offset += sizeof(this->st_velocity_measurement_period);
        memcpy( &(this->velocity_measurement_period[i]), &(this->st_velocity_measurement_period), sizeof(int32_t));
      }
      uint32_t velocity_measurement_window_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      velocity_measurement_window_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      velocity_measurement_window_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      velocity_measurement_window_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->velocity_measurement_window_length);
      if(velocity_measurement_window_lengthT > velocity_measurement_window_length)
        this->velocity_measurement_window = (int32_t*)realloc(this->velocity_measurement_window, velocity_measurement_window_lengthT * sizeof(int32_t));
      velocity_measurement_window_length = velocity_measurement_window_lengthT;
      for( uint32_t i = 0; i < velocity_measurement_window_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_velocity_measurement_window;
      u_st_velocity_measurement_window.base = 0;
      u_st_velocity_measurement_window.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_velocity_measurement_window.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_velocity_measurement_window.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_velocity_measurement_window.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_velocity_measurement_window = u_st_velocity_measurement_window.real;
      offset += sizeof(this->st_velocity_measurement_window);
        memcpy( &(this->velocity_measurement_window[i]), &(this->st_velocity_measurement_window), sizeof(int32_t));
      }
      uint32_t limit_switch_local_forward_source_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      limit_switch_local_forward_source_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      limit_switch_local_forward_source_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      limit_switch_local_forward_source_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->limit_switch_local_forward_source_length);
      if(limit_switch_local_forward_source_lengthT > limit_switch_local_forward_source_length)
        this->limit_switch_local_forward_source = (char**)realloc(this->limit_switch_local_forward_source, limit_switch_local_forward_source_lengthT * sizeof(char*));
      limit_switch_local_forward_source_length = limit_switch_local_forward_source_lengthT;
      for( uint32_t i = 0; i < limit_switch_local_forward_source_length; i++){
      uint32_t length_st_limit_switch_local_forward_source;
      arrToVar(length_st_limit_switch_local_forward_source, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_limit_switch_local_forward_source; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_limit_switch_local_forward_source-1]=0;
      this->st_limit_switch_local_forward_source = (char *)(inbuffer + offset-1);
      offset += length_st_limit_switch_local_forward_source;
        memcpy( &(this->limit_switch_local_forward_source[i]), &(this->st_limit_switch_local_forward_source), sizeof(char*));
      }
      uint32_t limit_switch_local_forward_normal_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      limit_switch_local_forward_normal_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      limit_switch_local_forward_normal_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      limit_switch_local_forward_normal_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->limit_switch_local_forward_normal_length);
      if(limit_switch_local_forward_normal_lengthT > limit_switch_local_forward_normal_length)
        this->limit_switch_local_forward_normal = (char**)realloc(this->limit_switch_local_forward_normal, limit_switch_local_forward_normal_lengthT * sizeof(char*));
      limit_switch_local_forward_normal_length = limit_switch_local_forward_normal_lengthT;
      for( uint32_t i = 0; i < limit_switch_local_forward_normal_length; i++){
      uint32_t length_st_limit_switch_local_forward_normal;
      arrToVar(length_st_limit_switch_local_forward_normal, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_limit_switch_local_forward_normal; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_limit_switch_local_forward_normal-1]=0;
      this->st_limit_switch_local_forward_normal = (char *)(inbuffer + offset-1);
      offset += length_st_limit_switch_local_forward_normal;
        memcpy( &(this->limit_switch_local_forward_normal[i]), &(this->st_limit_switch_local_forward_normal), sizeof(char*));
      }
      uint32_t limit_switch_local_reverse_source_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      limit_switch_local_reverse_source_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      limit_switch_local_reverse_source_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      limit_switch_local_reverse_source_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->limit_switch_local_reverse_source_length);
      if(limit_switch_local_reverse_source_lengthT > limit_switch_local_reverse_source_length)
        this->limit_switch_local_reverse_source = (char**)realloc(this->limit_switch_local_reverse_source, limit_switch_local_reverse_source_lengthT * sizeof(char*));
      limit_switch_local_reverse_source_length = limit_switch_local_reverse_source_lengthT;
      for( uint32_t i = 0; i < limit_switch_local_reverse_source_length; i++){
      uint32_t length_st_limit_switch_local_reverse_source;
      arrToVar(length_st_limit_switch_local_reverse_source, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_limit_switch_local_reverse_source; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_limit_switch_local_reverse_source-1]=0;
      this->st_limit_switch_local_reverse_source = (char *)(inbuffer + offset-1);
      offset += length_st_limit_switch_local_reverse_source;
        memcpy( &(this->limit_switch_local_reverse_source[i]), &(this->st_limit_switch_local_reverse_source), sizeof(char*));
      }
      uint32_t limit_switch_local_reverse_normal_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      limit_switch_local_reverse_normal_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      limit_switch_local_reverse_normal_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      limit_switch_local_reverse_normal_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->limit_switch_local_reverse_normal_length);
      if(limit_switch_local_reverse_normal_lengthT > limit_switch_local_reverse_normal_length)
        this->limit_switch_local_reverse_normal = (char**)realloc(this->limit_switch_local_reverse_normal, limit_switch_local_reverse_normal_lengthT * sizeof(char*));
      limit_switch_local_reverse_normal_length = limit_switch_local_reverse_normal_lengthT;
      for( uint32_t i = 0; i < limit_switch_local_reverse_normal_length; i++){
      uint32_t length_st_limit_switch_local_reverse_normal;
      arrToVar(length_st_limit_switch_local_reverse_normal, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_limit_switch_local_reverse_normal; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_limit_switch_local_reverse_normal-1]=0;
      this->st_limit_switch_local_reverse_normal = (char *)(inbuffer + offset-1);
      offset += length_st_limit_switch_local_reverse_normal;
        memcpy( &(this->limit_switch_local_reverse_normal[i]), &(this->st_limit_switch_local_reverse_normal), sizeof(char*));
      }
      uint32_t limit_switch_remote_forward_source_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      limit_switch_remote_forward_source_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      limit_switch_remote_forward_source_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      limit_switch_remote_forward_source_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->limit_switch_remote_forward_source_length);
      if(limit_switch_remote_forward_source_lengthT > limit_switch_remote_forward_source_length)
        this->limit_switch_remote_forward_source = (char**)realloc(this->limit_switch_remote_forward_source, limit_switch_remote_forward_source_lengthT * sizeof(char*));
      limit_switch_remote_forward_source_length = limit_switch_remote_forward_source_lengthT;
      for( uint32_t i = 0; i < limit_switch_remote_forward_source_length; i++){
      uint32_t length_st_limit_switch_remote_forward_source;
      arrToVar(length_st_limit_switch_remote_forward_source, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_limit_switch_remote_forward_source; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_limit_switch_remote_forward_source-1]=0;
      this->st_limit_switch_remote_forward_source = (char *)(inbuffer + offset-1);
      offset += length_st_limit_switch_remote_forward_source;
        memcpy( &(this->limit_switch_remote_forward_source[i]), &(this->st_limit_switch_remote_forward_source), sizeof(char*));
      }
      uint32_t limit_switch_remote_forward_normal_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      limit_switch_remote_forward_normal_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      limit_switch_remote_forward_normal_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      limit_switch_remote_forward_normal_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->limit_switch_remote_forward_normal_length);
      if(limit_switch_remote_forward_normal_lengthT > limit_switch_remote_forward_normal_length)
        this->limit_switch_remote_forward_normal = (char**)realloc(this->limit_switch_remote_forward_normal, limit_switch_remote_forward_normal_lengthT * sizeof(char*));
      limit_switch_remote_forward_normal_length = limit_switch_remote_forward_normal_lengthT;
      for( uint32_t i = 0; i < limit_switch_remote_forward_normal_length; i++){
      uint32_t length_st_limit_switch_remote_forward_normal;
      arrToVar(length_st_limit_switch_remote_forward_normal, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_limit_switch_remote_forward_normal; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_limit_switch_remote_forward_normal-1]=0;
      this->st_limit_switch_remote_forward_normal = (char *)(inbuffer + offset-1);
      offset += length_st_limit_switch_remote_forward_normal;
        memcpy( &(this->limit_switch_remote_forward_normal[i]), &(this->st_limit_switch_remote_forward_normal), sizeof(char*));
      }
      uint32_t limit_switch_remote_forward_id_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      limit_switch_remote_forward_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      limit_switch_remote_forward_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      limit_switch_remote_forward_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->limit_switch_remote_forward_id_length);
      if(limit_switch_remote_forward_id_lengthT > limit_switch_remote_forward_id_length)
        this->limit_switch_remote_forward_id = (uint8_t*)realloc(this->limit_switch_remote_forward_id, limit_switch_remote_forward_id_lengthT * sizeof(uint8_t));
      limit_switch_remote_forward_id_length = limit_switch_remote_forward_id_lengthT;
      for( uint32_t i = 0; i < limit_switch_remote_forward_id_length; i++){
      this->st_limit_switch_remote_forward_id =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_limit_switch_remote_forward_id);
        memcpy( &(this->limit_switch_remote_forward_id[i]), &(this->st_limit_switch_remote_forward_id), sizeof(uint8_t));
      }
      uint32_t limit_switch_remote_reverse_source_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      limit_switch_remote_reverse_source_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      limit_switch_remote_reverse_source_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      limit_switch_remote_reverse_source_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->limit_switch_remote_reverse_source_length);
      if(limit_switch_remote_reverse_source_lengthT > limit_switch_remote_reverse_source_length)
        this->limit_switch_remote_reverse_source = (char**)realloc(this->limit_switch_remote_reverse_source, limit_switch_remote_reverse_source_lengthT * sizeof(char*));
      limit_switch_remote_reverse_source_length = limit_switch_remote_reverse_source_lengthT;
      for( uint32_t i = 0; i < limit_switch_remote_reverse_source_length; i++){
      uint32_t length_st_limit_switch_remote_reverse_source;
      arrToVar(length_st_limit_switch_remote_reverse_source, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_limit_switch_remote_reverse_source; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_limit_switch_remote_reverse_source-1]=0;
      this->st_limit_switch_remote_reverse_source = (char *)(inbuffer + offset-1);
      offset += length_st_limit_switch_remote_reverse_source;
        memcpy( &(this->limit_switch_remote_reverse_source[i]), &(this->st_limit_switch_remote_reverse_source), sizeof(char*));
      }
      uint32_t limit_switch_remote_reverse_normal_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      limit_switch_remote_reverse_normal_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      limit_switch_remote_reverse_normal_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      limit_switch_remote_reverse_normal_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->limit_switch_remote_reverse_normal_length);
      if(limit_switch_remote_reverse_normal_lengthT > limit_switch_remote_reverse_normal_length)
        this->limit_switch_remote_reverse_normal = (char**)realloc(this->limit_switch_remote_reverse_normal, limit_switch_remote_reverse_normal_lengthT * sizeof(char*));
      limit_switch_remote_reverse_normal_length = limit_switch_remote_reverse_normal_lengthT;
      for( uint32_t i = 0; i < limit_switch_remote_reverse_normal_length; i++){
      uint32_t length_st_limit_switch_remote_reverse_normal;
      arrToVar(length_st_limit_switch_remote_reverse_normal, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_limit_switch_remote_reverse_normal; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_limit_switch_remote_reverse_normal-1]=0;
      this->st_limit_switch_remote_reverse_normal = (char *)(inbuffer + offset-1);
      offset += length_st_limit_switch_remote_reverse_normal;
        memcpy( &(this->limit_switch_remote_reverse_normal[i]), &(this->st_limit_switch_remote_reverse_normal), sizeof(char*));
      }
      uint32_t limit_switch_remote_reverse_id_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      limit_switch_remote_reverse_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      limit_switch_remote_reverse_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      limit_switch_remote_reverse_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->limit_switch_remote_reverse_id_length);
      if(limit_switch_remote_reverse_id_lengthT > limit_switch_remote_reverse_id_length)
        this->limit_switch_remote_reverse_id = (uint8_t*)realloc(this->limit_switch_remote_reverse_id, limit_switch_remote_reverse_id_lengthT * sizeof(uint8_t));
      limit_switch_remote_reverse_id_length = limit_switch_remote_reverse_id_lengthT;
      for( uint32_t i = 0; i < limit_switch_remote_reverse_id_length; i++){
      this->st_limit_switch_remote_reverse_id =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_limit_switch_remote_reverse_id);
        memcpy( &(this->limit_switch_remote_reverse_id[i]), &(this->st_limit_switch_remote_reverse_id), sizeof(uint8_t));
      }
      uint32_t clear_position_on_limit_f_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      clear_position_on_limit_f_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      clear_position_on_limit_f_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      clear_position_on_limit_f_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->clear_position_on_limit_f_length);
      if(clear_position_on_limit_f_lengthT > clear_position_on_limit_f_length)
        this->clear_position_on_limit_f = (bool*)realloc(this->clear_position_on_limit_f, clear_position_on_limit_f_lengthT * sizeof(bool));
      clear_position_on_limit_f_length = clear_position_on_limit_f_lengthT;
      for( uint32_t i = 0; i < clear_position_on_limit_f_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_clear_position_on_limit_f;
      u_st_clear_position_on_limit_f.base = 0;
      u_st_clear_position_on_limit_f.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_clear_position_on_limit_f = u_st_clear_position_on_limit_f.real;
      offset += sizeof(this->st_clear_position_on_limit_f);
        memcpy( &(this->clear_position_on_limit_f[i]), &(this->st_clear_position_on_limit_f), sizeof(bool));
      }
      uint32_t clear_position_on_limit_r_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      clear_position_on_limit_r_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      clear_position_on_limit_r_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      clear_position_on_limit_r_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->clear_position_on_limit_r_length);
      if(clear_position_on_limit_r_lengthT > clear_position_on_limit_r_length)
        this->clear_position_on_limit_r = (bool*)realloc(this->clear_position_on_limit_r, clear_position_on_limit_r_lengthT * sizeof(bool));
      clear_position_on_limit_r_length = clear_position_on_limit_r_lengthT;
      for( uint32_t i = 0; i < clear_position_on_limit_r_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_clear_position_on_limit_r;
      u_st_clear_position_on_limit_r.base = 0;
      u_st_clear_position_on_limit_r.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_clear_position_on_limit_r = u_st_clear_position_on_limit_r.real;
      offset += sizeof(this->st_clear_position_on_limit_r);
        memcpy( &(this->clear_position_on_limit_r[i]), &(this->st_clear_position_on_limit_r), sizeof(bool));
      }
      uint32_t softlimit_forward_threshold_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      softlimit_forward_threshold_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      softlimit_forward_threshold_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      softlimit_forward_threshold_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->softlimit_forward_threshold_length);
      if(softlimit_forward_threshold_lengthT > softlimit_forward_threshold_length)
        this->softlimit_forward_threshold = (double*)realloc(this->softlimit_forward_threshold, softlimit_forward_threshold_lengthT * sizeof(double));
      softlimit_forward_threshold_length = softlimit_forward_threshold_lengthT;
      for( uint32_t i = 0; i < softlimit_forward_threshold_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_softlimit_forward_threshold;
      u_st_softlimit_forward_threshold.base = 0;
      u_st_softlimit_forward_threshold.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_softlimit_forward_threshold.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_softlimit_forward_threshold.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_softlimit_forward_threshold.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_softlimit_forward_threshold.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_softlimit_forward_threshold.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_softlimit_forward_threshold.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_softlimit_forward_threshold.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_softlimit_forward_threshold = u_st_softlimit_forward_threshold.real;
      offset += sizeof(this->st_softlimit_forward_threshold);
        memcpy( &(this->softlimit_forward_threshold[i]), &(this->st_softlimit_forward_threshold), sizeof(double));
      }
      uint32_t softlimit_forward_enable_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      softlimit_forward_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      softlimit_forward_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      softlimit_forward_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->softlimit_forward_enable_length);
      if(softlimit_forward_enable_lengthT > softlimit_forward_enable_length)
        this->softlimit_forward_enable = (bool*)realloc(this->softlimit_forward_enable, softlimit_forward_enable_lengthT * sizeof(bool));
      softlimit_forward_enable_length = softlimit_forward_enable_lengthT;
      for( uint32_t i = 0; i < softlimit_forward_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_softlimit_forward_enable;
      u_st_softlimit_forward_enable.base = 0;
      u_st_softlimit_forward_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_softlimit_forward_enable = u_st_softlimit_forward_enable.real;
      offset += sizeof(this->st_softlimit_forward_enable);
        memcpy( &(this->softlimit_forward_enable[i]), &(this->st_softlimit_forward_enable), sizeof(bool));
      }
      uint32_t softlimit_reverse_threshold_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      softlimit_reverse_threshold_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      softlimit_reverse_threshold_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      softlimit_reverse_threshold_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->softlimit_reverse_threshold_length);
      if(softlimit_reverse_threshold_lengthT > softlimit_reverse_threshold_length)
        this->softlimit_reverse_threshold = (double*)realloc(this->softlimit_reverse_threshold, softlimit_reverse_threshold_lengthT * sizeof(double));
      softlimit_reverse_threshold_length = softlimit_reverse_threshold_lengthT;
      for( uint32_t i = 0; i < softlimit_reverse_threshold_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_softlimit_reverse_threshold;
      u_st_softlimit_reverse_threshold.base = 0;
      u_st_softlimit_reverse_threshold.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_softlimit_reverse_threshold.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_softlimit_reverse_threshold.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_softlimit_reverse_threshold.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_softlimit_reverse_threshold.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_softlimit_reverse_threshold.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_softlimit_reverse_threshold.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_softlimit_reverse_threshold.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_softlimit_reverse_threshold = u_st_softlimit_reverse_threshold.real;
      offset += sizeof(this->st_softlimit_reverse_threshold);
        memcpy( &(this->softlimit_reverse_threshold[i]), &(this->st_softlimit_reverse_threshold), sizeof(double));
      }
      uint32_t softlimit_reverse_enable_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      softlimit_reverse_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      softlimit_reverse_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      softlimit_reverse_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->softlimit_reverse_enable_length);
      if(softlimit_reverse_enable_lengthT > softlimit_reverse_enable_length)
        this->softlimit_reverse_enable = (bool*)realloc(this->softlimit_reverse_enable, softlimit_reverse_enable_lengthT * sizeof(bool));
      softlimit_reverse_enable_length = softlimit_reverse_enable_lengthT;
      for( uint32_t i = 0; i < softlimit_reverse_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_softlimit_reverse_enable;
      u_st_softlimit_reverse_enable.base = 0;
      u_st_softlimit_reverse_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_softlimit_reverse_enable = u_st_softlimit_reverse_enable.real;
      offset += sizeof(this->st_softlimit_reverse_enable);
        memcpy( &(this->softlimit_reverse_enable[i]), &(this->st_softlimit_reverse_enable), sizeof(bool));
      }
      uint32_t softlimits_override_enable_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      softlimits_override_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      softlimits_override_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      softlimits_override_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->softlimits_override_enable_length);
      if(softlimits_override_enable_lengthT > softlimits_override_enable_length)
        this->softlimits_override_enable = (bool*)realloc(this->softlimits_override_enable, softlimits_override_enable_lengthT * sizeof(bool));
      softlimits_override_enable_length = softlimits_override_enable_lengthT;
      for( uint32_t i = 0; i < softlimits_override_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_softlimits_override_enable;
      u_st_softlimits_override_enable.base = 0;
      u_st_softlimits_override_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_softlimits_override_enable = u_st_softlimits_override_enable.real;
      offset += sizeof(this->st_softlimits_override_enable);
        memcpy( &(this->softlimits_override_enable[i]), &(this->st_softlimits_override_enable), sizeof(bool));
      }
      uint32_t current_limit_peak_amps_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      current_limit_peak_amps_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      current_limit_peak_amps_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      current_limit_peak_amps_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->current_limit_peak_amps_length);
      if(current_limit_peak_amps_lengthT > current_limit_peak_amps_length)
        this->current_limit_peak_amps = (int32_t*)realloc(this->current_limit_peak_amps, current_limit_peak_amps_lengthT * sizeof(int32_t));
      current_limit_peak_amps_length = current_limit_peak_amps_lengthT;
      for( uint32_t i = 0; i < current_limit_peak_amps_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_current_limit_peak_amps;
      u_st_current_limit_peak_amps.base = 0;
      u_st_current_limit_peak_amps.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_current_limit_peak_amps.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_current_limit_peak_amps.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_current_limit_peak_amps.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_current_limit_peak_amps = u_st_current_limit_peak_amps.real;
      offset += sizeof(this->st_current_limit_peak_amps);
        memcpy( &(this->current_limit_peak_amps[i]), &(this->st_current_limit_peak_amps), sizeof(int32_t));
      }
      uint32_t current_limit_peak_msec_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      current_limit_peak_msec_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      current_limit_peak_msec_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      current_limit_peak_msec_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->current_limit_peak_msec_length);
      if(current_limit_peak_msec_lengthT > current_limit_peak_msec_length)
        this->current_limit_peak_msec = (int32_t*)realloc(this->current_limit_peak_msec, current_limit_peak_msec_lengthT * sizeof(int32_t));
      current_limit_peak_msec_length = current_limit_peak_msec_lengthT;
      for( uint32_t i = 0; i < current_limit_peak_msec_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_current_limit_peak_msec;
      u_st_current_limit_peak_msec.base = 0;
      u_st_current_limit_peak_msec.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_current_limit_peak_msec.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_current_limit_peak_msec.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_current_limit_peak_msec.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_current_limit_peak_msec = u_st_current_limit_peak_msec.real;
      offset += sizeof(this->st_current_limit_peak_msec);
        memcpy( &(this->current_limit_peak_msec[i]), &(this->st_current_limit_peak_msec), sizeof(int32_t));
      }
      uint32_t current_limit_continuous_amps_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      current_limit_continuous_amps_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      current_limit_continuous_amps_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      current_limit_continuous_amps_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->current_limit_continuous_amps_length);
      if(current_limit_continuous_amps_lengthT > current_limit_continuous_amps_length)
        this->current_limit_continuous_amps = (int32_t*)realloc(this->current_limit_continuous_amps, current_limit_continuous_amps_lengthT * sizeof(int32_t));
      current_limit_continuous_amps_length = current_limit_continuous_amps_lengthT;
      for( uint32_t i = 0; i < current_limit_continuous_amps_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_current_limit_continuous_amps;
      u_st_current_limit_continuous_amps.base = 0;
      u_st_current_limit_continuous_amps.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_current_limit_continuous_amps.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_current_limit_continuous_amps.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_current_limit_continuous_amps.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_current_limit_continuous_amps = u_st_current_limit_continuous_amps.real;
      offset += sizeof(this->st_current_limit_continuous_amps);
        memcpy( &(this->current_limit_continuous_amps[i]), &(this->st_current_limit_continuous_amps), sizeof(int32_t));
      }
      uint32_t current_limit_enable_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      current_limit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      current_limit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      current_limit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->current_limit_enable_length);
      if(current_limit_enable_lengthT > current_limit_enable_length)
        this->current_limit_enable = (bool*)realloc(this->current_limit_enable, current_limit_enable_lengthT * sizeof(bool));
      current_limit_enable_length = current_limit_enable_lengthT;
      for( uint32_t i = 0; i < current_limit_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_current_limit_enable;
      u_st_current_limit_enable.base = 0;
      u_st_current_limit_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_current_limit_enable = u_st_current_limit_enable.real;
      offset += sizeof(this->st_current_limit_enable);
        memcpy( &(this->current_limit_enable[i]), &(this->st_current_limit_enable), sizeof(bool));
      }
      uint32_t supply_current_limit_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      supply_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      supply_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      supply_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->supply_current_limit_length);
      if(supply_current_limit_lengthT > supply_current_limit_length)
        this->supply_current_limit = (double*)realloc(this->supply_current_limit, supply_current_limit_lengthT * sizeof(double));
      supply_current_limit_length = supply_current_limit_lengthT;
      for( uint32_t i = 0; i < supply_current_limit_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_supply_current_limit;
      u_st_supply_current_limit.base = 0;
      u_st_supply_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_supply_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_supply_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_supply_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_supply_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_supply_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_supply_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_supply_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_supply_current_limit = u_st_supply_current_limit.real;
      offset += sizeof(this->st_supply_current_limit);
        memcpy( &(this->supply_current_limit[i]), &(this->st_supply_current_limit), sizeof(double));
      }
      uint32_t supply_current_trigger_threshold_current_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      supply_current_trigger_threshold_current_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      supply_current_trigger_threshold_current_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      supply_current_trigger_threshold_current_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->supply_current_trigger_threshold_current_length);
      if(supply_current_trigger_threshold_current_lengthT > supply_current_trigger_threshold_current_length)
        this->supply_current_trigger_threshold_current = (double*)realloc(this->supply_current_trigger_threshold_current, supply_current_trigger_threshold_current_lengthT * sizeof(double));
      supply_current_trigger_threshold_current_length = supply_current_trigger_threshold_current_lengthT;
      for( uint32_t i = 0; i < supply_current_trigger_threshold_current_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_supply_current_trigger_threshold_current;
      u_st_supply_current_trigger_threshold_current.base = 0;
      u_st_supply_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_supply_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_supply_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_supply_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_supply_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_supply_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_supply_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_supply_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_supply_current_trigger_threshold_current = u_st_supply_current_trigger_threshold_current.real;
      offset += sizeof(this->st_supply_current_trigger_threshold_current);
        memcpy( &(this->supply_current_trigger_threshold_current[i]), &(this->st_supply_current_trigger_threshold_current), sizeof(double));
      }
      uint32_t supply_current_trigger_threshold_time_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      supply_current_trigger_threshold_time_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      supply_current_trigger_threshold_time_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      supply_current_trigger_threshold_time_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->supply_current_trigger_threshold_time_length);
      if(supply_current_trigger_threshold_time_lengthT > supply_current_trigger_threshold_time_length)
        this->supply_current_trigger_threshold_time = (double*)realloc(this->supply_current_trigger_threshold_time, supply_current_trigger_threshold_time_lengthT * sizeof(double));
      supply_current_trigger_threshold_time_length = supply_current_trigger_threshold_time_lengthT;
      for( uint32_t i = 0; i < supply_current_trigger_threshold_time_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_supply_current_trigger_threshold_time;
      u_st_supply_current_trigger_threshold_time.base = 0;
      u_st_supply_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_supply_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_supply_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_supply_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_supply_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_supply_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_supply_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_supply_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_supply_current_trigger_threshold_time = u_st_supply_current_trigger_threshold_time.real;
      offset += sizeof(this->st_supply_current_trigger_threshold_time);
        memcpy( &(this->supply_current_trigger_threshold_time[i]), &(this->st_supply_current_trigger_threshold_time), sizeof(double));
      }
      uint32_t supply_current_limit_enable_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      supply_current_limit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      supply_current_limit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      supply_current_limit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->supply_current_limit_enable_length);
      if(supply_current_limit_enable_lengthT > supply_current_limit_enable_length)
        this->supply_current_limit_enable = (bool*)realloc(this->supply_current_limit_enable, supply_current_limit_enable_lengthT * sizeof(bool));
      supply_current_limit_enable_length = supply_current_limit_enable_lengthT;
      for( uint32_t i = 0; i < supply_current_limit_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_supply_current_limit_enable;
      u_st_supply_current_limit_enable.base = 0;
      u_st_supply_current_limit_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_supply_current_limit_enable = u_st_supply_current_limit_enable.real;
      offset += sizeof(this->st_supply_current_limit_enable);
        memcpy( &(this->supply_current_limit_enable[i]), &(this->st_supply_current_limit_enable), sizeof(bool));
      }
      uint32_t stator_current_limit_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      stator_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      stator_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      stator_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->stator_current_limit_length);
      if(stator_current_limit_lengthT > stator_current_limit_length)
        this->stator_current_limit = (double*)realloc(this->stator_current_limit, stator_current_limit_lengthT * sizeof(double));
      stator_current_limit_length = stator_current_limit_lengthT;
      for( uint32_t i = 0; i < stator_current_limit_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_stator_current_limit;
      u_st_stator_current_limit.base = 0;
      u_st_stator_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_stator_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_stator_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_stator_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_stator_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_stator_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_stator_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_stator_current_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_stator_current_limit = u_st_stator_current_limit.real;
      offset += sizeof(this->st_stator_current_limit);
        memcpy( &(this->stator_current_limit[i]), &(this->st_stator_current_limit), sizeof(double));
      }
      uint32_t stator_current_trigger_threshold_current_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      stator_current_trigger_threshold_current_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      stator_current_trigger_threshold_current_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      stator_current_trigger_threshold_current_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->stator_current_trigger_threshold_current_length);
      if(stator_current_trigger_threshold_current_lengthT > stator_current_trigger_threshold_current_length)
        this->stator_current_trigger_threshold_current = (double*)realloc(this->stator_current_trigger_threshold_current, stator_current_trigger_threshold_current_lengthT * sizeof(double));
      stator_current_trigger_threshold_current_length = stator_current_trigger_threshold_current_lengthT;
      for( uint32_t i = 0; i < stator_current_trigger_threshold_current_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_stator_current_trigger_threshold_current;
      u_st_stator_current_trigger_threshold_current.base = 0;
      u_st_stator_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_stator_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_stator_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_stator_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_stator_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_stator_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_stator_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_stator_current_trigger_threshold_current.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_stator_current_trigger_threshold_current = u_st_stator_current_trigger_threshold_current.real;
      offset += sizeof(this->st_stator_current_trigger_threshold_current);
        memcpy( &(this->stator_current_trigger_threshold_current[i]), &(this->st_stator_current_trigger_threshold_current), sizeof(double));
      }
      uint32_t stator_current_trigger_threshold_time_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      stator_current_trigger_threshold_time_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      stator_current_trigger_threshold_time_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      stator_current_trigger_threshold_time_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->stator_current_trigger_threshold_time_length);
      if(stator_current_trigger_threshold_time_lengthT > stator_current_trigger_threshold_time_length)
        this->stator_current_trigger_threshold_time = (double*)realloc(this->stator_current_trigger_threshold_time, stator_current_trigger_threshold_time_lengthT * sizeof(double));
      stator_current_trigger_threshold_time_length = stator_current_trigger_threshold_time_lengthT;
      for( uint32_t i = 0; i < stator_current_trigger_threshold_time_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_stator_current_trigger_threshold_time;
      u_st_stator_current_trigger_threshold_time.base = 0;
      u_st_stator_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_stator_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_stator_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_stator_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_stator_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_stator_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_stator_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_stator_current_trigger_threshold_time.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_stator_current_trigger_threshold_time = u_st_stator_current_trigger_threshold_time.real;
      offset += sizeof(this->st_stator_current_trigger_threshold_time);
        memcpy( &(this->stator_current_trigger_threshold_time[i]), &(this->st_stator_current_trigger_threshold_time), sizeof(double));
      }
      uint32_t stator_current_limit_enable_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      stator_current_limit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      stator_current_limit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      stator_current_limit_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->stator_current_limit_enable_length);
      if(stator_current_limit_enable_lengthT > stator_current_limit_enable_length)
        this->stator_current_limit_enable = (bool*)realloc(this->stator_current_limit_enable, stator_current_limit_enable_lengthT * sizeof(bool));
      stator_current_limit_enable_length = stator_current_limit_enable_lengthT;
      for( uint32_t i = 0; i < stator_current_limit_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_stator_current_limit_enable;
      u_st_stator_current_limit_enable.base = 0;
      u_st_stator_current_limit_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_stator_current_limit_enable = u_st_stator_current_limit_enable.real;
      offset += sizeof(this->st_stator_current_limit_enable);
        memcpy( &(this->stator_current_limit_enable[i]), &(this->st_stator_current_limit_enable), sizeof(bool));
      }
      uint32_t motion_cruise_velocity_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_cruise_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_cruise_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_cruise_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_cruise_velocity_length);
      if(motion_cruise_velocity_lengthT > motion_cruise_velocity_length)
        this->motion_cruise_velocity = (double*)realloc(this->motion_cruise_velocity, motion_cruise_velocity_lengthT * sizeof(double));
      motion_cruise_velocity_length = motion_cruise_velocity_lengthT;
      for( uint32_t i = 0; i < motion_cruise_velocity_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_motion_cruise_velocity;
      u_st_motion_cruise_velocity.base = 0;
      u_st_motion_cruise_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motion_cruise_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motion_cruise_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motion_cruise_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_motion_cruise_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_motion_cruise_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_motion_cruise_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_motion_cruise_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_motion_cruise_velocity = u_st_motion_cruise_velocity.real;
      offset += sizeof(this->st_motion_cruise_velocity);
        memcpy( &(this->motion_cruise_velocity[i]), &(this->st_motion_cruise_velocity), sizeof(double));
      }
      uint32_t motion_acceleration_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_acceleration_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_acceleration_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_acceleration_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_acceleration_length);
      if(motion_acceleration_lengthT > motion_acceleration_length)
        this->motion_acceleration = (double*)realloc(this->motion_acceleration, motion_acceleration_lengthT * sizeof(double));
      motion_acceleration_length = motion_acceleration_lengthT;
      for( uint32_t i = 0; i < motion_acceleration_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_motion_acceleration;
      u_st_motion_acceleration.base = 0;
      u_st_motion_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motion_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motion_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motion_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_motion_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_motion_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_motion_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_motion_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_motion_acceleration = u_st_motion_acceleration.real;
      offset += sizeof(this->st_motion_acceleration);
        memcpy( &(this->motion_acceleration[i]), &(this->st_motion_acceleration), sizeof(double));
      }
      uint32_t motion_s_curve_strength_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_s_curve_strength_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_s_curve_strength_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_s_curve_strength_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_s_curve_strength_length);
      if(motion_s_curve_strength_lengthT > motion_s_curve_strength_length)
        this->motion_s_curve_strength = (uint8_t*)realloc(this->motion_s_curve_strength, motion_s_curve_strength_lengthT * sizeof(uint8_t));
      motion_s_curve_strength_length = motion_s_curve_strength_lengthT;
      for( uint32_t i = 0; i < motion_s_curve_strength_length; i++){
      this->st_motion_s_curve_strength =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_motion_s_curve_strength);
        memcpy( &(this->motion_s_curve_strength[i]), &(this->st_motion_s_curve_strength), sizeof(uint8_t));
      }
      uint32_t status_1_general_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_1_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_1_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_1_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_1_general_period_length);
      if(status_1_general_period_lengthT > status_1_general_period_length)
        this->status_1_general_period = (uint8_t*)realloc(this->status_1_general_period, status_1_general_period_lengthT * sizeof(uint8_t));
      status_1_general_period_length = status_1_general_period_lengthT;
      for( uint32_t i = 0; i < status_1_general_period_length; i++){
      this->st_status_1_general_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_1_general_period);
        memcpy( &(this->status_1_general_period[i]), &(this->st_status_1_general_period), sizeof(uint8_t));
      }
      uint32_t status_2_feedback0_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_2_feedback0_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_2_feedback0_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_2_feedback0_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_2_feedback0_period_length);
      if(status_2_feedback0_period_lengthT > status_2_feedback0_period_length)
        this->status_2_feedback0_period = (uint8_t*)realloc(this->status_2_feedback0_period, status_2_feedback0_period_lengthT * sizeof(uint8_t));
      status_2_feedback0_period_length = status_2_feedback0_period_lengthT;
      for( uint32_t i = 0; i < status_2_feedback0_period_length; i++){
      this->st_status_2_feedback0_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_2_feedback0_period);
        memcpy( &(this->status_2_feedback0_period[i]), &(this->st_status_2_feedback0_period), sizeof(uint8_t));
      }
      uint32_t status_3_quadrature_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_3_quadrature_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_3_quadrature_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_3_quadrature_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_3_quadrature_period_length);
      if(status_3_quadrature_period_lengthT > status_3_quadrature_period_length)
        this->status_3_quadrature_period = (uint8_t*)realloc(this->status_3_quadrature_period, status_3_quadrature_period_lengthT * sizeof(uint8_t));
      status_3_quadrature_period_length = status_3_quadrature_period_lengthT;
      for( uint32_t i = 0; i < status_3_quadrature_period_length; i++){
      this->st_status_3_quadrature_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_3_quadrature_period);
        memcpy( &(this->status_3_quadrature_period[i]), &(this->st_status_3_quadrature_period), sizeof(uint8_t));
      }
      uint32_t status_4_aintempvbat_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_4_aintempvbat_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_4_aintempvbat_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_4_aintempvbat_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_4_aintempvbat_period_length);
      if(status_4_aintempvbat_period_lengthT > status_4_aintempvbat_period_length)
        this->status_4_aintempvbat_period = (uint8_t*)realloc(this->status_4_aintempvbat_period, status_4_aintempvbat_period_lengthT * sizeof(uint8_t));
      status_4_aintempvbat_period_length = status_4_aintempvbat_period_lengthT;
      for( uint32_t i = 0; i < status_4_aintempvbat_period_length; i++){
      this->st_status_4_aintempvbat_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_4_aintempvbat_period);
        memcpy( &(this->status_4_aintempvbat_period[i]), &(this->st_status_4_aintempvbat_period), sizeof(uint8_t));
      }
      uint32_t status_6_misc_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_6_misc_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_6_misc_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_6_misc_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_6_misc_period_length);
      if(status_6_misc_period_lengthT > status_6_misc_period_length)
        this->status_6_misc_period = (uint8_t*)realloc(this->status_6_misc_period, status_6_misc_period_lengthT * sizeof(uint8_t));
      status_6_misc_period_length = status_6_misc_period_lengthT;
      for( uint32_t i = 0; i < status_6_misc_period_length; i++){
      this->st_status_6_misc_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_6_misc_period);
        memcpy( &(this->status_6_misc_period[i]), &(this->st_status_6_misc_period), sizeof(uint8_t));
      }
      uint32_t status_7_commstatus_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_7_commstatus_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_7_commstatus_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_7_commstatus_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_7_commstatus_period_length);
      if(status_7_commstatus_period_lengthT > status_7_commstatus_period_length)
        this->status_7_commstatus_period = (uint8_t*)realloc(this->status_7_commstatus_period, status_7_commstatus_period_lengthT * sizeof(uint8_t));
      status_7_commstatus_period_length = status_7_commstatus_period_lengthT;
      for( uint32_t i = 0; i < status_7_commstatus_period_length; i++){
      this->st_status_7_commstatus_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_7_commstatus_period);
        memcpy( &(this->status_7_commstatus_period[i]), &(this->st_status_7_commstatus_period), sizeof(uint8_t));
      }
      uint32_t status_8_pulsewidth_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_8_pulsewidth_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_8_pulsewidth_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_8_pulsewidth_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_8_pulsewidth_period_length);
      if(status_8_pulsewidth_period_lengthT > status_8_pulsewidth_period_length)
        this->status_8_pulsewidth_period = (uint8_t*)realloc(this->status_8_pulsewidth_period, status_8_pulsewidth_period_lengthT * sizeof(uint8_t));
      status_8_pulsewidth_period_length = status_8_pulsewidth_period_lengthT;
      for( uint32_t i = 0; i < status_8_pulsewidth_period_length; i++){
      this->st_status_8_pulsewidth_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_8_pulsewidth_period);
        memcpy( &(this->status_8_pulsewidth_period[i]), &(this->st_status_8_pulsewidth_period), sizeof(uint8_t));
      }
      uint32_t status_9_motprofbuffer_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_9_motprofbuffer_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_9_motprofbuffer_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_9_motprofbuffer_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_9_motprofbuffer_period_length);
      if(status_9_motprofbuffer_period_lengthT > status_9_motprofbuffer_period_length)
        this->status_9_motprofbuffer_period = (uint8_t*)realloc(this->status_9_motprofbuffer_period, status_9_motprofbuffer_period_lengthT * sizeof(uint8_t));
      status_9_motprofbuffer_period_length = status_9_motprofbuffer_period_lengthT;
      for( uint32_t i = 0; i < status_9_motprofbuffer_period_length; i++){
      this->st_status_9_motprofbuffer_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_9_motprofbuffer_period);
        memcpy( &(this->status_9_motprofbuffer_period[i]), &(this->st_status_9_motprofbuffer_period), sizeof(uint8_t));
      }
      uint32_t status_10_motionmagic_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_10_motionmagic_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_10_motionmagic_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_10_motionmagic_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_10_motionmagic_period_length);
      if(status_10_motionmagic_period_lengthT > status_10_motionmagic_period_length)
        this->status_10_motionmagic_period = (uint8_t*)realloc(this->status_10_motionmagic_period, status_10_motionmagic_period_lengthT * sizeof(uint8_t));
      status_10_motionmagic_period_length = status_10_motionmagic_period_lengthT;
      for( uint32_t i = 0; i < status_10_motionmagic_period_length; i++){
      this->st_status_10_motionmagic_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_10_motionmagic_period);
        memcpy( &(this->status_10_motionmagic_period[i]), &(this->st_status_10_motionmagic_period), sizeof(uint8_t));
      }
      uint32_t status_11_uartgadgeteer_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_11_uartgadgeteer_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_11_uartgadgeteer_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_11_uartgadgeteer_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_11_uartgadgeteer_period_length);
      if(status_11_uartgadgeteer_period_lengthT > status_11_uartgadgeteer_period_length)
        this->status_11_uartgadgeteer_period = (uint8_t*)realloc(this->status_11_uartgadgeteer_period, status_11_uartgadgeteer_period_lengthT * sizeof(uint8_t));
      status_11_uartgadgeteer_period_length = status_11_uartgadgeteer_period_lengthT;
      for( uint32_t i = 0; i < status_11_uartgadgeteer_period_length; i++){
      this->st_status_11_uartgadgeteer_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_11_uartgadgeteer_period);
        memcpy( &(this->status_11_uartgadgeteer_period[i]), &(this->st_status_11_uartgadgeteer_period), sizeof(uint8_t));
      }
      uint32_t status_12_feedback1_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_12_feedback1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_12_feedback1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_12_feedback1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_12_feedback1_period_length);
      if(status_12_feedback1_period_lengthT > status_12_feedback1_period_length)
        this->status_12_feedback1_period = (uint8_t*)realloc(this->status_12_feedback1_period, status_12_feedback1_period_lengthT * sizeof(uint8_t));
      status_12_feedback1_period_length = status_12_feedback1_period_lengthT;
      for( uint32_t i = 0; i < status_12_feedback1_period_length; i++){
      this->st_status_12_feedback1_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_12_feedback1_period);
        memcpy( &(this->status_12_feedback1_period[i]), &(this->st_status_12_feedback1_period), sizeof(uint8_t));
      }
      uint32_t status_13_base_pidf0_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_13_base_pidf0_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_13_base_pidf0_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_13_base_pidf0_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_13_base_pidf0_period_length);
      if(status_13_base_pidf0_period_lengthT > status_13_base_pidf0_period_length)
        this->status_13_base_pidf0_period = (uint8_t*)realloc(this->status_13_base_pidf0_period, status_13_base_pidf0_period_lengthT * sizeof(uint8_t));
      status_13_base_pidf0_period_length = status_13_base_pidf0_period_lengthT;
      for( uint32_t i = 0; i < status_13_base_pidf0_period_length; i++){
      this->st_status_13_base_pidf0_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_13_base_pidf0_period);
        memcpy( &(this->status_13_base_pidf0_period[i]), &(this->st_status_13_base_pidf0_period), sizeof(uint8_t));
      }
      uint32_t status_14_turn_pidf1_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_14_turn_pidf1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_14_turn_pidf1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_14_turn_pidf1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_14_turn_pidf1_period_length);
      if(status_14_turn_pidf1_period_lengthT > status_14_turn_pidf1_period_length)
        this->status_14_turn_pidf1_period = (uint8_t*)realloc(this->status_14_turn_pidf1_period, status_14_turn_pidf1_period_lengthT * sizeof(uint8_t));
      status_14_turn_pidf1_period_length = status_14_turn_pidf1_period_lengthT;
      for( uint32_t i = 0; i < status_14_turn_pidf1_period_length; i++){
      this->st_status_14_turn_pidf1_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_14_turn_pidf1_period);
        memcpy( &(this->status_14_turn_pidf1_period[i]), &(this->st_status_14_turn_pidf1_period), sizeof(uint8_t));
      }
      uint32_t status_15_firmwareapistatus_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_15_firmwareapistatus_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_15_firmwareapistatus_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_15_firmwareapistatus_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_15_firmwareapistatus_period_length);
      if(status_15_firmwareapistatus_period_lengthT > status_15_firmwareapistatus_period_length)
        this->status_15_firmwareapistatus_period = (uint8_t*)realloc(this->status_15_firmwareapistatus_period, status_15_firmwareapistatus_period_lengthT * sizeof(uint8_t));
      status_15_firmwareapistatus_period_length = status_15_firmwareapistatus_period_lengthT;
      for( uint32_t i = 0; i < status_15_firmwareapistatus_period_length; i++){
      this->st_status_15_firmwareapistatus_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_15_firmwareapistatus_period);
        memcpy( &(this->status_15_firmwareapistatus_period[i]), &(this->st_status_15_firmwareapistatus_period), sizeof(uint8_t));
      }
      uint32_t status_17_targets1_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_17_targets1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_17_targets1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_17_targets1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_17_targets1_period_length);
      if(status_17_targets1_period_lengthT > status_17_targets1_period_length)
        this->status_17_targets1_period = (uint8_t*)realloc(this->status_17_targets1_period, status_17_targets1_period_lengthT * sizeof(uint8_t));
      status_17_targets1_period_length = status_17_targets1_period_lengthT;
      for( uint32_t i = 0; i < status_17_targets1_period_length; i++){
      this->st_status_17_targets1_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_17_targets1_period);
        memcpy( &(this->status_17_targets1_period[i]), &(this->st_status_17_targets1_period), sizeof(uint8_t));
      }
      uint32_t status_brushless_current_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_brushless_current_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_brushless_current_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_brushless_current_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_brushless_current_period_length);
      if(status_brushless_current_period_lengthT > status_brushless_current_period_length)
        this->status_brushless_current_period = (uint8_t*)realloc(this->status_brushless_current_period, status_brushless_current_period_lengthT * sizeof(uint8_t));
      status_brushless_current_period_length = status_brushless_current_period_lengthT;
      for( uint32_t i = 0; i < status_brushless_current_period_length; i++){
      this->st_status_brushless_current_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_status_brushless_current_period);
        memcpy( &(this->status_brushless_current_period[i]), &(this->st_status_brushless_current_period), sizeof(uint8_t));
      }
      uint32_t control_3_general_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      control_3_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      control_3_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      control_3_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->control_3_general_period_length);
      if(control_3_general_period_lengthT > control_3_general_period_length)
        this->control_3_general_period = (uint8_t*)realloc(this->control_3_general_period, control_3_general_period_lengthT * sizeof(uint8_t));
      control_3_general_period_length = control_3_general_period_lengthT;
      for( uint32_t i = 0; i < control_3_general_period_length; i++){
      this->st_control_3_general_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_control_3_general_period);
        memcpy( &(this->control_3_general_period[i]), &(this->st_control_3_general_period), sizeof(uint8_t));
      }
      uint32_t control_4_advanced_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      control_4_advanced_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      control_4_advanced_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      control_4_advanced_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->control_4_advanced_period_length);
      if(control_4_advanced_period_lengthT > control_4_advanced_period_length)
        this->control_4_advanced_period = (uint8_t*)realloc(this->control_4_advanced_period, control_4_advanced_period_lengthT * sizeof(uint8_t));
      control_4_advanced_period_length = control_4_advanced_period_lengthT;
      for( uint32_t i = 0; i < control_4_advanced_period_length; i++){
      this->st_control_4_advanced_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_control_4_advanced_period);
        memcpy( &(this->control_4_advanced_period[i]), &(this->st_control_4_advanced_period), sizeof(uint8_t));
      }
      uint32_t control_5_feedbackoutputoverride_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      control_5_feedbackoutputoverride_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      control_5_feedbackoutputoverride_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      control_5_feedbackoutputoverride_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->control_5_feedbackoutputoverride_period_length);
      if(control_5_feedbackoutputoverride_period_lengthT > control_5_feedbackoutputoverride_period_length)
        this->control_5_feedbackoutputoverride_period = (uint8_t*)realloc(this->control_5_feedbackoutputoverride_period, control_5_feedbackoutputoverride_period_lengthT * sizeof(uint8_t));
      control_5_feedbackoutputoverride_period_length = control_5_feedbackoutputoverride_period_lengthT;
      for( uint32_t i = 0; i < control_5_feedbackoutputoverride_period_length; i++){
      this->st_control_5_feedbackoutputoverride_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_control_5_feedbackoutputoverride_period);
        memcpy( &(this->control_5_feedbackoutputoverride_period[i]), &(this->st_control_5_feedbackoutputoverride_period), sizeof(uint8_t));
      }
      uint32_t control_6_motprofaddtrajpoint_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      control_6_motprofaddtrajpoint_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      control_6_motprofaddtrajpoint_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      control_6_motprofaddtrajpoint_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->control_6_motprofaddtrajpoint_period_length);
      if(control_6_motprofaddtrajpoint_period_lengthT > control_6_motprofaddtrajpoint_period_length)
        this->control_6_motprofaddtrajpoint_period = (uint8_t*)realloc(this->control_6_motprofaddtrajpoint_period, control_6_motprofaddtrajpoint_period_lengthT * sizeof(uint8_t));
      control_6_motprofaddtrajpoint_period_length = control_6_motprofaddtrajpoint_period_lengthT;
      for( uint32_t i = 0; i < control_6_motprofaddtrajpoint_period_length; i++){
      this->st_control_6_motprofaddtrajpoint_period =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_control_6_motprofaddtrajpoint_period);
        memcpy( &(this->control_6_motprofaddtrajpoint_period[i]), &(this->st_control_6_motprofaddtrajpoint_period), sizeof(uint8_t));
      }
      uint32_t motion_profile_trajectory_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motion_profile_trajectory_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motion_profile_trajectory_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motion_profile_trajectory_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motion_profile_trajectory_period_length);
      if(motion_profile_trajectory_period_lengthT > motion_profile_trajectory_period_length)
        this->motion_profile_trajectory_period = (double*)realloc(this->motion_profile_trajectory_period, motion_profile_trajectory_period_lengthT * sizeof(double));
      motion_profile_trajectory_period_length = motion_profile_trajectory_period_lengthT;
      for( uint32_t i = 0; i < motion_profile_trajectory_period_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_motion_profile_trajectory_period;
      u_st_motion_profile_trajectory_period.base = 0;
      u_st_motion_profile_trajectory_period.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motion_profile_trajectory_period.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motion_profile_trajectory_period.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motion_profile_trajectory_period.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_motion_profile_trajectory_period.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_motion_profile_trajectory_period.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_motion_profile_trajectory_period.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_motion_profile_trajectory_period.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_motion_profile_trajectory_period = u_st_motion_profile_trajectory_period.real;
      offset += sizeof(this->st_motion_profile_trajectory_period);
        memcpy( &(this->motion_profile_trajectory_period[i]), &(this->st_motion_profile_trajectory_period), sizeof(double));
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
      uint32_t motor_commutation_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      motor_commutation_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      motor_commutation_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      motor_commutation_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->motor_commutation_length);
      if(motor_commutation_lengthT > motor_commutation_length)
        this->motor_commutation = (char**)realloc(this->motor_commutation, motor_commutation_lengthT * sizeof(char*));
      motor_commutation_length = motor_commutation_lengthT;
      for( uint32_t i = 0; i < motor_commutation_length; i++){
      uint32_t length_st_motor_commutation;
      arrToVar(length_st_motor_commutation, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_motor_commutation; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_motor_commutation-1]=0;
      this->st_motor_commutation = (char *)(inbuffer + offset-1);
      offset += length_st_motor_commutation;
        memcpy( &(this->motor_commutation[i]), &(this->st_motor_commutation), sizeof(char*));
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
      uint32_t sensor_initialization_strategy_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      sensor_initialization_strategy_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      sensor_initialization_strategy_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      sensor_initialization_strategy_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->sensor_initialization_strategy_length);
      if(sensor_initialization_strategy_lengthT > sensor_initialization_strategy_length)
        this->sensor_initialization_strategy = (char**)realloc(this->sensor_initialization_strategy, sensor_initialization_strategy_lengthT * sizeof(char*));
      sensor_initialization_strategy_length = sensor_initialization_strategy_lengthT;
      for( uint32_t i = 0; i < sensor_initialization_strategy_length; i++){
      uint32_t length_st_sensor_initialization_strategy;
      arrToVar(length_st_sensor_initialization_strategy, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_sensor_initialization_strategy; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_sensor_initialization_strategy-1]=0;
      this->st_sensor_initialization_strategy = (char *)(inbuffer + offset-1);
      offset += length_st_sensor_initialization_strategy;
        memcpy( &(this->sensor_initialization_strategy[i]), &(this->st_sensor_initialization_strategy), sizeof(char*));
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
      uint32_t water_game_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      water_game_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      water_game_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      water_game_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->water_game_length);
      if(water_game_lengthT > water_game_length)
        this->water_game = (bool*)realloc(this->water_game, water_game_lengthT * sizeof(bool));
      water_game_length = water_game_lengthT;
      for( uint32_t i = 0; i < water_game_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_water_game;
      u_st_water_game.base = 0;
      u_st_water_game.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_water_game = u_st_water_game.real;
      offset += sizeof(this->st_water_game);
        memcpy( &(this->water_game[i]), &(this->st_water_game), sizeof(bool));
      }
     return offset;
    }

    virtual const char * getType() override { return "talon_state_msgs/TalonConfig"; };
    virtual const char * getMD5() override { return "a82367fff6605a1f934feb6e17e91691"; };

  };

}
#endif
