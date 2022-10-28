#ifndef _ROS_frc_msgs_PDPData_h
#define _ROS_frc_msgs_PDPData_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace frc_msgs
{

  class PDPData : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef double _voltage_type;
      _voltage_type voltage;
      typedef double _temperature_type;
      _temperature_type temperature;
      typedef double _totalCurrent_type;
      _totalCurrent_type totalCurrent;
      typedef double _totalPower_type;
      _totalPower_type totalPower;
      typedef double _totalEnergy_type;
      _totalEnergy_type totalEnergy;
      double current[16];
      char* thingsPluggedIn[16];

    PDPData():
      header(),
      voltage(0),
      temperature(0),
      totalCurrent(0),
      totalPower(0),
      totalEnergy(0),
      current(),
      thingsPluggedIn()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_voltage;
      u_voltage.real = this->voltage;
      *(outbuffer + offset + 0) = (u_voltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_voltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_voltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_voltage.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_voltage.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_voltage.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_voltage.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_voltage.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->voltage);
      union {
        double real;
        uint64_t base;
      } u_temperature;
      u_temperature.real = this->temperature;
      *(outbuffer + offset + 0) = (u_temperature.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_temperature.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_temperature.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_temperature.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_temperature.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_temperature.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_temperature.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_temperature.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->temperature);
      union {
        double real;
        uint64_t base;
      } u_totalCurrent;
      u_totalCurrent.real = this->totalCurrent;
      *(outbuffer + offset + 0) = (u_totalCurrent.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_totalCurrent.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_totalCurrent.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_totalCurrent.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_totalCurrent.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_totalCurrent.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_totalCurrent.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_totalCurrent.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->totalCurrent);
      union {
        double real;
        uint64_t base;
      } u_totalPower;
      u_totalPower.real = this->totalPower;
      *(outbuffer + offset + 0) = (u_totalPower.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_totalPower.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_totalPower.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_totalPower.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_totalPower.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_totalPower.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_totalPower.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_totalPower.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->totalPower);
      union {
        double real;
        uint64_t base;
      } u_totalEnergy;
      u_totalEnergy.real = this->totalEnergy;
      *(outbuffer + offset + 0) = (u_totalEnergy.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_totalEnergy.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_totalEnergy.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_totalEnergy.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_totalEnergy.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_totalEnergy.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_totalEnergy.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_totalEnergy.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->totalEnergy);
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_currenti;
      u_currenti.real = this->current[i];
      *(outbuffer + offset + 0) = (u_currenti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_currenti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_currenti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_currenti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_currenti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_currenti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_currenti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_currenti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->current[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      uint32_t length_thingsPluggedIni = strlen(this->thingsPluggedIn[i]);
      varToArr(outbuffer + offset, length_thingsPluggedIni);
      offset += 4;
      memcpy(outbuffer + offset, this->thingsPluggedIn[i], length_thingsPluggedIni);
      offset += length_thingsPluggedIni;
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_voltage;
      u_voltage.base = 0;
      u_voltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_voltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_voltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_voltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_voltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_voltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_voltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_voltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->voltage = u_voltage.real;
      offset += sizeof(this->voltage);
      union {
        double real;
        uint64_t base;
      } u_temperature;
      u_temperature.base = 0;
      u_temperature.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_temperature.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_temperature.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_temperature.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_temperature.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_temperature.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_temperature.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_temperature.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->temperature = u_temperature.real;
      offset += sizeof(this->temperature);
      union {
        double real;
        uint64_t base;
      } u_totalCurrent;
      u_totalCurrent.base = 0;
      u_totalCurrent.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_totalCurrent.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_totalCurrent.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_totalCurrent.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_totalCurrent.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_totalCurrent.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_totalCurrent.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_totalCurrent.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->totalCurrent = u_totalCurrent.real;
      offset += sizeof(this->totalCurrent);
      union {
        double real;
        uint64_t base;
      } u_totalPower;
      u_totalPower.base = 0;
      u_totalPower.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_totalPower.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_totalPower.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_totalPower.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_totalPower.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_totalPower.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_totalPower.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_totalPower.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->totalPower = u_totalPower.real;
      offset += sizeof(this->totalPower);
      union {
        double real;
        uint64_t base;
      } u_totalEnergy;
      u_totalEnergy.base = 0;
      u_totalEnergy.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_totalEnergy.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_totalEnergy.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_totalEnergy.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_totalEnergy.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_totalEnergy.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_totalEnergy.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_totalEnergy.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->totalEnergy = u_totalEnergy.real;
      offset += sizeof(this->totalEnergy);
      for( uint32_t i = 0; i < 16; i++){
      union {
        double real;
        uint64_t base;
      } u_currenti;
      u_currenti.base = 0;
      u_currenti.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_currenti.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_currenti.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_currenti.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_currenti.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_currenti.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_currenti.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_currenti.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->current[i] = u_currenti.real;
      offset += sizeof(this->current[i]);
      }
      for( uint32_t i = 0; i < 16; i++){
      uint32_t length_thingsPluggedIni;
      arrToVar(length_thingsPluggedIni, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_thingsPluggedIni; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_thingsPluggedIni-1]=0;
      this->thingsPluggedIn[i] = (char *)(inbuffer + offset-1);
      offset += length_thingsPluggedIni;
      }
     return offset;
    }

    virtual const char * getType() override { return "frc_msgs/PDPData"; };
    virtual const char * getMD5() override { return "e5748075b60d2ef5c924df32067db972"; };

  };

}
#endif
