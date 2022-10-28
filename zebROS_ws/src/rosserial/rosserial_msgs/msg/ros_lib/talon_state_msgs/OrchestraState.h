#ifndef _ROS_talon_state_msgs_OrchestraState_h
#define _ROS_talon_state_msgs_OrchestraState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "talon_state_msgs/InstrumentList.h"

namespace talon_state_msgs
{

  class OrchestraState : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t instrument_list_length;
      typedef talon_state_msgs::InstrumentList _instrument_list_type;
      _instrument_list_type st_instrument_list;
      _instrument_list_type * instrument_list;
      uint32_t chirp_file_path_length;
      typedef char* _chirp_file_path_type;
      _chirp_file_path_type st_chirp_file_path;
      _chirp_file_path_type * chirp_file_path;
      uint32_t is_playing_length;
      typedef bool _is_playing_type;
      _is_playing_type st_is_playing;
      _is_playing_type * is_playing;
      uint32_t is_paused_length;
      typedef bool _is_paused_type;
      _is_paused_type st_is_paused;
      _is_paused_type * is_paused;

    OrchestraState():
      header(),
      instrument_list_length(0), st_instrument_list(), instrument_list(nullptr),
      chirp_file_path_length(0), st_chirp_file_path(), chirp_file_path(nullptr),
      is_playing_length(0), st_is_playing(), is_playing(nullptr),
      is_paused_length(0), st_is_paused(), is_paused(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->instrument_list_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->instrument_list_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->instrument_list_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->instrument_list_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->instrument_list_length);
      for( uint32_t i = 0; i < instrument_list_length; i++){
      offset += this->instrument_list[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset + 0) = (this->chirp_file_path_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->chirp_file_path_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->chirp_file_path_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->chirp_file_path_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->chirp_file_path_length);
      for( uint32_t i = 0; i < chirp_file_path_length; i++){
      uint32_t length_chirp_file_pathi = strlen(this->chirp_file_path[i]);
      varToArr(outbuffer + offset, length_chirp_file_pathi);
      offset += 4;
      memcpy(outbuffer + offset, this->chirp_file_path[i], length_chirp_file_pathi);
      offset += length_chirp_file_pathi;
      }
      *(outbuffer + offset + 0) = (this->is_playing_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->is_playing_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->is_playing_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->is_playing_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->is_playing_length);
      for( uint32_t i = 0; i < is_playing_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_is_playingi;
      u_is_playingi.real = this->is_playing[i];
      *(outbuffer + offset + 0) = (u_is_playingi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_playing[i]);
      }
      *(outbuffer + offset + 0) = (this->is_paused_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->is_paused_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->is_paused_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->is_paused_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->is_paused_length);
      for( uint32_t i = 0; i < is_paused_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_is_pausedi;
      u_is_pausedi.real = this->is_paused[i];
      *(outbuffer + offset + 0) = (u_is_pausedi.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_paused[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t instrument_list_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      instrument_list_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      instrument_list_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      instrument_list_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->instrument_list_length);
      if(instrument_list_lengthT > instrument_list_length)
        this->instrument_list = (talon_state_msgs::InstrumentList*)realloc(this->instrument_list, instrument_list_lengthT * sizeof(talon_state_msgs::InstrumentList));
      instrument_list_length = instrument_list_lengthT;
      for( uint32_t i = 0; i < instrument_list_length; i++){
      offset += this->st_instrument_list.deserialize(inbuffer + offset);
        memcpy( &(this->instrument_list[i]), &(this->st_instrument_list), sizeof(talon_state_msgs::InstrumentList));
      }
      uint32_t chirp_file_path_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      chirp_file_path_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      chirp_file_path_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      chirp_file_path_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->chirp_file_path_length);
      if(chirp_file_path_lengthT > chirp_file_path_length)
        this->chirp_file_path = (char**)realloc(this->chirp_file_path, chirp_file_path_lengthT * sizeof(char*));
      chirp_file_path_length = chirp_file_path_lengthT;
      for( uint32_t i = 0; i < chirp_file_path_length; i++){
      uint32_t length_st_chirp_file_path;
      arrToVar(length_st_chirp_file_path, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_chirp_file_path; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_chirp_file_path-1]=0;
      this->st_chirp_file_path = (char *)(inbuffer + offset-1);
      offset += length_st_chirp_file_path;
        memcpy( &(this->chirp_file_path[i]), &(this->st_chirp_file_path), sizeof(char*));
      }
      uint32_t is_playing_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      is_playing_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      is_playing_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      is_playing_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->is_playing_length);
      if(is_playing_lengthT > is_playing_length)
        this->is_playing = (bool*)realloc(this->is_playing, is_playing_lengthT * sizeof(bool));
      is_playing_length = is_playing_lengthT;
      for( uint32_t i = 0; i < is_playing_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_is_playing;
      u_st_is_playing.base = 0;
      u_st_is_playing.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_is_playing = u_st_is_playing.real;
      offset += sizeof(this->st_is_playing);
        memcpy( &(this->is_playing[i]), &(this->st_is_playing), sizeof(bool));
      }
      uint32_t is_paused_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      is_paused_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      is_paused_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      is_paused_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->is_paused_length);
      if(is_paused_lengthT > is_paused_length)
        this->is_paused = (bool*)realloc(this->is_paused, is_paused_lengthT * sizeof(bool));
      is_paused_length = is_paused_lengthT;
      for( uint32_t i = 0; i < is_paused_length; i++){
      union {
        bool real;
        uint8_t base;
      } u_st_is_paused;
      u_st_is_paused.base = 0;
      u_st_is_paused.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_is_paused = u_st_is_paused.real;
      offset += sizeof(this->st_is_paused);
        memcpy( &(this->is_paused[i]), &(this->st_is_paused), sizeof(bool));
      }
     return offset;
    }

    virtual const char * getType() override { return "talon_state_msgs/OrchestraState"; };
    virtual const char * getMD5() override { return "c5581eb0ebc922e112405e2d2b4cea2b"; };

  };

}
#endif
