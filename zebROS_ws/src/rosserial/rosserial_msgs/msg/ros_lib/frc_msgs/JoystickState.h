#ifndef _ROS_frc_msgs_JoystickState_h
#define _ROS_frc_msgs_JoystickState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace frc_msgs
{

  class JoystickState : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef double _leftStickX_type;
      _leftStickX_type leftStickX;
      typedef double _leftStickY_type;
      _leftStickY_type leftStickY;
      typedef double _rightStickX_type;
      _rightStickX_type rightStickX;
      typedef double _rightStickY_type;
      _rightStickY_type rightStickY;
      typedef double _leftTrigger_type;
      _leftTrigger_type leftTrigger;
      typedef double _rightTrigger_type;
      _rightTrigger_type rightTrigger;
      typedef bool _buttonAButton_type;
      _buttonAButton_type buttonAButton;
      typedef bool _buttonAPress_type;
      _buttonAPress_type buttonAPress;
      typedef bool _buttonARelease_type;
      _buttonARelease_type buttonARelease;
      typedef bool _buttonBButton_type;
      _buttonBButton_type buttonBButton;
      typedef bool _buttonBPress_type;
      _buttonBPress_type buttonBPress;
      typedef bool _buttonBRelease_type;
      _buttonBRelease_type buttonBRelease;
      typedef bool _buttonXButton_type;
      _buttonXButton_type buttonXButton;
      typedef bool _buttonXPress_type;
      _buttonXPress_type buttonXPress;
      typedef bool _buttonXRelease_type;
      _buttonXRelease_type buttonXRelease;
      typedef bool _buttonYButton_type;
      _buttonYButton_type buttonYButton;
      typedef bool _buttonYPress_type;
      _buttonYPress_type buttonYPress;
      typedef bool _buttonYRelease_type;
      _buttonYRelease_type buttonYRelease;
      typedef bool _bumperLeftButton_type;
      _bumperLeftButton_type bumperLeftButton;
      typedef bool _bumperLeftPress_type;
      _bumperLeftPress_type bumperLeftPress;
      typedef bool _bumperLeftRelease_type;
      _bumperLeftRelease_type bumperLeftRelease;
      typedef bool _bumperRightButton_type;
      _bumperRightButton_type bumperRightButton;
      typedef bool _bumperRightPress_type;
      _bumperRightPress_type bumperRightPress;
      typedef bool _bumperRightRelease_type;
      _bumperRightRelease_type bumperRightRelease;
      typedef bool _buttonBackButton_type;
      _buttonBackButton_type buttonBackButton;
      typedef bool _buttonBackPress_type;
      _buttonBackPress_type buttonBackPress;
      typedef bool _buttonBackRelease_type;
      _buttonBackRelease_type buttonBackRelease;
      typedef bool _buttonStartButton_type;
      _buttonStartButton_type buttonStartButton;
      typedef bool _buttonStartPress_type;
      _buttonStartPress_type buttonStartPress;
      typedef bool _buttonStartRelease_type;
      _buttonStartRelease_type buttonStartRelease;
      typedef bool _stickLeftButton_type;
      _stickLeftButton_type stickLeftButton;
      typedef bool _stickLeftPress_type;
      _stickLeftPress_type stickLeftPress;
      typedef bool _stickLeftRelease_type;
      _stickLeftRelease_type stickLeftRelease;
      typedef bool _stickRightButton_type;
      _stickRightButton_type stickRightButton;
      typedef bool _stickRightPress_type;
      _stickRightPress_type stickRightPress;
      typedef bool _stickRightRelease_type;
      _stickRightRelease_type stickRightRelease;
      typedef bool _directionUpButton_type;
      _directionUpButton_type directionUpButton;
      typedef bool _directionUpPress_type;
      _directionUpPress_type directionUpPress;
      typedef bool _directionUpRelease_type;
      _directionUpRelease_type directionUpRelease;
      typedef bool _directionDownButton_type;
      _directionDownButton_type directionDownButton;
      typedef bool _directionDownPress_type;
      _directionDownPress_type directionDownPress;
      typedef bool _directionDownRelease_type;
      _directionDownRelease_type directionDownRelease;
      typedef bool _directionLeftButton_type;
      _directionLeftButton_type directionLeftButton;
      typedef bool _directionLeftPress_type;
      _directionLeftPress_type directionLeftPress;
      typedef bool _directionLeftRelease_type;
      _directionLeftRelease_type directionLeftRelease;
      typedef bool _directionRightButton_type;
      _directionRightButton_type directionRightButton;
      typedef bool _directionRightPress_type;
      _directionRightPress_type directionRightPress;
      typedef bool _directionRightRelease_type;
      _directionRightRelease_type directionRightRelease;

    JoystickState():
      header(),
      leftStickX(0),
      leftStickY(0),
      rightStickX(0),
      rightStickY(0),
      leftTrigger(0),
      rightTrigger(0),
      buttonAButton(0),
      buttonAPress(0),
      buttonARelease(0),
      buttonBButton(0),
      buttonBPress(0),
      buttonBRelease(0),
      buttonXButton(0),
      buttonXPress(0),
      buttonXRelease(0),
      buttonYButton(0),
      buttonYPress(0),
      buttonYRelease(0),
      bumperLeftButton(0),
      bumperLeftPress(0),
      bumperLeftRelease(0),
      bumperRightButton(0),
      bumperRightPress(0),
      bumperRightRelease(0),
      buttonBackButton(0),
      buttonBackPress(0),
      buttonBackRelease(0),
      buttonStartButton(0),
      buttonStartPress(0),
      buttonStartRelease(0),
      stickLeftButton(0),
      stickLeftPress(0),
      stickLeftRelease(0),
      stickRightButton(0),
      stickRightPress(0),
      stickRightRelease(0),
      directionUpButton(0),
      directionUpPress(0),
      directionUpRelease(0),
      directionDownButton(0),
      directionDownPress(0),
      directionDownRelease(0),
      directionLeftButton(0),
      directionLeftPress(0),
      directionLeftRelease(0),
      directionRightButton(0),
      directionRightPress(0),
      directionRightRelease(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_leftStickX;
      u_leftStickX.real = this->leftStickX;
      *(outbuffer + offset + 0) = (u_leftStickX.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_leftStickX.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_leftStickX.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_leftStickX.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_leftStickX.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_leftStickX.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_leftStickX.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_leftStickX.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->leftStickX);
      union {
        double real;
        uint64_t base;
      } u_leftStickY;
      u_leftStickY.real = this->leftStickY;
      *(outbuffer + offset + 0) = (u_leftStickY.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_leftStickY.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_leftStickY.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_leftStickY.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_leftStickY.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_leftStickY.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_leftStickY.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_leftStickY.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->leftStickY);
      union {
        double real;
        uint64_t base;
      } u_rightStickX;
      u_rightStickX.real = this->rightStickX;
      *(outbuffer + offset + 0) = (u_rightStickX.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rightStickX.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rightStickX.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rightStickX.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rightStickX.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rightStickX.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rightStickX.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rightStickX.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rightStickX);
      union {
        double real;
        uint64_t base;
      } u_rightStickY;
      u_rightStickY.real = this->rightStickY;
      *(outbuffer + offset + 0) = (u_rightStickY.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rightStickY.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rightStickY.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rightStickY.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rightStickY.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rightStickY.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rightStickY.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rightStickY.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rightStickY);
      union {
        double real;
        uint64_t base;
      } u_leftTrigger;
      u_leftTrigger.real = this->leftTrigger;
      *(outbuffer + offset + 0) = (u_leftTrigger.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_leftTrigger.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_leftTrigger.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_leftTrigger.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_leftTrigger.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_leftTrigger.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_leftTrigger.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_leftTrigger.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->leftTrigger);
      union {
        double real;
        uint64_t base;
      } u_rightTrigger;
      u_rightTrigger.real = this->rightTrigger;
      *(outbuffer + offset + 0) = (u_rightTrigger.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rightTrigger.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rightTrigger.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rightTrigger.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rightTrigger.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rightTrigger.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rightTrigger.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rightTrigger.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rightTrigger);
      union {
        bool real;
        uint8_t base;
      } u_buttonAButton;
      u_buttonAButton.real = this->buttonAButton;
      *(outbuffer + offset + 0) = (u_buttonAButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonAButton);
      union {
        bool real;
        uint8_t base;
      } u_buttonAPress;
      u_buttonAPress.real = this->buttonAPress;
      *(outbuffer + offset + 0) = (u_buttonAPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonAPress);
      union {
        bool real;
        uint8_t base;
      } u_buttonARelease;
      u_buttonARelease.real = this->buttonARelease;
      *(outbuffer + offset + 0) = (u_buttonARelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonARelease);
      union {
        bool real;
        uint8_t base;
      } u_buttonBButton;
      u_buttonBButton.real = this->buttonBButton;
      *(outbuffer + offset + 0) = (u_buttonBButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonBButton);
      union {
        bool real;
        uint8_t base;
      } u_buttonBPress;
      u_buttonBPress.real = this->buttonBPress;
      *(outbuffer + offset + 0) = (u_buttonBPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonBPress);
      union {
        bool real;
        uint8_t base;
      } u_buttonBRelease;
      u_buttonBRelease.real = this->buttonBRelease;
      *(outbuffer + offset + 0) = (u_buttonBRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonBRelease);
      union {
        bool real;
        uint8_t base;
      } u_buttonXButton;
      u_buttonXButton.real = this->buttonXButton;
      *(outbuffer + offset + 0) = (u_buttonXButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonXButton);
      union {
        bool real;
        uint8_t base;
      } u_buttonXPress;
      u_buttonXPress.real = this->buttonXPress;
      *(outbuffer + offset + 0) = (u_buttonXPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonXPress);
      union {
        bool real;
        uint8_t base;
      } u_buttonXRelease;
      u_buttonXRelease.real = this->buttonXRelease;
      *(outbuffer + offset + 0) = (u_buttonXRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonXRelease);
      union {
        bool real;
        uint8_t base;
      } u_buttonYButton;
      u_buttonYButton.real = this->buttonYButton;
      *(outbuffer + offset + 0) = (u_buttonYButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonYButton);
      union {
        bool real;
        uint8_t base;
      } u_buttonYPress;
      u_buttonYPress.real = this->buttonYPress;
      *(outbuffer + offset + 0) = (u_buttonYPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonYPress);
      union {
        bool real;
        uint8_t base;
      } u_buttonYRelease;
      u_buttonYRelease.real = this->buttonYRelease;
      *(outbuffer + offset + 0) = (u_buttonYRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonYRelease);
      union {
        bool real;
        uint8_t base;
      } u_bumperLeftButton;
      u_bumperLeftButton.real = this->bumperLeftButton;
      *(outbuffer + offset + 0) = (u_bumperLeftButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bumperLeftButton);
      union {
        bool real;
        uint8_t base;
      } u_bumperLeftPress;
      u_bumperLeftPress.real = this->bumperLeftPress;
      *(outbuffer + offset + 0) = (u_bumperLeftPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bumperLeftPress);
      union {
        bool real;
        uint8_t base;
      } u_bumperLeftRelease;
      u_bumperLeftRelease.real = this->bumperLeftRelease;
      *(outbuffer + offset + 0) = (u_bumperLeftRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bumperLeftRelease);
      union {
        bool real;
        uint8_t base;
      } u_bumperRightButton;
      u_bumperRightButton.real = this->bumperRightButton;
      *(outbuffer + offset + 0) = (u_bumperRightButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bumperRightButton);
      union {
        bool real;
        uint8_t base;
      } u_bumperRightPress;
      u_bumperRightPress.real = this->bumperRightPress;
      *(outbuffer + offset + 0) = (u_bumperRightPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bumperRightPress);
      union {
        bool real;
        uint8_t base;
      } u_bumperRightRelease;
      u_bumperRightRelease.real = this->bumperRightRelease;
      *(outbuffer + offset + 0) = (u_bumperRightRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->bumperRightRelease);
      union {
        bool real;
        uint8_t base;
      } u_buttonBackButton;
      u_buttonBackButton.real = this->buttonBackButton;
      *(outbuffer + offset + 0) = (u_buttonBackButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonBackButton);
      union {
        bool real;
        uint8_t base;
      } u_buttonBackPress;
      u_buttonBackPress.real = this->buttonBackPress;
      *(outbuffer + offset + 0) = (u_buttonBackPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonBackPress);
      union {
        bool real;
        uint8_t base;
      } u_buttonBackRelease;
      u_buttonBackRelease.real = this->buttonBackRelease;
      *(outbuffer + offset + 0) = (u_buttonBackRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonBackRelease);
      union {
        bool real;
        uint8_t base;
      } u_buttonStartButton;
      u_buttonStartButton.real = this->buttonStartButton;
      *(outbuffer + offset + 0) = (u_buttonStartButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonStartButton);
      union {
        bool real;
        uint8_t base;
      } u_buttonStartPress;
      u_buttonStartPress.real = this->buttonStartPress;
      *(outbuffer + offset + 0) = (u_buttonStartPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonStartPress);
      union {
        bool real;
        uint8_t base;
      } u_buttonStartRelease;
      u_buttonStartRelease.real = this->buttonStartRelease;
      *(outbuffer + offset + 0) = (u_buttonStartRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->buttonStartRelease);
      union {
        bool real;
        uint8_t base;
      } u_stickLeftButton;
      u_stickLeftButton.real = this->stickLeftButton;
      *(outbuffer + offset + 0) = (u_stickLeftButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->stickLeftButton);
      union {
        bool real;
        uint8_t base;
      } u_stickLeftPress;
      u_stickLeftPress.real = this->stickLeftPress;
      *(outbuffer + offset + 0) = (u_stickLeftPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->stickLeftPress);
      union {
        bool real;
        uint8_t base;
      } u_stickLeftRelease;
      u_stickLeftRelease.real = this->stickLeftRelease;
      *(outbuffer + offset + 0) = (u_stickLeftRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->stickLeftRelease);
      union {
        bool real;
        uint8_t base;
      } u_stickRightButton;
      u_stickRightButton.real = this->stickRightButton;
      *(outbuffer + offset + 0) = (u_stickRightButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->stickRightButton);
      union {
        bool real;
        uint8_t base;
      } u_stickRightPress;
      u_stickRightPress.real = this->stickRightPress;
      *(outbuffer + offset + 0) = (u_stickRightPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->stickRightPress);
      union {
        bool real;
        uint8_t base;
      } u_stickRightRelease;
      u_stickRightRelease.real = this->stickRightRelease;
      *(outbuffer + offset + 0) = (u_stickRightRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->stickRightRelease);
      union {
        bool real;
        uint8_t base;
      } u_directionUpButton;
      u_directionUpButton.real = this->directionUpButton;
      *(outbuffer + offset + 0) = (u_directionUpButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->directionUpButton);
      union {
        bool real;
        uint8_t base;
      } u_directionUpPress;
      u_directionUpPress.real = this->directionUpPress;
      *(outbuffer + offset + 0) = (u_directionUpPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->directionUpPress);
      union {
        bool real;
        uint8_t base;
      } u_directionUpRelease;
      u_directionUpRelease.real = this->directionUpRelease;
      *(outbuffer + offset + 0) = (u_directionUpRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->directionUpRelease);
      union {
        bool real;
        uint8_t base;
      } u_directionDownButton;
      u_directionDownButton.real = this->directionDownButton;
      *(outbuffer + offset + 0) = (u_directionDownButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->directionDownButton);
      union {
        bool real;
        uint8_t base;
      } u_directionDownPress;
      u_directionDownPress.real = this->directionDownPress;
      *(outbuffer + offset + 0) = (u_directionDownPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->directionDownPress);
      union {
        bool real;
        uint8_t base;
      } u_directionDownRelease;
      u_directionDownRelease.real = this->directionDownRelease;
      *(outbuffer + offset + 0) = (u_directionDownRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->directionDownRelease);
      union {
        bool real;
        uint8_t base;
      } u_directionLeftButton;
      u_directionLeftButton.real = this->directionLeftButton;
      *(outbuffer + offset + 0) = (u_directionLeftButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->directionLeftButton);
      union {
        bool real;
        uint8_t base;
      } u_directionLeftPress;
      u_directionLeftPress.real = this->directionLeftPress;
      *(outbuffer + offset + 0) = (u_directionLeftPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->directionLeftPress);
      union {
        bool real;
        uint8_t base;
      } u_directionLeftRelease;
      u_directionLeftRelease.real = this->directionLeftRelease;
      *(outbuffer + offset + 0) = (u_directionLeftRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->directionLeftRelease);
      union {
        bool real;
        uint8_t base;
      } u_directionRightButton;
      u_directionRightButton.real = this->directionRightButton;
      *(outbuffer + offset + 0) = (u_directionRightButton.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->directionRightButton);
      union {
        bool real;
        uint8_t base;
      } u_directionRightPress;
      u_directionRightPress.real = this->directionRightPress;
      *(outbuffer + offset + 0) = (u_directionRightPress.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->directionRightPress);
      union {
        bool real;
        uint8_t base;
      } u_directionRightRelease;
      u_directionRightRelease.real = this->directionRightRelease;
      *(outbuffer + offset + 0) = (u_directionRightRelease.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->directionRightRelease);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_leftStickX;
      u_leftStickX.base = 0;
      u_leftStickX.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_leftStickX.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_leftStickX.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_leftStickX.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_leftStickX.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_leftStickX.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_leftStickX.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_leftStickX.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->leftStickX = u_leftStickX.real;
      offset += sizeof(this->leftStickX);
      union {
        double real;
        uint64_t base;
      } u_leftStickY;
      u_leftStickY.base = 0;
      u_leftStickY.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_leftStickY.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_leftStickY.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_leftStickY.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_leftStickY.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_leftStickY.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_leftStickY.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_leftStickY.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->leftStickY = u_leftStickY.real;
      offset += sizeof(this->leftStickY);
      union {
        double real;
        uint64_t base;
      } u_rightStickX;
      u_rightStickX.base = 0;
      u_rightStickX.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rightStickX.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rightStickX.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rightStickX.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_rightStickX.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_rightStickX.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_rightStickX.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_rightStickX.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->rightStickX = u_rightStickX.real;
      offset += sizeof(this->rightStickX);
      union {
        double real;
        uint64_t base;
      } u_rightStickY;
      u_rightStickY.base = 0;
      u_rightStickY.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rightStickY.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rightStickY.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rightStickY.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_rightStickY.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_rightStickY.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_rightStickY.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_rightStickY.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->rightStickY = u_rightStickY.real;
      offset += sizeof(this->rightStickY);
      union {
        double real;
        uint64_t base;
      } u_leftTrigger;
      u_leftTrigger.base = 0;
      u_leftTrigger.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_leftTrigger.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_leftTrigger.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_leftTrigger.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_leftTrigger.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_leftTrigger.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_leftTrigger.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_leftTrigger.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->leftTrigger = u_leftTrigger.real;
      offset += sizeof(this->leftTrigger);
      union {
        double real;
        uint64_t base;
      } u_rightTrigger;
      u_rightTrigger.base = 0;
      u_rightTrigger.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rightTrigger.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rightTrigger.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rightTrigger.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_rightTrigger.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_rightTrigger.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_rightTrigger.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_rightTrigger.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->rightTrigger = u_rightTrigger.real;
      offset += sizeof(this->rightTrigger);
      union {
        bool real;
        uint8_t base;
      } u_buttonAButton;
      u_buttonAButton.base = 0;
      u_buttonAButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonAButton = u_buttonAButton.real;
      offset += sizeof(this->buttonAButton);
      union {
        bool real;
        uint8_t base;
      } u_buttonAPress;
      u_buttonAPress.base = 0;
      u_buttonAPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonAPress = u_buttonAPress.real;
      offset += sizeof(this->buttonAPress);
      union {
        bool real;
        uint8_t base;
      } u_buttonARelease;
      u_buttonARelease.base = 0;
      u_buttonARelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonARelease = u_buttonARelease.real;
      offset += sizeof(this->buttonARelease);
      union {
        bool real;
        uint8_t base;
      } u_buttonBButton;
      u_buttonBButton.base = 0;
      u_buttonBButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonBButton = u_buttonBButton.real;
      offset += sizeof(this->buttonBButton);
      union {
        bool real;
        uint8_t base;
      } u_buttonBPress;
      u_buttonBPress.base = 0;
      u_buttonBPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonBPress = u_buttonBPress.real;
      offset += sizeof(this->buttonBPress);
      union {
        bool real;
        uint8_t base;
      } u_buttonBRelease;
      u_buttonBRelease.base = 0;
      u_buttonBRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonBRelease = u_buttonBRelease.real;
      offset += sizeof(this->buttonBRelease);
      union {
        bool real;
        uint8_t base;
      } u_buttonXButton;
      u_buttonXButton.base = 0;
      u_buttonXButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonXButton = u_buttonXButton.real;
      offset += sizeof(this->buttonXButton);
      union {
        bool real;
        uint8_t base;
      } u_buttonXPress;
      u_buttonXPress.base = 0;
      u_buttonXPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonXPress = u_buttonXPress.real;
      offset += sizeof(this->buttonXPress);
      union {
        bool real;
        uint8_t base;
      } u_buttonXRelease;
      u_buttonXRelease.base = 0;
      u_buttonXRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonXRelease = u_buttonXRelease.real;
      offset += sizeof(this->buttonXRelease);
      union {
        bool real;
        uint8_t base;
      } u_buttonYButton;
      u_buttonYButton.base = 0;
      u_buttonYButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonYButton = u_buttonYButton.real;
      offset += sizeof(this->buttonYButton);
      union {
        bool real;
        uint8_t base;
      } u_buttonYPress;
      u_buttonYPress.base = 0;
      u_buttonYPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonYPress = u_buttonYPress.real;
      offset += sizeof(this->buttonYPress);
      union {
        bool real;
        uint8_t base;
      } u_buttonYRelease;
      u_buttonYRelease.base = 0;
      u_buttonYRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonYRelease = u_buttonYRelease.real;
      offset += sizeof(this->buttonYRelease);
      union {
        bool real;
        uint8_t base;
      } u_bumperLeftButton;
      u_bumperLeftButton.base = 0;
      u_bumperLeftButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bumperLeftButton = u_bumperLeftButton.real;
      offset += sizeof(this->bumperLeftButton);
      union {
        bool real;
        uint8_t base;
      } u_bumperLeftPress;
      u_bumperLeftPress.base = 0;
      u_bumperLeftPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bumperLeftPress = u_bumperLeftPress.real;
      offset += sizeof(this->bumperLeftPress);
      union {
        bool real;
        uint8_t base;
      } u_bumperLeftRelease;
      u_bumperLeftRelease.base = 0;
      u_bumperLeftRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bumperLeftRelease = u_bumperLeftRelease.real;
      offset += sizeof(this->bumperLeftRelease);
      union {
        bool real;
        uint8_t base;
      } u_bumperRightButton;
      u_bumperRightButton.base = 0;
      u_bumperRightButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bumperRightButton = u_bumperRightButton.real;
      offset += sizeof(this->bumperRightButton);
      union {
        bool real;
        uint8_t base;
      } u_bumperRightPress;
      u_bumperRightPress.base = 0;
      u_bumperRightPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bumperRightPress = u_bumperRightPress.real;
      offset += sizeof(this->bumperRightPress);
      union {
        bool real;
        uint8_t base;
      } u_bumperRightRelease;
      u_bumperRightRelease.base = 0;
      u_bumperRightRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->bumperRightRelease = u_bumperRightRelease.real;
      offset += sizeof(this->bumperRightRelease);
      union {
        bool real;
        uint8_t base;
      } u_buttonBackButton;
      u_buttonBackButton.base = 0;
      u_buttonBackButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonBackButton = u_buttonBackButton.real;
      offset += sizeof(this->buttonBackButton);
      union {
        bool real;
        uint8_t base;
      } u_buttonBackPress;
      u_buttonBackPress.base = 0;
      u_buttonBackPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonBackPress = u_buttonBackPress.real;
      offset += sizeof(this->buttonBackPress);
      union {
        bool real;
        uint8_t base;
      } u_buttonBackRelease;
      u_buttonBackRelease.base = 0;
      u_buttonBackRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonBackRelease = u_buttonBackRelease.real;
      offset += sizeof(this->buttonBackRelease);
      union {
        bool real;
        uint8_t base;
      } u_buttonStartButton;
      u_buttonStartButton.base = 0;
      u_buttonStartButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonStartButton = u_buttonStartButton.real;
      offset += sizeof(this->buttonStartButton);
      union {
        bool real;
        uint8_t base;
      } u_buttonStartPress;
      u_buttonStartPress.base = 0;
      u_buttonStartPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonStartPress = u_buttonStartPress.real;
      offset += sizeof(this->buttonStartPress);
      union {
        bool real;
        uint8_t base;
      } u_buttonStartRelease;
      u_buttonStartRelease.base = 0;
      u_buttonStartRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->buttonStartRelease = u_buttonStartRelease.real;
      offset += sizeof(this->buttonStartRelease);
      union {
        bool real;
        uint8_t base;
      } u_stickLeftButton;
      u_stickLeftButton.base = 0;
      u_stickLeftButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->stickLeftButton = u_stickLeftButton.real;
      offset += sizeof(this->stickLeftButton);
      union {
        bool real;
        uint8_t base;
      } u_stickLeftPress;
      u_stickLeftPress.base = 0;
      u_stickLeftPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->stickLeftPress = u_stickLeftPress.real;
      offset += sizeof(this->stickLeftPress);
      union {
        bool real;
        uint8_t base;
      } u_stickLeftRelease;
      u_stickLeftRelease.base = 0;
      u_stickLeftRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->stickLeftRelease = u_stickLeftRelease.real;
      offset += sizeof(this->stickLeftRelease);
      union {
        bool real;
        uint8_t base;
      } u_stickRightButton;
      u_stickRightButton.base = 0;
      u_stickRightButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->stickRightButton = u_stickRightButton.real;
      offset += sizeof(this->stickRightButton);
      union {
        bool real;
        uint8_t base;
      } u_stickRightPress;
      u_stickRightPress.base = 0;
      u_stickRightPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->stickRightPress = u_stickRightPress.real;
      offset += sizeof(this->stickRightPress);
      union {
        bool real;
        uint8_t base;
      } u_stickRightRelease;
      u_stickRightRelease.base = 0;
      u_stickRightRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->stickRightRelease = u_stickRightRelease.real;
      offset += sizeof(this->stickRightRelease);
      union {
        bool real;
        uint8_t base;
      } u_directionUpButton;
      u_directionUpButton.base = 0;
      u_directionUpButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->directionUpButton = u_directionUpButton.real;
      offset += sizeof(this->directionUpButton);
      union {
        bool real;
        uint8_t base;
      } u_directionUpPress;
      u_directionUpPress.base = 0;
      u_directionUpPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->directionUpPress = u_directionUpPress.real;
      offset += sizeof(this->directionUpPress);
      union {
        bool real;
        uint8_t base;
      } u_directionUpRelease;
      u_directionUpRelease.base = 0;
      u_directionUpRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->directionUpRelease = u_directionUpRelease.real;
      offset += sizeof(this->directionUpRelease);
      union {
        bool real;
        uint8_t base;
      } u_directionDownButton;
      u_directionDownButton.base = 0;
      u_directionDownButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->directionDownButton = u_directionDownButton.real;
      offset += sizeof(this->directionDownButton);
      union {
        bool real;
        uint8_t base;
      } u_directionDownPress;
      u_directionDownPress.base = 0;
      u_directionDownPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->directionDownPress = u_directionDownPress.real;
      offset += sizeof(this->directionDownPress);
      union {
        bool real;
        uint8_t base;
      } u_directionDownRelease;
      u_directionDownRelease.base = 0;
      u_directionDownRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->directionDownRelease = u_directionDownRelease.real;
      offset += sizeof(this->directionDownRelease);
      union {
        bool real;
        uint8_t base;
      } u_directionLeftButton;
      u_directionLeftButton.base = 0;
      u_directionLeftButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->directionLeftButton = u_directionLeftButton.real;
      offset += sizeof(this->directionLeftButton);
      union {
        bool real;
        uint8_t base;
      } u_directionLeftPress;
      u_directionLeftPress.base = 0;
      u_directionLeftPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->directionLeftPress = u_directionLeftPress.real;
      offset += sizeof(this->directionLeftPress);
      union {
        bool real;
        uint8_t base;
      } u_directionLeftRelease;
      u_directionLeftRelease.base = 0;
      u_directionLeftRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->directionLeftRelease = u_directionLeftRelease.real;
      offset += sizeof(this->directionLeftRelease);
      union {
        bool real;
        uint8_t base;
      } u_directionRightButton;
      u_directionRightButton.base = 0;
      u_directionRightButton.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->directionRightButton = u_directionRightButton.real;
      offset += sizeof(this->directionRightButton);
      union {
        bool real;
        uint8_t base;
      } u_directionRightPress;
      u_directionRightPress.base = 0;
      u_directionRightPress.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->directionRightPress = u_directionRightPress.real;
      offset += sizeof(this->directionRightPress);
      union {
        bool real;
        uint8_t base;
      } u_directionRightRelease;
      u_directionRightRelease.base = 0;
      u_directionRightRelease.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->directionRightRelease = u_directionRightRelease.real;
      offset += sizeof(this->directionRightRelease);
     return offset;
    }

    virtual const char * getType() override { return "frc_msgs/JoystickState"; };
    virtual const char * getMD5() override { return "94b495e8f7801eaec0cdd481668e94e0"; };

  };

}
#endif
