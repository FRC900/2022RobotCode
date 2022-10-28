#ifndef _ROS_marker_msgs_MarkerStamped_h
#define _ROS_marker_msgs_MarkerStamped_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "marker_msgs/Marker.h"

namespace marker_msgs
{

  class MarkerStamped : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef marker_msgs::Marker _marker_type;
      _marker_type marker;

    MarkerStamped():
      header(),
      marker()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->marker.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->marker.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "marker_msgs/MarkerStamped"; };
    virtual const char * getMD5() override { return "4c1e18caf6e07b546965f552c7f69fcf"; };

  };

}
#endif
