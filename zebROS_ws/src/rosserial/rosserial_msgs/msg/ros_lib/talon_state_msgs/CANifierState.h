#ifndef _ROS_talon_state_msgs_CANifierState_h
#define _ROS_talon_state_msgs_CANifierState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace talon_state_msgs
{

  class CANifierState : public ros::Msg
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
      uint32_t led_output_a_length;
      typedef double _led_output_a_type;
      _led_output_a_type st_led_output_a;
      _led_output_a_type * led_output_a;
      uint32_t led_output_b_length;
      typedef double _led_output_b_type;
      _led_output_b_type st_led_output_b;
      _led_output_b_type * led_output_b;
      uint32_t led_output_c_length;
      typedef double _led_output_c_type;
      _led_output_c_type st_led_output_c;
      _led_output_c_type * led_output_c;
      uint32_t general_pin_output_enable_quad_idx_length;
      typedef bool _general_pin_output_enable_quad_idx_type;
      _general_pin_output_enable_quad_idx_type st_general_pin_output_enable_quad_idx;
      _general_pin_output_enable_quad_idx_type * general_pin_output_enable_quad_idx;
      uint32_t general_pin_output_enable_quad_b_length;
      typedef bool _general_pin_output_enable_quad_b_type;
      _general_pin_output_enable_quad_b_type st_general_pin_output_enable_quad_b;
      _general_pin_output_enable_quad_b_type * general_pin_output_enable_quad_b;
      uint32_t general_pin_output_enable_quad_a_length;
      typedef bool _general_pin_output_enable_quad_a_type;
      _general_pin_output_enable_quad_a_type st_general_pin_output_enable_quad_a;
      _general_pin_output_enable_quad_a_type * general_pin_output_enable_quad_a;
      uint32_t general_pin_output_enable_limr_length;
      typedef bool _general_pin_output_enable_limr_type;
      _general_pin_output_enable_limr_type st_general_pin_output_enable_limr;
      _general_pin_output_enable_limr_type * general_pin_output_enable_limr;
      uint32_t general_pin_output_enable_limf_length;
      typedef bool _general_pin_output_enable_limf_type;
      _general_pin_output_enable_limf_type st_general_pin_output_enable_limf;
      _general_pin_output_enable_limf_type * general_pin_output_enable_limf;
      uint32_t general_pin_output_enable_sda_length;
      typedef bool _general_pin_output_enable_sda_type;
      _general_pin_output_enable_sda_type st_general_pin_output_enable_sda;
      _general_pin_output_enable_sda_type * general_pin_output_enable_sda;
      uint32_t general_pin_output_enable_scl_length;
      typedef bool _general_pin_output_enable_scl_type;
      _general_pin_output_enable_scl_type st_general_pin_output_enable_scl;
      _general_pin_output_enable_scl_type * general_pin_output_enable_scl;
      uint32_t general_pin_output_enable_spi_cs_pwm3_length;
      typedef bool _general_pin_output_enable_spi_cs_pwm3_type;
      _general_pin_output_enable_spi_cs_pwm3_type st_general_pin_output_enable_spi_cs_pwm3;
      _general_pin_output_enable_spi_cs_pwm3_type * general_pin_output_enable_spi_cs_pwm3;
      uint32_t general_pin_output_enable_spi_miso_pwm2_length;
      typedef bool _general_pin_output_enable_spi_miso_pwm2_type;
      _general_pin_output_enable_spi_miso_pwm2_type st_general_pin_output_enable_spi_miso_pwm2;
      _general_pin_output_enable_spi_miso_pwm2_type * general_pin_output_enable_spi_miso_pwm2;
      uint32_t general_pin_output_enable_spi_mosi_pwm1_length;
      typedef bool _general_pin_output_enable_spi_mosi_pwm1_type;
      _general_pin_output_enable_spi_mosi_pwm1_type st_general_pin_output_enable_spi_mosi_pwm1;
      _general_pin_output_enable_spi_mosi_pwm1_type * general_pin_output_enable_spi_mosi_pwm1;
      uint32_t general_pin_output_enable_spi_clk_pwm0_length;
      typedef bool _general_pin_output_enable_spi_clk_pwm0_type;
      _general_pin_output_enable_spi_clk_pwm0_type st_general_pin_output_enable_spi_clk_pwm0;
      _general_pin_output_enable_spi_clk_pwm0_type * general_pin_output_enable_spi_clk_pwm0;
      uint32_t general_pin_output_quad_idx_length;
      typedef bool _general_pin_output_quad_idx_type;
      _general_pin_output_quad_idx_type st_general_pin_output_quad_idx;
      _general_pin_output_quad_idx_type * general_pin_output_quad_idx;
      uint32_t general_pin_output_quad_b_length;
      typedef bool _general_pin_output_quad_b_type;
      _general_pin_output_quad_b_type st_general_pin_output_quad_b;
      _general_pin_output_quad_b_type * general_pin_output_quad_b;
      uint32_t general_pin_output_quad_a_length;
      typedef bool _general_pin_output_quad_a_type;
      _general_pin_output_quad_a_type st_general_pin_output_quad_a;
      _general_pin_output_quad_a_type * general_pin_output_quad_a;
      uint32_t general_pin_output_limr_length;
      typedef bool _general_pin_output_limr_type;
      _general_pin_output_limr_type st_general_pin_output_limr;
      _general_pin_output_limr_type * general_pin_output_limr;
      uint32_t general_pin_output_limf_length;
      typedef bool _general_pin_output_limf_type;
      _general_pin_output_limf_type st_general_pin_output_limf;
      _general_pin_output_limf_type * general_pin_output_limf;
      uint32_t general_pin_output_sda_length;
      typedef bool _general_pin_output_sda_type;
      _general_pin_output_sda_type st_general_pin_output_sda;
      _general_pin_output_sda_type * general_pin_output_sda;
      uint32_t general_pin_output_scl_length;
      typedef bool _general_pin_output_scl_type;
      _general_pin_output_scl_type st_general_pin_output_scl;
      _general_pin_output_scl_type * general_pin_output_scl;
      uint32_t general_pin_output_spi_cs_pwm3_length;
      typedef bool _general_pin_output_spi_cs_pwm3_type;
      _general_pin_output_spi_cs_pwm3_type st_general_pin_output_spi_cs_pwm3;
      _general_pin_output_spi_cs_pwm3_type * general_pin_output_spi_cs_pwm3;
      uint32_t general_pin_output_spi_miso_pwm2_length;
      typedef bool _general_pin_output_spi_miso_pwm2_type;
      _general_pin_output_spi_miso_pwm2_type st_general_pin_output_spi_miso_pwm2;
      _general_pin_output_spi_miso_pwm2_type * general_pin_output_spi_miso_pwm2;
      uint32_t general_pin_output_spi_mosi_pwm1_length;
      typedef bool _general_pin_output_spi_mosi_pwm1_type;
      _general_pin_output_spi_mosi_pwm1_type st_general_pin_output_spi_mosi_pwm1;
      _general_pin_output_spi_mosi_pwm1_type * general_pin_output_spi_mosi_pwm1;
      uint32_t general_pin_output_spi_clk_pwm0_length;
      typedef bool _general_pin_output_spi_clk_pwm0_type;
      _general_pin_output_spi_clk_pwm0_type st_general_pin_output_spi_clk_pwm0;
      _general_pin_output_spi_clk_pwm0_type * general_pin_output_spi_clk_pwm0;
      uint32_t general_pin_input_quad_idx_length;
      typedef bool _general_pin_input_quad_idx_type;
      _general_pin_input_quad_idx_type st_general_pin_input_quad_idx;
      _general_pin_input_quad_idx_type * general_pin_input_quad_idx;
      uint32_t general_pin_input_quad_b_length;
      typedef bool _general_pin_input_quad_b_type;
      _general_pin_input_quad_b_type st_general_pin_input_quad_b;
      _general_pin_input_quad_b_type * general_pin_input_quad_b;
      uint32_t general_pin_input_quad_a_length;
      typedef bool _general_pin_input_quad_a_type;
      _general_pin_input_quad_a_type st_general_pin_input_quad_a;
      _general_pin_input_quad_a_type * general_pin_input_quad_a;
      uint32_t general_pin_input_limr_length;
      typedef bool _general_pin_input_limr_type;
      _general_pin_input_limr_type st_general_pin_input_limr;
      _general_pin_input_limr_type * general_pin_input_limr;
      uint32_t general_pin_input_limf_length;
      typedef bool _general_pin_input_limf_type;
      _general_pin_input_limf_type st_general_pin_input_limf;
      _general_pin_input_limf_type * general_pin_input_limf;
      uint32_t general_pin_input_sda_length;
      typedef bool _general_pin_input_sda_type;
      _general_pin_input_sda_type st_general_pin_input_sda;
      _general_pin_input_sda_type * general_pin_input_sda;
      uint32_t general_pin_input_scl_length;
      typedef bool _general_pin_input_scl_type;
      _general_pin_input_scl_type st_general_pin_input_scl;
      _general_pin_input_scl_type * general_pin_input_scl;
      uint32_t general_pin_input_spi_cs_pwm3_length;
      typedef bool _general_pin_input_spi_cs_pwm3_type;
      _general_pin_input_spi_cs_pwm3_type st_general_pin_input_spi_cs_pwm3;
      _general_pin_input_spi_cs_pwm3_type * general_pin_input_spi_cs_pwm3;
      uint32_t general_pin_input_spi_miso_pwm2_length;
      typedef bool _general_pin_input_spi_miso_pwm2_type;
      _general_pin_input_spi_miso_pwm2_type st_general_pin_input_spi_miso_pwm2;
      _general_pin_input_spi_miso_pwm2_type * general_pin_input_spi_miso_pwm2;
      uint32_t general_pin_input_spi_mosi_pwm1_length;
      typedef bool _general_pin_input_spi_mosi_pwm1_type;
      _general_pin_input_spi_mosi_pwm1_type st_general_pin_input_spi_mosi_pwm1;
      _general_pin_input_spi_mosi_pwm1_type * general_pin_input_spi_mosi_pwm1;
      uint32_t general_pin_input_spi_clk_pwm0_length;
      typedef bool _general_pin_input_spi_clk_pwm0_type;
      _general_pin_input_spi_clk_pwm0_type st_general_pin_input_spi_clk_pwm0;
      _general_pin_input_spi_clk_pwm0_type * general_pin_input_spi_clk_pwm0;
      uint32_t quadrature_position_length;
      typedef double _quadrature_position_type;
      _quadrature_position_type st_quadrature_position;
      _quadrature_position_type * quadrature_position;
      uint32_t quadrature_velocity_length;
      typedef double _quadrature_velocity_type;
      _quadrature_velocity_type st_quadrature_velocity;
      _quadrature_velocity_type * quadrature_velocity;
      uint32_t velocity_measurement_period_length;
      typedef int8_t _velocity_measurement_period_type;
      _velocity_measurement_period_type st_velocity_measurement_period;
      _velocity_measurement_period_type * velocity_measurement_period;
      uint32_t velocity_measurement_window_length;
      typedef int64_t _velocity_measurement_window_type;
      _velocity_measurement_window_type st_velocity_measurement_window;
      _velocity_measurement_window_type * velocity_measurement_window;
      uint32_t clear_position_on_limit_f_length;
      typedef bool _clear_position_on_limit_f_type;
      _clear_position_on_limit_f_type st_clear_position_on_limit_f;
      _clear_position_on_limit_f_type * clear_position_on_limit_f;
      uint32_t clear_position_on_limit_r_length;
      typedef bool _clear_position_on_limit_r_type;
      _clear_position_on_limit_r_type st_clear_position_on_limit_r;
      _clear_position_on_limit_r_type * clear_position_on_limit_r;
      uint32_t clear_position_on_quad_idx_length;
      typedef bool _clear_position_on_quad_idx_type;
      _clear_position_on_quad_idx_type st_clear_position_on_quad_idx;
      _clear_position_on_quad_idx_type * clear_position_on_quad_idx;
      uint32_t bus_voltage_length;
      typedef double _bus_voltage_type;
      _bus_voltage_type st_bus_voltage;
      _bus_voltage_type * bus_voltage;
      uint32_t pwm_output_enable_0_length;
      typedef bool _pwm_output_enable_0_type;
      _pwm_output_enable_0_type st_pwm_output_enable_0;
      _pwm_output_enable_0_type * pwm_output_enable_0;
      uint32_t pwm_output_enable_1_length;
      typedef bool _pwm_output_enable_1_type;
      _pwm_output_enable_1_type st_pwm_output_enable_1;
      _pwm_output_enable_1_type * pwm_output_enable_1;
      uint32_t pwm_output_enable_2_length;
      typedef bool _pwm_output_enable_2_type;
      _pwm_output_enable_2_type st_pwm_output_enable_2;
      _pwm_output_enable_2_type * pwm_output_enable_2;
      uint32_t pwm_output_enable_3_length;
      typedef bool _pwm_output_enable_3_type;
      _pwm_output_enable_3_type st_pwm_output_enable_3;
      _pwm_output_enable_3_type * pwm_output_enable_3;
      uint32_t pwm_output_0_length;
      typedef double _pwm_output_0_type;
      _pwm_output_0_type st_pwm_output_0;
      _pwm_output_0_type * pwm_output_0;
      uint32_t pwm_output_1_length;
      typedef double _pwm_output_1_type;
      _pwm_output_1_type st_pwm_output_1;
      _pwm_output_1_type * pwm_output_1;
      uint32_t pwm_output_2_length;
      typedef double _pwm_output_2_type;
      _pwm_output_2_type st_pwm_output_2;
      _pwm_output_2_type * pwm_output_2;
      uint32_t pwm_output_3_length;
      typedef double _pwm_output_3_type;
      _pwm_output_3_type st_pwm_output_3;
      _pwm_output_3_type * pwm_output_3;
      uint32_t pwm_input_0_duty_cycle_length;
      typedef double _pwm_input_0_duty_cycle_type;
      _pwm_input_0_duty_cycle_type st_pwm_input_0_duty_cycle;
      _pwm_input_0_duty_cycle_type * pwm_input_0_duty_cycle;
      uint32_t pwm_input_0_period_length;
      typedef double _pwm_input_0_period_type;
      _pwm_input_0_period_type st_pwm_input_0_period;
      _pwm_input_0_period_type * pwm_input_0_period;
      uint32_t pwm_input_1_duty_cycle_length;
      typedef double _pwm_input_1_duty_cycle_type;
      _pwm_input_1_duty_cycle_type st_pwm_input_1_duty_cycle;
      _pwm_input_1_duty_cycle_type * pwm_input_1_duty_cycle;
      uint32_t pwm_input_1_period_length;
      typedef double _pwm_input_1_period_type;
      _pwm_input_1_period_type st_pwm_input_1_period;
      _pwm_input_1_period_type * pwm_input_1_period;
      uint32_t pwm_input_2_duty_cycle_length;
      typedef double _pwm_input_2_duty_cycle_type;
      _pwm_input_2_duty_cycle_type st_pwm_input_2_duty_cycle;
      _pwm_input_2_duty_cycle_type * pwm_input_2_duty_cycle;
      uint32_t pwm_input_2_period_length;
      typedef double _pwm_input_2_period_type;
      _pwm_input_2_period_type st_pwm_input_2_period;
      _pwm_input_2_period_type * pwm_input_2_period;
      uint32_t pwm_input_3_duty_cycle_length;
      typedef double _pwm_input_3_duty_cycle_type;
      _pwm_input_3_duty_cycle_type st_pwm_input_3_duty_cycle;
      _pwm_input_3_duty_cycle_type * pwm_input_3_duty_cycle;
      uint32_t pwm_input_3_period_length;
      typedef double _pwm_input_3_period_type;
      _pwm_input_3_period_type st_pwm_input_3_period;
      _pwm_input_3_period_type * pwm_input_3_period;
      uint32_t status_1_general_period_length;
      typedef int8_t _status_1_general_period_type;
      _status_1_general_period_type st_status_1_general_period;
      _status_1_general_period_type * status_1_general_period;
      uint32_t status_2_general_period_length;
      typedef int8_t _status_2_general_period_type;
      _status_2_general_period_type st_status_2_general_period;
      _status_2_general_period_type * status_2_general_period;
      uint32_t status_3_pwminputs0_period_length;
      typedef int8_t _status_3_pwminputs0_period_type;
      _status_3_pwminputs0_period_type st_status_3_pwminputs0_period;
      _status_3_pwminputs0_period_type * status_3_pwminputs0_period;
      uint32_t status_4_pwminputs1_period_length;
      typedef int8_t _status_4_pwminputs1_period_type;
      _status_4_pwminputs1_period_type st_status_4_pwminputs1_period;
      _status_4_pwminputs1_period_type * status_4_pwminputs1_period;
      uint32_t status_5_pwminputs2_period_length;
      typedef int8_t _status_5_pwminputs2_period_type;
      _status_5_pwminputs2_period_type st_status_5_pwminputs2_period;
      _status_5_pwminputs2_period_type * status_5_pwminputs2_period;
      uint32_t status_6_pwminputs3_period_length;
      typedef int8_t _status_6_pwminputs3_period_type;
      _status_6_pwminputs3_period_type st_status_6_pwminputs3_period;
      _status_6_pwminputs3_period_type * status_6_pwminputs3_period;
      uint32_t status_8_misc_period_length;
      typedef int8_t _status_8_misc_period_type;
      _status_8_misc_period_type st_status_8_misc_period;
      _status_8_misc_period_type * status_8_misc_period;
      uint32_t control_1_general_period_length;
      typedef int8_t _control_1_general_period_type;
      _control_1_general_period_type st_control_1_general_period;
      _control_1_general_period_type * control_1_general_period;
      uint32_t control_2_pwmoutput_period_length;
      typedef int8_t _control_2_pwmoutput_period_type;
      _control_2_pwmoutput_period_type st_control_2_pwmoutput_period;
      _control_2_pwmoutput_period_type * control_2_pwmoutput_period;
      uint32_t faults_length;
      typedef int16_t _faults_type;
      _faults_type st_faults;
      _faults_type * faults;
      uint32_t sticky_faults_length;
      typedef int16_t _sticky_faults_type;
      _sticky_faults_type st_sticky_faults;
      _sticky_faults_type * sticky_faults;
      uint32_t encoder_ticks_per_rotation_length;
      typedef int32_t _encoder_ticks_per_rotation_type;
      _encoder_ticks_per_rotation_type st_encoder_ticks_per_rotation;
      _encoder_ticks_per_rotation_type * encoder_ticks_per_rotation;
      uint32_t conversion_factor_length;
      typedef double _conversion_factor_type;
      _conversion_factor_type st_conversion_factor;
      _conversion_factor_type * conversion_factor;

    CANifierState():
      header(),
      name_length(0), st_name(), name(nullptr),
      can_id_length(0), st_can_id(), can_id(nullptr),
      led_output_a_length(0), st_led_output_a(), led_output_a(nullptr),
      led_output_b_length(0), st_led_output_b(), led_output_b(nullptr),
      led_output_c_length(0), st_led_output_c(), led_output_c(nullptr),
      general_pin_output_enable_quad_idx_length(0), st_general_pin_output_enable_quad_idx(), general_pin_output_enable_quad_idx(nullptr),
      general_pin_output_enable_quad_b_length(0), st_general_pin_output_enable_quad_b(), general_pin_output_enable_quad_b(nullptr),
      general_pin_output_enable_quad_a_length(0), st_general_pin_output_enable_quad_a(), general_pin_output_enable_quad_a(nullptr),
      general_pin_output_enable_limr_length(0), st_general_pin_output_enable_limr(), general_pin_output_enable_limr(nullptr),
      general_pin_output_enable_limf_length(0), st_general_pin_output_enable_limf(), general_pin_output_enable_limf(nullptr),
      general_pin_output_enable_sda_length(0), st_general_pin_output_enable_sda(), general_pin_output_enable_sda(nullptr),
      general_pin_output_enable_scl_length(0), st_general_pin_output_enable_scl(), general_pin_output_enable_scl(nullptr),
      general_pin_output_enable_spi_cs_pwm3_length(0), st_general_pin_output_enable_spi_cs_pwm3(), general_pin_output_enable_spi_cs_pwm3(nullptr),
      general_pin_output_enable_spi_miso_pwm2_length(0), st_general_pin_output_enable_spi_miso_pwm2(), general_pin_output_enable_spi_miso_pwm2(nullptr),
      general_pin_output_enable_spi_mosi_pwm1_length(0), st_general_pin_output_enable_spi_mosi_pwm1(), general_pin_output_enable_spi_mosi_pwm1(nullptr),
      general_pin_output_enable_spi_clk_pwm0_length(0), st_general_pin_output_enable_spi_clk_pwm0(), general_pin_output_enable_spi_clk_pwm0(nullptr),
      general_pin_output_quad_idx_length(0), st_general_pin_output_quad_idx(), general_pin_output_quad_idx(nullptr),
      general_pin_output_quad_b_length(0), st_general_pin_output_quad_b(), general_pin_output_quad_b(nullptr),
      general_pin_output_quad_a_length(0), st_general_pin_output_quad_a(), general_pin_output_quad_a(nullptr),
      general_pin_output_limr_length(0), st_general_pin_output_limr(), general_pin_output_limr(nullptr),
      general_pin_output_limf_length(0), st_general_pin_output_limf(), general_pin_output_limf(nullptr),
      general_pin_output_sda_length(0), st_general_pin_output_sda(), general_pin_output_sda(nullptr),
      general_pin_output_scl_length(0), st_general_pin_output_scl(), general_pin_output_scl(nullptr),
      general_pin_output_spi_cs_pwm3_length(0), st_general_pin_output_spi_cs_pwm3(), general_pin_output_spi_cs_pwm3(nullptr),
      general_pin_output_spi_miso_pwm2_length(0), st_general_pin_output_spi_miso_pwm2(), general_pin_output_spi_miso_pwm2(nullptr),
      general_pin_output_spi_mosi_pwm1_length(0), st_general_pin_output_spi_mosi_pwm1(), general_pin_output_spi_mosi_pwm1(nullptr),
      general_pin_output_spi_clk_pwm0_length(0), st_general_pin_output_spi_clk_pwm0(), general_pin_output_spi_clk_pwm0(nullptr),
      general_pin_input_quad_idx_length(0), st_general_pin_input_quad_idx(), general_pin_input_quad_idx(nullptr),
      general_pin_input_quad_b_length(0), st_general_pin_input_quad_b(), general_pin_input_quad_b(nullptr),
      general_pin_input_quad_a_length(0), st_general_pin_input_quad_a(), general_pin_input_quad_a(nullptr),
      general_pin_input_limr_length(0), st_general_pin_input_limr(), general_pin_input_limr(nullptr),
      general_pin_input_limf_length(0), st_general_pin_input_limf(), general_pin_input_limf(nullptr),
      general_pin_input_sda_length(0), st_general_pin_input_sda(), general_pin_input_sda(nullptr),
      general_pin_input_scl_length(0), st_general_pin_input_scl(), general_pin_input_scl(nullptr),
      general_pin_input_spi_cs_pwm3_length(0), st_general_pin_input_spi_cs_pwm3(), general_pin_input_spi_cs_pwm3(nullptr),
      general_pin_input_spi_miso_pwm2_length(0), st_general_pin_input_spi_miso_pwm2(), general_pin_input_spi_miso_pwm2(nullptr),
      general_pin_input_spi_mosi_pwm1_length(0), st_general_pin_input_spi_mosi_pwm1(), general_pin_input_spi_mosi_pwm1(nullptr),
      general_pin_input_spi_clk_pwm0_length(0), st_general_pin_input_spi_clk_pwm0(), general_pin_input_spi_clk_pwm0(nullptr),
      quadrature_position_length(0), st_quadrature_position(), quadrature_position(nullptr),
      quadrature_velocity_length(0), st_quadrature_velocity(), quadrature_velocity(nullptr),
      velocity_measurement_period_length(0), st_velocity_measurement_period(), velocity_measurement_period(nullptr),
      velocity_measurement_window_length(0), st_velocity_measurement_window(), velocity_measurement_window(nullptr),
      clear_position_on_limit_f_length(0), st_clear_position_on_limit_f(), clear_position_on_limit_f(nullptr),
      clear_position_on_limit_r_length(0), st_clear_position_on_limit_r(), clear_position_on_limit_r(nullptr),
      clear_position_on_quad_idx_length(0), st_clear_position_on_quad_idx(), clear_position_on_quad_idx(nullptr),
      bus_voltage_length(0), st_bus_voltage(), bus_voltage(nullptr),
      pwm_output_enable_0_length(0), st_pwm_output_enable_0(), pwm_output_enable_0(nullptr),
      pwm_output_enable_1_length(0), st_pwm_output_enable_1(), pwm_output_enable_1(nullptr),
      pwm_output_enable_2_length(0), st_pwm_output_enable_2(), pwm_output_enable_2(nullptr),
      pwm_output_enable_3_length(0), st_pwm_output_enable_3(), pwm_output_enable_3(nullptr),
      pwm_output_0_length(0), st_pwm_output_0(), pwm_output_0(nullptr),
      pwm_output_1_length(0), st_pwm_output_1(), pwm_output_1(nullptr),
      pwm_output_2_length(0), st_pwm_output_2(), pwm_output_2(nullptr),
      pwm_output_3_length(0), st_pwm_output_3(), pwm_output_3(nullptr),
      pwm_input_0_duty_cycle_length(0), st_pwm_input_0_duty_cycle(), pwm_input_0_duty_cycle(nullptr),
      pwm_input_0_period_length(0), st_pwm_input_0_period(), pwm_input_0_period(nullptr),
      pwm_input_1_duty_cycle_length(0), st_pwm_input_1_duty_cycle(), pwm_input_1_duty_cycle(nullptr),
      pwm_input_1_period_length(0), st_pwm_input_1_period(), pwm_input_1_period(nullptr),
      pwm_input_2_duty_cycle_length(0), st_pwm_input_2_duty_cycle(), pwm_input_2_duty_cycle(nullptr),
      pwm_input_2_period_length(0), st_pwm_input_2_period(), pwm_input_2_period(nullptr),
      pwm_input_3_duty_cycle_length(0), st_pwm_input_3_duty_cycle(), pwm_input_3_duty_cycle(nullptr),
      pwm_input_3_period_length(0), st_pwm_input_3_period(), pwm_input_3_period(nullptr),
      status_1_general_period_length(0), st_status_1_general_period(), status_1_general_period(nullptr),
      status_2_general_period_length(0), st_status_2_general_period(), status_2_general_period(nullptr),
      status_3_pwminputs0_period_length(0), st_status_3_pwminputs0_period(), status_3_pwminputs0_period(nullptr),
      status_4_pwminputs1_period_length(0), st_status_4_pwminputs1_period(), status_4_pwminputs1_period(nullptr),
      status_5_pwminputs2_period_length(0), st_status_5_pwminputs2_period(), status_5_pwminputs2_period(nullptr),
      status_6_pwminputs3_period_length(0), st_status_6_pwminputs3_period(), status_6_pwminputs3_period(nullptr),
      status_8_misc_period_length(0), st_status_8_misc_period(), status_8_misc_period(nullptr),
      control_1_general_period_length(0), st_control_1_general_period(), control_1_general_period(nullptr),
      control_2_pwmoutput_period_length(0), st_control_2_pwmoutput_period(), control_2_pwmoutput_period(nullptr),
      faults_length(0), st_faults(), faults(nullptr),
      sticky_faults_length(0), st_sticky_faults(), sticky_faults(nullptr),
      encoder_ticks_per_rotation_length(0), st_encoder_ticks_per_rotation(), encoder_ticks_per_rotation(nullptr),
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
      *(outbuffer + offset + 0) = (this->led_output_a_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->led_output_a_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->led_output_a_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->led_output_a_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->led_output_a_length);
      for( uint32_t i = 0; i < led_output_a_length; i++){
      union {
        double real;
        uint64_t base;
      } u_led_output_ai;
      u_led_output_ai.real = this->led_output_a[i];
      *(outbuffer + offset + 0) = (u_led_output_ai.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_led_output_ai.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_led_output_ai.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_led_output_ai.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_led_output_ai.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_led_output_ai.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_led_output_ai.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_led_output_ai.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->led_output_a[i]);
      }
      *(outbuffer + offset + 0) = (this->led_output_b_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->led_output_b_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->led_output_b_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->led_output_b_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->led_output_b_length);
      for( uint32_t i = 0; i < led_output_b_length; i++){
      union {
        double real;
        uint64_t base;
      } u_led_output_bi;
      u_led_output_bi.real = this->led_output_b[i];
      *(outbuffer + offset + 0) = (u_led_output_bi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_led_output_bi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_led_output_bi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_led_output_bi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_led_output_bi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_led_output_bi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_led_output_bi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_led_output_bi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->led_output_b[i]);
      }
      *(outbuffer + offset + 0) = (this->led_output_c_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->led_output_c_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->led_output_c_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->led_output_c_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->led_output_c_length);
      for( uint32_t i = 0; i < led_output_c_length; i++){
      union {
        double real;
        uint64_t base;
      } u_led_output_ci;
      u_led_output_ci.real = this->led_output_c[i];
      *(outbuffer + offset + 0) = (u_led_output_ci.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_led_output_ci.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_led_output_ci.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_led_output_ci.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_led_output_ci.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_led_output_ci.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_led_output_ci.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_led_output_ci.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->led_output_c[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_enable_quad_idx_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_enable_quad_idx_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_enable_quad_idx_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_enable_quad_idx_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_quad_idx_length);
      for( uint32_t i = 0; i < general_pin_output_enable_quad_idx_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_enable_quad_idxi;
      u_general_pin_output_enable_quad_idxi.real = this->general_pin_output_enable_quad_idx[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_enable_quad_idxi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_quad_idx[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_enable_quad_b_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_enable_quad_b_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_enable_quad_b_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_enable_quad_b_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_quad_b_length);
      for( uint32_t i = 0; i < general_pin_output_enable_quad_b_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_enable_quad_bi;
      u_general_pin_output_enable_quad_bi.real = this->general_pin_output_enable_quad_b[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_enable_quad_bi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_quad_b[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_enable_quad_a_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_enable_quad_a_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_enable_quad_a_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_enable_quad_a_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_quad_a_length);
      for( uint32_t i = 0; i < general_pin_output_enable_quad_a_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_enable_quad_ai;
      u_general_pin_output_enable_quad_ai.real = this->general_pin_output_enable_quad_a[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_enable_quad_ai.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_quad_a[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_enable_limr_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_enable_limr_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_enable_limr_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_enable_limr_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_limr_length);
      for( uint32_t i = 0; i < general_pin_output_enable_limr_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_enable_limri;
      u_general_pin_output_enable_limri.real = this->general_pin_output_enable_limr[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_enable_limri.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_limr[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_enable_limf_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_enable_limf_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_enable_limf_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_enable_limf_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_limf_length);
      for( uint32_t i = 0; i < general_pin_output_enable_limf_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_enable_limfi;
      u_general_pin_output_enable_limfi.real = this->general_pin_output_enable_limf[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_enable_limfi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_limf[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_enable_sda_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_enable_sda_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_enable_sda_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_enable_sda_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_sda_length);
      for( uint32_t i = 0; i < general_pin_output_enable_sda_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_enable_sdai;
      u_general_pin_output_enable_sdai.real = this->general_pin_output_enable_sda[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_enable_sdai.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_sda[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_enable_scl_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_enable_scl_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_enable_scl_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_enable_scl_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_scl_length);
      for( uint32_t i = 0; i < general_pin_output_enable_scl_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_enable_scli;
      u_general_pin_output_enable_scli.real = this->general_pin_output_enable_scl[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_enable_scli.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_scl[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_enable_spi_cs_pwm3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_enable_spi_cs_pwm3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_enable_spi_cs_pwm3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_enable_spi_cs_pwm3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_spi_cs_pwm3_length);
      for( uint32_t i = 0; i < general_pin_output_enable_spi_cs_pwm3_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_enable_spi_cs_pwm3i;
      u_general_pin_output_enable_spi_cs_pwm3i.real = this->general_pin_output_enable_spi_cs_pwm3[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_enable_spi_cs_pwm3i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_spi_cs_pwm3[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_enable_spi_miso_pwm2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_enable_spi_miso_pwm2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_enable_spi_miso_pwm2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_enable_spi_miso_pwm2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_spi_miso_pwm2_length);
      for( uint32_t i = 0; i < general_pin_output_enable_spi_miso_pwm2_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_enable_spi_miso_pwm2i;
      u_general_pin_output_enable_spi_miso_pwm2i.real = this->general_pin_output_enable_spi_miso_pwm2[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_enable_spi_miso_pwm2i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_spi_miso_pwm2[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_enable_spi_mosi_pwm1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_enable_spi_mosi_pwm1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_enable_spi_mosi_pwm1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_enable_spi_mosi_pwm1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_spi_mosi_pwm1_length);
      for( uint32_t i = 0; i < general_pin_output_enable_spi_mosi_pwm1_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_enable_spi_mosi_pwm1i;
      u_general_pin_output_enable_spi_mosi_pwm1i.real = this->general_pin_output_enable_spi_mosi_pwm1[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_enable_spi_mosi_pwm1i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_spi_mosi_pwm1[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_enable_spi_clk_pwm0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_enable_spi_clk_pwm0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_enable_spi_clk_pwm0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_enable_spi_clk_pwm0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_spi_clk_pwm0_length);
      for( uint32_t i = 0; i < general_pin_output_enable_spi_clk_pwm0_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_enable_spi_clk_pwm0i;
      u_general_pin_output_enable_spi_clk_pwm0i.real = this->general_pin_output_enable_spi_clk_pwm0[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_enable_spi_clk_pwm0i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_enable_spi_clk_pwm0[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_quad_idx_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_quad_idx_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_quad_idx_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_quad_idx_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_quad_idx_length);
      for( uint32_t i = 0; i < general_pin_output_quad_idx_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_quad_idxi;
      u_general_pin_output_quad_idxi.real = this->general_pin_output_quad_idx[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_quad_idxi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_quad_idx[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_quad_b_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_quad_b_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_quad_b_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_quad_b_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_quad_b_length);
      for( uint32_t i = 0; i < general_pin_output_quad_b_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_quad_bi;
      u_general_pin_output_quad_bi.real = this->general_pin_output_quad_b[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_quad_bi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_quad_b[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_quad_a_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_quad_a_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_quad_a_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_quad_a_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_quad_a_length);
      for( uint32_t i = 0; i < general_pin_output_quad_a_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_quad_ai;
      u_general_pin_output_quad_ai.real = this->general_pin_output_quad_a[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_quad_ai.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_quad_a[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_limr_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_limr_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_limr_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_limr_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_limr_length);
      for( uint32_t i = 0; i < general_pin_output_limr_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_limri;
      u_general_pin_output_limri.real = this->general_pin_output_limr[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_limri.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_limr[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_limf_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_limf_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_limf_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_limf_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_limf_length);
      for( uint32_t i = 0; i < general_pin_output_limf_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_limfi;
      u_general_pin_output_limfi.real = this->general_pin_output_limf[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_limfi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_limf[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_sda_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_sda_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_sda_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_sda_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_sda_length);
      for( uint32_t i = 0; i < general_pin_output_sda_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_sdai;
      u_general_pin_output_sdai.real = this->general_pin_output_sda[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_sdai.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_sda[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_scl_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_scl_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_scl_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_scl_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_scl_length);
      for( uint32_t i = 0; i < general_pin_output_scl_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_scli;
      u_general_pin_output_scli.real = this->general_pin_output_scl[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_scli.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_scl[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_spi_cs_pwm3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_spi_cs_pwm3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_spi_cs_pwm3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_spi_cs_pwm3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_spi_cs_pwm3_length);
      for( uint32_t i = 0; i < general_pin_output_spi_cs_pwm3_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_spi_cs_pwm3i;
      u_general_pin_output_spi_cs_pwm3i.real = this->general_pin_output_spi_cs_pwm3[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_spi_cs_pwm3i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_spi_cs_pwm3[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_spi_miso_pwm2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_spi_miso_pwm2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_spi_miso_pwm2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_spi_miso_pwm2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_spi_miso_pwm2_length);
      for( uint32_t i = 0; i < general_pin_output_spi_miso_pwm2_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_spi_miso_pwm2i;
      u_general_pin_output_spi_miso_pwm2i.real = this->general_pin_output_spi_miso_pwm2[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_spi_miso_pwm2i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_spi_miso_pwm2[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_spi_mosi_pwm1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_spi_mosi_pwm1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_spi_mosi_pwm1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_spi_mosi_pwm1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_spi_mosi_pwm1_length);
      for( uint32_t i = 0; i < general_pin_output_spi_mosi_pwm1_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_spi_mosi_pwm1i;
      u_general_pin_output_spi_mosi_pwm1i.real = this->general_pin_output_spi_mosi_pwm1[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_spi_mosi_pwm1i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_spi_mosi_pwm1[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_output_spi_clk_pwm0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_output_spi_clk_pwm0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_output_spi_clk_pwm0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_output_spi_clk_pwm0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_output_spi_clk_pwm0_length);
      for( uint32_t i = 0; i < general_pin_output_spi_clk_pwm0_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_output_spi_clk_pwm0i;
      u_general_pin_output_spi_clk_pwm0i.real = this->general_pin_output_spi_clk_pwm0[i];
      *(outbuffer + offset + 0) = (u_general_pin_output_spi_clk_pwm0i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_output_spi_clk_pwm0[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_input_quad_idx_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_input_quad_idx_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_input_quad_idx_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_input_quad_idx_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_input_quad_idx_length);
      for( uint32_t i = 0; i < general_pin_input_quad_idx_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_input_quad_idxi;
      u_general_pin_input_quad_idxi.real = this->general_pin_input_quad_idx[i];
      *(outbuffer + offset + 0) = (u_general_pin_input_quad_idxi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_input_quad_idx[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_input_quad_b_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_input_quad_b_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_input_quad_b_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_input_quad_b_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_input_quad_b_length);
      for( uint32_t i = 0; i < general_pin_input_quad_b_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_input_quad_bi;
      u_general_pin_input_quad_bi.real = this->general_pin_input_quad_b[i];
      *(outbuffer + offset + 0) = (u_general_pin_input_quad_bi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_input_quad_b[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_input_quad_a_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_input_quad_a_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_input_quad_a_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_input_quad_a_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_input_quad_a_length);
      for( uint32_t i = 0; i < general_pin_input_quad_a_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_input_quad_ai;
      u_general_pin_input_quad_ai.real = this->general_pin_input_quad_a[i];
      *(outbuffer + offset + 0) = (u_general_pin_input_quad_ai.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_input_quad_a[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_input_limr_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_input_limr_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_input_limr_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_input_limr_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_input_limr_length);
      for( uint32_t i = 0; i < general_pin_input_limr_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_input_limri;
      u_general_pin_input_limri.real = this->general_pin_input_limr[i];
      *(outbuffer + offset + 0) = (u_general_pin_input_limri.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_input_limr[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_input_limf_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_input_limf_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_input_limf_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_input_limf_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_input_limf_length);
      for( uint32_t i = 0; i < general_pin_input_limf_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_input_limfi;
      u_general_pin_input_limfi.real = this->general_pin_input_limf[i];
      *(outbuffer + offset + 0) = (u_general_pin_input_limfi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_input_limf[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_input_sda_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_input_sda_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_input_sda_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_input_sda_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_input_sda_length);
      for( uint32_t i = 0; i < general_pin_input_sda_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_input_sdai;
      u_general_pin_input_sdai.real = this->general_pin_input_sda[i];
      *(outbuffer + offset + 0) = (u_general_pin_input_sdai.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_input_sda[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_input_scl_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_input_scl_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_input_scl_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_input_scl_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_input_scl_length);
      for( uint32_t i = 0; i < general_pin_input_scl_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_input_scli;
      u_general_pin_input_scli.real = this->general_pin_input_scl[i];
      *(outbuffer + offset + 0) = (u_general_pin_input_scli.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_input_scl[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_input_spi_cs_pwm3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_input_spi_cs_pwm3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_input_spi_cs_pwm3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_input_spi_cs_pwm3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_input_spi_cs_pwm3_length);
      for( uint32_t i = 0; i < general_pin_input_spi_cs_pwm3_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_input_spi_cs_pwm3i;
      u_general_pin_input_spi_cs_pwm3i.real = this->general_pin_input_spi_cs_pwm3[i];
      *(outbuffer + offset + 0) = (u_general_pin_input_spi_cs_pwm3i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_input_spi_cs_pwm3[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_input_spi_miso_pwm2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_input_spi_miso_pwm2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_input_spi_miso_pwm2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_input_spi_miso_pwm2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_input_spi_miso_pwm2_length);
      for( uint32_t i = 0; i < general_pin_input_spi_miso_pwm2_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_input_spi_miso_pwm2i;
      u_general_pin_input_spi_miso_pwm2i.real = this->general_pin_input_spi_miso_pwm2[i];
      *(outbuffer + offset + 0) = (u_general_pin_input_spi_miso_pwm2i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_input_spi_miso_pwm2[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_input_spi_mosi_pwm1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_input_spi_mosi_pwm1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_input_spi_mosi_pwm1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_input_spi_mosi_pwm1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_input_spi_mosi_pwm1_length);
      for( uint32_t i = 0; i < general_pin_input_spi_mosi_pwm1_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_input_spi_mosi_pwm1i;
      u_general_pin_input_spi_mosi_pwm1i.real = this->general_pin_input_spi_mosi_pwm1[i];
      *(outbuffer + offset + 0) = (u_general_pin_input_spi_mosi_pwm1i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_input_spi_mosi_pwm1[i]);
      }
      *(outbuffer + offset + 0) = (this->general_pin_input_spi_clk_pwm0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->general_pin_input_spi_clk_pwm0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->general_pin_input_spi_clk_pwm0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->general_pin_input_spi_clk_pwm0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->general_pin_input_spi_clk_pwm0_length);
      for( uint32_t i = 0; i < general_pin_input_spi_clk_pwm0_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_general_pin_input_spi_clk_pwm0i;
      u_general_pin_input_spi_clk_pwm0i.real = this->general_pin_input_spi_clk_pwm0[i];
      *(outbuffer + offset + 0) = (u_general_pin_input_spi_clk_pwm0i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->general_pin_input_spi_clk_pwm0[i]);
      }
      *(outbuffer + offset + 0) = (this->quadrature_position_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->quadrature_position_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->quadrature_position_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->quadrature_position_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->quadrature_position_length);
      for( uint32_t i = 0; i < quadrature_position_length; i++){
      union {
        double real;
        uint64_t base;
      } u_quadrature_positioni;
      u_quadrature_positioni.real = this->quadrature_position[i];
      *(outbuffer + offset + 0) = (u_quadrature_positioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_quadrature_positioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_quadrature_positioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_quadrature_positioni.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_quadrature_positioni.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_quadrature_positioni.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_quadrature_positioni.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_quadrature_positioni.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->quadrature_position[i]);
      }
      *(outbuffer + offset + 0) = (this->quadrature_velocity_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->quadrature_velocity_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->quadrature_velocity_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->quadrature_velocity_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->quadrature_velocity_length);
      for( uint32_t i = 0; i < quadrature_velocity_length; i++){
      union {
        double real;
        uint64_t base;
      } u_quadrature_velocityi;
      u_quadrature_velocityi.real = this->quadrature_velocity[i];
      *(outbuffer + offset + 0) = (u_quadrature_velocityi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_quadrature_velocityi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_quadrature_velocityi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_quadrature_velocityi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_quadrature_velocityi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_quadrature_velocityi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_quadrature_velocityi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_quadrature_velocityi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->quadrature_velocity[i]);
      }
      *(outbuffer + offset + 0) = (this->velocity_measurement_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->velocity_measurement_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->velocity_measurement_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->velocity_measurement_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->velocity_measurement_period_length);
      for( uint32_t i = 0; i < velocity_measurement_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_velocity_measurement_periodi;
      u_velocity_measurement_periodi.real = this->velocity_measurement_period[i];
      *(outbuffer + offset + 0) = (u_velocity_measurement_periodi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->velocity_measurement_period[i]);
      }
      *(outbuffer + offset + 0) = (this->velocity_measurement_window_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->velocity_measurement_window_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->velocity_measurement_window_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->velocity_measurement_window_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->velocity_measurement_window_length);
      for( uint32_t i = 0; i < velocity_measurement_window_length; i++){
      union {
        int64_t real;
        uint64_t base;
      } u_velocity_measurement_windowi;
      u_velocity_measurement_windowi.real = this->velocity_measurement_window[i];
      *(outbuffer + offset + 0) = (u_velocity_measurement_windowi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_velocity_measurement_windowi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_velocity_measurement_windowi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_velocity_measurement_windowi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_velocity_measurement_windowi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_velocity_measurement_windowi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_velocity_measurement_windowi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_velocity_measurement_windowi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->velocity_measurement_window[i]);
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
      *(outbuffer + offset + 0) = (this->clear_position_on_quad_idx_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->clear_position_on_quad_idx_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->clear_position_on_quad_idx_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->clear_position_on_quad_idx_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->clear_position_on_quad_idx_length);
      for( uint32_t i = 0; i < clear_position_on_quad_idx_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_clear_position_on_quad_idxi;
      u_clear_position_on_quad_idxi.real = this->clear_position_on_quad_idx[i];
      *(outbuffer + offset + 0) = (u_clear_position_on_quad_idxi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->clear_position_on_quad_idx[i]);
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
      *(outbuffer + offset + 0) = (this->pwm_output_enable_0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_output_enable_0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_output_enable_0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_output_enable_0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_output_enable_0_length);
      for( uint32_t i = 0; i < pwm_output_enable_0_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_pwm_output_enable_0i;
      u_pwm_output_enable_0i.real = this->pwm_output_enable_0[i];
      *(outbuffer + offset + 0) = (u_pwm_output_enable_0i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pwm_output_enable_0[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_output_enable_1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_output_enable_1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_output_enable_1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_output_enable_1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_output_enable_1_length);
      for( uint32_t i = 0; i < pwm_output_enable_1_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_pwm_output_enable_1i;
      u_pwm_output_enable_1i.real = this->pwm_output_enable_1[i];
      *(outbuffer + offset + 0) = (u_pwm_output_enable_1i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pwm_output_enable_1[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_output_enable_2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_output_enable_2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_output_enable_2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_output_enable_2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_output_enable_2_length);
      for( uint32_t i = 0; i < pwm_output_enable_2_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_pwm_output_enable_2i;
      u_pwm_output_enable_2i.real = this->pwm_output_enable_2[i];
      *(outbuffer + offset + 0) = (u_pwm_output_enable_2i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pwm_output_enable_2[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_output_enable_3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_output_enable_3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_output_enable_3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_output_enable_3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_output_enable_3_length);
      for( uint32_t i = 0; i < pwm_output_enable_3_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_pwm_output_enable_3i;
      u_pwm_output_enable_3i.real = this->pwm_output_enable_3[i];
      *(outbuffer + offset + 0) = (u_pwm_output_enable_3i.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pwm_output_enable_3[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_output_0_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_output_0_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_output_0_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_output_0_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_output_0_length);
      for( uint32_t i = 0; i < pwm_output_0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pwm_output_0i;
      u_pwm_output_0i.real = this->pwm_output_0[i];
      *(outbuffer + offset + 0) = (u_pwm_output_0i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pwm_output_0i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pwm_output_0i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pwm_output_0i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pwm_output_0i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pwm_output_0i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pwm_output_0i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pwm_output_0i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pwm_output_0[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_output_1_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_output_1_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_output_1_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_output_1_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_output_1_length);
      for( uint32_t i = 0; i < pwm_output_1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pwm_output_1i;
      u_pwm_output_1i.real = this->pwm_output_1[i];
      *(outbuffer + offset + 0) = (u_pwm_output_1i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pwm_output_1i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pwm_output_1i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pwm_output_1i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pwm_output_1i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pwm_output_1i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pwm_output_1i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pwm_output_1i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pwm_output_1[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_output_2_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_output_2_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_output_2_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_output_2_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_output_2_length);
      for( uint32_t i = 0; i < pwm_output_2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pwm_output_2i;
      u_pwm_output_2i.real = this->pwm_output_2[i];
      *(outbuffer + offset + 0) = (u_pwm_output_2i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pwm_output_2i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pwm_output_2i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pwm_output_2i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pwm_output_2i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pwm_output_2i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pwm_output_2i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pwm_output_2i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pwm_output_2[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_output_3_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_output_3_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_output_3_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_output_3_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_output_3_length);
      for( uint32_t i = 0; i < pwm_output_3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pwm_output_3i;
      u_pwm_output_3i.real = this->pwm_output_3[i];
      *(outbuffer + offset + 0) = (u_pwm_output_3i.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pwm_output_3i.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pwm_output_3i.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pwm_output_3i.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pwm_output_3i.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pwm_output_3i.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pwm_output_3i.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pwm_output_3i.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pwm_output_3[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_input_0_duty_cycle_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_input_0_duty_cycle_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_input_0_duty_cycle_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_input_0_duty_cycle_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_input_0_duty_cycle_length);
      for( uint32_t i = 0; i < pwm_input_0_duty_cycle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pwm_input_0_duty_cyclei;
      u_pwm_input_0_duty_cyclei.real = this->pwm_input_0_duty_cycle[i];
      *(outbuffer + offset + 0) = (u_pwm_input_0_duty_cyclei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pwm_input_0_duty_cyclei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pwm_input_0_duty_cyclei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pwm_input_0_duty_cyclei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pwm_input_0_duty_cyclei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pwm_input_0_duty_cyclei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pwm_input_0_duty_cyclei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pwm_input_0_duty_cyclei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pwm_input_0_duty_cycle[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_input_0_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_input_0_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_input_0_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_input_0_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_input_0_period_length);
      for( uint32_t i = 0; i < pwm_input_0_period_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pwm_input_0_periodi;
      u_pwm_input_0_periodi.real = this->pwm_input_0_period[i];
      *(outbuffer + offset + 0) = (u_pwm_input_0_periodi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pwm_input_0_periodi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pwm_input_0_periodi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pwm_input_0_periodi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pwm_input_0_periodi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pwm_input_0_periodi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pwm_input_0_periodi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pwm_input_0_periodi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pwm_input_0_period[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_input_1_duty_cycle_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_input_1_duty_cycle_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_input_1_duty_cycle_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_input_1_duty_cycle_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_input_1_duty_cycle_length);
      for( uint32_t i = 0; i < pwm_input_1_duty_cycle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pwm_input_1_duty_cyclei;
      u_pwm_input_1_duty_cyclei.real = this->pwm_input_1_duty_cycle[i];
      *(outbuffer + offset + 0) = (u_pwm_input_1_duty_cyclei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pwm_input_1_duty_cyclei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pwm_input_1_duty_cyclei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pwm_input_1_duty_cyclei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pwm_input_1_duty_cyclei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pwm_input_1_duty_cyclei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pwm_input_1_duty_cyclei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pwm_input_1_duty_cyclei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pwm_input_1_duty_cycle[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_input_1_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_input_1_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_input_1_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_input_1_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_input_1_period_length);
      for( uint32_t i = 0; i < pwm_input_1_period_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pwm_input_1_periodi;
      u_pwm_input_1_periodi.real = this->pwm_input_1_period[i];
      *(outbuffer + offset + 0) = (u_pwm_input_1_periodi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pwm_input_1_periodi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pwm_input_1_periodi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pwm_input_1_periodi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pwm_input_1_periodi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pwm_input_1_periodi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pwm_input_1_periodi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pwm_input_1_periodi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pwm_input_1_period[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_input_2_duty_cycle_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_input_2_duty_cycle_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_input_2_duty_cycle_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_input_2_duty_cycle_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_input_2_duty_cycle_length);
      for( uint32_t i = 0; i < pwm_input_2_duty_cycle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pwm_input_2_duty_cyclei;
      u_pwm_input_2_duty_cyclei.real = this->pwm_input_2_duty_cycle[i];
      *(outbuffer + offset + 0) = (u_pwm_input_2_duty_cyclei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pwm_input_2_duty_cyclei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pwm_input_2_duty_cyclei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pwm_input_2_duty_cyclei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pwm_input_2_duty_cyclei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pwm_input_2_duty_cyclei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pwm_input_2_duty_cyclei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pwm_input_2_duty_cyclei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pwm_input_2_duty_cycle[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_input_2_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_input_2_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_input_2_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_input_2_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_input_2_period_length);
      for( uint32_t i = 0; i < pwm_input_2_period_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pwm_input_2_periodi;
      u_pwm_input_2_periodi.real = this->pwm_input_2_period[i];
      *(outbuffer + offset + 0) = (u_pwm_input_2_periodi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pwm_input_2_periodi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pwm_input_2_periodi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pwm_input_2_periodi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pwm_input_2_periodi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pwm_input_2_periodi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pwm_input_2_periodi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pwm_input_2_periodi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pwm_input_2_period[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_input_3_duty_cycle_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_input_3_duty_cycle_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_input_3_duty_cycle_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_input_3_duty_cycle_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_input_3_duty_cycle_length);
      for( uint32_t i = 0; i < pwm_input_3_duty_cycle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pwm_input_3_duty_cyclei;
      u_pwm_input_3_duty_cyclei.real = this->pwm_input_3_duty_cycle[i];
      *(outbuffer + offset + 0) = (u_pwm_input_3_duty_cyclei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pwm_input_3_duty_cyclei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pwm_input_3_duty_cyclei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pwm_input_3_duty_cyclei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pwm_input_3_duty_cyclei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pwm_input_3_duty_cyclei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pwm_input_3_duty_cyclei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pwm_input_3_duty_cyclei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pwm_input_3_duty_cycle[i]);
      }
      *(outbuffer + offset + 0) = (this->pwm_input_3_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pwm_input_3_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pwm_input_3_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pwm_input_3_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pwm_input_3_period_length);
      for( uint32_t i = 0; i < pwm_input_3_period_length; i++){
      union {
        double real;
        uint64_t base;
      } u_pwm_input_3_periodi;
      u_pwm_input_3_periodi.real = this->pwm_input_3_period[i];
      *(outbuffer + offset + 0) = (u_pwm_input_3_periodi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pwm_input_3_periodi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pwm_input_3_periodi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pwm_input_3_periodi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pwm_input_3_periodi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pwm_input_3_periodi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pwm_input_3_periodi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pwm_input_3_periodi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pwm_input_3_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_1_general_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_1_general_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_1_general_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_1_general_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_1_general_period_length);
      for( uint32_t i = 0; i < status_1_general_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_status_1_general_periodi;
      u_status_1_general_periodi.real = this->status_1_general_period[i];
      *(outbuffer + offset + 0) = (u_status_1_general_periodi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_1_general_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_2_general_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_2_general_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_2_general_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_2_general_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_2_general_period_length);
      for( uint32_t i = 0; i < status_2_general_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_status_2_general_periodi;
      u_status_2_general_periodi.real = this->status_2_general_period[i];
      *(outbuffer + offset + 0) = (u_status_2_general_periodi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_2_general_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_3_pwminputs0_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_3_pwminputs0_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_3_pwminputs0_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_3_pwminputs0_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_3_pwminputs0_period_length);
      for( uint32_t i = 0; i < status_3_pwminputs0_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_status_3_pwminputs0_periodi;
      u_status_3_pwminputs0_periodi.real = this->status_3_pwminputs0_period[i];
      *(outbuffer + offset + 0) = (u_status_3_pwminputs0_periodi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_3_pwminputs0_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_4_pwminputs1_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_4_pwminputs1_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_4_pwminputs1_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_4_pwminputs1_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_4_pwminputs1_period_length);
      for( uint32_t i = 0; i < status_4_pwminputs1_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_status_4_pwminputs1_periodi;
      u_status_4_pwminputs1_periodi.real = this->status_4_pwminputs1_period[i];
      *(outbuffer + offset + 0) = (u_status_4_pwminputs1_periodi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_4_pwminputs1_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_5_pwminputs2_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_5_pwminputs2_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_5_pwminputs2_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_5_pwminputs2_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_5_pwminputs2_period_length);
      for( uint32_t i = 0; i < status_5_pwminputs2_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_status_5_pwminputs2_periodi;
      u_status_5_pwminputs2_periodi.real = this->status_5_pwminputs2_period[i];
      *(outbuffer + offset + 0) = (u_status_5_pwminputs2_periodi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_5_pwminputs2_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_6_pwminputs3_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_6_pwminputs3_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_6_pwminputs3_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_6_pwminputs3_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_6_pwminputs3_period_length);
      for( uint32_t i = 0; i < status_6_pwminputs3_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_status_6_pwminputs3_periodi;
      u_status_6_pwminputs3_periodi.real = this->status_6_pwminputs3_period[i];
      *(outbuffer + offset + 0) = (u_status_6_pwminputs3_periodi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_6_pwminputs3_period[i]);
      }
      *(outbuffer + offset + 0) = (this->status_8_misc_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->status_8_misc_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->status_8_misc_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->status_8_misc_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status_8_misc_period_length);
      for( uint32_t i = 0; i < status_8_misc_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_status_8_misc_periodi;
      u_status_8_misc_periodi.real = this->status_8_misc_period[i];
      *(outbuffer + offset + 0) = (u_status_8_misc_periodi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status_8_misc_period[i]);
      }
      *(outbuffer + offset + 0) = (this->control_1_general_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->control_1_general_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->control_1_general_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->control_1_general_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->control_1_general_period_length);
      for( uint32_t i = 0; i < control_1_general_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_control_1_general_periodi;
      u_control_1_general_periodi.real = this->control_1_general_period[i];
      *(outbuffer + offset + 0) = (u_control_1_general_periodi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->control_1_general_period[i]);
      }
      *(outbuffer + offset + 0) = (this->control_2_pwmoutput_period_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->control_2_pwmoutput_period_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->control_2_pwmoutput_period_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->control_2_pwmoutput_period_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->control_2_pwmoutput_period_length);
      for( uint32_t i = 0; i < control_2_pwmoutput_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_control_2_pwmoutput_periodi;
      u_control_2_pwmoutput_periodi.real = this->control_2_pwmoutput_period[i];
      *(outbuffer + offset + 0) = (u_control_2_pwmoutput_periodi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->control_2_pwmoutput_period[i]);
      }
      *(outbuffer + offset + 0) = (this->faults_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->faults_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->faults_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->faults_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->faults_length);
      for( uint32_t i = 0; i < faults_length; i++){
      union {
        int16_t real;
        uint16_t base;
      } u_faultsi;
      u_faultsi.real = this->faults[i];
      *(outbuffer + offset + 0) = (u_faultsi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_faultsi.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->faults[i]);
      }
      *(outbuffer + offset + 0) = (this->sticky_faults_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->sticky_faults_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->sticky_faults_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->sticky_faults_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sticky_faults_length);
      for( uint32_t i = 0; i < sticky_faults_length; i++){
      union {
        int16_t real;
        uint16_t base;
      } u_sticky_faultsi;
      u_sticky_faultsi.real = this->sticky_faults[i];
      *(outbuffer + offset + 0) = (u_sticky_faultsi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_sticky_faultsi.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->sticky_faults[i]);
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
      uint32_t led_output_a_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      led_output_a_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      led_output_a_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      led_output_a_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->led_output_a_length);
      if(led_output_a_lengthT > led_output_a_length)
        this->led_output_a = (double*)realloc(this->led_output_a, led_output_a_lengthT * sizeof(double));
      led_output_a_length = led_output_a_lengthT;
      for( uint32_t i = 0; i < led_output_a_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_led_output_a;
      u_st_led_output_a.base = 0;
      u_st_led_output_a.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_led_output_a.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_led_output_a.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_led_output_a.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_led_output_a.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_led_output_a.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_led_output_a.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_led_output_a.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_led_output_a = u_st_led_output_a.real;
      offset += sizeof(this->st_led_output_a);
        memcpy( &(this->led_output_a[i]), &(this->st_led_output_a), sizeof(double));
      }
      uint32_t led_output_b_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      led_output_b_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      led_output_b_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      led_output_b_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->led_output_b_length);
      if(led_output_b_lengthT > led_output_b_length)
        this->led_output_b = (double*)realloc(this->led_output_b, led_output_b_lengthT * sizeof(double));
      led_output_b_length = led_output_b_lengthT;
      for( uint32_t i = 0; i < led_output_b_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_led_output_b;
      u_st_led_output_b.base = 0;
      u_st_led_output_b.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_led_output_b.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_led_output_b.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_led_output_b.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_led_output_b.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_led_output_b.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_led_output_b.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_led_output_b.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_led_output_b = u_st_led_output_b.real;
      offset += sizeof(this->st_led_output_b);
        memcpy( &(this->led_output_b[i]), &(this->st_led_output_b), sizeof(double));
      }
      uint32_t led_output_c_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      led_output_c_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      led_output_c_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      led_output_c_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->led_output_c_length);
      if(led_output_c_lengthT > led_output_c_length)
        this->led_output_c = (double*)realloc(this->led_output_c, led_output_c_lengthT * sizeof(double));
      led_output_c_length = led_output_c_lengthT;
      for( uint32_t i = 0; i < led_output_c_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_led_output_c;
      u_st_led_output_c.base = 0;
      u_st_led_output_c.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_led_output_c.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_led_output_c.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_led_output_c.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_led_output_c.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_led_output_c.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_led_output_c.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_led_output_c.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_led_output_c = u_st_led_output_c.real;
      offset += sizeof(this->st_led_output_c);
        memcpy( &(this->led_output_c[i]), &(this->st_led_output_c), sizeof(double));
      }
      uint32_t general_pin_output_enable_quad_idx_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_enable_quad_idx_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_enable_quad_idx_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_enable_quad_idx_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_enable_quad_idx_length);
      if(general_pin_output_enable_quad_idx_lengthT > general_pin_output_enable_quad_idx_length)
        this->general_pin_output_enable_quad_idx = (bool*)realloc(this->general_pin_output_enable_quad_idx, general_pin_output_enable_quad_idx_lengthT * sizeof(bool));
      general_pin_output_enable_quad_idx_length = general_pin_output_enable_quad_idx_lengthT;
      for( uint32_t i = 0; i < general_pin_output_enable_quad_idx_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_enable_quad_idx;
      u_st_general_pin_output_enable_quad_idx.base = 0;
      u_st_general_pin_output_enable_quad_idx.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_enable_quad_idx = u_st_general_pin_output_enable_quad_idx.real;
      offset += sizeof(this->st_general_pin_output_enable_quad_idx);
        memcpy( &(this->general_pin_output_enable_quad_idx[i]), &(this->st_general_pin_output_enable_quad_idx), sizeof(bool));
      }
      uint32_t general_pin_output_enable_quad_b_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_enable_quad_b_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_enable_quad_b_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_enable_quad_b_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_enable_quad_b_length);
      if(general_pin_output_enable_quad_b_lengthT > general_pin_output_enable_quad_b_length)
        this->general_pin_output_enable_quad_b = (bool*)realloc(this->general_pin_output_enable_quad_b, general_pin_output_enable_quad_b_lengthT * sizeof(bool));
      general_pin_output_enable_quad_b_length = general_pin_output_enable_quad_b_lengthT;
      for( uint32_t i = 0; i < general_pin_output_enable_quad_b_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_enable_quad_b;
      u_st_general_pin_output_enable_quad_b.base = 0;
      u_st_general_pin_output_enable_quad_b.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_enable_quad_b = u_st_general_pin_output_enable_quad_b.real;
      offset += sizeof(this->st_general_pin_output_enable_quad_b);
        memcpy( &(this->general_pin_output_enable_quad_b[i]), &(this->st_general_pin_output_enable_quad_b), sizeof(bool));
      }
      uint32_t general_pin_output_enable_quad_a_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_enable_quad_a_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_enable_quad_a_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_enable_quad_a_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_enable_quad_a_length);
      if(general_pin_output_enable_quad_a_lengthT > general_pin_output_enable_quad_a_length)
        this->general_pin_output_enable_quad_a = (bool*)realloc(this->general_pin_output_enable_quad_a, general_pin_output_enable_quad_a_lengthT * sizeof(bool));
      general_pin_output_enable_quad_a_length = general_pin_output_enable_quad_a_lengthT;
      for( uint32_t i = 0; i < general_pin_output_enable_quad_a_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_enable_quad_a;
      u_st_general_pin_output_enable_quad_a.base = 0;
      u_st_general_pin_output_enable_quad_a.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_enable_quad_a = u_st_general_pin_output_enable_quad_a.real;
      offset += sizeof(this->st_general_pin_output_enable_quad_a);
        memcpy( &(this->general_pin_output_enable_quad_a[i]), &(this->st_general_pin_output_enable_quad_a), sizeof(bool));
      }
      uint32_t general_pin_output_enable_limr_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_enable_limr_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_enable_limr_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_enable_limr_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_enable_limr_length);
      if(general_pin_output_enable_limr_lengthT > general_pin_output_enable_limr_length)
        this->general_pin_output_enable_limr = (bool*)realloc(this->general_pin_output_enable_limr, general_pin_output_enable_limr_lengthT * sizeof(bool));
      general_pin_output_enable_limr_length = general_pin_output_enable_limr_lengthT;
      for( uint32_t i = 0; i < general_pin_output_enable_limr_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_enable_limr;
      u_st_general_pin_output_enable_limr.base = 0;
      u_st_general_pin_output_enable_limr.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_enable_limr = u_st_general_pin_output_enable_limr.real;
      offset += sizeof(this->st_general_pin_output_enable_limr);
        memcpy( &(this->general_pin_output_enable_limr[i]), &(this->st_general_pin_output_enable_limr), sizeof(bool));
      }
      uint32_t general_pin_output_enable_limf_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_enable_limf_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_enable_limf_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_enable_limf_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_enable_limf_length);
      if(general_pin_output_enable_limf_lengthT > general_pin_output_enable_limf_length)
        this->general_pin_output_enable_limf = (bool*)realloc(this->general_pin_output_enable_limf, general_pin_output_enable_limf_lengthT * sizeof(bool));
      general_pin_output_enable_limf_length = general_pin_output_enable_limf_lengthT;
      for( uint32_t i = 0; i < general_pin_output_enable_limf_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_enable_limf;
      u_st_general_pin_output_enable_limf.base = 0;
      u_st_general_pin_output_enable_limf.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_enable_limf = u_st_general_pin_output_enable_limf.real;
      offset += sizeof(this->st_general_pin_output_enable_limf);
        memcpy( &(this->general_pin_output_enable_limf[i]), &(this->st_general_pin_output_enable_limf), sizeof(bool));
      }
      uint32_t general_pin_output_enable_sda_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_enable_sda_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_enable_sda_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_enable_sda_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_enable_sda_length);
      if(general_pin_output_enable_sda_lengthT > general_pin_output_enable_sda_length)
        this->general_pin_output_enable_sda = (bool*)realloc(this->general_pin_output_enable_sda, general_pin_output_enable_sda_lengthT * sizeof(bool));
      general_pin_output_enable_sda_length = general_pin_output_enable_sda_lengthT;
      for( uint32_t i = 0; i < general_pin_output_enable_sda_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_enable_sda;
      u_st_general_pin_output_enable_sda.base = 0;
      u_st_general_pin_output_enable_sda.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_enable_sda = u_st_general_pin_output_enable_sda.real;
      offset += sizeof(this->st_general_pin_output_enable_sda);
        memcpy( &(this->general_pin_output_enable_sda[i]), &(this->st_general_pin_output_enable_sda), sizeof(bool));
      }
      uint32_t general_pin_output_enable_scl_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_enable_scl_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_enable_scl_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_enable_scl_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_enable_scl_length);
      if(general_pin_output_enable_scl_lengthT > general_pin_output_enable_scl_length)
        this->general_pin_output_enable_scl = (bool*)realloc(this->general_pin_output_enable_scl, general_pin_output_enable_scl_lengthT * sizeof(bool));
      general_pin_output_enable_scl_length = general_pin_output_enable_scl_lengthT;
      for( uint32_t i = 0; i < general_pin_output_enable_scl_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_enable_scl;
      u_st_general_pin_output_enable_scl.base = 0;
      u_st_general_pin_output_enable_scl.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_enable_scl = u_st_general_pin_output_enable_scl.real;
      offset += sizeof(this->st_general_pin_output_enable_scl);
        memcpy( &(this->general_pin_output_enable_scl[i]), &(this->st_general_pin_output_enable_scl), sizeof(bool));
      }
      uint32_t general_pin_output_enable_spi_cs_pwm3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_enable_spi_cs_pwm3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_enable_spi_cs_pwm3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_enable_spi_cs_pwm3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_enable_spi_cs_pwm3_length);
      if(general_pin_output_enable_spi_cs_pwm3_lengthT > general_pin_output_enable_spi_cs_pwm3_length)
        this->general_pin_output_enable_spi_cs_pwm3 = (bool*)realloc(this->general_pin_output_enable_spi_cs_pwm3, general_pin_output_enable_spi_cs_pwm3_lengthT * sizeof(bool));
      general_pin_output_enable_spi_cs_pwm3_length = general_pin_output_enable_spi_cs_pwm3_lengthT;
      for( uint32_t i = 0; i < general_pin_output_enable_spi_cs_pwm3_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_enable_spi_cs_pwm3;
      u_st_general_pin_output_enable_spi_cs_pwm3.base = 0;
      u_st_general_pin_output_enable_spi_cs_pwm3.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_enable_spi_cs_pwm3 = u_st_general_pin_output_enable_spi_cs_pwm3.real;
      offset += sizeof(this->st_general_pin_output_enable_spi_cs_pwm3);
        memcpy( &(this->general_pin_output_enable_spi_cs_pwm3[i]), &(this->st_general_pin_output_enable_spi_cs_pwm3), sizeof(bool));
      }
      uint32_t general_pin_output_enable_spi_miso_pwm2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_enable_spi_miso_pwm2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_enable_spi_miso_pwm2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_enable_spi_miso_pwm2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_enable_spi_miso_pwm2_length);
      if(general_pin_output_enable_spi_miso_pwm2_lengthT > general_pin_output_enable_spi_miso_pwm2_length)
        this->general_pin_output_enable_spi_miso_pwm2 = (bool*)realloc(this->general_pin_output_enable_spi_miso_pwm2, general_pin_output_enable_spi_miso_pwm2_lengthT * sizeof(bool));
      general_pin_output_enable_spi_miso_pwm2_length = general_pin_output_enable_spi_miso_pwm2_lengthT;
      for( uint32_t i = 0; i < general_pin_output_enable_spi_miso_pwm2_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_enable_spi_miso_pwm2;
      u_st_general_pin_output_enable_spi_miso_pwm2.base = 0;
      u_st_general_pin_output_enable_spi_miso_pwm2.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_enable_spi_miso_pwm2 = u_st_general_pin_output_enable_spi_miso_pwm2.real;
      offset += sizeof(this->st_general_pin_output_enable_spi_miso_pwm2);
        memcpy( &(this->general_pin_output_enable_spi_miso_pwm2[i]), &(this->st_general_pin_output_enable_spi_miso_pwm2), sizeof(bool));
      }
      uint32_t general_pin_output_enable_spi_mosi_pwm1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_enable_spi_mosi_pwm1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_enable_spi_mosi_pwm1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_enable_spi_mosi_pwm1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_enable_spi_mosi_pwm1_length);
      if(general_pin_output_enable_spi_mosi_pwm1_lengthT > general_pin_output_enable_spi_mosi_pwm1_length)
        this->general_pin_output_enable_spi_mosi_pwm1 = (bool*)realloc(this->general_pin_output_enable_spi_mosi_pwm1, general_pin_output_enable_spi_mosi_pwm1_lengthT * sizeof(bool));
      general_pin_output_enable_spi_mosi_pwm1_length = general_pin_output_enable_spi_mosi_pwm1_lengthT;
      for( uint32_t i = 0; i < general_pin_output_enable_spi_mosi_pwm1_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_enable_spi_mosi_pwm1;
      u_st_general_pin_output_enable_spi_mosi_pwm1.base = 0;
      u_st_general_pin_output_enable_spi_mosi_pwm1.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_enable_spi_mosi_pwm1 = u_st_general_pin_output_enable_spi_mosi_pwm1.real;
      offset += sizeof(this->st_general_pin_output_enable_spi_mosi_pwm1);
        memcpy( &(this->general_pin_output_enable_spi_mosi_pwm1[i]), &(this->st_general_pin_output_enable_spi_mosi_pwm1), sizeof(bool));
      }
      uint32_t general_pin_output_enable_spi_clk_pwm0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_enable_spi_clk_pwm0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_enable_spi_clk_pwm0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_enable_spi_clk_pwm0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_enable_spi_clk_pwm0_length);
      if(general_pin_output_enable_spi_clk_pwm0_lengthT > general_pin_output_enable_spi_clk_pwm0_length)
        this->general_pin_output_enable_spi_clk_pwm0 = (bool*)realloc(this->general_pin_output_enable_spi_clk_pwm0, general_pin_output_enable_spi_clk_pwm0_lengthT * sizeof(bool));
      general_pin_output_enable_spi_clk_pwm0_length = general_pin_output_enable_spi_clk_pwm0_lengthT;
      for( uint32_t i = 0; i < general_pin_output_enable_spi_clk_pwm0_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_enable_spi_clk_pwm0;
      u_st_general_pin_output_enable_spi_clk_pwm0.base = 0;
      u_st_general_pin_output_enable_spi_clk_pwm0.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_enable_spi_clk_pwm0 = u_st_general_pin_output_enable_spi_clk_pwm0.real;
      offset += sizeof(this->st_general_pin_output_enable_spi_clk_pwm0);
        memcpy( &(this->general_pin_output_enable_spi_clk_pwm0[i]), &(this->st_general_pin_output_enable_spi_clk_pwm0), sizeof(bool));
      }
      uint32_t general_pin_output_quad_idx_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_quad_idx_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_quad_idx_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_quad_idx_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_quad_idx_length);
      if(general_pin_output_quad_idx_lengthT > general_pin_output_quad_idx_length)
        this->general_pin_output_quad_idx = (bool*)realloc(this->general_pin_output_quad_idx, general_pin_output_quad_idx_lengthT * sizeof(bool));
      general_pin_output_quad_idx_length = general_pin_output_quad_idx_lengthT;
      for( uint32_t i = 0; i < general_pin_output_quad_idx_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_quad_idx;
      u_st_general_pin_output_quad_idx.base = 0;
      u_st_general_pin_output_quad_idx.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_quad_idx = u_st_general_pin_output_quad_idx.real;
      offset += sizeof(this->st_general_pin_output_quad_idx);
        memcpy( &(this->general_pin_output_quad_idx[i]), &(this->st_general_pin_output_quad_idx), sizeof(bool));
      }
      uint32_t general_pin_output_quad_b_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_quad_b_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_quad_b_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_quad_b_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_quad_b_length);
      if(general_pin_output_quad_b_lengthT > general_pin_output_quad_b_length)
        this->general_pin_output_quad_b = (bool*)realloc(this->general_pin_output_quad_b, general_pin_output_quad_b_lengthT * sizeof(bool));
      general_pin_output_quad_b_length = general_pin_output_quad_b_lengthT;
      for( uint32_t i = 0; i < general_pin_output_quad_b_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_quad_b;
      u_st_general_pin_output_quad_b.base = 0;
      u_st_general_pin_output_quad_b.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_quad_b = u_st_general_pin_output_quad_b.real;
      offset += sizeof(this->st_general_pin_output_quad_b);
        memcpy( &(this->general_pin_output_quad_b[i]), &(this->st_general_pin_output_quad_b), sizeof(bool));
      }
      uint32_t general_pin_output_quad_a_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_quad_a_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_quad_a_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_quad_a_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_quad_a_length);
      if(general_pin_output_quad_a_lengthT > general_pin_output_quad_a_length)
        this->general_pin_output_quad_a = (bool*)realloc(this->general_pin_output_quad_a, general_pin_output_quad_a_lengthT * sizeof(bool));
      general_pin_output_quad_a_length = general_pin_output_quad_a_lengthT;
      for( uint32_t i = 0; i < general_pin_output_quad_a_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_quad_a;
      u_st_general_pin_output_quad_a.base = 0;
      u_st_general_pin_output_quad_a.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_quad_a = u_st_general_pin_output_quad_a.real;
      offset += sizeof(this->st_general_pin_output_quad_a);
        memcpy( &(this->general_pin_output_quad_a[i]), &(this->st_general_pin_output_quad_a), sizeof(bool));
      }
      uint32_t general_pin_output_limr_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_limr_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_limr_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_limr_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_limr_length);
      if(general_pin_output_limr_lengthT > general_pin_output_limr_length)
        this->general_pin_output_limr = (bool*)realloc(this->general_pin_output_limr, general_pin_output_limr_lengthT * sizeof(bool));
      general_pin_output_limr_length = general_pin_output_limr_lengthT;
      for( uint32_t i = 0; i < general_pin_output_limr_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_limr;
      u_st_general_pin_output_limr.base = 0;
      u_st_general_pin_output_limr.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_limr = u_st_general_pin_output_limr.real;
      offset += sizeof(this->st_general_pin_output_limr);
        memcpy( &(this->general_pin_output_limr[i]), &(this->st_general_pin_output_limr), sizeof(bool));
      }
      uint32_t general_pin_output_limf_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_limf_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_limf_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_limf_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_limf_length);
      if(general_pin_output_limf_lengthT > general_pin_output_limf_length)
        this->general_pin_output_limf = (bool*)realloc(this->general_pin_output_limf, general_pin_output_limf_lengthT * sizeof(bool));
      general_pin_output_limf_length = general_pin_output_limf_lengthT;
      for( uint32_t i = 0; i < general_pin_output_limf_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_limf;
      u_st_general_pin_output_limf.base = 0;
      u_st_general_pin_output_limf.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_limf = u_st_general_pin_output_limf.real;
      offset += sizeof(this->st_general_pin_output_limf);
        memcpy( &(this->general_pin_output_limf[i]), &(this->st_general_pin_output_limf), sizeof(bool));
      }
      uint32_t general_pin_output_sda_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_sda_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_sda_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_sda_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_sda_length);
      if(general_pin_output_sda_lengthT > general_pin_output_sda_length)
        this->general_pin_output_sda = (bool*)realloc(this->general_pin_output_sda, general_pin_output_sda_lengthT * sizeof(bool));
      general_pin_output_sda_length = general_pin_output_sda_lengthT;
      for( uint32_t i = 0; i < general_pin_output_sda_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_sda;
      u_st_general_pin_output_sda.base = 0;
      u_st_general_pin_output_sda.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_sda = u_st_general_pin_output_sda.real;
      offset += sizeof(this->st_general_pin_output_sda);
        memcpy( &(this->general_pin_output_sda[i]), &(this->st_general_pin_output_sda), sizeof(bool));
      }
      uint32_t general_pin_output_scl_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_scl_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_scl_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_scl_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_scl_length);
      if(general_pin_output_scl_lengthT > general_pin_output_scl_length)
        this->general_pin_output_scl = (bool*)realloc(this->general_pin_output_scl, general_pin_output_scl_lengthT * sizeof(bool));
      general_pin_output_scl_length = general_pin_output_scl_lengthT;
      for( uint32_t i = 0; i < general_pin_output_scl_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_scl;
      u_st_general_pin_output_scl.base = 0;
      u_st_general_pin_output_scl.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_scl = u_st_general_pin_output_scl.real;
      offset += sizeof(this->st_general_pin_output_scl);
        memcpy( &(this->general_pin_output_scl[i]), &(this->st_general_pin_output_scl), sizeof(bool));
      }
      uint32_t general_pin_output_spi_cs_pwm3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_spi_cs_pwm3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_spi_cs_pwm3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_spi_cs_pwm3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_spi_cs_pwm3_length);
      if(general_pin_output_spi_cs_pwm3_lengthT > general_pin_output_spi_cs_pwm3_length)
        this->general_pin_output_spi_cs_pwm3 = (bool*)realloc(this->general_pin_output_spi_cs_pwm3, general_pin_output_spi_cs_pwm3_lengthT * sizeof(bool));
      general_pin_output_spi_cs_pwm3_length = general_pin_output_spi_cs_pwm3_lengthT;
      for( uint32_t i = 0; i < general_pin_output_spi_cs_pwm3_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_spi_cs_pwm3;
      u_st_general_pin_output_spi_cs_pwm3.base = 0;
      u_st_general_pin_output_spi_cs_pwm3.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_spi_cs_pwm3 = u_st_general_pin_output_spi_cs_pwm3.real;
      offset += sizeof(this->st_general_pin_output_spi_cs_pwm3);
        memcpy( &(this->general_pin_output_spi_cs_pwm3[i]), &(this->st_general_pin_output_spi_cs_pwm3), sizeof(bool));
      }
      uint32_t general_pin_output_spi_miso_pwm2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_spi_miso_pwm2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_spi_miso_pwm2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_spi_miso_pwm2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_spi_miso_pwm2_length);
      if(general_pin_output_spi_miso_pwm2_lengthT > general_pin_output_spi_miso_pwm2_length)
        this->general_pin_output_spi_miso_pwm2 = (bool*)realloc(this->general_pin_output_spi_miso_pwm2, general_pin_output_spi_miso_pwm2_lengthT * sizeof(bool));
      general_pin_output_spi_miso_pwm2_length = general_pin_output_spi_miso_pwm2_lengthT;
      for( uint32_t i = 0; i < general_pin_output_spi_miso_pwm2_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_spi_miso_pwm2;
      u_st_general_pin_output_spi_miso_pwm2.base = 0;
      u_st_general_pin_output_spi_miso_pwm2.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_spi_miso_pwm2 = u_st_general_pin_output_spi_miso_pwm2.real;
      offset += sizeof(this->st_general_pin_output_spi_miso_pwm2);
        memcpy( &(this->general_pin_output_spi_miso_pwm2[i]), &(this->st_general_pin_output_spi_miso_pwm2), sizeof(bool));
      }
      uint32_t general_pin_output_spi_mosi_pwm1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_spi_mosi_pwm1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_spi_mosi_pwm1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_spi_mosi_pwm1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_spi_mosi_pwm1_length);
      if(general_pin_output_spi_mosi_pwm1_lengthT > general_pin_output_spi_mosi_pwm1_length)
        this->general_pin_output_spi_mosi_pwm1 = (bool*)realloc(this->general_pin_output_spi_mosi_pwm1, general_pin_output_spi_mosi_pwm1_lengthT * sizeof(bool));
      general_pin_output_spi_mosi_pwm1_length = general_pin_output_spi_mosi_pwm1_lengthT;
      for( uint32_t i = 0; i < general_pin_output_spi_mosi_pwm1_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_spi_mosi_pwm1;
      u_st_general_pin_output_spi_mosi_pwm1.base = 0;
      u_st_general_pin_output_spi_mosi_pwm1.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_spi_mosi_pwm1 = u_st_general_pin_output_spi_mosi_pwm1.real;
      offset += sizeof(this->st_general_pin_output_spi_mosi_pwm1);
        memcpy( &(this->general_pin_output_spi_mosi_pwm1[i]), &(this->st_general_pin_output_spi_mosi_pwm1), sizeof(bool));
      }
      uint32_t general_pin_output_spi_clk_pwm0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_output_spi_clk_pwm0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_output_spi_clk_pwm0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_output_spi_clk_pwm0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_output_spi_clk_pwm0_length);
      if(general_pin_output_spi_clk_pwm0_lengthT > general_pin_output_spi_clk_pwm0_length)
        this->general_pin_output_spi_clk_pwm0 = (bool*)realloc(this->general_pin_output_spi_clk_pwm0, general_pin_output_spi_clk_pwm0_lengthT * sizeof(bool));
      general_pin_output_spi_clk_pwm0_length = general_pin_output_spi_clk_pwm0_lengthT;
      for( uint32_t i = 0; i < general_pin_output_spi_clk_pwm0_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_output_spi_clk_pwm0;
      u_st_general_pin_output_spi_clk_pwm0.base = 0;
      u_st_general_pin_output_spi_clk_pwm0.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_output_spi_clk_pwm0 = u_st_general_pin_output_spi_clk_pwm0.real;
      offset += sizeof(this->st_general_pin_output_spi_clk_pwm0);
        memcpy( &(this->general_pin_output_spi_clk_pwm0[i]), &(this->st_general_pin_output_spi_clk_pwm0), sizeof(bool));
      }
      uint32_t general_pin_input_quad_idx_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_input_quad_idx_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_input_quad_idx_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_input_quad_idx_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_input_quad_idx_length);
      if(general_pin_input_quad_idx_lengthT > general_pin_input_quad_idx_length)
        this->general_pin_input_quad_idx = (bool*)realloc(this->general_pin_input_quad_idx, general_pin_input_quad_idx_lengthT * sizeof(bool));
      general_pin_input_quad_idx_length = general_pin_input_quad_idx_lengthT;
      for( uint32_t i = 0; i < general_pin_input_quad_idx_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_input_quad_idx;
      u_st_general_pin_input_quad_idx.base = 0;
      u_st_general_pin_input_quad_idx.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_input_quad_idx = u_st_general_pin_input_quad_idx.real;
      offset += sizeof(this->st_general_pin_input_quad_idx);
        memcpy( &(this->general_pin_input_quad_idx[i]), &(this->st_general_pin_input_quad_idx), sizeof(bool));
      }
      uint32_t general_pin_input_quad_b_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_input_quad_b_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_input_quad_b_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_input_quad_b_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_input_quad_b_length);
      if(general_pin_input_quad_b_lengthT > general_pin_input_quad_b_length)
        this->general_pin_input_quad_b = (bool*)realloc(this->general_pin_input_quad_b, general_pin_input_quad_b_lengthT * sizeof(bool));
      general_pin_input_quad_b_length = general_pin_input_quad_b_lengthT;
      for( uint32_t i = 0; i < general_pin_input_quad_b_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_input_quad_b;
      u_st_general_pin_input_quad_b.base = 0;
      u_st_general_pin_input_quad_b.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_input_quad_b = u_st_general_pin_input_quad_b.real;
      offset += sizeof(this->st_general_pin_input_quad_b);
        memcpy( &(this->general_pin_input_quad_b[i]), &(this->st_general_pin_input_quad_b), sizeof(bool));
      }
      uint32_t general_pin_input_quad_a_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_input_quad_a_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_input_quad_a_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_input_quad_a_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_input_quad_a_length);
      if(general_pin_input_quad_a_lengthT > general_pin_input_quad_a_length)
        this->general_pin_input_quad_a = (bool*)realloc(this->general_pin_input_quad_a, general_pin_input_quad_a_lengthT * sizeof(bool));
      general_pin_input_quad_a_length = general_pin_input_quad_a_lengthT;
      for( uint32_t i = 0; i < general_pin_input_quad_a_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_input_quad_a;
      u_st_general_pin_input_quad_a.base = 0;
      u_st_general_pin_input_quad_a.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_input_quad_a = u_st_general_pin_input_quad_a.real;
      offset += sizeof(this->st_general_pin_input_quad_a);
        memcpy( &(this->general_pin_input_quad_a[i]), &(this->st_general_pin_input_quad_a), sizeof(bool));
      }
      uint32_t general_pin_input_limr_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_input_limr_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_input_limr_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_input_limr_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_input_limr_length);
      if(general_pin_input_limr_lengthT > general_pin_input_limr_length)
        this->general_pin_input_limr = (bool*)realloc(this->general_pin_input_limr, general_pin_input_limr_lengthT * sizeof(bool));
      general_pin_input_limr_length = general_pin_input_limr_lengthT;
      for( uint32_t i = 0; i < general_pin_input_limr_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_input_limr;
      u_st_general_pin_input_limr.base = 0;
      u_st_general_pin_input_limr.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_input_limr = u_st_general_pin_input_limr.real;
      offset += sizeof(this->st_general_pin_input_limr);
        memcpy( &(this->general_pin_input_limr[i]), &(this->st_general_pin_input_limr), sizeof(bool));
      }
      uint32_t general_pin_input_limf_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_input_limf_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_input_limf_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_input_limf_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_input_limf_length);
      if(general_pin_input_limf_lengthT > general_pin_input_limf_length)
        this->general_pin_input_limf = (bool*)realloc(this->general_pin_input_limf, general_pin_input_limf_lengthT * sizeof(bool));
      general_pin_input_limf_length = general_pin_input_limf_lengthT;
      for( uint32_t i = 0; i < general_pin_input_limf_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_input_limf;
      u_st_general_pin_input_limf.base = 0;
      u_st_general_pin_input_limf.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_input_limf = u_st_general_pin_input_limf.real;
      offset += sizeof(this->st_general_pin_input_limf);
        memcpy( &(this->general_pin_input_limf[i]), &(this->st_general_pin_input_limf), sizeof(bool));
      }
      uint32_t general_pin_input_sda_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_input_sda_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_input_sda_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_input_sda_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_input_sda_length);
      if(general_pin_input_sda_lengthT > general_pin_input_sda_length)
        this->general_pin_input_sda = (bool*)realloc(this->general_pin_input_sda, general_pin_input_sda_lengthT * sizeof(bool));
      general_pin_input_sda_length = general_pin_input_sda_lengthT;
      for( uint32_t i = 0; i < general_pin_input_sda_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_input_sda;
      u_st_general_pin_input_sda.base = 0;
      u_st_general_pin_input_sda.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_input_sda = u_st_general_pin_input_sda.real;
      offset += sizeof(this->st_general_pin_input_sda);
        memcpy( &(this->general_pin_input_sda[i]), &(this->st_general_pin_input_sda), sizeof(bool));
      }
      uint32_t general_pin_input_scl_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_input_scl_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_input_scl_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_input_scl_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_input_scl_length);
      if(general_pin_input_scl_lengthT > general_pin_input_scl_length)
        this->general_pin_input_scl = (bool*)realloc(this->general_pin_input_scl, general_pin_input_scl_lengthT * sizeof(bool));
      general_pin_input_scl_length = general_pin_input_scl_lengthT;
      for( uint32_t i = 0; i < general_pin_input_scl_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_input_scl;
      u_st_general_pin_input_scl.base = 0;
      u_st_general_pin_input_scl.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_input_scl = u_st_general_pin_input_scl.real;
      offset += sizeof(this->st_general_pin_input_scl);
        memcpy( &(this->general_pin_input_scl[i]), &(this->st_general_pin_input_scl), sizeof(bool));
      }
      uint32_t general_pin_input_spi_cs_pwm3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_input_spi_cs_pwm3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_input_spi_cs_pwm3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_input_spi_cs_pwm3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_input_spi_cs_pwm3_length);
      if(general_pin_input_spi_cs_pwm3_lengthT > general_pin_input_spi_cs_pwm3_length)
        this->general_pin_input_spi_cs_pwm3 = (bool*)realloc(this->general_pin_input_spi_cs_pwm3, general_pin_input_spi_cs_pwm3_lengthT * sizeof(bool));
      general_pin_input_spi_cs_pwm3_length = general_pin_input_spi_cs_pwm3_lengthT;
      for( uint32_t i = 0; i < general_pin_input_spi_cs_pwm3_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_input_spi_cs_pwm3;
      u_st_general_pin_input_spi_cs_pwm3.base = 0;
      u_st_general_pin_input_spi_cs_pwm3.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_input_spi_cs_pwm3 = u_st_general_pin_input_spi_cs_pwm3.real;
      offset += sizeof(this->st_general_pin_input_spi_cs_pwm3);
        memcpy( &(this->general_pin_input_spi_cs_pwm3[i]), &(this->st_general_pin_input_spi_cs_pwm3), sizeof(bool));
      }
      uint32_t general_pin_input_spi_miso_pwm2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_input_spi_miso_pwm2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_input_spi_miso_pwm2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_input_spi_miso_pwm2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_input_spi_miso_pwm2_length);
      if(general_pin_input_spi_miso_pwm2_lengthT > general_pin_input_spi_miso_pwm2_length)
        this->general_pin_input_spi_miso_pwm2 = (bool*)realloc(this->general_pin_input_spi_miso_pwm2, general_pin_input_spi_miso_pwm2_lengthT * sizeof(bool));
      general_pin_input_spi_miso_pwm2_length = general_pin_input_spi_miso_pwm2_lengthT;
      for( uint32_t i = 0; i < general_pin_input_spi_miso_pwm2_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_input_spi_miso_pwm2;
      u_st_general_pin_input_spi_miso_pwm2.base = 0;
      u_st_general_pin_input_spi_miso_pwm2.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_input_spi_miso_pwm2 = u_st_general_pin_input_spi_miso_pwm2.real;
      offset += sizeof(this->st_general_pin_input_spi_miso_pwm2);
        memcpy( &(this->general_pin_input_spi_miso_pwm2[i]), &(this->st_general_pin_input_spi_miso_pwm2), sizeof(bool));
      }
      uint32_t general_pin_input_spi_mosi_pwm1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_input_spi_mosi_pwm1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_input_spi_mosi_pwm1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_input_spi_mosi_pwm1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_input_spi_mosi_pwm1_length);
      if(general_pin_input_spi_mosi_pwm1_lengthT > general_pin_input_spi_mosi_pwm1_length)
        this->general_pin_input_spi_mosi_pwm1 = (bool*)realloc(this->general_pin_input_spi_mosi_pwm1, general_pin_input_spi_mosi_pwm1_lengthT * sizeof(bool));
      general_pin_input_spi_mosi_pwm1_length = general_pin_input_spi_mosi_pwm1_lengthT;
      for( uint32_t i = 0; i < general_pin_input_spi_mosi_pwm1_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_input_spi_mosi_pwm1;
      u_st_general_pin_input_spi_mosi_pwm1.base = 0;
      u_st_general_pin_input_spi_mosi_pwm1.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_input_spi_mosi_pwm1 = u_st_general_pin_input_spi_mosi_pwm1.real;
      offset += sizeof(this->st_general_pin_input_spi_mosi_pwm1);
        memcpy( &(this->general_pin_input_spi_mosi_pwm1[i]), &(this->st_general_pin_input_spi_mosi_pwm1), sizeof(bool));
      }
      uint32_t general_pin_input_spi_clk_pwm0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      general_pin_input_spi_clk_pwm0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      general_pin_input_spi_clk_pwm0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      general_pin_input_spi_clk_pwm0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->general_pin_input_spi_clk_pwm0_length);
      if(general_pin_input_spi_clk_pwm0_lengthT > general_pin_input_spi_clk_pwm0_length)
        this->general_pin_input_spi_clk_pwm0 = (bool*)realloc(this->general_pin_input_spi_clk_pwm0, general_pin_input_spi_clk_pwm0_lengthT * sizeof(bool));
      general_pin_input_spi_clk_pwm0_length = general_pin_input_spi_clk_pwm0_lengthT;
      for( uint32_t i = 0; i < general_pin_input_spi_clk_pwm0_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_general_pin_input_spi_clk_pwm0;
      u_st_general_pin_input_spi_clk_pwm0.base = 0;
      u_st_general_pin_input_spi_clk_pwm0.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_general_pin_input_spi_clk_pwm0 = u_st_general_pin_input_spi_clk_pwm0.real;
      offset += sizeof(this->st_general_pin_input_spi_clk_pwm0);
        memcpy( &(this->general_pin_input_spi_clk_pwm0[i]), &(this->st_general_pin_input_spi_clk_pwm0), sizeof(bool));
      }
      uint32_t quadrature_position_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      quadrature_position_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      quadrature_position_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      quadrature_position_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->quadrature_position_length);
      if(quadrature_position_lengthT > quadrature_position_length)
        this->quadrature_position = (double*)realloc(this->quadrature_position, quadrature_position_lengthT * sizeof(double));
      quadrature_position_length = quadrature_position_lengthT;
      for( uint32_t i = 0; i < quadrature_position_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_quadrature_position;
      u_st_quadrature_position.base = 0;
      u_st_quadrature_position.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_quadrature_position.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_quadrature_position.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_quadrature_position.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_quadrature_position.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_quadrature_position.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_quadrature_position.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_quadrature_position.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_quadrature_position = u_st_quadrature_position.real;
      offset += sizeof(this->st_quadrature_position);
        memcpy( &(this->quadrature_position[i]), &(this->st_quadrature_position), sizeof(double));
      }
      uint32_t quadrature_velocity_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      quadrature_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      quadrature_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      quadrature_velocity_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->quadrature_velocity_length);
      if(quadrature_velocity_lengthT > quadrature_velocity_length)
        this->quadrature_velocity = (double*)realloc(this->quadrature_velocity, quadrature_velocity_lengthT * sizeof(double));
      quadrature_velocity_length = quadrature_velocity_lengthT;
      for( uint32_t i = 0; i < quadrature_velocity_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_quadrature_velocity;
      u_st_quadrature_velocity.base = 0;
      u_st_quadrature_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_quadrature_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_quadrature_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_quadrature_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_quadrature_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_quadrature_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_quadrature_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_quadrature_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_quadrature_velocity = u_st_quadrature_velocity.real;
      offset += sizeof(this->st_quadrature_velocity);
        memcpy( &(this->quadrature_velocity[i]), &(this->st_quadrature_velocity), sizeof(double));
      }
      uint32_t velocity_measurement_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      velocity_measurement_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      velocity_measurement_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      velocity_measurement_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->velocity_measurement_period_length);
      if(velocity_measurement_period_lengthT > velocity_measurement_period_length)
        this->velocity_measurement_period = (int8_t*)realloc(this->velocity_measurement_period, velocity_measurement_period_lengthT * sizeof(int8_t));
      velocity_measurement_period_length = velocity_measurement_period_lengthT;
      for( uint32_t i = 0; i < velocity_measurement_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_velocity_measurement_period;
      u_st_velocity_measurement_period.base = 0;
      u_st_velocity_measurement_period.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_velocity_measurement_period = u_st_velocity_measurement_period.real;
      offset += sizeof(this->st_velocity_measurement_period);
        memcpy( &(this->velocity_measurement_period[i]), &(this->st_velocity_measurement_period), sizeof(int8_t));
      }
      uint32_t velocity_measurement_window_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      velocity_measurement_window_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      velocity_measurement_window_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      velocity_measurement_window_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->velocity_measurement_window_length);
      if(velocity_measurement_window_lengthT > velocity_measurement_window_length)
        this->velocity_measurement_window = (int64_t*)realloc(this->velocity_measurement_window, velocity_measurement_window_lengthT * sizeof(int64_t));
      velocity_measurement_window_length = velocity_measurement_window_lengthT;
      for( uint32_t i = 0; i < velocity_measurement_window_length; i++){
      union {
        int64_t real;
        uint64_t base;
      } u_st_velocity_measurement_window;
      u_st_velocity_measurement_window.base = 0;
      u_st_velocity_measurement_window.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_velocity_measurement_window.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_velocity_measurement_window.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_velocity_measurement_window.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_velocity_measurement_window.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_velocity_measurement_window.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_velocity_measurement_window.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_velocity_measurement_window.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_velocity_measurement_window = u_st_velocity_measurement_window.real;
      offset += sizeof(this->st_velocity_measurement_window);
        memcpy( &(this->velocity_measurement_window[i]), &(this->st_velocity_measurement_window), sizeof(int64_t));
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
      uint32_t clear_position_on_quad_idx_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      clear_position_on_quad_idx_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      clear_position_on_quad_idx_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      clear_position_on_quad_idx_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->clear_position_on_quad_idx_length);
      if(clear_position_on_quad_idx_lengthT > clear_position_on_quad_idx_length)
        this->clear_position_on_quad_idx = (bool*)realloc(this->clear_position_on_quad_idx, clear_position_on_quad_idx_lengthT * sizeof(bool));
      clear_position_on_quad_idx_length = clear_position_on_quad_idx_lengthT;
      for( uint32_t i = 0; i < clear_position_on_quad_idx_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_clear_position_on_quad_idx;
      u_st_clear_position_on_quad_idx.base = 0;
      u_st_clear_position_on_quad_idx.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_clear_position_on_quad_idx = u_st_clear_position_on_quad_idx.real;
      offset += sizeof(this->st_clear_position_on_quad_idx);
        memcpy( &(this->clear_position_on_quad_idx[i]), &(this->st_clear_position_on_quad_idx), sizeof(bool));
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
      uint32_t pwm_output_enable_0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_output_enable_0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_output_enable_0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_output_enable_0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_output_enable_0_length);
      if(pwm_output_enable_0_lengthT > pwm_output_enable_0_length)
        this->pwm_output_enable_0 = (bool*)realloc(this->pwm_output_enable_0, pwm_output_enable_0_lengthT * sizeof(bool));
      pwm_output_enable_0_length = pwm_output_enable_0_lengthT;
      for( uint32_t i = 0; i < pwm_output_enable_0_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_pwm_output_enable_0;
      u_st_pwm_output_enable_0.base = 0;
      u_st_pwm_output_enable_0.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_pwm_output_enable_0 = u_st_pwm_output_enable_0.real;
      offset += sizeof(this->st_pwm_output_enable_0);
        memcpy( &(this->pwm_output_enable_0[i]), &(this->st_pwm_output_enable_0), sizeof(bool));
      }
      uint32_t pwm_output_enable_1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_output_enable_1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_output_enable_1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_output_enable_1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_output_enable_1_length);
      if(pwm_output_enable_1_lengthT > pwm_output_enable_1_length)
        this->pwm_output_enable_1 = (bool*)realloc(this->pwm_output_enable_1, pwm_output_enable_1_lengthT * sizeof(bool));
      pwm_output_enable_1_length = pwm_output_enable_1_lengthT;
      for( uint32_t i = 0; i < pwm_output_enable_1_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_pwm_output_enable_1;
      u_st_pwm_output_enable_1.base = 0;
      u_st_pwm_output_enable_1.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_pwm_output_enable_1 = u_st_pwm_output_enable_1.real;
      offset += sizeof(this->st_pwm_output_enable_1);
        memcpy( &(this->pwm_output_enable_1[i]), &(this->st_pwm_output_enable_1), sizeof(bool));
      }
      uint32_t pwm_output_enable_2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_output_enable_2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_output_enable_2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_output_enable_2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_output_enable_2_length);
      if(pwm_output_enable_2_lengthT > pwm_output_enable_2_length)
        this->pwm_output_enable_2 = (bool*)realloc(this->pwm_output_enable_2, pwm_output_enable_2_lengthT * sizeof(bool));
      pwm_output_enable_2_length = pwm_output_enable_2_lengthT;
      for( uint32_t i = 0; i < pwm_output_enable_2_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_pwm_output_enable_2;
      u_st_pwm_output_enable_2.base = 0;
      u_st_pwm_output_enable_2.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_pwm_output_enable_2 = u_st_pwm_output_enable_2.real;
      offset += sizeof(this->st_pwm_output_enable_2);
        memcpy( &(this->pwm_output_enable_2[i]), &(this->st_pwm_output_enable_2), sizeof(bool));
      }
      uint32_t pwm_output_enable_3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_output_enable_3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_output_enable_3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_output_enable_3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_output_enable_3_length);
      if(pwm_output_enable_3_lengthT > pwm_output_enable_3_length)
        this->pwm_output_enable_3 = (bool*)realloc(this->pwm_output_enable_3, pwm_output_enable_3_lengthT * sizeof(bool));
      pwm_output_enable_3_length = pwm_output_enable_3_lengthT;
      for( uint32_t i = 0; i < pwm_output_enable_3_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_pwm_output_enable_3;
      u_st_pwm_output_enable_3.base = 0;
      u_st_pwm_output_enable_3.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_pwm_output_enable_3 = u_st_pwm_output_enable_3.real;
      offset += sizeof(this->st_pwm_output_enable_3);
        memcpy( &(this->pwm_output_enable_3[i]), &(this->st_pwm_output_enable_3), sizeof(bool));
      }
      uint32_t pwm_output_0_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_output_0_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_output_0_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_output_0_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_output_0_length);
      if(pwm_output_0_lengthT > pwm_output_0_length)
        this->pwm_output_0 = (double*)realloc(this->pwm_output_0, pwm_output_0_lengthT * sizeof(double));
      pwm_output_0_length = pwm_output_0_lengthT;
      for( uint32_t i = 0; i < pwm_output_0_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pwm_output_0;
      u_st_pwm_output_0.base = 0;
      u_st_pwm_output_0.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pwm_output_0.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pwm_output_0.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pwm_output_0.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pwm_output_0.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pwm_output_0.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pwm_output_0.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pwm_output_0.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pwm_output_0 = u_st_pwm_output_0.real;
      offset += sizeof(this->st_pwm_output_0);
        memcpy( &(this->pwm_output_0[i]), &(this->st_pwm_output_0), sizeof(double));
      }
      uint32_t pwm_output_1_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_output_1_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_output_1_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_output_1_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_output_1_length);
      if(pwm_output_1_lengthT > pwm_output_1_length)
        this->pwm_output_1 = (double*)realloc(this->pwm_output_1, pwm_output_1_lengthT * sizeof(double));
      pwm_output_1_length = pwm_output_1_lengthT;
      for( uint32_t i = 0; i < pwm_output_1_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pwm_output_1;
      u_st_pwm_output_1.base = 0;
      u_st_pwm_output_1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pwm_output_1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pwm_output_1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pwm_output_1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pwm_output_1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pwm_output_1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pwm_output_1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pwm_output_1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pwm_output_1 = u_st_pwm_output_1.real;
      offset += sizeof(this->st_pwm_output_1);
        memcpy( &(this->pwm_output_1[i]), &(this->st_pwm_output_1), sizeof(double));
      }
      uint32_t pwm_output_2_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_output_2_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_output_2_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_output_2_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_output_2_length);
      if(pwm_output_2_lengthT > pwm_output_2_length)
        this->pwm_output_2 = (double*)realloc(this->pwm_output_2, pwm_output_2_lengthT * sizeof(double));
      pwm_output_2_length = pwm_output_2_lengthT;
      for( uint32_t i = 0; i < pwm_output_2_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pwm_output_2;
      u_st_pwm_output_2.base = 0;
      u_st_pwm_output_2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pwm_output_2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pwm_output_2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pwm_output_2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pwm_output_2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pwm_output_2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pwm_output_2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pwm_output_2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pwm_output_2 = u_st_pwm_output_2.real;
      offset += sizeof(this->st_pwm_output_2);
        memcpy( &(this->pwm_output_2[i]), &(this->st_pwm_output_2), sizeof(double));
      }
      uint32_t pwm_output_3_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_output_3_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_output_3_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_output_3_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_output_3_length);
      if(pwm_output_3_lengthT > pwm_output_3_length)
        this->pwm_output_3 = (double*)realloc(this->pwm_output_3, pwm_output_3_lengthT * sizeof(double));
      pwm_output_3_length = pwm_output_3_lengthT;
      for( uint32_t i = 0; i < pwm_output_3_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pwm_output_3;
      u_st_pwm_output_3.base = 0;
      u_st_pwm_output_3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pwm_output_3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pwm_output_3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pwm_output_3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pwm_output_3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pwm_output_3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pwm_output_3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pwm_output_3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pwm_output_3 = u_st_pwm_output_3.real;
      offset += sizeof(this->st_pwm_output_3);
        memcpy( &(this->pwm_output_3[i]), &(this->st_pwm_output_3), sizeof(double));
      }
      uint32_t pwm_input_0_duty_cycle_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_input_0_duty_cycle_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_input_0_duty_cycle_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_input_0_duty_cycle_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_input_0_duty_cycle_length);
      if(pwm_input_0_duty_cycle_lengthT > pwm_input_0_duty_cycle_length)
        this->pwm_input_0_duty_cycle = (double*)realloc(this->pwm_input_0_duty_cycle, pwm_input_0_duty_cycle_lengthT * sizeof(double));
      pwm_input_0_duty_cycle_length = pwm_input_0_duty_cycle_lengthT;
      for( uint32_t i = 0; i < pwm_input_0_duty_cycle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pwm_input_0_duty_cycle;
      u_st_pwm_input_0_duty_cycle.base = 0;
      u_st_pwm_input_0_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pwm_input_0_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pwm_input_0_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pwm_input_0_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pwm_input_0_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pwm_input_0_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pwm_input_0_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pwm_input_0_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pwm_input_0_duty_cycle = u_st_pwm_input_0_duty_cycle.real;
      offset += sizeof(this->st_pwm_input_0_duty_cycle);
        memcpy( &(this->pwm_input_0_duty_cycle[i]), &(this->st_pwm_input_0_duty_cycle), sizeof(double));
      }
      uint32_t pwm_input_0_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_input_0_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_input_0_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_input_0_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_input_0_period_length);
      if(pwm_input_0_period_lengthT > pwm_input_0_period_length)
        this->pwm_input_0_period = (double*)realloc(this->pwm_input_0_period, pwm_input_0_period_lengthT * sizeof(double));
      pwm_input_0_period_length = pwm_input_0_period_lengthT;
      for( uint32_t i = 0; i < pwm_input_0_period_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pwm_input_0_period;
      u_st_pwm_input_0_period.base = 0;
      u_st_pwm_input_0_period.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pwm_input_0_period.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pwm_input_0_period.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pwm_input_0_period.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pwm_input_0_period.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pwm_input_0_period.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pwm_input_0_period.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pwm_input_0_period.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pwm_input_0_period = u_st_pwm_input_0_period.real;
      offset += sizeof(this->st_pwm_input_0_period);
        memcpy( &(this->pwm_input_0_period[i]), &(this->st_pwm_input_0_period), sizeof(double));
      }
      uint32_t pwm_input_1_duty_cycle_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_input_1_duty_cycle_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_input_1_duty_cycle_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_input_1_duty_cycle_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_input_1_duty_cycle_length);
      if(pwm_input_1_duty_cycle_lengthT > pwm_input_1_duty_cycle_length)
        this->pwm_input_1_duty_cycle = (double*)realloc(this->pwm_input_1_duty_cycle, pwm_input_1_duty_cycle_lengthT * sizeof(double));
      pwm_input_1_duty_cycle_length = pwm_input_1_duty_cycle_lengthT;
      for( uint32_t i = 0; i < pwm_input_1_duty_cycle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pwm_input_1_duty_cycle;
      u_st_pwm_input_1_duty_cycle.base = 0;
      u_st_pwm_input_1_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pwm_input_1_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pwm_input_1_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pwm_input_1_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pwm_input_1_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pwm_input_1_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pwm_input_1_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pwm_input_1_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pwm_input_1_duty_cycle = u_st_pwm_input_1_duty_cycle.real;
      offset += sizeof(this->st_pwm_input_1_duty_cycle);
        memcpy( &(this->pwm_input_1_duty_cycle[i]), &(this->st_pwm_input_1_duty_cycle), sizeof(double));
      }
      uint32_t pwm_input_1_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_input_1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_input_1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_input_1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_input_1_period_length);
      if(pwm_input_1_period_lengthT > pwm_input_1_period_length)
        this->pwm_input_1_period = (double*)realloc(this->pwm_input_1_period, pwm_input_1_period_lengthT * sizeof(double));
      pwm_input_1_period_length = pwm_input_1_period_lengthT;
      for( uint32_t i = 0; i < pwm_input_1_period_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pwm_input_1_period;
      u_st_pwm_input_1_period.base = 0;
      u_st_pwm_input_1_period.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pwm_input_1_period.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pwm_input_1_period.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pwm_input_1_period.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pwm_input_1_period.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pwm_input_1_period.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pwm_input_1_period.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pwm_input_1_period.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pwm_input_1_period = u_st_pwm_input_1_period.real;
      offset += sizeof(this->st_pwm_input_1_period);
        memcpy( &(this->pwm_input_1_period[i]), &(this->st_pwm_input_1_period), sizeof(double));
      }
      uint32_t pwm_input_2_duty_cycle_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_input_2_duty_cycle_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_input_2_duty_cycle_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_input_2_duty_cycle_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_input_2_duty_cycle_length);
      if(pwm_input_2_duty_cycle_lengthT > pwm_input_2_duty_cycle_length)
        this->pwm_input_2_duty_cycle = (double*)realloc(this->pwm_input_2_duty_cycle, pwm_input_2_duty_cycle_lengthT * sizeof(double));
      pwm_input_2_duty_cycle_length = pwm_input_2_duty_cycle_lengthT;
      for( uint32_t i = 0; i < pwm_input_2_duty_cycle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pwm_input_2_duty_cycle;
      u_st_pwm_input_2_duty_cycle.base = 0;
      u_st_pwm_input_2_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pwm_input_2_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pwm_input_2_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pwm_input_2_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pwm_input_2_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pwm_input_2_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pwm_input_2_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pwm_input_2_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pwm_input_2_duty_cycle = u_st_pwm_input_2_duty_cycle.real;
      offset += sizeof(this->st_pwm_input_2_duty_cycle);
        memcpy( &(this->pwm_input_2_duty_cycle[i]), &(this->st_pwm_input_2_duty_cycle), sizeof(double));
      }
      uint32_t pwm_input_2_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_input_2_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_input_2_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_input_2_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_input_2_period_length);
      if(pwm_input_2_period_lengthT > pwm_input_2_period_length)
        this->pwm_input_2_period = (double*)realloc(this->pwm_input_2_period, pwm_input_2_period_lengthT * sizeof(double));
      pwm_input_2_period_length = pwm_input_2_period_lengthT;
      for( uint32_t i = 0; i < pwm_input_2_period_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pwm_input_2_period;
      u_st_pwm_input_2_period.base = 0;
      u_st_pwm_input_2_period.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pwm_input_2_period.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pwm_input_2_period.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pwm_input_2_period.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pwm_input_2_period.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pwm_input_2_period.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pwm_input_2_period.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pwm_input_2_period.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pwm_input_2_period = u_st_pwm_input_2_period.real;
      offset += sizeof(this->st_pwm_input_2_period);
        memcpy( &(this->pwm_input_2_period[i]), &(this->st_pwm_input_2_period), sizeof(double));
      }
      uint32_t pwm_input_3_duty_cycle_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_input_3_duty_cycle_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_input_3_duty_cycle_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_input_3_duty_cycle_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_input_3_duty_cycle_length);
      if(pwm_input_3_duty_cycle_lengthT > pwm_input_3_duty_cycle_length)
        this->pwm_input_3_duty_cycle = (double*)realloc(this->pwm_input_3_duty_cycle, pwm_input_3_duty_cycle_lengthT * sizeof(double));
      pwm_input_3_duty_cycle_length = pwm_input_3_duty_cycle_lengthT;
      for( uint32_t i = 0; i < pwm_input_3_duty_cycle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pwm_input_3_duty_cycle;
      u_st_pwm_input_3_duty_cycle.base = 0;
      u_st_pwm_input_3_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pwm_input_3_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pwm_input_3_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pwm_input_3_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pwm_input_3_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pwm_input_3_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pwm_input_3_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pwm_input_3_duty_cycle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pwm_input_3_duty_cycle = u_st_pwm_input_3_duty_cycle.real;
      offset += sizeof(this->st_pwm_input_3_duty_cycle);
        memcpy( &(this->pwm_input_3_duty_cycle[i]), &(this->st_pwm_input_3_duty_cycle), sizeof(double));
      }
      uint32_t pwm_input_3_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pwm_input_3_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pwm_input_3_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pwm_input_3_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pwm_input_3_period_length);
      if(pwm_input_3_period_lengthT > pwm_input_3_period_length)
        this->pwm_input_3_period = (double*)realloc(this->pwm_input_3_period, pwm_input_3_period_lengthT * sizeof(double));
      pwm_input_3_period_length = pwm_input_3_period_lengthT;
      for( uint32_t i = 0; i < pwm_input_3_period_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pwm_input_3_period;
      u_st_pwm_input_3_period.base = 0;
      u_st_pwm_input_3_period.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pwm_input_3_period.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pwm_input_3_period.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pwm_input_3_period.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pwm_input_3_period.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pwm_input_3_period.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pwm_input_3_period.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pwm_input_3_period.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pwm_input_3_period = u_st_pwm_input_3_period.real;
      offset += sizeof(this->st_pwm_input_3_period);
        memcpy( &(this->pwm_input_3_period[i]), &(this->st_pwm_input_3_period), sizeof(double));
      }
      uint32_t status_1_general_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_1_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_1_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_1_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_1_general_period_length);
      if(status_1_general_period_lengthT > status_1_general_period_length)
        this->status_1_general_period = (int8_t*)realloc(this->status_1_general_period, status_1_general_period_lengthT * sizeof(int8_t));
      status_1_general_period_length = status_1_general_period_lengthT;
      for( uint32_t i = 0; i < status_1_general_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_status_1_general_period;
      u_st_status_1_general_period.base = 0;
      u_st_status_1_general_period.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_status_1_general_period = u_st_status_1_general_period.real;
      offset += sizeof(this->st_status_1_general_period);
        memcpy( &(this->status_1_general_period[i]), &(this->st_status_1_general_period), sizeof(int8_t));
      }
      uint32_t status_2_general_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_2_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_2_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_2_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_2_general_period_length);
      if(status_2_general_period_lengthT > status_2_general_period_length)
        this->status_2_general_period = (int8_t*)realloc(this->status_2_general_period, status_2_general_period_lengthT * sizeof(int8_t));
      status_2_general_period_length = status_2_general_period_lengthT;
      for( uint32_t i = 0; i < status_2_general_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_status_2_general_period;
      u_st_status_2_general_period.base = 0;
      u_st_status_2_general_period.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_status_2_general_period = u_st_status_2_general_period.real;
      offset += sizeof(this->st_status_2_general_period);
        memcpy( &(this->status_2_general_period[i]), &(this->st_status_2_general_period), sizeof(int8_t));
      }
      uint32_t status_3_pwminputs0_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_3_pwminputs0_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_3_pwminputs0_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_3_pwminputs0_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_3_pwminputs0_period_length);
      if(status_3_pwminputs0_period_lengthT > status_3_pwminputs0_period_length)
        this->status_3_pwminputs0_period = (int8_t*)realloc(this->status_3_pwminputs0_period, status_3_pwminputs0_period_lengthT * sizeof(int8_t));
      status_3_pwminputs0_period_length = status_3_pwminputs0_period_lengthT;
      for( uint32_t i = 0; i < status_3_pwminputs0_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_status_3_pwminputs0_period;
      u_st_status_3_pwminputs0_period.base = 0;
      u_st_status_3_pwminputs0_period.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_status_3_pwminputs0_period = u_st_status_3_pwminputs0_period.real;
      offset += sizeof(this->st_status_3_pwminputs0_period);
        memcpy( &(this->status_3_pwminputs0_period[i]), &(this->st_status_3_pwminputs0_period), sizeof(int8_t));
      }
      uint32_t status_4_pwminputs1_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_4_pwminputs1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_4_pwminputs1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_4_pwminputs1_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_4_pwminputs1_period_length);
      if(status_4_pwminputs1_period_lengthT > status_4_pwminputs1_period_length)
        this->status_4_pwminputs1_period = (int8_t*)realloc(this->status_4_pwminputs1_period, status_4_pwminputs1_period_lengthT * sizeof(int8_t));
      status_4_pwminputs1_period_length = status_4_pwminputs1_period_lengthT;
      for( uint32_t i = 0; i < status_4_pwminputs1_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_status_4_pwminputs1_period;
      u_st_status_4_pwminputs1_period.base = 0;
      u_st_status_4_pwminputs1_period.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_status_4_pwminputs1_period = u_st_status_4_pwminputs1_period.real;
      offset += sizeof(this->st_status_4_pwminputs1_period);
        memcpy( &(this->status_4_pwminputs1_period[i]), &(this->st_status_4_pwminputs1_period), sizeof(int8_t));
      }
      uint32_t status_5_pwminputs2_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_5_pwminputs2_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_5_pwminputs2_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_5_pwminputs2_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_5_pwminputs2_period_length);
      if(status_5_pwminputs2_period_lengthT > status_5_pwminputs2_period_length)
        this->status_5_pwminputs2_period = (int8_t*)realloc(this->status_5_pwminputs2_period, status_5_pwminputs2_period_lengthT * sizeof(int8_t));
      status_5_pwminputs2_period_length = status_5_pwminputs2_period_lengthT;
      for( uint32_t i = 0; i < status_5_pwminputs2_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_status_5_pwminputs2_period;
      u_st_status_5_pwminputs2_period.base = 0;
      u_st_status_5_pwminputs2_period.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_status_5_pwminputs2_period = u_st_status_5_pwminputs2_period.real;
      offset += sizeof(this->st_status_5_pwminputs2_period);
        memcpy( &(this->status_5_pwminputs2_period[i]), &(this->st_status_5_pwminputs2_period), sizeof(int8_t));
      }
      uint32_t status_6_pwminputs3_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_6_pwminputs3_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_6_pwminputs3_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_6_pwminputs3_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_6_pwminputs3_period_length);
      if(status_6_pwminputs3_period_lengthT > status_6_pwminputs3_period_length)
        this->status_6_pwminputs3_period = (int8_t*)realloc(this->status_6_pwminputs3_period, status_6_pwminputs3_period_lengthT * sizeof(int8_t));
      status_6_pwminputs3_period_length = status_6_pwminputs3_period_lengthT;
      for( uint32_t i = 0; i < status_6_pwminputs3_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_status_6_pwminputs3_period;
      u_st_status_6_pwminputs3_period.base = 0;
      u_st_status_6_pwminputs3_period.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_status_6_pwminputs3_period = u_st_status_6_pwminputs3_period.real;
      offset += sizeof(this->st_status_6_pwminputs3_period);
        memcpy( &(this->status_6_pwminputs3_period[i]), &(this->st_status_6_pwminputs3_period), sizeof(int8_t));
      }
      uint32_t status_8_misc_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      status_8_misc_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      status_8_misc_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      status_8_misc_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->status_8_misc_period_length);
      if(status_8_misc_period_lengthT > status_8_misc_period_length)
        this->status_8_misc_period = (int8_t*)realloc(this->status_8_misc_period, status_8_misc_period_lengthT * sizeof(int8_t));
      status_8_misc_period_length = status_8_misc_period_lengthT;
      for( uint32_t i = 0; i < status_8_misc_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_status_8_misc_period;
      u_st_status_8_misc_period.base = 0;
      u_st_status_8_misc_period.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_status_8_misc_period = u_st_status_8_misc_period.real;
      offset += sizeof(this->st_status_8_misc_period);
        memcpy( &(this->status_8_misc_period[i]), &(this->st_status_8_misc_period), sizeof(int8_t));
      }
      uint32_t control_1_general_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      control_1_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      control_1_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      control_1_general_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->control_1_general_period_length);
      if(control_1_general_period_lengthT > control_1_general_period_length)
        this->control_1_general_period = (int8_t*)realloc(this->control_1_general_period, control_1_general_period_lengthT * sizeof(int8_t));
      control_1_general_period_length = control_1_general_period_lengthT;
      for( uint32_t i = 0; i < control_1_general_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_control_1_general_period;
      u_st_control_1_general_period.base = 0;
      u_st_control_1_general_period.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_control_1_general_period = u_st_control_1_general_period.real;
      offset += sizeof(this->st_control_1_general_period);
        memcpy( &(this->control_1_general_period[i]), &(this->st_control_1_general_period), sizeof(int8_t));
      }
      uint32_t control_2_pwmoutput_period_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      control_2_pwmoutput_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      control_2_pwmoutput_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      control_2_pwmoutput_period_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->control_2_pwmoutput_period_length);
      if(control_2_pwmoutput_period_lengthT > control_2_pwmoutput_period_length)
        this->control_2_pwmoutput_period = (int8_t*)realloc(this->control_2_pwmoutput_period, control_2_pwmoutput_period_lengthT * sizeof(int8_t));
      control_2_pwmoutput_period_length = control_2_pwmoutput_period_lengthT;
      for( uint32_t i = 0; i < control_2_pwmoutput_period_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_control_2_pwmoutput_period;
      u_st_control_2_pwmoutput_period.base = 0;
      u_st_control_2_pwmoutput_period.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_control_2_pwmoutput_period = u_st_control_2_pwmoutput_period.real;
      offset += sizeof(this->st_control_2_pwmoutput_period);
        memcpy( &(this->control_2_pwmoutput_period[i]), &(this->st_control_2_pwmoutput_period), sizeof(int8_t));
      }
      uint32_t faults_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      faults_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      faults_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      faults_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->faults_length);
      if(faults_lengthT > faults_length)
        this->faults = (int16_t*)realloc(this->faults, faults_lengthT * sizeof(int16_t));
      faults_length = faults_lengthT;
      for( uint32_t i = 0; i < faults_length; i++){
      union {
        int16_t real;
        uint16_t base;
      } u_st_faults;
      u_st_faults.base = 0;
      u_st_faults.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_faults.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->st_faults = u_st_faults.real;
      offset += sizeof(this->st_faults);
        memcpy( &(this->faults[i]), &(this->st_faults), sizeof(int16_t));
      }
      uint32_t sticky_faults_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      sticky_faults_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      sticky_faults_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      sticky_faults_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->sticky_faults_length);
      if(sticky_faults_lengthT > sticky_faults_length)
        this->sticky_faults = (int16_t*)realloc(this->sticky_faults, sticky_faults_lengthT * sizeof(int16_t));
      sticky_faults_length = sticky_faults_lengthT;
      for( uint32_t i = 0; i < sticky_faults_length; i++){
      union {
        int16_t real;
        uint16_t base;
      } u_st_sticky_faults;
      u_st_sticky_faults.base = 0;
      u_st_sticky_faults.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_sticky_faults.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->st_sticky_faults = u_st_sticky_faults.real;
      offset += sizeof(this->st_sticky_faults);
        memcpy( &(this->sticky_faults[i]), &(this->st_sticky_faults), sizeof(int16_t));
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

    virtual const char * getType() override { return "talon_state_msgs/CANifierState"; };
    virtual const char * getMD5() override { return "13527cdb31b3d6bbff0f0a606a9cfba2"; };

  };

}
#endif
