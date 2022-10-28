#ifndef _ROS_frc_msgs_PDHData_h
#define _ROS_frc_msgs_PDHData_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace frc_msgs
{

  class PDHData : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef double _voltage_type;
      _voltage_type voltage;
      typedef double _totalCurrent_type;
      _totalCurrent_type totalCurrent;
      double current[24];
      char* thingsPluggedIn[24];
      bool channelBreakerFault[24];
      bool stickyChannelBreakerFault[24];
      typedef bool _enabled_type;
      _enabled_type enabled;
      typedef bool _switchableChannelState_type;
      _switchableChannelState_type switchableChannelState;
      typedef bool _canWarning_type;
      _canWarning_type canWarning;
      typedef bool _stickyCanWarning_type;
      _stickyCanWarning_type stickyCanWarning;
      typedef bool _stickyCanBusOff_type;
      _stickyCanBusOff_type stickyCanBusOff;
      typedef bool _hardwareFault_type;
      _hardwareFault_type hardwareFault;
      typedef bool _stickyHasReset_type;
      _stickyHasReset_type stickyHasReset;
      typedef int32_t _moduleNumber_type;
      _moduleNumber_type moduleNumber;
      typedef uint32_t _firmwareMajor_type;
      _firmwareMajor_type firmwareMajor;
      typedef uint32_t _firmwareMinor_type;
      _firmwareMinor_type firmwareMinor;
      typedef uint32_t _firmwareFix_type;
      _firmwareFix_type firmwareFix;
      typedef uint32_t _hardwareMajor_type;
      _hardwareMajor_type hardwareMajor;
      typedef uint32_t _hardwareMinor_type;
      _hardwareMinor_type hardwareMinor;

    PDHData():
      header(),
      voltage(0),
      totalCurrent(0),
      current(),
      thingsPluggedIn(),
      channelBreakerFault(),
      stickyChannelBreakerFault(),
      enabled(0),
      switchableChannelState(0),
      canWarning(0),
      stickyCanWarning(0),
      stickyCanBusOff(0),
      hardwareFault(0),
      stickyHasReset(0),
      moduleNumber(0),
      firmwareMajor(0),
      firmwareMinor(0),
      firmwareFix(0),
      hardwareMajor(0),
      hardwareMinor(0)
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
      for( uint32_t i = 0; i < 24; i++){
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
      for( uint32_t i = 0; i < 24; i++){
      uint32_t length_thingsPluggedIni = strlen(this->thingsPluggedIn[i]);
      varToArr(outbuffer + offset, length_thingsPluggedIni);
      offset += 4;
      memcpy(outbuffer + offset, this->thingsPluggedIn[i], length_thingsPluggedIni);
      offset += length_thingsPluggedIni;
      }
      for( uint32_t i = 0; i < 24; i++){
      union {
        bool real;
        uint8_t base;
      } u_channelBreakerFaulti;
      u_channelBreakerFaulti.real = this->channelBreakerFault[i];
      *(outbuffer + offset + 0) = (u_channelBreakerFaulti.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->channelBreakerFault[i]);
      }
      for( uint32_t i = 0; i < 24; i++){
      union {
        bool real;
        uint8_t base;
      } u_stickyChannelBreakerFaulti;
      u_stickyChannelBreakerFaulti.real = this->stickyChannelBreakerFault[i];
      *(outbuffer + offset + 0) = (u_stickyChannelBreakerFaulti.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->stickyChannelBreakerFault[i]);
      }
      union {
        bool real;
        uint8_t base;
      } u_enabled;
      u_enabled.real = this->enabled;
      *(outbuffer + offset + 0) = (u_enabled.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->enabled);
      union {
        bool real;
        uint8_t base;
      } u_switchableChannelState;
      u_switchableChannelState.real = this->switchableChannelState;
      *(outbuffer + offset + 0) = (u_switchableChannelState.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->switchableChannelState);
      union {
        bool real;
        uint8_t base;
      } u_canWarning;
      u_canWarning.real = this->canWarning;
      *(outbuffer + offset + 0) = (u_canWarning.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->canWarning);
      union {
        bool real;
        uint8_t base;
      } u_stickyCanWarning;
      u_stickyCanWarning.real = this->stickyCanWarning;
      *(outbuffer + offset + 0) = (u_stickyCanWarning.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->stickyCanWarning);
      union {
        bool real;
        uint8_t base;
      } u_stickyCanBusOff;
      u_stickyCanBusOff.real = this->stickyCanBusOff;
      *(outbuffer + offset + 0) = (u_stickyCanBusOff.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->stickyCanBusOff);
      union {
        bool real;
        uint8_t base;
      } u_hardwareFault;
      u_hardwareFault.real = this->hardwareFault;
      *(outbuffer + offset + 0) = (u_hardwareFault.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->hardwareFault);
      union {
        bool real;
        uint8_t base;
      } u_stickyHasReset;
      u_stickyHasReset.real = this->stickyHasReset;
      *(outbuffer + offset + 0) = (u_stickyHasReset.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->stickyHasReset);
      union {
        int32_t real;
        uint32_t base;
      } u_moduleNumber;
      u_moduleNumber.real = this->moduleNumber;
      *(outbuffer + offset + 0) = (u_moduleNumber.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_moduleNumber.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_moduleNumber.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_moduleNumber.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->moduleNumber);
      *(outbuffer + offset + 0) = (this->firmwareMajor >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->firmwareMajor >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->firmwareMajor >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->firmwareMajor >> (8 * 3)) & 0xFF;
      offset += sizeof(this->firmwareMajor);
      *(outbuffer + offset + 0) = (this->firmwareMinor >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->firmwareMinor >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->firmwareMinor >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->firmwareMinor >> (8 * 3)) & 0xFF;
      offset += sizeof(this->firmwareMinor);
      *(outbuffer + offset + 0) = (this->firmwareFix >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->firmwareFix >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->firmwareFix >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->firmwareFix >> (8 * 3)) & 0xFF;
      offset += sizeof(this->firmwareFix);
      *(outbuffer + offset + 0) = (this->hardwareMajor >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->hardwareMajor >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->hardwareMajor >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->hardwareMajor >> (8 * 3)) & 0xFF;
      offset += sizeof(this->hardwareMajor);
      *(outbuffer + offset + 0) = (this->hardwareMinor >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->hardwareMinor >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->hardwareMinor >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->hardwareMinor >> (8 * 3)) & 0xFF;
      offset += sizeof(this->hardwareMinor);
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
      for( uint32_t i = 0; i < 24; i++){
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
      for( uint32_t i = 0; i < 24; i++){
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
      for( uint32_t i = 0; i < 24; i++){
      union {
        bool real;
        uint8_t base;
      } u_channelBreakerFaulti;
      u_channelBreakerFaulti.base = 0;
      u_channelBreakerFaulti.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->channelBreakerFault[i] = u_channelBreakerFaulti.real;
      offset += sizeof(this->channelBreakerFault[i]);
      }
      for( uint32_t i = 0; i < 24; i++){
      union {
        bool real;
        uint8_t base;
      } u_stickyChannelBreakerFaulti;
      u_stickyChannelBreakerFaulti.base = 0;
      u_stickyChannelBreakerFaulti.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->stickyChannelBreakerFault[i] = u_stickyChannelBreakerFaulti.real;
      offset += sizeof(this->stickyChannelBreakerFault[i]);
      }
      union {
        bool real;
        uint8_t base;
      } u_enabled;
      u_enabled.base = 0;
      u_enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->enabled = u_enabled.real;
      offset += sizeof(this->enabled);
      union {
        bool real;
        uint8_t base;
      } u_switchableChannelState;
      u_switchableChannelState.base = 0;
      u_switchableChannelState.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->switchableChannelState = u_switchableChannelState.real;
      offset += sizeof(this->switchableChannelState);
      union {
        bool real;
        uint8_t base;
      } u_canWarning;
      u_canWarning.base = 0;
      u_canWarning.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->canWarning = u_canWarning.real;
      offset += sizeof(this->canWarning);
      union {
        bool real;
        uint8_t base;
      } u_stickyCanWarning;
      u_stickyCanWarning.base = 0;
      u_stickyCanWarning.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->stickyCanWarning = u_stickyCanWarning.real;
      offset += sizeof(this->stickyCanWarning);
      union {
        bool real;
        uint8_t base;
      } u_stickyCanBusOff;
      u_stickyCanBusOff.base = 0;
      u_stickyCanBusOff.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->stickyCanBusOff = u_stickyCanBusOff.real;
      offset += sizeof(this->stickyCanBusOff);
      union {
        bool real;
        uint8_t base;
      } u_hardwareFault;
      u_hardwareFault.base = 0;
      u_hardwareFault.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->hardwareFault = u_hardwareFault.real;
      offset += sizeof(this->hardwareFault);
      union {
        bool real;
        uint8_t base;
      } u_stickyHasReset;
      u_stickyHasReset.base = 0;
      u_stickyHasReset.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->stickyHasReset = u_stickyHasReset.real;
      offset += sizeof(this->stickyHasReset);
      union {
        int32_t real;
        uint32_t base;
      } u_moduleNumber;
      u_moduleNumber.base = 0;
      u_moduleNumber.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_moduleNumber.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_moduleNumber.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_moduleNumber.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->moduleNumber = u_moduleNumber.real;
      offset += sizeof(this->moduleNumber);
      this->firmwareMajor =  ((uint32_t) (*(inbuffer + offset)));
      this->firmwareMajor |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->firmwareMajor |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->firmwareMajor |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->firmwareMajor);
      this->firmwareMinor =  ((uint32_t) (*(inbuffer + offset)));
      this->firmwareMinor |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->firmwareMinor |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->firmwareMinor |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->firmwareMinor);
      this->firmwareFix =  ((uint32_t) (*(inbuffer + offset)));
      this->firmwareFix |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->firmwareFix |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->firmwareFix |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->firmwareFix);
      this->hardwareMajor =  ((uint32_t) (*(inbuffer + offset)));
      this->hardwareMajor |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->hardwareMajor |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->hardwareMajor |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->hardwareMajor);
      this->hardwareMinor =  ((uint32_t) (*(inbuffer + offset)));
      this->hardwareMinor |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->hardwareMinor |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->hardwareMinor |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->hardwareMinor);
     return offset;
    }

    virtual const char * getType() override { return "frc_msgs/PDHData"; };
    virtual const char * getMD5() override { return "eacf7a5398d8eabc22bc264acece512a"; };

  };

}
#endif
