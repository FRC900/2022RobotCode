#ifndef _ROS_frc_msgs_MatchSpecificData_h
#define _ROS_frc_msgs_MatchSpecificData_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace frc_msgs
{

  class MatchSpecificData : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef const char* _eventName_type;
      _eventName_type eventName;
      typedef int8_t _matchType_type;
      _matchType_type matchType;
      typedef int8_t _matchNumber_type;
      _matchNumber_type matchNumber;
      typedef int8_t _replayNumber_type;
      _replayNumber_type replayNumber;
      typedef double _matchTimeRemaining_type;
      _matchTimeRemaining_type matchTimeRemaining;
      typedef int8_t _allianceColor_type;
      _allianceColor_type allianceColor;
      typedef int8_t _driverStationLocation_type;
      _driverStationLocation_type driverStationLocation;
      uint32_t gameSpecificData_length;
      typedef uint8_t _gameSpecificData_type;
      _gameSpecificData_type st_gameSpecificData;
      _gameSpecificData_type * gameSpecificData;
      typedef bool _Enabled_type;
      _Enabled_type Enabled;
      typedef bool _Disabled_type;
      _Disabled_type Disabled;
      typedef bool _Autonomous_type;
      _Autonomous_type Autonomous;
      typedef bool _Test_type;
      _Test_type Test;
      typedef bool _FMSAttached_type;
      _FMSAttached_type FMSAttached;
      typedef bool _DSAttached_type;
      _DSAttached_type DSAttached;
      typedef bool _OperatorControl_type;
      _OperatorControl_type OperatorControl;
      typedef bool _EStopped_type;
      _EStopped_type EStopped;
      typedef double _BatteryVoltage_type;
      _BatteryVoltage_type BatteryVoltage;
      typedef const char* _getMatchTimeStatus_type;
      _getMatchTimeStatus_type getMatchTimeStatus;
      typedef const char* _getAllianceStationStatus_type;
      _getAllianceStationStatus_type getAllianceStationStatus;
      typedef const char* _getVinVoltageStatus_type;
      _getVinVoltageStatus_type getVinVoltageStatus;

    MatchSpecificData():
      header(),
      eventName(""),
      matchType(0),
      matchNumber(0),
      replayNumber(0),
      matchTimeRemaining(0),
      allianceColor(0),
      driverStationLocation(0),
      gameSpecificData_length(0), st_gameSpecificData(), gameSpecificData(nullptr),
      Enabled(0),
      Disabled(0),
      Autonomous(0),
      Test(0),
      FMSAttached(0),
      DSAttached(0),
      OperatorControl(0),
      EStopped(0),
      BatteryVoltage(0),
      getMatchTimeStatus(""),
      getAllianceStationStatus(""),
      getVinVoltageStatus("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      uint32_t length_eventName = strlen(this->eventName);
      varToArr(outbuffer + offset, length_eventName);
      offset += 4;
      memcpy(outbuffer + offset, this->eventName, length_eventName);
      offset += length_eventName;
      union {
        int8_t real;
        uint8_t base;
      } u_matchType;
      u_matchType.real = this->matchType;
      *(outbuffer + offset + 0) = (u_matchType.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->matchType);
      union {
        int8_t real;
        uint8_t base;
      } u_matchNumber;
      u_matchNumber.real = this->matchNumber;
      *(outbuffer + offset + 0) = (u_matchNumber.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->matchNumber);
      union {
        int8_t real;
        uint8_t base;
      } u_replayNumber;
      u_replayNumber.real = this->replayNumber;
      *(outbuffer + offset + 0) = (u_replayNumber.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->replayNumber);
      union {
        double real;
        uint64_t base;
      } u_matchTimeRemaining;
      u_matchTimeRemaining.real = this->matchTimeRemaining;
      *(outbuffer + offset + 0) = (u_matchTimeRemaining.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_matchTimeRemaining.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_matchTimeRemaining.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_matchTimeRemaining.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_matchTimeRemaining.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_matchTimeRemaining.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_matchTimeRemaining.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_matchTimeRemaining.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->matchTimeRemaining);
      union {
        int8_t real;
        uint8_t base;
      } u_allianceColor;
      u_allianceColor.real = this->allianceColor;
      *(outbuffer + offset + 0) = (u_allianceColor.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->allianceColor);
      union {
        int8_t real;
        uint8_t base;
      } u_driverStationLocation;
      u_driverStationLocation.real = this->driverStationLocation;
      *(outbuffer + offset + 0) = (u_driverStationLocation.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->driverStationLocation);
      *(outbuffer + offset + 0) = (this->gameSpecificData_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->gameSpecificData_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->gameSpecificData_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->gameSpecificData_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->gameSpecificData_length);
      for( uint32_t i = 0; i < gameSpecificData_length; i++){
      *(outbuffer + offset + 0) = (this->gameSpecificData[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gameSpecificData[i]);
      }
      union {
        bool real;
        uint8_t base;
      } u_Enabled;
      u_Enabled.real = this->Enabled;
      *(outbuffer + offset + 0) = (u_Enabled.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Enabled);
      union {
        bool real;
        uint8_t base;
      } u_Disabled;
      u_Disabled.real = this->Disabled;
      *(outbuffer + offset + 0) = (u_Disabled.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Disabled);
      union {
        bool real;
        uint8_t base;
      } u_Autonomous;
      u_Autonomous.real = this->Autonomous;
      *(outbuffer + offset + 0) = (u_Autonomous.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Autonomous);
      union {
        bool real;
        uint8_t base;
      } u_Test;
      u_Test.real = this->Test;
      *(outbuffer + offset + 0) = (u_Test.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->Test);
      union {
        bool real;
        uint8_t base;
      } u_FMSAttached;
      u_FMSAttached.real = this->FMSAttached;
      *(outbuffer + offset + 0) = (u_FMSAttached.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->FMSAttached);
      union {
        bool real;
        uint8_t base;
      } u_DSAttached;
      u_DSAttached.real = this->DSAttached;
      *(outbuffer + offset + 0) = (u_DSAttached.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->DSAttached);
      union {
        bool real;
        uint8_t base;
      } u_OperatorControl;
      u_OperatorControl.real = this->OperatorControl;
      *(outbuffer + offset + 0) = (u_OperatorControl.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->OperatorControl);
      union {
        bool real;
        uint8_t base;
      } u_EStopped;
      u_EStopped.real = this->EStopped;
      *(outbuffer + offset + 0) = (u_EStopped.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->EStopped);
      union {
        double real;
        uint64_t base;
      } u_BatteryVoltage;
      u_BatteryVoltage.real = this->BatteryVoltage;
      *(outbuffer + offset + 0) = (u_BatteryVoltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_BatteryVoltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_BatteryVoltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_BatteryVoltage.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_BatteryVoltage.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_BatteryVoltage.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_BatteryVoltage.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_BatteryVoltage.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->BatteryVoltage);
      uint32_t length_getMatchTimeStatus = strlen(this->getMatchTimeStatus);
      varToArr(outbuffer + offset, length_getMatchTimeStatus);
      offset += 4;
      memcpy(outbuffer + offset, this->getMatchTimeStatus, length_getMatchTimeStatus);
      offset += length_getMatchTimeStatus;
      uint32_t length_getAllianceStationStatus = strlen(this->getAllianceStationStatus);
      varToArr(outbuffer + offset, length_getAllianceStationStatus);
      offset += 4;
      memcpy(outbuffer + offset, this->getAllianceStationStatus, length_getAllianceStationStatus);
      offset += length_getAllianceStationStatus;
      uint32_t length_getVinVoltageStatus = strlen(this->getVinVoltageStatus);
      varToArr(outbuffer + offset, length_getVinVoltageStatus);
      offset += 4;
      memcpy(outbuffer + offset, this->getVinVoltageStatus, length_getVinVoltageStatus);
      offset += length_getVinVoltageStatus;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t length_eventName;
      arrToVar(length_eventName, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_eventName; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_eventName-1]=0;
      this->eventName = (char *)(inbuffer + offset-1);
      offset += length_eventName;
      union {
        int8_t real;
        uint8_t base;
      } u_matchType;
      u_matchType.base = 0;
      u_matchType.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->matchType = u_matchType.real;
      offset += sizeof(this->matchType);
      union {
        int8_t real;
        uint8_t base;
      } u_matchNumber;
      u_matchNumber.base = 0;
      u_matchNumber.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->matchNumber = u_matchNumber.real;
      offset += sizeof(this->matchNumber);
      union {
        int8_t real;
        uint8_t base;
      } u_replayNumber;
      u_replayNumber.base = 0;
      u_replayNumber.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->replayNumber = u_replayNumber.real;
      offset += sizeof(this->replayNumber);
      union {
        double real;
        uint64_t base;
      } u_matchTimeRemaining;
      u_matchTimeRemaining.base = 0;
      u_matchTimeRemaining.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_matchTimeRemaining.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_matchTimeRemaining.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_matchTimeRemaining.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_matchTimeRemaining.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_matchTimeRemaining.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_matchTimeRemaining.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_matchTimeRemaining.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->matchTimeRemaining = u_matchTimeRemaining.real;
      offset += sizeof(this->matchTimeRemaining);
      union {
        int8_t real;
        uint8_t base;
      } u_allianceColor;
      u_allianceColor.base = 0;
      u_allianceColor.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->allianceColor = u_allianceColor.real;
      offset += sizeof(this->allianceColor);
      union {
        int8_t real;
        uint8_t base;
      } u_driverStationLocation;
      u_driverStationLocation.base = 0;
      u_driverStationLocation.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->driverStationLocation = u_driverStationLocation.real;
      offset += sizeof(this->driverStationLocation);
      uint32_t gameSpecificData_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      gameSpecificData_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      gameSpecificData_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      gameSpecificData_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->gameSpecificData_length);
      if(gameSpecificData_lengthT > gameSpecificData_length)
        this->gameSpecificData = (uint8_t*)realloc(this->gameSpecificData, gameSpecificData_lengthT * sizeof(uint8_t));
      gameSpecificData_length = gameSpecificData_lengthT;
      for( uint32_t i = 0; i < gameSpecificData_length; i++){
      this->st_gameSpecificData =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_gameSpecificData);
        memcpy( &(this->gameSpecificData[i]), &(this->st_gameSpecificData), sizeof(uint8_t));
      }
      union {
        bool real;
        uint8_t base;
      } u_Enabled;
      u_Enabled.base = 0;
      u_Enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->Enabled = u_Enabled.real;
      offset += sizeof(this->Enabled);
      union {
        bool real;
        uint8_t base;
      } u_Disabled;
      u_Disabled.base = 0;
      u_Disabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->Disabled = u_Disabled.real;
      offset += sizeof(this->Disabled);
      union {
        bool real;
        uint8_t base;
      } u_Autonomous;
      u_Autonomous.base = 0;
      u_Autonomous.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->Autonomous = u_Autonomous.real;
      offset += sizeof(this->Autonomous);
      union {
        bool real;
        uint8_t base;
      } u_Test;
      u_Test.base = 0;
      u_Test.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->Test = u_Test.real;
      offset += sizeof(this->Test);
      union {
        bool real;
        uint8_t base;
      } u_FMSAttached;
      u_FMSAttached.base = 0;
      u_FMSAttached.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->FMSAttached = u_FMSAttached.real;
      offset += sizeof(this->FMSAttached);
      union {
        bool real;
        uint8_t base;
      } u_DSAttached;
      u_DSAttached.base = 0;
      u_DSAttached.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->DSAttached = u_DSAttached.real;
      offset += sizeof(this->DSAttached);
      union {
        bool real;
        uint8_t base;
      } u_OperatorControl;
      u_OperatorControl.base = 0;
      u_OperatorControl.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->OperatorControl = u_OperatorControl.real;
      offset += sizeof(this->OperatorControl);
      union {
        bool real;
        uint8_t base;
      } u_EStopped;
      u_EStopped.base = 0;
      u_EStopped.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->EStopped = u_EStopped.real;
      offset += sizeof(this->EStopped);
      union {
        double real;
        uint64_t base;
      } u_BatteryVoltage;
      u_BatteryVoltage.base = 0;
      u_BatteryVoltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_BatteryVoltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_BatteryVoltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_BatteryVoltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_BatteryVoltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_BatteryVoltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_BatteryVoltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_BatteryVoltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->BatteryVoltage = u_BatteryVoltage.real;
      offset += sizeof(this->BatteryVoltage);
      uint32_t length_getMatchTimeStatus;
      arrToVar(length_getMatchTimeStatus, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_getMatchTimeStatus; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_getMatchTimeStatus-1]=0;
      this->getMatchTimeStatus = (char *)(inbuffer + offset-1);
      offset += length_getMatchTimeStatus;
      uint32_t length_getAllianceStationStatus;
      arrToVar(length_getAllianceStationStatus, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_getAllianceStationStatus; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_getAllianceStationStatus-1]=0;
      this->getAllianceStationStatus = (char *)(inbuffer + offset-1);
      offset += length_getAllianceStationStatus;
      uint32_t length_getVinVoltageStatus;
      arrToVar(length_getVinVoltageStatus, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_getVinVoltageStatus; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_getVinVoltageStatus-1]=0;
      this->getVinVoltageStatus = (char *)(inbuffer + offset-1);
      offset += length_getVinVoltageStatus;
     return offset;
    }

    virtual const char * getType() override { return "frc_msgs/MatchSpecificData"; };
    virtual const char * getMD5() override { return "07856deffa63b711cedbb27aa9e78394"; };

  };

}
#endif
