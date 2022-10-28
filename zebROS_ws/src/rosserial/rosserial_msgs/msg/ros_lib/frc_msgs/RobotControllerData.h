#ifndef _ROS_frc_msgs_RobotControllerData_h
#define _ROS_frc_msgs_RobotControllerData_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "frc_msgs/RobotControllerCANData.h"

namespace frc_msgs
{

  class RobotControllerData : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef int32_t _fpgaVersion_type;
      _fpgaVersion_type fpgaVersion;
      typedef int64_t _fpgaRevision_type;
      _fpgaRevision_type fpgaRevision;
      typedef uint64_t _fpgaTime_type;
      _fpgaTime_type fpgaTime;
      typedef bool _userButton_type;
      _userButton_type userButton;
      typedef bool _isSysActive_type;
      _isSysActive_type isSysActive;
      typedef bool _isBrownedOut_type;
      _isBrownedOut_type isBrownedOut;
      typedef double _inputVoltage_type;
      _inputVoltage_type inputVoltage;
      typedef double _inputCurrent_type;
      _inputCurrent_type inputCurrent;
      typedef double _voltage3V3_type;
      _voltage3V3_type voltage3V3;
      typedef double _current3V3_type;
      _current3V3_type current3V3;
      typedef bool _enabled3V3_type;
      _enabled3V3_type enabled3V3;
      typedef int32_t _faultCount3V3_type;
      _faultCount3V3_type faultCount3V3;
      typedef double _voltage5V_type;
      _voltage5V_type voltage5V;
      typedef double _current5V_type;
      _current5V_type current5V;
      typedef bool _enabled5V_type;
      _enabled5V_type enabled5V;
      typedef int32_t _faultCount5V_type;
      _faultCount5V_type faultCount5V;
      typedef double _voltage6V_type;
      _voltage6V_type voltage6V;
      typedef double _current6V_type;
      _current6V_type current6V;
      typedef bool _enabled6V_type;
      _enabled6V_type enabled6V;
      typedef int32_t _faultCount6V_type;
      _faultCount6V_type faultCount6V;
      typedef frc_msgs::RobotControllerCANData _canData_type;
      _canData_type canData;
      typedef const char* _fpgaVersion_status_type;
      _fpgaVersion_status_type fpgaVersion_status;
      typedef const char* _fpgaRevision_status_type;
      _fpgaRevision_status_type fpgaRevision_status;
      typedef const char* _fpgaTime_status_type;
      _fpgaTime_status_type fpgaTime_status;
      typedef const char* _userButton_status_type;
      _userButton_status_type userButton_status;
      typedef const char* _isSysActive_status_type;
      _isSysActive_status_type isSysActive_status;
      typedef const char* _isBrownedOut_status_type;
      _isBrownedOut_status_type isBrownedOut_status;
      typedef const char* _inputVoltage_status_type;
      _inputVoltage_status_type inputVoltage_status;
      typedef const char* _inputCurrent_status_type;
      _inputCurrent_status_type inputCurrent_status;
      typedef const char* _voltage3V3_status_type;
      _voltage3V3_status_type voltage3V3_status;
      typedef const char* _current3V3_status_type;
      _current3V3_status_type current3V3_status;
      typedef const char* _enabled3V3_status_type;
      _enabled3V3_status_type enabled3V3_status;
      typedef const char* _faultCount3V3_status_type;
      _faultCount3V3_status_type faultCount3V3_status;
      typedef const char* _voltage5V_status_type;
      _voltage5V_status_type voltage5V_status;
      typedef const char* _current5V_status_type;
      _current5V_status_type current5V_status;
      typedef const char* _enabled5V_status_type;
      _enabled5V_status_type enabled5V_status;
      typedef const char* _faultCount5V_status_type;
      _faultCount5V_status_type faultCount5V_status;
      typedef const char* _voltage6V_status_type;
      _voltage6V_status_type voltage6V_status;
      typedef const char* _current6V_status_type;
      _current6V_status_type current6V_status;
      typedef const char* _enabled6V_status_type;
      _enabled6V_status_type enabled6V_status;
      typedef const char* _faultCount6V_status_type;
      _faultCount6V_status_type faultCount6V_status;
      typedef const char* _canData_status_type;
      _canData_status_type canData_status;

    RobotControllerData():
      header(),
      fpgaVersion(0),
      fpgaRevision(0),
      fpgaTime(0),
      userButton(0),
      isSysActive(0),
      isBrownedOut(0),
      inputVoltage(0),
      inputCurrent(0),
      voltage3V3(0),
      current3V3(0),
      enabled3V3(0),
      faultCount3V3(0),
      voltage5V(0),
      current5V(0),
      enabled5V(0),
      faultCount5V(0),
      voltage6V(0),
      current6V(0),
      enabled6V(0),
      faultCount6V(0),
      canData(),
      fpgaVersion_status(""),
      fpgaRevision_status(""),
      fpgaTime_status(""),
      userButton_status(""),
      isSysActive_status(""),
      isBrownedOut_status(""),
      inputVoltage_status(""),
      inputCurrent_status(""),
      voltage3V3_status(""),
      current3V3_status(""),
      enabled3V3_status(""),
      faultCount3V3_status(""),
      voltage5V_status(""),
      current5V_status(""),
      enabled5V_status(""),
      faultCount5V_status(""),
      voltage6V_status(""),
      current6V_status(""),
      enabled6V_status(""),
      faultCount6V_status(""),
      canData_status("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_fpgaVersion;
      u_fpgaVersion.real = this->fpgaVersion;
      *(outbuffer + offset + 0) = (u_fpgaVersion.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fpgaVersion.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fpgaVersion.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fpgaVersion.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fpgaVersion);
      union {
        int64_t real;
        uint64_t base;
      } u_fpgaRevision;
      u_fpgaRevision.real = this->fpgaRevision;
      *(outbuffer + offset + 0) = (u_fpgaRevision.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fpgaRevision.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fpgaRevision.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fpgaRevision.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_fpgaRevision.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_fpgaRevision.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_fpgaRevision.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_fpgaRevision.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->fpgaRevision);
      *(outbuffer + offset + 0) = (this->fpgaTime >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->fpgaTime >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->fpgaTime >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->fpgaTime >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (this->fpgaTime >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (this->fpgaTime >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (this->fpgaTime >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (this->fpgaTime >> (8 * 7)) & 0xFF;
      offset += sizeof(this->fpgaTime);
      union {
        bool real;
        uint8_t base;
      } u_userButton;
      u_userButton.real = this->userButton;
      *(outbuffer + offset + 0) = (u_userButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->userButton);
      union {
        bool real;
        uint8_t base;
      } u_isSysActive;
      u_isSysActive.real = this->isSysActive;
      *(outbuffer + offset + 0) = (u_isSysActive.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->isSysActive);
      union {
        bool real;
        uint8_t base;
      } u_isBrownedOut;
      u_isBrownedOut.real = this->isBrownedOut;
      *(outbuffer + offset + 0) = (u_isBrownedOut.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->isBrownedOut);
      union {
        double real;
        uint64_t base;
      } u_inputVoltage;
      u_inputVoltage.real = this->inputVoltage;
      *(outbuffer + offset + 0) = (u_inputVoltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_inputVoltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_inputVoltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_inputVoltage.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_inputVoltage.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_inputVoltage.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_inputVoltage.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_inputVoltage.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->inputVoltage);
      union {
        double real;
        uint64_t base;
      } u_inputCurrent;
      u_inputCurrent.real = this->inputCurrent;
      *(outbuffer + offset + 0) = (u_inputCurrent.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_inputCurrent.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_inputCurrent.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_inputCurrent.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_inputCurrent.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_inputCurrent.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_inputCurrent.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_inputCurrent.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->inputCurrent);
      union {
        double real;
        uint64_t base;
      } u_voltage3V3;
      u_voltage3V3.real = this->voltage3V3;
      *(outbuffer + offset + 0) = (u_voltage3V3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_voltage3V3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_voltage3V3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_voltage3V3.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_voltage3V3.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_voltage3V3.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_voltage3V3.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_voltage3V3.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->voltage3V3);
      union {
        double real;
        uint64_t base;
      } u_current3V3;
      u_current3V3.real = this->current3V3;
      *(outbuffer + offset + 0) = (u_current3V3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current3V3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current3V3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current3V3.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_current3V3.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_current3V3.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_current3V3.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_current3V3.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->current3V3);
      union {
        bool real;
        uint8_t base;
      } u_enabled3V3;
      u_enabled3V3.real = this->enabled3V3;
      *(outbuffer + offset + 0) = (u_enabled3V3.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->enabled3V3);
      union {
        int32_t real;
        uint32_t base;
      } u_faultCount3V3;
      u_faultCount3V3.real = this->faultCount3V3;
      *(outbuffer + offset + 0) = (u_faultCount3V3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_faultCount3V3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_faultCount3V3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_faultCount3V3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->faultCount3V3);
      union {
        double real;
        uint64_t base;
      } u_voltage5V;
      u_voltage5V.real = this->voltage5V;
      *(outbuffer + offset + 0) = (u_voltage5V.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_voltage5V.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_voltage5V.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_voltage5V.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_voltage5V.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_voltage5V.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_voltage5V.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_voltage5V.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->voltage5V);
      union {
        double real;
        uint64_t base;
      } u_current5V;
      u_current5V.real = this->current5V;
      *(outbuffer + offset + 0) = (u_current5V.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current5V.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current5V.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current5V.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_current5V.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_current5V.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_current5V.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_current5V.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->current5V);
      union {
        bool real;
        uint8_t base;
      } u_enabled5V;
      u_enabled5V.real = this->enabled5V;
      *(outbuffer + offset + 0) = (u_enabled5V.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->enabled5V);
      union {
        int32_t real;
        uint32_t base;
      } u_faultCount5V;
      u_faultCount5V.real = this->faultCount5V;
      *(outbuffer + offset + 0) = (u_faultCount5V.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_faultCount5V.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_faultCount5V.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_faultCount5V.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->faultCount5V);
      union {
        double real;
        uint64_t base;
      } u_voltage6V;
      u_voltage6V.real = this->voltage6V;
      *(outbuffer + offset + 0) = (u_voltage6V.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_voltage6V.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_voltage6V.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_voltage6V.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_voltage6V.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_voltage6V.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_voltage6V.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_voltage6V.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->voltage6V);
      union {
        double real;
        uint64_t base;
      } u_current6V;
      u_current6V.real = this->current6V;
      *(outbuffer + offset + 0) = (u_current6V.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current6V.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current6V.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current6V.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_current6V.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_current6V.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_current6V.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_current6V.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->current6V);
      union {
        bool real;
        uint8_t base;
      } u_enabled6V;
      u_enabled6V.real = this->enabled6V;
      *(outbuffer + offset + 0) = (u_enabled6V.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->enabled6V);
      union {
        int32_t real;
        uint32_t base;
      } u_faultCount6V;
      u_faultCount6V.real = this->faultCount6V;
      *(outbuffer + offset + 0) = (u_faultCount6V.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_faultCount6V.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_faultCount6V.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_faultCount6V.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->faultCount6V);
      offset += this->canData.serialize(outbuffer + offset);
      uint32_t length_fpgaVersion_status = strlen(this->fpgaVersion_status);
      varToArr(outbuffer + offset, length_fpgaVersion_status);
      offset += 4;
      memcpy(outbuffer + offset, this->fpgaVersion_status, length_fpgaVersion_status);
      offset += length_fpgaVersion_status;
      uint32_t length_fpgaRevision_status = strlen(this->fpgaRevision_status);
      varToArr(outbuffer + offset, length_fpgaRevision_status);
      offset += 4;
      memcpy(outbuffer + offset, this->fpgaRevision_status, length_fpgaRevision_status);
      offset += length_fpgaRevision_status;
      uint32_t length_fpgaTime_status = strlen(this->fpgaTime_status);
      varToArr(outbuffer + offset, length_fpgaTime_status);
      offset += 4;
      memcpy(outbuffer + offset, this->fpgaTime_status, length_fpgaTime_status);
      offset += length_fpgaTime_status;
      uint32_t length_userButton_status = strlen(this->userButton_status);
      varToArr(outbuffer + offset, length_userButton_status);
      offset += 4;
      memcpy(outbuffer + offset, this->userButton_status, length_userButton_status);
      offset += length_userButton_status;
      uint32_t length_isSysActive_status = strlen(this->isSysActive_status);
      varToArr(outbuffer + offset, length_isSysActive_status);
      offset += 4;
      memcpy(outbuffer + offset, this->isSysActive_status, length_isSysActive_status);
      offset += length_isSysActive_status;
      uint32_t length_isBrownedOut_status = strlen(this->isBrownedOut_status);
      varToArr(outbuffer + offset, length_isBrownedOut_status);
      offset += 4;
      memcpy(outbuffer + offset, this->isBrownedOut_status, length_isBrownedOut_status);
      offset += length_isBrownedOut_status;
      uint32_t length_inputVoltage_status = strlen(this->inputVoltage_status);
      varToArr(outbuffer + offset, length_inputVoltage_status);
      offset += 4;
      memcpy(outbuffer + offset, this->inputVoltage_status, length_inputVoltage_status);
      offset += length_inputVoltage_status;
      uint32_t length_inputCurrent_status = strlen(this->inputCurrent_status);
      varToArr(outbuffer + offset, length_inputCurrent_status);
      offset += 4;
      memcpy(outbuffer + offset, this->inputCurrent_status, length_inputCurrent_status);
      offset += length_inputCurrent_status;
      uint32_t length_voltage3V3_status = strlen(this->voltage3V3_status);
      varToArr(outbuffer + offset, length_voltage3V3_status);
      offset += 4;
      memcpy(outbuffer + offset, this->voltage3V3_status, length_voltage3V3_status);
      offset += length_voltage3V3_status;
      uint32_t length_current3V3_status = strlen(this->current3V3_status);
      varToArr(outbuffer + offset, length_current3V3_status);
      offset += 4;
      memcpy(outbuffer + offset, this->current3V3_status, length_current3V3_status);
      offset += length_current3V3_status;
      uint32_t length_enabled3V3_status = strlen(this->enabled3V3_status);
      varToArr(outbuffer + offset, length_enabled3V3_status);
      offset += 4;
      memcpy(outbuffer + offset, this->enabled3V3_status, length_enabled3V3_status);
      offset += length_enabled3V3_status;
      uint32_t length_faultCount3V3_status = strlen(this->faultCount3V3_status);
      varToArr(outbuffer + offset, length_faultCount3V3_status);
      offset += 4;
      memcpy(outbuffer + offset, this->faultCount3V3_status, length_faultCount3V3_status);
      offset += length_faultCount3V3_status;
      uint32_t length_voltage5V_status = strlen(this->voltage5V_status);
      varToArr(outbuffer + offset, length_voltage5V_status);
      offset += 4;
      memcpy(outbuffer + offset, this->voltage5V_status, length_voltage5V_status);
      offset += length_voltage5V_status;
      uint32_t length_current5V_status = strlen(this->current5V_status);
      varToArr(outbuffer + offset, length_current5V_status);
      offset += 4;
      memcpy(outbuffer + offset, this->current5V_status, length_current5V_status);
      offset += length_current5V_status;
      uint32_t length_enabled5V_status = strlen(this->enabled5V_status);
      varToArr(outbuffer + offset, length_enabled5V_status);
      offset += 4;
      memcpy(outbuffer + offset, this->enabled5V_status, length_enabled5V_status);
      offset += length_enabled5V_status;
      uint32_t length_faultCount5V_status = strlen(this->faultCount5V_status);
      varToArr(outbuffer + offset, length_faultCount5V_status);
      offset += 4;
      memcpy(outbuffer + offset, this->faultCount5V_status, length_faultCount5V_status);
      offset += length_faultCount5V_status;
      uint32_t length_voltage6V_status = strlen(this->voltage6V_status);
      varToArr(outbuffer + offset, length_voltage6V_status);
      offset += 4;
      memcpy(outbuffer + offset, this->voltage6V_status, length_voltage6V_status);
      offset += length_voltage6V_status;
      uint32_t length_current6V_status = strlen(this->current6V_status);
      varToArr(outbuffer + offset, length_current6V_status);
      offset += 4;
      memcpy(outbuffer + offset, this->current6V_status, length_current6V_status);
      offset += length_current6V_status;
      uint32_t length_enabled6V_status = strlen(this->enabled6V_status);
      varToArr(outbuffer + offset, length_enabled6V_status);
      offset += 4;
      memcpy(outbuffer + offset, this->enabled6V_status, length_enabled6V_status);
      offset += length_enabled6V_status;
      uint32_t length_faultCount6V_status = strlen(this->faultCount6V_status);
      varToArr(outbuffer + offset, length_faultCount6V_status);
      offset += 4;
      memcpy(outbuffer + offset, this->faultCount6V_status, length_faultCount6V_status);
      offset += length_faultCount6V_status;
      uint32_t length_canData_status = strlen(this->canData_status);
      varToArr(outbuffer + offset, length_canData_status);
      offset += 4;
      memcpy(outbuffer + offset, this->canData_status, length_canData_status);
      offset += length_canData_status;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_fpgaVersion;
      u_fpgaVersion.base = 0;
      u_fpgaVersion.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fpgaVersion.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fpgaVersion.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fpgaVersion.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->fpgaVersion = u_fpgaVersion.real;
      offset += sizeof(this->fpgaVersion);
      union {
        int64_t real;
        uint64_t base;
      } u_fpgaRevision;
      u_fpgaRevision.base = 0;
      u_fpgaRevision.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fpgaRevision.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fpgaRevision.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fpgaRevision.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_fpgaRevision.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_fpgaRevision.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_fpgaRevision.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_fpgaRevision.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->fpgaRevision = u_fpgaRevision.real;
      offset += sizeof(this->fpgaRevision);
      this->fpgaTime =  ((uint64_t) (*(inbuffer + offset)));
      this->fpgaTime |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->fpgaTime |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->fpgaTime |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->fpgaTime |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      this->fpgaTime |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      this->fpgaTime |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      this->fpgaTime |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      offset += sizeof(this->fpgaTime);
      union {
        bool real;
        uint8_t base;
      } u_userButton;
      u_userButton.base = 0;
      u_userButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->userButton = u_userButton.real;
      offset += sizeof(this->userButton);
      union {
        bool real;
        uint8_t base;
      } u_isSysActive;
      u_isSysActive.base = 0;
      u_isSysActive.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->isSysActive = u_isSysActive.real;
      offset += sizeof(this->isSysActive);
      union {
        bool real;
        uint8_t base;
      } u_isBrownedOut;
      u_isBrownedOut.base = 0;
      u_isBrownedOut.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->isBrownedOut = u_isBrownedOut.real;
      offset += sizeof(this->isBrownedOut);
      union {
        double real;
        uint64_t base;
      } u_inputVoltage;
      u_inputVoltage.base = 0;
      u_inputVoltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_inputVoltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_inputVoltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_inputVoltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_inputVoltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_inputVoltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_inputVoltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_inputVoltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->inputVoltage = u_inputVoltage.real;
      offset += sizeof(this->inputVoltage);
      union {
        double real;
        uint64_t base;
      } u_inputCurrent;
      u_inputCurrent.base = 0;
      u_inputCurrent.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_inputCurrent.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_inputCurrent.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_inputCurrent.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_inputCurrent.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_inputCurrent.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_inputCurrent.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_inputCurrent.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->inputCurrent = u_inputCurrent.real;
      offset += sizeof(this->inputCurrent);
      union {
        double real;
        uint64_t base;
      } u_voltage3V3;
      u_voltage3V3.base = 0;
      u_voltage3V3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_voltage3V3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_voltage3V3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_voltage3V3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_voltage3V3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_voltage3V3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_voltage3V3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_voltage3V3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->voltage3V3 = u_voltage3V3.real;
      offset += sizeof(this->voltage3V3);
      union {
        double real;
        uint64_t base;
      } u_current3V3;
      u_current3V3.base = 0;
      u_current3V3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current3V3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_current3V3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_current3V3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_current3V3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_current3V3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_current3V3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_current3V3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->current3V3 = u_current3V3.real;
      offset += sizeof(this->current3V3);
      union {
        bool real;
        uint8_t base;
      } u_enabled3V3;
      u_enabled3V3.base = 0;
      u_enabled3V3.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->enabled3V3 = u_enabled3V3.real;
      offset += sizeof(this->enabled3V3);
      union {
        int32_t real;
        uint32_t base;
      } u_faultCount3V3;
      u_faultCount3V3.base = 0;
      u_faultCount3V3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_faultCount3V3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_faultCount3V3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_faultCount3V3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->faultCount3V3 = u_faultCount3V3.real;
      offset += sizeof(this->faultCount3V3);
      union {
        double real;
        uint64_t base;
      } u_voltage5V;
      u_voltage5V.base = 0;
      u_voltage5V.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_voltage5V.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_voltage5V.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_voltage5V.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_voltage5V.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_voltage5V.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_voltage5V.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_voltage5V.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->voltage5V = u_voltage5V.real;
      offset += sizeof(this->voltage5V);
      union {
        double real;
        uint64_t base;
      } u_current5V;
      u_current5V.base = 0;
      u_current5V.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current5V.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_current5V.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_current5V.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_current5V.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_current5V.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_current5V.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_current5V.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->current5V = u_current5V.real;
      offset += sizeof(this->current5V);
      union {
        bool real;
        uint8_t base;
      } u_enabled5V;
      u_enabled5V.base = 0;
      u_enabled5V.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->enabled5V = u_enabled5V.real;
      offset += sizeof(this->enabled5V);
      union {
        int32_t real;
        uint32_t base;
      } u_faultCount5V;
      u_faultCount5V.base = 0;
      u_faultCount5V.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_faultCount5V.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_faultCount5V.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_faultCount5V.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->faultCount5V = u_faultCount5V.real;
      offset += sizeof(this->faultCount5V);
      union {
        double real;
        uint64_t base;
      } u_voltage6V;
      u_voltage6V.base = 0;
      u_voltage6V.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_voltage6V.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_voltage6V.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_voltage6V.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_voltage6V.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_voltage6V.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_voltage6V.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_voltage6V.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->voltage6V = u_voltage6V.real;
      offset += sizeof(this->voltage6V);
      union {
        double real;
        uint64_t base;
      } u_current6V;
      u_current6V.base = 0;
      u_current6V.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current6V.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_current6V.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_current6V.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_current6V.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_current6V.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_current6V.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_current6V.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->current6V = u_current6V.real;
      offset += sizeof(this->current6V);
      union {
        bool real;
        uint8_t base;
      } u_enabled6V;
      u_enabled6V.base = 0;
      u_enabled6V.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->enabled6V = u_enabled6V.real;
      offset += sizeof(this->enabled6V);
      union {
        int32_t real;
        uint32_t base;
      } u_faultCount6V;
      u_faultCount6V.base = 0;
      u_faultCount6V.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_faultCount6V.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_faultCount6V.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_faultCount6V.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->faultCount6V = u_faultCount6V.real;
      offset += sizeof(this->faultCount6V);
      offset += this->canData.deserialize(inbuffer + offset);
      uint32_t length_fpgaVersion_status;
      arrToVar(length_fpgaVersion_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_fpgaVersion_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_fpgaVersion_status-1]=0;
      this->fpgaVersion_status = (char *)(inbuffer + offset-1);
      offset += length_fpgaVersion_status;
      uint32_t length_fpgaRevision_status;
      arrToVar(length_fpgaRevision_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_fpgaRevision_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_fpgaRevision_status-1]=0;
      this->fpgaRevision_status = (char *)(inbuffer + offset-1);
      offset += length_fpgaRevision_status;
      uint32_t length_fpgaTime_status;
      arrToVar(length_fpgaTime_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_fpgaTime_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_fpgaTime_status-1]=0;
      this->fpgaTime_status = (char *)(inbuffer + offset-1);
      offset += length_fpgaTime_status;
      uint32_t length_userButton_status;
      arrToVar(length_userButton_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_userButton_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_userButton_status-1]=0;
      this->userButton_status = (char *)(inbuffer + offset-1);
      offset += length_userButton_status;
      uint32_t length_isSysActive_status;
      arrToVar(length_isSysActive_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_isSysActive_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_isSysActive_status-1]=0;
      this->isSysActive_status = (char *)(inbuffer + offset-1);
      offset += length_isSysActive_status;
      uint32_t length_isBrownedOut_status;
      arrToVar(length_isBrownedOut_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_isBrownedOut_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_isBrownedOut_status-1]=0;
      this->isBrownedOut_status = (char *)(inbuffer + offset-1);
      offset += length_isBrownedOut_status;
      uint32_t length_inputVoltage_status;
      arrToVar(length_inputVoltage_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_inputVoltage_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_inputVoltage_status-1]=0;
      this->inputVoltage_status = (char *)(inbuffer + offset-1);
      offset += length_inputVoltage_status;
      uint32_t length_inputCurrent_status;
      arrToVar(length_inputCurrent_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_inputCurrent_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_inputCurrent_status-1]=0;
      this->inputCurrent_status = (char *)(inbuffer + offset-1);
      offset += length_inputCurrent_status;
      uint32_t length_voltage3V3_status;
      arrToVar(length_voltage3V3_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_voltage3V3_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_voltage3V3_status-1]=0;
      this->voltage3V3_status = (char *)(inbuffer + offset-1);
      offset += length_voltage3V3_status;
      uint32_t length_current3V3_status;
      arrToVar(length_current3V3_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_current3V3_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_current3V3_status-1]=0;
      this->current3V3_status = (char *)(inbuffer + offset-1);
      offset += length_current3V3_status;
      uint32_t length_enabled3V3_status;
      arrToVar(length_enabled3V3_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_enabled3V3_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_enabled3V3_status-1]=0;
      this->enabled3V3_status = (char *)(inbuffer + offset-1);
      offset += length_enabled3V3_status;
      uint32_t length_faultCount3V3_status;
      arrToVar(length_faultCount3V3_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_faultCount3V3_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_faultCount3V3_status-1]=0;
      this->faultCount3V3_status = (char *)(inbuffer + offset-1);
      offset += length_faultCount3V3_status;
      uint32_t length_voltage5V_status;
      arrToVar(length_voltage5V_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_voltage5V_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_voltage5V_status-1]=0;
      this->voltage5V_status = (char *)(inbuffer + offset-1);
      offset += length_voltage5V_status;
      uint32_t length_current5V_status;
      arrToVar(length_current5V_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_current5V_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_current5V_status-1]=0;
      this->current5V_status = (char *)(inbuffer + offset-1);
      offset += length_current5V_status;
      uint32_t length_enabled5V_status;
      arrToVar(length_enabled5V_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_enabled5V_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_enabled5V_status-1]=0;
      this->enabled5V_status = (char *)(inbuffer + offset-1);
      offset += length_enabled5V_status;
      uint32_t length_faultCount5V_status;
      arrToVar(length_faultCount5V_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_faultCount5V_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_faultCount5V_status-1]=0;
      this->faultCount5V_status = (char *)(inbuffer + offset-1);
      offset += length_faultCount5V_status;
      uint32_t length_voltage6V_status;
      arrToVar(length_voltage6V_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_voltage6V_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_voltage6V_status-1]=0;
      this->voltage6V_status = (char *)(inbuffer + offset-1);
      offset += length_voltage6V_status;
      uint32_t length_current6V_status;
      arrToVar(length_current6V_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_current6V_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_current6V_status-1]=0;
      this->current6V_status = (char *)(inbuffer + offset-1);
      offset += length_current6V_status;
      uint32_t length_enabled6V_status;
      arrToVar(length_enabled6V_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_enabled6V_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_enabled6V_status-1]=0;
      this->enabled6V_status = (char *)(inbuffer + offset-1);
      offset += length_enabled6V_status;
      uint32_t length_faultCount6V_status;
      arrToVar(length_faultCount6V_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_faultCount6V_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_faultCount6V_status-1]=0;
      this->faultCount6V_status = (char *)(inbuffer + offset-1);
      offset += length_faultCount6V_status;
      uint32_t length_canData_status;
      arrToVar(length_canData_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_canData_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_canData_status-1]=0;
      this->canData_status = (char *)(inbuffer + offset-1);
      offset += length_canData_status;
     return offset;
    }

    virtual const char * getType() override { return "frc_msgs/RobotControllerData"; };
    virtual const char * getMD5() override { return "f0f7d1043ed64477965e4fab3c0b99b2"; };

  };

}
#endif
