#ifndef _ROS_SERVICE_IndexerSrv_h
#define _ROS_SERVICE_IndexerSrv_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace controllers_2020_msgs
{

static const char INDEXERSRV[] = "controllers_2020_msgs/IndexerSrv";

  class IndexerSrvRequest : public ros::Msg
  {
    public:
      typedef double _indexer_velocity_type;
      _indexer_velocity_type indexer_velocity;

    IndexerSrvRequest():
      indexer_velocity(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_indexer_velocity;
      u_indexer_velocity.real = this->indexer_velocity;
      *(outbuffer + offset + 0) = (u_indexer_velocity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_indexer_velocity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_indexer_velocity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_indexer_velocity.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_indexer_velocity.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_indexer_velocity.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_indexer_velocity.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_indexer_velocity.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->indexer_velocity);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_indexer_velocity;
      u_indexer_velocity.base = 0;
      u_indexer_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_indexer_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_indexer_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_indexer_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_indexer_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_indexer_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_indexer_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_indexer_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->indexer_velocity = u_indexer_velocity.real;
      offset += sizeof(this->indexer_velocity);
     return offset;
    }

    virtual const char * getType() override { return INDEXERSRV; };
    virtual const char * getMD5() override { return "727bad20e37f6d8b19314feb0b32dddd"; };

  };

  class IndexerSrvResponse : public ros::Msg
  {
    public:

    IndexerSrvResponse()
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

    virtual const char * getType() override { return INDEXERSRV; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class IndexerSrv {
    public:
    typedef IndexerSrvRequest Request;
    typedef IndexerSrvResponse Response;
  };

}
#endif
