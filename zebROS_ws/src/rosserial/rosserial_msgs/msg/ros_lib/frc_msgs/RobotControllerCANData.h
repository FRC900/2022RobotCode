#ifndef _ROS_frc_msgs_RobotControllerCANData_h
#define _ROS_frc_msgs_RobotControllerCANData_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace frc_msgs
{

  class RobotControllerCANData : public ros::Msg
  {
    public:
      typedef float _percentBusUtilization_type;
      _percentBusUtilization_type percentBusUtilization;
      typedef int32_t _busOffCount_type;
      _busOffCount_type busOffCount;
      typedef int32_t _txFullCount_type;
      _txFullCount_type txFullCount;
      typedef int32_t _receiveErrorCount_type;
      _receiveErrorCount_type receiveErrorCount;
      typedef int32_t _transmitErrorCount_type;
      _transmitErrorCount_type transmitErrorCount;

    RobotControllerCANData():
      percentBusUtilization(0),
      busOffCount(0),
      txFullCount(0),
      receiveErrorCount(0),
      transmitErrorCount(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_percentBusUtilization;
      u_percentBusUtilization.real = this->percentBusUtilization;
      *(outbuffer + offset + 0) = (u_percentBusUtilization.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_percentBusUtilization.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_percentBusUtilization.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_percentBusUtilization.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->percentBusUtilization);
      union {
        int32_t real;
        uint32_t base;
      } u_busOffCount;
      u_busOffCount.real = this->busOffCount;
      *(outbuffer + offset + 0) = (u_busOffCount.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_busOffCount.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_busOffCount.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_busOffCount.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->busOffCount);
      union {
        int32_t real;
        uint32_t base;
      } u_txFullCount;
      u_txFullCount.real = this->txFullCount;
      *(outbuffer + offset + 0) = (u_txFullCount.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_txFullCount.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_txFullCount.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_txFullCount.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->txFullCount);
      union {
        int32_t real;
        uint32_t base;
      } u_receiveErrorCount;
      u_receiveErrorCount.real = this->receiveErrorCount;
      *(outbuffer + offset + 0) = (u_receiveErrorCount.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_receiveErrorCount.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_receiveErrorCount.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_receiveErrorCount.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->receiveErrorCount);
      union {
        int32_t real;
        uint32_t base;
      } u_transmitErrorCount;
      u_transmitErrorCount.real = this->transmitErrorCount;
      *(outbuffer + offset + 0) = (u_transmitErrorCount.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_transmitErrorCount.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_transmitErrorCount.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_transmitErrorCount.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->transmitErrorCount);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_percentBusUtilization;
      u_percentBusUtilization.base = 0;
      u_percentBusUtilization.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_percentBusUtilization.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_percentBusUtilization.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_percentBusUtilization.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->percentBusUtilization = u_percentBusUtilization.real;
      offset += sizeof(this->percentBusUtilization);
      union {
        int32_t real;
        uint32_t base;
      } u_busOffCount;
      u_busOffCount.base = 0;
      u_busOffCount.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_busOffCount.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_busOffCount.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_busOffCount.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->busOffCount = u_busOffCount.real;
      offset += sizeof(this->busOffCount);
      union {
        int32_t real;
        uint32_t base;
      } u_txFullCount;
      u_txFullCount.base = 0;
      u_txFullCount.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_txFullCount.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_txFullCount.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_txFullCount.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->txFullCount = u_txFullCount.real;
      offset += sizeof(this->txFullCount);
      union {
        int32_t real;
        uint32_t base;
      } u_receiveErrorCount;
      u_receiveErrorCount.base = 0;
      u_receiveErrorCount.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_receiveErrorCount.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_receiveErrorCount.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_receiveErrorCount.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->receiveErrorCount = u_receiveErrorCount.real;
      offset += sizeof(this->receiveErrorCount);
      union {
        int32_t real;
        uint32_t base;
      } u_transmitErrorCount;
      u_transmitErrorCount.base = 0;
      u_transmitErrorCount.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_transmitErrorCount.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_transmitErrorCount.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_transmitErrorCount.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->transmitErrorCount = u_transmitErrorCount.real;
      offset += sizeof(this->transmitErrorCount);
     return offset;
    }

    virtual const char * getType() override { return "frc_msgs/RobotControllerCANData"; };
    virtual const char * getMD5() override { return "14b84f7dc25f03687604ab1fd7c46f75"; };

  };

}
#endif
