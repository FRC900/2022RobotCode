#ifndef _ROS_SERVICE_ProfileFollower_h
#define _ROS_SERVICE_ProfileFollower_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "trajectory_msgs/JointTrajectory.h"

namespace robot_visualizer
{

static const char PROFILEFOLLOWER[] = "robot_visualizer/ProfileFollower";

  class ProfileFollowerRequest : public ros::Msg
  {
    public:
      uint32_t joint_trajectories_length;
      typedef trajectory_msgs::JointTrajectory _joint_trajectories_type;
      _joint_trajectories_type st_joint_trajectories;
      _joint_trajectories_type * joint_trajectories;
      typedef int32_t _start_id_type;
      _start_id_type start_id;

    ProfileFollowerRequest():
      joint_trajectories_length(0), st_joint_trajectories(), joint_trajectories(nullptr),
      start_id(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->joint_trajectories_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->joint_trajectories_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->joint_trajectories_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->joint_trajectories_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint_trajectories_length);
      for( uint32_t i = 0; i < joint_trajectories_length; i++){
      offset += this->joint_trajectories[i].serialize(outbuffer + offset);
      }
      union {
        int32_t real;
        uint32_t base;
      } u_start_id;
      u_start_id.real = this->start_id;
      *(outbuffer + offset + 0) = (u_start_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_start_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_start_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_start_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->start_id);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t joint_trajectories_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      joint_trajectories_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      joint_trajectories_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      joint_trajectories_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->joint_trajectories_length);
      if(joint_trajectories_lengthT > joint_trajectories_length)
        this->joint_trajectories = (trajectory_msgs::JointTrajectory*)realloc(this->joint_trajectories, joint_trajectories_lengthT * sizeof(trajectory_msgs::JointTrajectory));
      joint_trajectories_length = joint_trajectories_lengthT;
      for( uint32_t i = 0; i < joint_trajectories_length; i++){
      offset += this->st_joint_trajectories.deserialize(inbuffer + offset);
        memcpy( &(this->joint_trajectories[i]), &(this->st_joint_trajectories), sizeof(trajectory_msgs::JointTrajectory));
      }
      union {
        int32_t real;
        uint32_t base;
      } u_start_id;
      u_start_id.base = 0;
      u_start_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_start_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_start_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_start_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->start_id = u_start_id.real;
      offset += sizeof(this->start_id);
     return offset;
    }

    virtual const char * getType() override { return PROFILEFOLLOWER; };
    virtual const char * getMD5() override { return "285dc06f8c7ef465b1f0999acab8d745"; };

  };

  class ProfileFollowerResponse : public ros::Msg
  {
    public:

    ProfileFollowerResponse()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
     return offset;
    }

    virtual const char * getType() override { return PROFILEFOLLOWER; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class ProfileFollower {
    public:
    typedef ProfileFollowerRequest Request;
    typedef ProfileFollowerResponse Response;
  };

}
#endif
