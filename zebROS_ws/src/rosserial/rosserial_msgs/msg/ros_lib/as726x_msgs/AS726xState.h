#ifndef _ROS_as726x_msgs_AS726xState_h
#define _ROS_as726x_msgs_AS726xState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "as726x_msgs/AS726xRawChannelData.h"
#include "as726x_msgs/AS726xCalibratedChannelData.h"

namespace as726x_msgs
{

  class AS726xState : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t name_length;
      typedef char* _name_type;
      _name_type st_name;
      _name_type * name;
      uint32_t port_length;
      typedef char* _port_type;
      _port_type st_port;
      _port_type * port;
      uint32_t address_length;
      typedef int8_t _address_type;
      _address_type st_address;
      _address_type * address;
      uint32_t ind_led_current_limit_length;
      typedef char* _ind_led_current_limit_type;
      _ind_led_current_limit_type st_ind_led_current_limit;
      _ind_led_current_limit_type * ind_led_current_limit;
      uint32_t ind_led_enable_length;
      typedef bool _ind_led_enable_type;
      _ind_led_enable_type st_ind_led_enable;
      _ind_led_enable_type * ind_led_enable;
      uint32_t drv_led_current_limit_length;
      typedef char* _drv_led_current_limit_type;
      _drv_led_current_limit_type st_drv_led_current_limit;
      _drv_led_current_limit_type * drv_led_current_limit;
      uint32_t drv_led_enable_length;
      typedef bool _drv_led_enable_type;
      _drv_led_enable_type st_drv_led_enable;
      _drv_led_enable_type * drv_led_enable;
      uint32_t conversion_type_length;
      typedef char* _conversion_type_type;
      _conversion_type_type st_conversion_type;
      _conversion_type_type * conversion_type;
      uint32_t gain_length;
      typedef char* _gain_type;
      _gain_type st_gain;
      _gain_type * gain;
      uint32_t integration_time_length;
      typedef uint8_t _integration_time_type;
      _integration_time_type st_integration_time;
      _integration_time_type * integration_time;
      uint32_t temperature_length;
      typedef uint8_t _temperature_type;
      _temperature_type st_temperature;
      _temperature_type * temperature;
      uint32_t raw_channel_data_length;
      typedef as726x_msgs::AS726xRawChannelData _raw_channel_data_type;
      _raw_channel_data_type st_raw_channel_data;
      _raw_channel_data_type * raw_channel_data;
      uint32_t calibrated_channel_data_length;
      typedef as726x_msgs::AS726xCalibratedChannelData _calibrated_channel_data_type;
      _calibrated_channel_data_type st_calibrated_channel_data;
      _calibrated_channel_data_type * calibrated_channel_data;

    AS726xState():
      header(),
      name_length(0), st_name(), name(nullptr),
      port_length(0), st_port(), port(nullptr),
      address_length(0), st_address(), address(nullptr),
      ind_led_current_limit_length(0), st_ind_led_current_limit(), ind_led_current_limit(nullptr),
      ind_led_enable_length(0), st_ind_led_enable(), ind_led_enable(nullptr),
      drv_led_current_limit_length(0), st_drv_led_current_limit(), drv_led_current_limit(nullptr),
      drv_led_enable_length(0), st_drv_led_enable(), drv_led_enable(nullptr),
      conversion_type_length(0), st_conversion_type(), conversion_type(nullptr),
      gain_length(0), st_gain(), gain(nullptr),
      integration_time_length(0), st_integration_time(), integration_time(nullptr),
      temperature_length(0), st_temperature(), temperature(nullptr),
      raw_channel_data_length(0), st_raw_channel_data(), raw_channel_data(nullptr),
      calibrated_channel_data_length(0), st_calibrated_channel_data(), calibrated_channel_data(nullptr)
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
      *(outbuffer + offset + 0) = (this->port_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->port_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->port_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->port_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->port_length);
      for( uint32_t i = 0; i < port_length; i++){
      uint32_t length_porti = strlen(this->port[i]);
      varToArr(outbuffer + offset, length_porti);
      offset += 4;
      memcpy(outbuffer + offset, this->port[i], length_porti);
      offset += length_porti;
      }
      *(outbuffer + offset + 0) = (this->address_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->address_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->address_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->address_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->address_length);
      for( uint32_t i = 0; i < address_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_addressi;
      u_addressi.real = this->address[i];
      *(outbuffer + offset + 0) = (u_addressi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->address[i]);
      }
      *(outbuffer + offset + 0) = (this->ind_led_current_limit_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->ind_led_current_limit_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->ind_led_current_limit_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->ind_led_current_limit_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ind_led_current_limit_length);
      for( uint32_t i = 0; i < ind_led_current_limit_length; i++){
      uint32_t length_ind_led_current_limiti = strlen(this->ind_led_current_limit[i]);
      varToArr(outbuffer + offset, length_ind_led_current_limiti);
      offset += 4;
      memcpy(outbuffer + offset, this->ind_led_current_limit[i], length_ind_led_current_limiti);
      offset += length_ind_led_current_limiti;
      }
      *(outbuffer + offset + 0) = (this->ind_led_enable_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->ind_led_enable_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->ind_led_enable_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->ind_led_enable_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ind_led_enable_length);
      for( uint32_t i = 0; i < ind_led_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_ind_led_enablei;
      u_ind_led_enablei.real = this->ind_led_enable[i];
      *(outbuffer + offset + 0) = (u_ind_led_enablei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->ind_led_enable[i]);
      }
      *(outbuffer + offset + 0) = (this->drv_led_current_limit_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->drv_led_current_limit_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->drv_led_current_limit_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->drv_led_current_limit_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->drv_led_current_limit_length);
      for( uint32_t i = 0; i < drv_led_current_limit_length; i++){
      uint32_t length_drv_led_current_limiti = strlen(this->drv_led_current_limit[i]);
      varToArr(outbuffer + offset, length_drv_led_current_limiti);
      offset += 4;
      memcpy(outbuffer + offset, this->drv_led_current_limit[i], length_drv_led_current_limiti);
      offset += length_drv_led_current_limiti;
      }
      *(outbuffer + offset + 0) = (this->drv_led_enable_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->drv_led_enable_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->drv_led_enable_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->drv_led_enable_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->drv_led_enable_length);
      for( uint32_t i = 0; i < drv_led_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_drv_led_enablei;
      u_drv_led_enablei.real = this->drv_led_enable[i];
      *(outbuffer + offset + 0) = (u_drv_led_enablei.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->drv_led_enable[i]);
      }
      *(outbuffer + offset + 0) = (this->conversion_type_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->conversion_type_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->conversion_type_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->conversion_type_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->conversion_type_length);
      for( uint32_t i = 0; i < conversion_type_length; i++){
      uint32_t length_conversion_typei = strlen(this->conversion_type[i]);
      varToArr(outbuffer + offset, length_conversion_typei);
      offset += 4;
      memcpy(outbuffer + offset, this->conversion_type[i], length_conversion_typei);
      offset += length_conversion_typei;
      }
      *(outbuffer + offset + 0) = (this->gain_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->gain_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->gain_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->gain_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->gain_length);
      for( uint32_t i = 0; i < gain_length; i++){
      uint32_t length_gaini = strlen(this->gain[i]);
      varToArr(outbuffer + offset, length_gaini);
      offset += 4;
      memcpy(outbuffer + offset, this->gain[i], length_gaini);
      offset += length_gaini;
      }
      *(outbuffer + offset + 0) = (this->integration_time_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->integration_time_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->integration_time_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->integration_time_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->integration_time_length);
      for( uint32_t i = 0; i < integration_time_length; i++){
      *(outbuffer + offset + 0) = (this->integration_time[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->integration_time[i]);
      }
      *(outbuffer + offset + 0) = (this->temperature_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->temperature_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->temperature_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->temperature_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->temperature_length);
      for( uint32_t i = 0; i < temperature_length; i++){
      *(outbuffer + offset + 0) = (this->temperature[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->temperature[i]);
      }
      *(outbuffer + offset + 0) = (this->raw_channel_data_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->raw_channel_data_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->raw_channel_data_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->raw_channel_data_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->raw_channel_data_length);
      for( uint32_t i = 0; i < raw_channel_data_length; i++){
      offset += this->raw_channel_data[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset + 0) = (this->calibrated_channel_data_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->calibrated_channel_data_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->calibrated_channel_data_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->calibrated_channel_data_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->calibrated_channel_data_length);
      for( uint32_t i = 0; i < calibrated_channel_data_length; i++){
      offset += this->calibrated_channel_data[i].serialize(outbuffer + offset);
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
      uint32_t port_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      port_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      port_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      port_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->port_length);
      if(port_lengthT > port_length)
        this->port = (char**)realloc(this->port, port_lengthT * sizeof(char*));
      port_length = port_lengthT;
      for( uint32_t i = 0; i < port_length; i++){
      uint32_t length_st_port;
      arrToVar(length_st_port, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_port; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_port-1]=0;
      this->st_port = (char *)(inbuffer + offset-1);
      offset += length_st_port;
        memcpy( &(this->port[i]), &(this->st_port), sizeof(char*));
      }
      uint32_t address_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      address_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      address_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      address_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->address_length);
      if(address_lengthT > address_length)
        this->address = (int8_t*)realloc(this->address, address_lengthT * sizeof(int8_t));
      address_length = address_lengthT;
      for( uint32_t i = 0; i < address_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_address;
      u_st_address.base = 0;
      u_st_address.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_address = u_st_address.real;
      offset += sizeof(this->st_address);
        memcpy( &(this->address[i]), &(this->st_address), sizeof(int8_t));
      }
      uint32_t ind_led_current_limit_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      ind_led_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      ind_led_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      ind_led_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->ind_led_current_limit_length);
      if(ind_led_current_limit_lengthT > ind_led_current_limit_length)
        this->ind_led_current_limit = (char**)realloc(this->ind_led_current_limit, ind_led_current_limit_lengthT * sizeof(char*));
      ind_led_current_limit_length = ind_led_current_limit_lengthT;
      for( uint32_t i = 0; i < ind_led_current_limit_length; i++){
      uint32_t length_st_ind_led_current_limit;
      arrToVar(length_st_ind_led_current_limit, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_ind_led_current_limit; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_ind_led_current_limit-1]=0;
      this->st_ind_led_current_limit = (char *)(inbuffer + offset-1);
      offset += length_st_ind_led_current_limit;
        memcpy( &(this->ind_led_current_limit[i]), &(this->st_ind_led_current_limit), sizeof(char*));
      }
      uint32_t ind_led_enable_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      ind_led_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      ind_led_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      ind_led_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->ind_led_enable_length);
      if(ind_led_enable_lengthT > ind_led_enable_length)
        this->ind_led_enable = (bool*)realloc(this->ind_led_enable, ind_led_enable_lengthT * sizeof(bool));
      ind_led_enable_length = ind_led_enable_lengthT;
      for( uint32_t i = 0; i < ind_led_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_ind_led_enable;
      u_st_ind_led_enable.base = 0;
      u_st_ind_led_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_ind_led_enable = u_st_ind_led_enable.real;
      offset += sizeof(this->st_ind_led_enable);
        memcpy( &(this->ind_led_enable[i]), &(this->st_ind_led_enable), sizeof(bool));
      }
      uint32_t drv_led_current_limit_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      drv_led_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      drv_led_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      drv_led_current_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->drv_led_current_limit_length);
      if(drv_led_current_limit_lengthT > drv_led_current_limit_length)
        this->drv_led_current_limit = (char**)realloc(this->drv_led_current_limit, drv_led_current_limit_lengthT * sizeof(char*));
      drv_led_current_limit_length = drv_led_current_limit_lengthT;
      for( uint32_t i = 0; i < drv_led_current_limit_length; i++){
      uint32_t length_st_drv_led_current_limit;
      arrToVar(length_st_drv_led_current_limit, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_drv_led_current_limit; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_drv_led_current_limit-1]=0;
      this->st_drv_led_current_limit = (char *)(inbuffer + offset-1);
      offset += length_st_drv_led_current_limit;
        memcpy( &(this->drv_led_current_limit[i]), &(this->st_drv_led_current_limit), sizeof(char*));
      }
      uint32_t drv_led_enable_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      drv_led_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      drv_led_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      drv_led_enable_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->drv_led_enable_length);
      if(drv_led_enable_lengthT > drv_led_enable_length)
        this->drv_led_enable = (bool*)realloc(this->drv_led_enable, drv_led_enable_lengthT * sizeof(bool));
      drv_led_enable_length = drv_led_enable_lengthT;
      for( uint32_t i = 0; i < drv_led_enable_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_drv_led_enable;
      u_st_drv_led_enable.base = 0;
      u_st_drv_led_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_drv_led_enable = u_st_drv_led_enable.real;
      offset += sizeof(this->st_drv_led_enable);
        memcpy( &(this->drv_led_enable[i]), &(this->st_drv_led_enable), sizeof(bool));
      }
      uint32_t conversion_type_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      conversion_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      conversion_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      conversion_type_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->conversion_type_length);
      if(conversion_type_lengthT > conversion_type_length)
        this->conversion_type = (char**)realloc(this->conversion_type, conversion_type_lengthT * sizeof(char*));
      conversion_type_length = conversion_type_lengthT;
      for( uint32_t i = 0; i < conversion_type_length; i++){
      uint32_t length_st_conversion_type;
      arrToVar(length_st_conversion_type, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_conversion_type; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_conversion_type-1]=0;
      this->st_conversion_type = (char *)(inbuffer + offset-1);
      offset += length_st_conversion_type;
        memcpy( &(this->conversion_type[i]), &(this->st_conversion_type), sizeof(char*));
      }
      uint32_t gain_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      gain_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      gain_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      gain_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->gain_length);
      if(gain_lengthT > gain_length)
        this->gain = (char**)realloc(this->gain, gain_lengthT * sizeof(char*));
      gain_length = gain_lengthT;
      for( uint32_t i = 0; i < gain_length; i++){
      uint32_t length_st_gain;
      arrToVar(length_st_gain, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_gain; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_gain-1]=0;
      this->st_gain = (char *)(inbuffer + offset-1);
      offset += length_st_gain;
        memcpy( &(this->gain[i]), &(this->st_gain), sizeof(char*));
      }
      uint32_t integration_time_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      integration_time_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      integration_time_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      integration_time_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->integration_time_length);
      if(integration_time_lengthT > integration_time_length)
        this->integration_time = (uint8_t*)realloc(this->integration_time, integration_time_lengthT * sizeof(uint8_t));
      integration_time_length = integration_time_lengthT;
      for( uint32_t i = 0; i < integration_time_length; i++){
      this->st_integration_time =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_integration_time);
        memcpy( &(this->integration_time[i]), &(this->st_integration_time), sizeof(uint8_t));
      }
      uint32_t temperature_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      temperature_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      temperature_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      temperature_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->temperature_length);
      if(temperature_lengthT > temperature_length)
        this->temperature = (uint8_t*)realloc(this->temperature, temperature_lengthT * sizeof(uint8_t));
      temperature_length = temperature_lengthT;
      for( uint32_t i = 0; i < temperature_length; i++){
      this->st_temperature =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_temperature);
        memcpy( &(this->temperature[i]), &(this->st_temperature), sizeof(uint8_t));
      }
      uint32_t raw_channel_data_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      raw_channel_data_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      raw_channel_data_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      raw_channel_data_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->raw_channel_data_length);
      if(raw_channel_data_lengthT > raw_channel_data_length)
        this->raw_channel_data = (as726x_msgs::AS726xRawChannelData*)realloc(this->raw_channel_data, raw_channel_data_lengthT * sizeof(as726x_msgs::AS726xRawChannelData));
      raw_channel_data_length = raw_channel_data_lengthT;
      for( uint32_t i = 0; i < raw_channel_data_length; i++){
      offset += this->st_raw_channel_data.deserialize(inbuffer + offset);
        memcpy( &(this->raw_channel_data[i]), &(this->st_raw_channel_data), sizeof(as726x_msgs::AS726xRawChannelData));
      }
      uint32_t calibrated_channel_data_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      calibrated_channel_data_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      calibrated_channel_data_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      calibrated_channel_data_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->calibrated_channel_data_length);
      if(calibrated_channel_data_lengthT > calibrated_channel_data_length)
        this->calibrated_channel_data = (as726x_msgs::AS726xCalibratedChannelData*)realloc(this->calibrated_channel_data, calibrated_channel_data_lengthT * sizeof(as726x_msgs::AS726xCalibratedChannelData));
      calibrated_channel_data_length = calibrated_channel_data_lengthT;
      for( uint32_t i = 0; i < calibrated_channel_data_length; i++){
      offset += this->st_calibrated_channel_data.deserialize(inbuffer + offset);
        memcpy( &(this->calibrated_channel_data[i]), &(this->st_calibrated_channel_data), sizeof(as726x_msgs::AS726xCalibratedChannelData));
      }
     return offset;
    }

    virtual const char * getType() override { return "as726x_msgs/AS726xState"; };
    virtual const char * getMD5() override { return "988461c5ef35f36165fde0982a34c26a"; };

  };

}
#endif
