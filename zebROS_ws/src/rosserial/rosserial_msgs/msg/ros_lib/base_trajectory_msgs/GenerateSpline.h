#ifndef _ROS_SERVICE_GenerateSpline_h
#define _ROS_SERVICE_GenerateSpline_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "base_trajectory_msgs/Coefs.h"
#include "base_trajectory_msgs/PathOffsetLimit.h"
#include "nav_msgs/Path.h"
#include "std_msgs/Header.h"
#include "trajectory_msgs/JointTrajectoryPoint.h"
#include "base_trajectory_msgs/Constraint.h"

namespace base_trajectory_msgs
{

static const char GENERATESPLINE[] = "base_trajectory_msgs/GenerateSpline";

  class GenerateSplineRequest : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t points_length;
      typedef trajectory_msgs::JointTrajectoryPoint _points_type;
      _points_type st_points;
      _points_type * points;
      uint32_t point_frame_id_length;
      typedef char* _point_frame_id_type;
      _point_frame_id_type st_point_frame_id;
      _point_frame_id_type * point_frame_id;
      uint32_t path_offset_limit_length;
      typedef base_trajectory_msgs::PathOffsetLimit _path_offset_limit_type;
      _path_offset_limit_type st_path_offset_limit;
      _path_offset_limit_type * path_offset_limit;
      typedef bool _optimize_final_velocity_type;
      _optimize_final_velocity_type optimize_final_velocity;
      uint32_t constraints_length;
      typedef base_trajectory_msgs::Constraint _constraints_type;
      _constraints_type st_constraints;
      _constraints_type * constraints;

    GenerateSplineRequest():
      header(),
      points_length(0), st_points(), points(nullptr),
      point_frame_id_length(0), st_point_frame_id(), point_frame_id(nullptr),
      path_offset_limit_length(0), st_path_offset_limit(), path_offset_limit(nullptr),
      optimize_final_velocity(0),
      constraints_length(0), st_constraints(), constraints(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->points_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->points_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->points_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->points_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->points_length);
      for( uint32_t i = 0; i < points_length; i++){
      offset += this->points[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset + 0) = (this->point_frame_id_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->point_frame_id_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->point_frame_id_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->point_frame_id_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->point_frame_id_length);
      for( uint32_t i = 0; i < point_frame_id_length; i++){
      uint32_t length_point_frame_idi = strlen(this->point_frame_id[i]);
      varToArr(outbuffer + offset, length_point_frame_idi);
      offset += 4;
      memcpy(outbuffer + offset, this->point_frame_id[i], length_point_frame_idi);
      offset += length_point_frame_idi;
      }
      *(outbuffer + offset + 0) = (this->path_offset_limit_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->path_offset_limit_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->path_offset_limit_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->path_offset_limit_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->path_offset_limit_length);
      for( uint32_t i = 0; i < path_offset_limit_length; i++){
      offset += this->path_offset_limit[i].serialize(outbuffer + offset);
      }
      union {
        bool real;
        uint8_t base;
      } u_optimize_final_velocity;
      u_optimize_final_velocity.real = this->optimize_final_velocity;
      *(outbuffer + offset + 0) = (u_optimize_final_velocity.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->optimize_final_velocity);
      *(outbuffer + offset + 0) = (this->constraints_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->constraints_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->constraints_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->constraints_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->constraints_length);
      for( uint32_t i = 0; i < constraints_length; i++){
      offset += this->constraints[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t points_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      points_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      points_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      points_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->points_length);
      if(points_lengthT > points_length)
        this->points = (trajectory_msgs::JointTrajectoryPoint*)realloc(this->points, points_lengthT * sizeof(trajectory_msgs::JointTrajectoryPoint));
      points_length = points_lengthT;
      for( uint32_t i = 0; i < points_length; i++){
      offset += this->st_points.deserialize(inbuffer + offset);
        memcpy( &(this->points[i]), &(this->st_points), sizeof(trajectory_msgs::JointTrajectoryPoint));
      }
      uint32_t point_frame_id_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      point_frame_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      point_frame_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      point_frame_id_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->point_frame_id_length);
      if(point_frame_id_lengthT > point_frame_id_length)
        this->point_frame_id = (char**)realloc(this->point_frame_id, point_frame_id_lengthT * sizeof(char*));
      point_frame_id_length = point_frame_id_lengthT;
      for( uint32_t i = 0; i < point_frame_id_length; i++){
      uint32_t length_st_point_frame_id;
      arrToVar(length_st_point_frame_id, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_point_frame_id; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_point_frame_id-1]=0;
      this->st_point_frame_id = (char *)(inbuffer + offset-1);
      offset += length_st_point_frame_id;
        memcpy( &(this->point_frame_id[i]), &(this->st_point_frame_id), sizeof(char*));
      }
      uint32_t path_offset_limit_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      path_offset_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      path_offset_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      path_offset_limit_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->path_offset_limit_length);
      if(path_offset_limit_lengthT > path_offset_limit_length)
        this->path_offset_limit = (base_trajectory_msgs::PathOffsetLimit*)realloc(this->path_offset_limit, path_offset_limit_lengthT * sizeof(base_trajectory_msgs::PathOffsetLimit));
      path_offset_limit_length = path_offset_limit_lengthT;
      for( uint32_t i = 0; i < path_offset_limit_length; i++){
      offset += this->st_path_offset_limit.deserialize(inbuffer + offset);
        memcpy( &(this->path_offset_limit[i]), &(this->st_path_offset_limit), sizeof(base_trajectory_msgs::PathOffsetLimit));
      }
      union {
        bool real;
        uint8_t base;
      } u_optimize_final_velocity;
      u_optimize_final_velocity.base = 0;
      u_optimize_final_velocity.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->optimize_final_velocity = u_optimize_final_velocity.real;
      offset += sizeof(this->optimize_final_velocity);
      uint32_t constraints_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      constraints_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      constraints_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      constraints_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->constraints_length);
      if(constraints_lengthT > constraints_length)
        this->constraints = (base_trajectory_msgs::Constraint*)realloc(this->constraints, constraints_lengthT * sizeof(base_trajectory_msgs::Constraint));
      constraints_length = constraints_lengthT;
      for( uint32_t i = 0; i < constraints_length; i++){
      offset += this->st_constraints.deserialize(inbuffer + offset);
        memcpy( &(this->constraints[i]), &(this->st_constraints), sizeof(base_trajectory_msgs::Constraint));
      }
     return offset;
    }

    virtual const char * getType() override { return GENERATESPLINE; };
    virtual const char * getMD5() override { return "f774602566af4c332035e7f854fba504"; };

  };

  class GenerateSplineResponse : public ros::Msg
  {
    public:
      uint32_t orient_coefs_length;
      typedef base_trajectory_msgs::Coefs _orient_coefs_type;
      _orient_coefs_type st_orient_coefs;
      _orient_coefs_type * orient_coefs;
      uint32_t x_coefs_length;
      typedef base_trajectory_msgs::Coefs _x_coefs_type;
      _x_coefs_type st_x_coefs;
      _x_coefs_type * x_coefs;
      uint32_t y_coefs_length;
      typedef base_trajectory_msgs::Coefs _y_coefs_type;
      _y_coefs_type st_y_coefs;
      _y_coefs_type * y_coefs;
      uint32_t end_points_length;
      typedef double _end_points_type;
      _end_points_type st_end_points;
      _end_points_type * end_points;
      typedef nav_msgs::Path _path_type;
      _path_type path;

    GenerateSplineResponse():
      orient_coefs_length(0), st_orient_coefs(), orient_coefs(nullptr),
      x_coefs_length(0), st_x_coefs(), x_coefs(nullptr),
      y_coefs_length(0), st_y_coefs(), y_coefs(nullptr),
      end_points_length(0), st_end_points(), end_points(nullptr),
      path()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->orient_coefs_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->orient_coefs_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->orient_coefs_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->orient_coefs_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->orient_coefs_length);
      for( uint32_t i = 0; i < orient_coefs_length; i++){
      offset += this->orient_coefs[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset + 0) = (this->x_coefs_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->x_coefs_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->x_coefs_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->x_coefs_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->x_coefs_length);
      for( uint32_t i = 0; i < x_coefs_length; i++){
      offset += this->x_coefs[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset + 0) = (this->y_coefs_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->y_coefs_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->y_coefs_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->y_coefs_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->y_coefs_length);
      for( uint32_t i = 0; i < y_coefs_length; i++){
      offset += this->y_coefs[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset + 0) = (this->end_points_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->end_points_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->end_points_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->end_points_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->end_points_length);
      for( uint32_t i = 0; i < end_points_length; i++){
      union {
        double real;
        uint64_t base;
      } u_end_pointsi;
      u_end_pointsi.real = this->end_points[i];
      *(outbuffer + offset + 0) = (u_end_pointsi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_end_pointsi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_end_pointsi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_end_pointsi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_end_pointsi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_end_pointsi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_end_pointsi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_end_pointsi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->end_points[i]);
      }
      offset += this->path.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t orient_coefs_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      orient_coefs_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      orient_coefs_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      orient_coefs_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->orient_coefs_length);
      if(orient_coefs_lengthT > orient_coefs_length)
        this->orient_coefs = (base_trajectory_msgs::Coefs*)realloc(this->orient_coefs, orient_coefs_lengthT * sizeof(base_trajectory_msgs::Coefs));
      orient_coefs_length = orient_coefs_lengthT;
      for( uint32_t i = 0; i < orient_coefs_length; i++){
      offset += this->st_orient_coefs.deserialize(inbuffer + offset);
        memcpy( &(this->orient_coefs[i]), &(this->st_orient_coefs), sizeof(base_trajectory_msgs::Coefs));
      }
      uint32_t x_coefs_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      x_coefs_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      x_coefs_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      x_coefs_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->x_coefs_length);
      if(x_coefs_lengthT > x_coefs_length)
        this->x_coefs = (base_trajectory_msgs::Coefs*)realloc(this->x_coefs, x_coefs_lengthT * sizeof(base_trajectory_msgs::Coefs));
      x_coefs_length = x_coefs_lengthT;
      for( uint32_t i = 0; i < x_coefs_length; i++){
      offset += this->st_x_coefs.deserialize(inbuffer + offset);
        memcpy( &(this->x_coefs[i]), &(this->st_x_coefs), sizeof(base_trajectory_msgs::Coefs));
      }
      uint32_t y_coefs_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      y_coefs_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      y_coefs_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      y_coefs_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->y_coefs_length);
      if(y_coefs_lengthT > y_coefs_length)
        this->y_coefs = (base_trajectory_msgs::Coefs*)realloc(this->y_coefs, y_coefs_lengthT * sizeof(base_trajectory_msgs::Coefs));
      y_coefs_length = y_coefs_lengthT;
      for( uint32_t i = 0; i < y_coefs_length; i++){
      offset += this->st_y_coefs.deserialize(inbuffer + offset);
        memcpy( &(this->y_coefs[i]), &(this->st_y_coefs), sizeof(base_trajectory_msgs::Coefs));
      }
      uint32_t end_points_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      end_points_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      end_points_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      end_points_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->end_points_length);
      if(end_points_lengthT > end_points_length)
        this->end_points = (double*)realloc(this->end_points, end_points_lengthT * sizeof(double));
      end_points_length = end_points_lengthT;
      for( uint32_t i = 0; i < end_points_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_end_points;
      u_st_end_points.base = 0;
      u_st_end_points.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_end_points.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_end_points.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_end_points.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_end_points.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_end_points.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_end_points.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_end_points.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_end_points = u_st_end_points.real;
      offset += sizeof(this->st_end_points);
        memcpy( &(this->end_points[i]), &(this->st_end_points), sizeof(double));
      }
      offset += this->path.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return GENERATESPLINE; };
    virtual const char * getMD5() override { return "6ab80e90a7dcd87ed3afa60a58da4a0c"; };

  };

  class GenerateSpline {
    public:
    typedef GenerateSplineRequest Request;
    typedef GenerateSplineResponse Response;
  };

}
#endif
