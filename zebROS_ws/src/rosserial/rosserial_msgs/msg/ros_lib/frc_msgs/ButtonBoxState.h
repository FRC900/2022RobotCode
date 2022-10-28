#ifndef _ROS_frc_msgs_ButtonBoxState_h
#define _ROS_frc_msgs_ButtonBoxState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace frc_msgs
{

  class ButtonBoxState : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef bool _lockingSwitchButton_type;
      _lockingSwitchButton_type lockingSwitchButton;
      typedef bool _lockingSwitchPress_type;
      _lockingSwitchPress_type lockingSwitchPress;
      typedef bool _lockingSwitchRelease_type;
      _lockingSwitchRelease_type lockingSwitchRelease;
      typedef bool _topRedButton_type;
      _topRedButton_type topRedButton;
      typedef bool _topRedPress_type;
      _topRedPress_type topRedPress;
      typedef bool _topRedRelease_type;
      _topRedRelease_type topRedRelease;
      typedef bool _leftRedButton_type;
      _leftRedButton_type leftRedButton;
      typedef bool _leftRedPress_type;
      _leftRedPress_type leftRedPress;
      typedef bool _leftRedRelease_type;
      _leftRedRelease_type leftRedRelease;
      typedef bool _rightRedButton_type;
      _rightRedButton_type rightRedButton;
      typedef bool _rightRedPress_type;
      _rightRedPress_type rightRedPress;
      typedef bool _rightRedRelease_type;
      _rightRedRelease_type rightRedRelease;
      typedef bool _leftSwitchUpButton_type;
      _leftSwitchUpButton_type leftSwitchUpButton;
      typedef bool _leftSwitchUpPress_type;
      _leftSwitchUpPress_type leftSwitchUpPress;
      typedef bool _leftSwitchUpRelease_type;
      _leftSwitchUpRelease_type leftSwitchUpRelease;
      typedef bool _leftSwitchDownButton_type;
      _leftSwitchDownButton_type leftSwitchDownButton;
      typedef bool _leftSwitchDownPress_type;
      _leftSwitchDownPress_type leftSwitchDownPress;
      typedef bool _leftSwitchDownRelease_type;
      _leftSwitchDownRelease_type leftSwitchDownRelease;
      typedef bool _rightSwitchUpButton_type;
      _rightSwitchUpButton_type rightSwitchUpButton;
      typedef bool _rightSwitchUpPress_type;
      _rightSwitchUpPress_type rightSwitchUpPress;
      typedef bool _rightSwitchUpRelease_type;
      _rightSwitchUpRelease_type rightSwitchUpRelease;
      typedef bool _rightSwitchDownButton_type;
      _rightSwitchDownButton_type rightSwitchDownButton;
      typedef bool _rightSwitchDownPress_type;
      _rightSwitchDownPress_type rightSwitchDownPress;
      typedef bool _rightSwitchDownRelease_type;
      _rightSwitchDownRelease_type rightSwitchDownRelease;
      typedef bool _leftBlueButton_type;
      _leftBlueButton_type leftBlueButton;
      typedef bool _leftBluePress_type;
      _leftBluePress_type leftBluePress;
      typedef bool _leftBlueRelease_type;
      _leftBlueRelease_type leftBlueRelease;
      typedef bool _rightBlueButton_type;
      _rightBlueButton_type rightBlueButton;
      typedef bool _rightBluePress_type;
      _rightBluePress_type rightBluePress;
      typedef bool _rightBlueRelease_type;
      _rightBlueRelease_type rightBlueRelease;
      typedef bool _yellowButton_type;
      _yellowButton_type yellowButton;
      typedef bool _yellowPress_type;
      _yellowPress_type yellowPress;
      typedef bool _yellowRelease_type;
      _yellowRelease_type yellowRelease;
      typedef bool _leftGreenButton_type;
      _leftGreenButton_type leftGreenButton;
      typedef bool _leftGreenPress_type;
      _leftGreenPress_type leftGreenPress;
      typedef bool _leftGreenRelease_type;
      _leftGreenRelease_type leftGreenRelease;
      typedef bool _rightGreenButton_type;
      _rightGreenButton_type rightGreenButton;
      typedef bool _rightGreenPress_type;
      _rightGreenPress_type rightGreenPress;
      typedef bool _rightGreenRelease_type;
      _rightGreenRelease_type rightGreenRelease;
      typedef bool _topGreenButton_type;
      _topGreenButton_type topGreenButton;
      typedef bool _topGreenPress_type;
      _topGreenPress_type topGreenPress;
      typedef bool _topGreenRelease_type;
      _topGreenRelease_type topGreenRelease;
      typedef bool _bottomGreenButton_type;
      _bottomGreenButton_type bottomGreenButton;
      typedef bool _bottomGreenPress_type;
      _bottomGreenPress_type bottomGreenPress;
      typedef bool _bottomGreenRelease_type;
      _bottomGreenRelease_type bottomGreenRelease;
      typedef bool _bottomSwitchUpButton_type;
      _bottomSwitchUpButton_type bottomSwitchUpButton;
      typedef bool _bottomSwitchUpPress_type;
      _bottomSwitchUpPress_type bottomSwitchUpPress;
      typedef bool _bottomSwitchUpRelease_type;
      _bottomSwitchUpRelease_type bottomSwitchUpRelease;
      typedef bool _bottomSwitchDownButton_type;
      _bottomSwitchDownButton_type bottomSwitchDownButton;
      typedef bool _bottomSwitchDownPress_type;
      _bottomSwitchDownPress_type bottomSwitchDownPress;
      typedef bool _bottomSwitchDownRelease_type;
      _bottomSwitchDownRelease_type bottomSwitchDownRelease;

    ButtonBoxState():
      header(),
      lockingSwitchButton(0),
      lockingSwitchPress(0),
      lockingSwitchRelease(0),
      topRedButton(0),
      topRedPress(0),
      topRedRelease(0),
      leftRedButton(0),
      leftRedPress(0),
      leftRedRelease(0),
      rightRedButton(0),
      rightRedPress(0),
      rightRedRelease(0),
      leftSwitchUpButton(0),
      leftSwitchUpPress(0),
      leftSwitchUpRelease(0),
      leftSwitchDownButton(0),
      leftSwitchDownPress(0),
      leftSwitchDownRelease(0),
      rightSwitchUpButton(0),
      rightSwitchUpPress(0),
      rightSwitchUpRelease(0),
      rightSwitchDownButton(0),
      rightSwitchDownPress(0),
      rightSwitchDownRelease(0),
      leftBlueButton(0),
      leftBluePress(0),
      leftBlueRelease(0),
      rightBlueButton(0),
      rightBluePress(0),
      rightBlueRelease(0),
      yellowButton(0),
      yellowPress(0),
      yellowRelease(0),
      leftGreenButton(0),
      leftGreenPress(0),
      leftGreenRelease(0),
      rightGreenButton(0),
      rightGreenPress(0),
      rightGreenRelease(0),
      topGreenButton(0),
      topGreenPress(0),
      topGreenRelease(0),
      bottomGreenButton(0),
      bottomGreenPress(0),
      bottomGreenRelease(0),
      bottomSwitchUpButton(0),
      bottomSwitchUpPress(0),
      bottomSwitchUpRelease(0),
      bottomSwitchDownButton(0),
      bottomSwitchDownPress(0),
      bottomSwitchDownRelease(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_lockingSwitchButton;
      u_lockingSwitchButton.real = this->lockingSwitchButton;
      *(outbuffer + offset + 0) = (u_lockingSwitchButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->lockingSwitchButton);
      union {
        bool real;
        uint8_t base;
      } u_lockingSwitchPress;
      u_lockingSwitchPress.real = this->lockingSwitchPress;
      *(outbuffer + offset + 0) = (u_lockingSwitchPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->lockingSwitchPress);
      union {
        bool real;
        uint8_t base;
      } u_lockingSwitchRelease;
      u_lockingSwitchRelease.real = this->lockingSwitchRelease;
      *(outbuffer + offset + 0) = (u_lockingSwitchRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->lockingSwitchRelease);
      union {
        bool real;
        uint8_t base;
      } u_topRedButton;
      u_topRedButton.real = this->topRedButton;
      *(outbuffer + offset + 0) = (u_topRedButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->topRedButton);
      union {
        bool real;
        uint8_t base;
      } u_topRedPress;
      u_topRedPress.real = this->topRedPress;
      *(outbuffer + offset + 0) = (u_topRedPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->topRedPress);
      union {
        bool real;
        uint8_t base;
      } u_topRedRelease;
      u_topRedRelease.real = this->topRedRelease;
      *(outbuffer + offset + 0) = (u_topRedRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->topRedRelease);
      union {
        bool real;
        uint8_t base;
      } u_leftRedButton;
      u_leftRedButton.real = this->leftRedButton;
      *(outbuffer + offset + 0) = (u_leftRedButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftRedButton);
      union {
        bool real;
        uint8_t base;
      } u_leftRedPress;
      u_leftRedPress.real = this->leftRedPress;
      *(outbuffer + offset + 0) = (u_leftRedPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftRedPress);
      union {
        bool real;
        uint8_t base;
      } u_leftRedRelease;
      u_leftRedRelease.real = this->leftRedRelease;
      *(outbuffer + offset + 0) = (u_leftRedRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftRedRelease);
      union {
        bool real;
        uint8_t base;
      } u_rightRedButton;
      u_rightRedButton.real = this->rightRedButton;
      *(outbuffer + offset + 0) = (u_rightRedButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightRedButton);
      union {
        bool real;
        uint8_t base;
      } u_rightRedPress;
      u_rightRedPress.real = this->rightRedPress;
      *(outbuffer + offset + 0) = (u_rightRedPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightRedPress);
      union {
        bool real;
        uint8_t base;
      } u_rightRedRelease;
      u_rightRedRelease.real = this->rightRedRelease;
      *(outbuffer + offset + 0) = (u_rightRedRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightRedRelease);
      union {
        bool real;
        uint8_t base;
      } u_leftSwitchUpButton;
      u_leftSwitchUpButton.real = this->leftSwitchUpButton;
      *(outbuffer + offset + 0) = (u_leftSwitchUpButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftSwitchUpButton);
      union {
        bool real;
        uint8_t base;
      } u_leftSwitchUpPress;
      u_leftSwitchUpPress.real = this->leftSwitchUpPress;
      *(outbuffer + offset + 0) = (u_leftSwitchUpPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftSwitchUpPress);
      union {
        bool real;
        uint8_t base;
      } u_leftSwitchUpRelease;
      u_leftSwitchUpRelease.real = this->leftSwitchUpRelease;
      *(outbuffer + offset + 0) = (u_leftSwitchUpRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftSwitchUpRelease);
      union {
        bool real;
        uint8_t base;
      } u_leftSwitchDownButton;
      u_leftSwitchDownButton.real = this->leftSwitchDownButton;
      *(outbuffer + offset + 0) = (u_leftSwitchDownButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftSwitchDownButton);
      union {
        bool real;
        uint8_t base;
      } u_leftSwitchDownPress;
      u_leftSwitchDownPress.real = this->leftSwitchDownPress;
      *(outbuffer + offset + 0) = (u_leftSwitchDownPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftSwitchDownPress);
      union {
        bool real;
        uint8_t base;
      } u_leftSwitchDownRelease;
      u_leftSwitchDownRelease.real = this->leftSwitchDownRelease;
      *(outbuffer + offset + 0) = (u_leftSwitchDownRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftSwitchDownRelease);
      union {
        bool real;
        uint8_t base;
      } u_rightSwitchUpButton;
      u_rightSwitchUpButton.real = this->rightSwitchUpButton;
      *(outbuffer + offset + 0) = (u_rightSwitchUpButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightSwitchUpButton);
      union {
        bool real;
        uint8_t base;
      } u_rightSwitchUpPress;
      u_rightSwitchUpPress.real = this->rightSwitchUpPress;
      *(outbuffer + offset + 0) = (u_rightSwitchUpPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightSwitchUpPress);
      union {
        bool real;
        uint8_t base;
      } u_rightSwitchUpRelease;
      u_rightSwitchUpRelease.real = this->rightSwitchUpRelease;
      *(outbuffer + offset + 0) = (u_rightSwitchUpRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightSwitchUpRelease);
      union {
        bool real;
        uint8_t base;
      } u_rightSwitchDownButton;
      u_rightSwitchDownButton.real = this->rightSwitchDownButton;
      *(outbuffer + offset + 0) = (u_rightSwitchDownButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightSwitchDownButton);
      union {
        bool real;
        uint8_t base;
      } u_rightSwitchDownPress;
      u_rightSwitchDownPress.real = this->rightSwitchDownPress;
      *(outbuffer + offset + 0) = (u_rightSwitchDownPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightSwitchDownPress);
      union {
        bool real;
        uint8_t base;
      } u_rightSwitchDownRelease;
      u_rightSwitchDownRelease.real = this->rightSwitchDownRelease;
      *(outbuffer + offset + 0) = (u_rightSwitchDownRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightSwitchDownRelease);
      union {
        bool real;
        uint8_t base;
      } u_leftBlueButton;
      u_leftBlueButton.real = this->leftBlueButton;
      *(outbuffer + offset + 0) = (u_leftBlueButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftBlueButton);
      union {
        bool real;
        uint8_t base;
      } u_leftBluePress;
      u_leftBluePress.real = this->leftBluePress;
      *(outbuffer + offset + 0) = (u_leftBluePress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftBluePress);
      union {
        bool real;
        uint8_t base;
      } u_leftBlueRelease;
      u_leftBlueRelease.real = this->leftBlueRelease;
      *(outbuffer + offset + 0) = (u_leftBlueRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftBlueRelease);
      union {
        bool real;
        uint8_t base;
      } u_rightBlueButton;
      u_rightBlueButton.real = this->rightBlueButton;
      *(outbuffer + offset + 0) = (u_rightBlueButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightBlueButton);
      union {
        bool real;
        uint8_t base;
      } u_rightBluePress;
      u_rightBluePress.real = this->rightBluePress;
      *(outbuffer + offset + 0) = (u_rightBluePress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightBluePress);
      union {
        bool real;
        uint8_t base;
      } u_rightBlueRelease;
      u_rightBlueRelease.real = this->rightBlueRelease;
      *(outbuffer + offset + 0) = (u_rightBlueRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightBlueRelease);
      union {
        bool real;
        uint8_t base;
      } u_yellowButton;
      u_yellowButton.real = this->yellowButton;
      *(outbuffer + offset + 0) = (u_yellowButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->yellowButton);
      union {
        bool real;
        uint8_t base;
      } u_yellowPress;
      u_yellowPress.real = this->yellowPress;
      *(outbuffer + offset + 0) = (u_yellowPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->yellowPress);
      union {
        bool real;
        uint8_t base;
      } u_yellowRelease;
      u_yellowRelease.real = this->yellowRelease;
      *(outbuffer + offset + 0) = (u_yellowRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->yellowRelease);
      union {
        bool real;
        uint8_t base;
      } u_leftGreenButton;
      u_leftGreenButton.real = this->leftGreenButton;
      *(outbuffer + offset + 0) = (u_leftGreenButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftGreenButton);
      union {
        bool real;
        uint8_t base;
      } u_leftGreenPress;
      u_leftGreenPress.real = this->leftGreenPress;
      *(outbuffer + offset + 0) = (u_leftGreenPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftGreenPress);
      union {
        bool real;
        uint8_t base;
      } u_leftGreenRelease;
      u_leftGreenRelease.real = this->leftGreenRelease;
      *(outbuffer + offset + 0) = (u_leftGreenRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->leftGreenRelease);
      union {
        bool real;
        uint8_t base;
      } u_rightGreenButton;
      u_rightGreenButton.real = this->rightGreenButton;
      *(outbuffer + offset + 0) = (u_rightGreenButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightGreenButton);
      union {
        bool real;
        uint8_t base;
      } u_rightGreenPress;
      u_rightGreenPress.real = this->rightGreenPress;
      *(outbuffer + offset + 0) = (u_rightGreenPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightGreenPress);
      union {
        bool real;
        uint8_t base;
      } u_rightGreenRelease;
      u_rightGreenRelease.real = this->rightGreenRelease;
      *(outbuffer + offset + 0) = (u_rightGreenRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rightGreenRelease);
      union {
        bool real;
        uint8_t base;
      } u_topGreenButton;
      u_topGreenButton.real = this->topGreenButton;
      *(outbuffer + offset + 0) = (u_topGreenButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->topGreenButton);
      union {
        bool real;
        uint8_t base;
      } u_topGreenPress;
      u_topGreenPress.real = this->topGreenPress;
      *(outbuffer + offset + 0) = (u_topGreenPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->topGreenPress);
      union {
        bool real;
        uint8_t base;
      } u_topGreenRelease;
      u_topGreenRelease.real = this->topGreenRelease;
      *(outbuffer + offset + 0) = (u_topGreenRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->topGreenRelease);
      union {
        bool real;
        uint8_t base;
      } u_bottomGreenButton;
      u_bottomGreenButton.real = this->bottomGreenButton;
      *(outbuffer + offset + 0) = (u_bottomGreenButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bottomGreenButton);
      union {
        bool real;
        uint8_t base;
      } u_bottomGreenPress;
      u_bottomGreenPress.real = this->bottomGreenPress;
      *(outbuffer + offset + 0) = (u_bottomGreenPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bottomGreenPress);
      union {
        bool real;
        uint8_t base;
      } u_bottomGreenRelease;
      u_bottomGreenRelease.real = this->bottomGreenRelease;
      *(outbuffer + offset + 0) = (u_bottomGreenRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bottomGreenRelease);
      union {
        bool real;
        uint8_t base;
      } u_bottomSwitchUpButton;
      u_bottomSwitchUpButton.real = this->bottomSwitchUpButton;
      *(outbuffer + offset + 0) = (u_bottomSwitchUpButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bottomSwitchUpButton);
      union {
        bool real;
        uint8_t base;
      } u_bottomSwitchUpPress;
      u_bottomSwitchUpPress.real = this->bottomSwitchUpPress;
      *(outbuffer + offset + 0) = (u_bottomSwitchUpPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bottomSwitchUpPress);
      union {
        bool real;
        uint8_t base;
      } u_bottomSwitchUpRelease;
      u_bottomSwitchUpRelease.real = this->bottomSwitchUpRelease;
      *(outbuffer + offset + 0) = (u_bottomSwitchUpRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bottomSwitchUpRelease);
      union {
        bool real;
        uint8_t base;
      } u_bottomSwitchDownButton;
      u_bottomSwitchDownButton.real = this->bottomSwitchDownButton;
      *(outbuffer + offset + 0) = (u_bottomSwitchDownButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bottomSwitchDownButton);
      union {
        bool real;
        uint8_t base;
      } u_bottomSwitchDownPress;
      u_bottomSwitchDownPress.real = this->bottomSwitchDownPress;
      *(outbuffer + offset + 0) = (u_bottomSwitchDownPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bottomSwitchDownPress);
      union {
        bool real;
        uint8_t base;
      } u_bottomSwitchDownRelease;
      u_bottomSwitchDownRelease.real = this->bottomSwitchDownRelease;
      *(outbuffer + offset + 0) = (u_bottomSwitchDownRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bottomSwitchDownRelease);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_lockingSwitchButton;
      u_lockingSwitchButton.base = 0;
      u_lockingSwitchButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->lockingSwitchButton = u_lockingSwitchButton.real;
      offset += sizeof(this->lockingSwitchButton);
      union {
        bool real;
        uint8_t base;
      } u_lockingSwitchPress;
      u_lockingSwitchPress.base = 0;
      u_lockingSwitchPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->lockingSwitchPress = u_lockingSwitchPress.real;
      offset += sizeof(this->lockingSwitchPress);
      union {
        bool real;
        uint8_t base;
      } u_lockingSwitchRelease;
      u_lockingSwitchRelease.base = 0;
      u_lockingSwitchRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->lockingSwitchRelease = u_lockingSwitchRelease.real;
      offset += sizeof(this->lockingSwitchRelease);
      union {
        bool real;
        uint8_t base;
      } u_topRedButton;
      u_topRedButton.base = 0;
      u_topRedButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->topRedButton = u_topRedButton.real;
      offset += sizeof(this->topRedButton);
      union {
        bool real;
        uint8_t base;
      } u_topRedPress;
      u_topRedPress.base = 0;
      u_topRedPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->topRedPress = u_topRedPress.real;
      offset += sizeof(this->topRedPress);
      union {
        bool real;
        uint8_t base;
      } u_topRedRelease;
      u_topRedRelease.base = 0;
      u_topRedRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->topRedRelease = u_topRedRelease.real;
      offset += sizeof(this->topRedRelease);
      union {
        bool real;
        uint8_t base;
      } u_leftRedButton;
      u_leftRedButton.base = 0;
      u_leftRedButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftRedButton = u_leftRedButton.real;
      offset += sizeof(this->leftRedButton);
      union {
        bool real;
        uint8_t base;
      } u_leftRedPress;
      u_leftRedPress.base = 0;
      u_leftRedPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftRedPress = u_leftRedPress.real;
      offset += sizeof(this->leftRedPress);
      union {
        bool real;
        uint8_t base;
      } u_leftRedRelease;
      u_leftRedRelease.base = 0;
      u_leftRedRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftRedRelease = u_leftRedRelease.real;
      offset += sizeof(this->leftRedRelease);
      union {
        bool real;
        uint8_t base;
      } u_rightRedButton;
      u_rightRedButton.base = 0;
      u_rightRedButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightRedButton = u_rightRedButton.real;
      offset += sizeof(this->rightRedButton);
      union {
        bool real;
        uint8_t base;
      } u_rightRedPress;
      u_rightRedPress.base = 0;
      u_rightRedPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightRedPress = u_rightRedPress.real;
      offset += sizeof(this->rightRedPress);
      union {
        bool real;
        uint8_t base;
      } u_rightRedRelease;
      u_rightRedRelease.base = 0;
      u_rightRedRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightRedRelease = u_rightRedRelease.real;
      offset += sizeof(this->rightRedRelease);
      union {
        bool real;
        uint8_t base;
      } u_leftSwitchUpButton;
      u_leftSwitchUpButton.base = 0;
      u_leftSwitchUpButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftSwitchUpButton = u_leftSwitchUpButton.real;
      offset += sizeof(this->leftSwitchUpButton);
      union {
        bool real;
        uint8_t base;
      } u_leftSwitchUpPress;
      u_leftSwitchUpPress.base = 0;
      u_leftSwitchUpPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftSwitchUpPress = u_leftSwitchUpPress.real;
      offset += sizeof(this->leftSwitchUpPress);
      union {
        bool real;
        uint8_t base;
      } u_leftSwitchUpRelease;
      u_leftSwitchUpRelease.base = 0;
      u_leftSwitchUpRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftSwitchUpRelease = u_leftSwitchUpRelease.real;
      offset += sizeof(this->leftSwitchUpRelease);
      union {
        bool real;
        uint8_t base;
      } u_leftSwitchDownButton;
      u_leftSwitchDownButton.base = 0;
      u_leftSwitchDownButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftSwitchDownButton = u_leftSwitchDownButton.real;
      offset += sizeof(this->leftSwitchDownButton);
      union {
        bool real;
        uint8_t base;
      } u_leftSwitchDownPress;
      u_leftSwitchDownPress.base = 0;
      u_leftSwitchDownPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftSwitchDownPress = u_leftSwitchDownPress.real;
      offset += sizeof(this->leftSwitchDownPress);
      union {
        bool real;
        uint8_t base;
      } u_leftSwitchDownRelease;
      u_leftSwitchDownRelease.base = 0;
      u_leftSwitchDownRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftSwitchDownRelease = u_leftSwitchDownRelease.real;
      offset += sizeof(this->leftSwitchDownRelease);
      union {
        bool real;
        uint8_t base;
      } u_rightSwitchUpButton;
      u_rightSwitchUpButton.base = 0;
      u_rightSwitchUpButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightSwitchUpButton = u_rightSwitchUpButton.real;
      offset += sizeof(this->rightSwitchUpButton);
      union {
        bool real;
        uint8_t base;
      } u_rightSwitchUpPress;
      u_rightSwitchUpPress.base = 0;
      u_rightSwitchUpPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightSwitchUpPress = u_rightSwitchUpPress.real;
      offset += sizeof(this->rightSwitchUpPress);
      union {
        bool real;
        uint8_t base;
      } u_rightSwitchUpRelease;
      u_rightSwitchUpRelease.base = 0;
      u_rightSwitchUpRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightSwitchUpRelease = u_rightSwitchUpRelease.real;
      offset += sizeof(this->rightSwitchUpRelease);
      union {
        bool real;
        uint8_t base;
      } u_rightSwitchDownButton;
      u_rightSwitchDownButton.base = 0;
      u_rightSwitchDownButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightSwitchDownButton = u_rightSwitchDownButton.real;
      offset += sizeof(this->rightSwitchDownButton);
      union {
        bool real;
        uint8_t base;
      } u_rightSwitchDownPress;
      u_rightSwitchDownPress.base = 0;
      u_rightSwitchDownPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightSwitchDownPress = u_rightSwitchDownPress.real;
      offset += sizeof(this->rightSwitchDownPress);
      union {
        bool real;
        uint8_t base;
      } u_rightSwitchDownRelease;
      u_rightSwitchDownRelease.base = 0;
      u_rightSwitchDownRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightSwitchDownRelease = u_rightSwitchDownRelease.real;
      offset += sizeof(this->rightSwitchDownRelease);
      union {
        bool real;
        uint8_t base;
      } u_leftBlueButton;
      u_leftBlueButton.base = 0;
      u_leftBlueButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftBlueButton = u_leftBlueButton.real;
      offset += sizeof(this->leftBlueButton);
      union {
        bool real;
        uint8_t base;
      } u_leftBluePress;
      u_leftBluePress.base = 0;
      u_leftBluePress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftBluePress = u_leftBluePress.real;
      offset += sizeof(this->leftBluePress);
      union {
        bool real;
        uint8_t base;
      } u_leftBlueRelease;
      u_leftBlueRelease.base = 0;
      u_leftBlueRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftBlueRelease = u_leftBlueRelease.real;
      offset += sizeof(this->leftBlueRelease);
      union {
        bool real;
        uint8_t base;
      } u_rightBlueButton;
      u_rightBlueButton.base = 0;
      u_rightBlueButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightBlueButton = u_rightBlueButton.real;
      offset += sizeof(this->rightBlueButton);
      union {
        bool real;
        uint8_t base;
      } u_rightBluePress;
      u_rightBluePress.base = 0;
      u_rightBluePress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightBluePress = u_rightBluePress.real;
      offset += sizeof(this->rightBluePress);
      union {
        bool real;
        uint8_t base;
      } u_rightBlueRelease;
      u_rightBlueRelease.base = 0;
      u_rightBlueRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightBlueRelease = u_rightBlueRelease.real;
      offset += sizeof(this->rightBlueRelease);
      union {
        bool real;
        uint8_t base;
      } u_yellowButton;
      u_yellowButton.base = 0;
      u_yellowButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->yellowButton = u_yellowButton.real;
      offset += sizeof(this->yellowButton);
      union {
        bool real;
        uint8_t base;
      } u_yellowPress;
      u_yellowPress.base = 0;
      u_yellowPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->yellowPress = u_yellowPress.real;
      offset += sizeof(this->yellowPress);
      union {
        bool real;
        uint8_t base;
      } u_yellowRelease;
      u_yellowRelease.base = 0;
      u_yellowRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->yellowRelease = u_yellowRelease.real;
      offset += sizeof(this->yellowRelease);
      union {
        bool real;
        uint8_t base;
      } u_leftGreenButton;
      u_leftGreenButton.base = 0;
      u_leftGreenButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftGreenButton = u_leftGreenButton.real;
      offset += sizeof(this->leftGreenButton);
      union {
        bool real;
        uint8_t base;
      } u_leftGreenPress;
      u_leftGreenPress.base = 0;
      u_leftGreenPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftGreenPress = u_leftGreenPress.real;
      offset += sizeof(this->leftGreenPress);
      union {
        bool real;
        uint8_t base;
      } u_leftGreenRelease;
      u_leftGreenRelease.base = 0;
      u_leftGreenRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->leftGreenRelease = u_leftGreenRelease.real;
      offset += sizeof(this->leftGreenRelease);
      union {
        bool real;
        uint8_t base;
      } u_rightGreenButton;
      u_rightGreenButton.base = 0;
      u_rightGreenButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightGreenButton = u_rightGreenButton.real;
      offset += sizeof(this->rightGreenButton);
      union {
        bool real;
        uint8_t base;
      } u_rightGreenPress;
      u_rightGreenPress.base = 0;
      u_rightGreenPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightGreenPress = u_rightGreenPress.real;
      offset += sizeof(this->rightGreenPress);
      union {
        bool real;
        uint8_t base;
      } u_rightGreenRelease;
      u_rightGreenRelease.base = 0;
      u_rightGreenRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rightGreenRelease = u_rightGreenRelease.real;
      offset += sizeof(this->rightGreenRelease);
      union {
        bool real;
        uint8_t base;
      } u_topGreenButton;
      u_topGreenButton.base = 0;
      u_topGreenButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->topGreenButton = u_topGreenButton.real;
      offset += sizeof(this->topGreenButton);
      union {
        bool real;
        uint8_t base;
      } u_topGreenPress;
      u_topGreenPress.base = 0;
      u_topGreenPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->topGreenPress = u_topGreenPress.real;
      offset += sizeof(this->topGreenPress);
      union {
        bool real;
        uint8_t base;
      } u_topGreenRelease;
      u_topGreenRelease.base = 0;
      u_topGreenRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->topGreenRelease = u_topGreenRelease.real;
      offset += sizeof(this->topGreenRelease);
      union {
        bool real;
        uint8_t base;
      } u_bottomGreenButton;
      u_bottomGreenButton.base = 0;
      u_bottomGreenButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bottomGreenButton = u_bottomGreenButton.real;
      offset += sizeof(this->bottomGreenButton);
      union {
        bool real;
        uint8_t base;
      } u_bottomGreenPress;
      u_bottomGreenPress.base = 0;
      u_bottomGreenPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bottomGreenPress = u_bottomGreenPress.real;
      offset += sizeof(this->bottomGreenPress);
      union {
        bool real;
        uint8_t base;
      } u_bottomGreenRelease;
      u_bottomGreenRelease.base = 0;
      u_bottomGreenRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bottomGreenRelease = u_bottomGreenRelease.real;
      offset += sizeof(this->bottomGreenRelease);
      union {
        bool real;
        uint8_t base;
      } u_bottomSwitchUpButton;
      u_bottomSwitchUpButton.base = 0;
      u_bottomSwitchUpButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bottomSwitchUpButton = u_bottomSwitchUpButton.real;
      offset += sizeof(this->bottomSwitchUpButton);
      union {
        bool real;
        uint8_t base;
      } u_bottomSwitchUpPress;
      u_bottomSwitchUpPress.base = 0;
      u_bottomSwitchUpPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bottomSwitchUpPress = u_bottomSwitchUpPress.real;
      offset += sizeof(this->bottomSwitchUpPress);
      union {
        bool real;
        uint8_t base;
      } u_bottomSwitchUpRelease;
      u_bottomSwitchUpRelease.base = 0;
      u_bottomSwitchUpRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bottomSwitchUpRelease = u_bottomSwitchUpRelease.real;
      offset += sizeof(this->bottomSwitchUpRelease);
      union {
        bool real;
        uint8_t base;
      } u_bottomSwitchDownButton;
      u_bottomSwitchDownButton.base = 0;
      u_bottomSwitchDownButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bottomSwitchDownButton = u_bottomSwitchDownButton.real;
      offset += sizeof(this->bottomSwitchDownButton);
      union {
        bool real;
        uint8_t base;
      } u_bottomSwitchDownPress;
      u_bottomSwitchDownPress.base = 0;
      u_bottomSwitchDownPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bottomSwitchDownPress = u_bottomSwitchDownPress.real;
      offset += sizeof(this->bottomSwitchDownPress);
      union {
        bool real;
        uint8_t base;
      } u_bottomSwitchDownRelease;
      u_bottomSwitchDownRelease.base = 0;
      u_bottomSwitchDownRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bottomSwitchDownRelease = u_bottomSwitchDownRelease.real;
      offset += sizeof(this->bottomSwitchDownRelease);
     return offset;
    }

    virtual const char * getType() override { return "frc_msgs/ButtonBoxState"; };
    virtual const char * getMD5() override { return "dba0967daa6fd13607939937259091f2"; };

  };

}
#endif
