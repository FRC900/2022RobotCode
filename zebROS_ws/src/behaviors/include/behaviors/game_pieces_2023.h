#ifndef GAMEPIECES_H
#define GAMEPIECES_H

enum SafteyState {
  NONE,
  SAFTEY_HIGH,
  SAFTEY_LOW
};

constexpr std::array mode_to_string = {"INTAKE", "LOW_NODE", "MIDDLE_NODE", "HIGH_NODE"};
constexpr std::array piece_to_string = {"CUBE", "VERTICAL_CONE", "BASE_TOWARDS_US_CONE", "BASE_AWAY_US_CONE"};

#endif // gamepieces_h