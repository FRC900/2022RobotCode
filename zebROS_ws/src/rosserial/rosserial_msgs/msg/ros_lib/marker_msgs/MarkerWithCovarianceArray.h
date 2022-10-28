#ifndef _ROS_marker_msgs_MarkerWithCovarianceArray_h
#define _ROS_marker_msgs_MarkerWithCovarianceArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "marker_msgs/MarkerWithCovariance.h"

namespace marker_msgs
{

  class MarkerWithCovarianceArray : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t markers_length;
      typedef marker_msgs::MarkerWithCovariance _markers_type;
      _markers_type st_markers;
      _markers_type * markers;

    MarkerWithCovarianceArray():
      header(),
      markers_length(0), st_markers(), markers(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->markers_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->markers_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->markers_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->markers_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->markers_length);
      for( uint32_t i = 0; i < markers_length; i++){
      offset += this->markers[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t markers_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      markers_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      markers_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      markers_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->markers_length);
      if(markers_lengthT > markers_length)
        this->markers = (marker_msgs::MarkerWithCovariance*)realloc(this->markers, markers_lengthT * sizeof(marker_msgs::MarkerWithCovariance));
      markers_length = markers_lengthT;
      for( uint32_t i = 0; i < markers_length; i++){
      offset += this->st_markers.deserialize(inbuffer + offset);
        memcpy( &(this->markers[i]), &(this->st_markers), sizeof(marker_msgs::MarkerWithCovariance));
      }
     return offset;
    }

    virtual const char * getType() override { return "marker_msgs/MarkerWithCovarianceArray"; };
    virtual const char * getMD5() override { return "5b4524ee352826cec566891ecfc427c6"; };

  };

}
#endif
