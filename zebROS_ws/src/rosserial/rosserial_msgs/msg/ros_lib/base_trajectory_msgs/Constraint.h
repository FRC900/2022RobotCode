#ifndef _ROS_base_trajectory_msgs_Constraint_h
#define _ROS_base_trajectory_msgs_Constraint_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Point.h"

namespace base_trajectory_msgs
{

  class Constraint : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef geometry_msgs::Point _corner1_type;
      _corner1_type corner1;
      typedef geometry_msgs::Point _corner2_type;
      _corner2_type corner2;
      typedef double _max_accel_type;
      _max_accel_type max_accel;
      typedef double _max_decel_type;
      _max_decel_type max_decel;
      typedef double _max_vel_type;
      _max_vel_type max_vel;
      typedef double _max_cent_accel_type;
      _max_cent_accel_type max_cent_accel;
      typedef double _path_limit_distance_type;
      _path_limit_distance_type path_limit_distance;

    Constraint():
      header(),
      corner1(),
      corner2(),
      max_accel(0),
      max_decel(0),
      max_vel(0),
      max_cent_accel(0),
      path_limit_distance(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->corner1.serialize(outbuffer + offset);
      offset += this->corner2.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_max_accel;
      u_max_accel.real = this->max_accel;
      *(outbuffer + offset + 0) = (u_max_accel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_accel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_accel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_accel.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_accel.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_accel.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_accel.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_accel.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_accel);
      union {
        double real;
        uint64_t base;
      } u_max_decel;
      u_max_decel.real = this->max_decel;
      *(outbuffer + offset + 0) = (u_max_decel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_decel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_decel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_decel.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_decel.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_decel.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_decel.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_decel.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_decel);
      union {
        double real;
        uint64_t base;
      } u_max_vel;
      u_max_vel.real = this->max_vel;
      *(outbuffer + offset + 0) = (u_max_vel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_vel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_vel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_vel.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_vel.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_vel.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_vel.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_vel.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_vel);
      union {
        double real;
        uint64_t base;
      } u_max_cent_accel;
      u_max_cent_accel.real = this->max_cent_accel;
      *(outbuffer + offset + 0) = (u_max_cent_accel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_cent_accel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_cent_accel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_cent_accel.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_cent_accel.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_cent_accel.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_cent_accel.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_cent_accel.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_cent_accel);
      union {
        double real;
        uint64_t base;
      } u_path_limit_distance;
      u_path_limit_distance.real = this->path_limit_distance;
      *(outbuffer + offset + 0) = (u_path_limit_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_path_limit_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_path_limit_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_path_limit_distance.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_path_limit_distance.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_path_limit_distance.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_path_limit_distance.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_path_limit_distance.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->path_limit_distance);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->corner1.deserialize(inbuffer + offset);
      offset += this->corner2.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_max_accel;
      u_max_accel.base = 0;
      u_max_accel.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_accel.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_accel.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_accel.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_accel.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_accel.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_accel.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_accel.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_accel = u_max_accel.real;
      offset += sizeof(this->max_accel);
      union {
        double real;
        uint64_t base;
      } u_max_decel;
      u_max_decel.base = 0;
      u_max_decel.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_decel.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_decel.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_decel.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_decel.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_decel.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_decel.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_decel.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_decel = u_max_decel.real;
      offset += sizeof(this->max_decel);
      union {
        double real;
        uint64_t base;
      } u_max_vel;
      u_max_vel.base = 0;
      u_max_vel.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_vel.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_vel.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_vel.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_vel.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_vel.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_vel.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_vel.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_vel = u_max_vel.real;
      offset += sizeof(this->max_vel);
      union {
        double real;
        uint64_t base;
      } u_max_cent_accel;
      u_max_cent_accel.base = 0;
      u_max_cent_accel.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_cent_accel.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_cent_accel.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_cent_accel.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_cent_accel.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_cent_accel.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_cent_accel.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_cent_accel.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_cent_accel = u_max_cent_accel.real;
      offset += sizeof(this->max_cent_accel);
      union {
        double real;
        uint64_t base;
      } u_path_limit_distance;
      u_path_limit_distance.base = 0;
      u_path_limit_distance.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_path_limit_distance.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_path_limit_distance.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_path_limit_distance.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_path_limit_distance.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_path_limit_distance.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_path_limit_distance.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_path_limit_distance.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->path_limit_distance = u_path_limit_distance.real;
      offset += sizeof(this->path_limit_distance);
     return offset;
    }

    virtual const char * getType() override { return "base_trajectory_msgs/Constraint"; };
    virtual const char * getMD5() override { return "194dc80143b289590331e9ed0d703ee6"; };

  };

}
#endif
