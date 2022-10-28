#ifndef _ROS_SERVICE_GamePiecePickup_h
#define _ROS_SERVICE_GamePiecePickup_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "nav_msgs/Path.h"
#include "geometry_msgs/Pose.h"

namespace behavior_actions
{

static const char GAMEPIECEPICKUP[] = "behavior_actions/GamePiecePickup";

  class GamePiecePickupRequest : public ros::Msg
  {
    public:
      typedef const char* _object_id_type;
      _object_id_type object_id;
      typedef uint8_t _max_objects_type;
      _max_objects_type max_objects;
      typedef const char* _primary_frame_id_type;
      _primary_frame_id_type primary_frame_id;
      typedef const char* _secondary_object_id_type;
      _secondary_object_id_type secondary_object_id;
      typedef uint8_t _secondary_max_objects_type;
      _secondary_max_objects_type secondary_max_objects;
      typedef double _secondary_max_distance_type;
      _secondary_max_distance_type secondary_max_distance;
      typedef const char* _secondary_frame_id_type;
      _secondary_frame_id_type secondary_frame_id;
      typedef double _min_radius_type;
      _min_radius_type min_radius;
      typedef geometry_msgs::Pose _endpoint_type;
      _endpoint_type endpoint;

    GamePiecePickupRequest():
      object_id(""),
      max_objects(0),
      primary_frame_id(""),
      secondary_object_id(""),
      secondary_max_objects(0),
      secondary_max_distance(0),
      secondary_frame_id(""),
      min_radius(0),
      endpoint()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_object_id = strlen(this->object_id);
      varToArr(outbuffer + offset, length_object_id);
      offset += 4;
      memcpy(outbuffer + offset, this->object_id, length_object_id);
      offset += length_object_id;
      *(outbuffer + offset + 0) = (this->max_objects >> (8 * 0)) & 0xFF;
      offset += sizeof(this->max_objects);
      uint32_t length_primary_frame_id = strlen(this->primary_frame_id);
      varToArr(outbuffer + offset, length_primary_frame_id);
      offset += 4;
      memcpy(outbuffer + offset, this->primary_frame_id, length_primary_frame_id);
      offset += length_primary_frame_id;
      uint32_t length_secondary_object_id = strlen(this->secondary_object_id);
      varToArr(outbuffer + offset, length_secondary_object_id);
      offset += 4;
      memcpy(outbuffer + offset, this->secondary_object_id, length_secondary_object_id);
      offset += length_secondary_object_id;
      *(outbuffer + offset + 0) = (this->secondary_max_objects >> (8 * 0)) & 0xFF;
      offset += sizeof(this->secondary_max_objects);
      union {
        double real;
        uint64_t base;
      } u_secondary_max_distance;
      u_secondary_max_distance.real = this->secondary_max_distance;
      *(outbuffer + offset + 0) = (u_secondary_max_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_secondary_max_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_secondary_max_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_secondary_max_distance.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_secondary_max_distance.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_secondary_max_distance.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_secondary_max_distance.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_secondary_max_distance.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->secondary_max_distance);
      uint32_t length_secondary_frame_id = strlen(this->secondary_frame_id);
      varToArr(outbuffer + offset, length_secondary_frame_id);
      offset += 4;
      memcpy(outbuffer + offset, this->secondary_frame_id, length_secondary_frame_id);
      offset += length_secondary_frame_id;
      union {
        double real;
        uint64_t base;
      } u_min_radius;
      u_min_radius.real = this->min_radius;
      *(outbuffer + offset + 0) = (u_min_radius.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_min_radius.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_min_radius.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_min_radius.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_min_radius.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_min_radius.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_min_radius.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_min_radius.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->min_radius);
      offset += this->endpoint.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_object_id;
      arrToVar(length_object_id, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_object_id; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_object_id-1]=0;
      this->object_id = (char *)(inbuffer + offset-1);
      offset += length_object_id;
      this->max_objects =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->max_objects);
      uint32_t length_primary_frame_id;
      arrToVar(length_primary_frame_id, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_primary_frame_id; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_primary_frame_id-1]=0;
      this->primary_frame_id = (char *)(inbuffer + offset-1);
      offset += length_primary_frame_id;
      uint32_t length_secondary_object_id;
      arrToVar(length_secondary_object_id, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_secondary_object_id; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_secondary_object_id-1]=0;
      this->secondary_object_id = (char *)(inbuffer + offset-1);
      offset += length_secondary_object_id;
      this->secondary_max_objects =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->secondary_max_objects);
      union {
        double real;
        uint64_t base;
      } u_secondary_max_distance;
      u_secondary_max_distance.base = 0;
      u_secondary_max_distance.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_secondary_max_distance.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_secondary_max_distance.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_secondary_max_distance.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_secondary_max_distance.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_secondary_max_distance.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_secondary_max_distance.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_secondary_max_distance.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->secondary_max_distance = u_secondary_max_distance.real;
      offset += sizeof(this->secondary_max_distance);
      uint32_t length_secondary_frame_id;
      arrToVar(length_secondary_frame_id, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_secondary_frame_id; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_secondary_frame_id-1]=0;
      this->secondary_frame_id = (char *)(inbuffer + offset-1);
      offset += length_secondary_frame_id;
      union {
        double real;
        uint64_t base;
      } u_min_radius;
      u_min_radius.base = 0;
      u_min_radius.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_min_radius.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_min_radius.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_min_radius.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_min_radius.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_min_radius.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_min_radius.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_min_radius.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->min_radius = u_min_radius.real;
      offset += sizeof(this->min_radius);
      offset += this->endpoint.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return GAMEPIECEPICKUP; };
    virtual const char * getMD5() override { return "39b5aff9acb5120716b9a77fe88c2229"; };

  };

  class GamePiecePickupResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;
      typedef const char* _message_type;
      _message_type message;
      typedef nav_msgs::Path _path_type;
      _path_type path;

    GamePiecePickupResponse():
      success(0),
      message(""),
      path()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.real = this->success;
      *(outbuffer + offset + 0) = (u_success.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->success);
      uint32_t length_message = strlen(this->message);
      varToArr(outbuffer + offset, length_message);
      offset += 4;
      memcpy(outbuffer + offset, this->message, length_message);
      offset += length_message;
      offset += this->path.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.base = 0;
      u_success.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->success = u_success.real;
      offset += sizeof(this->success);
      uint32_t length_message;
      arrToVar(length_message, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_message; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_message-1]=0;
      this->message = (char *)(inbuffer + offset-1);
      offset += length_message;
      offset += this->path.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return GAMEPIECEPICKUP; };
    virtual const char * getMD5() override { return "b928b6711cb174d91f7c078c57816d72"; };

  };

  class GamePiecePickup {
    public:
    typedef GamePiecePickupRequest Request;
    typedef GamePiecePickupResponse Response;
  };

}
#endif
