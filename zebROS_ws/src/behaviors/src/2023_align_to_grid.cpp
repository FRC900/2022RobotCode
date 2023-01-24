// so theoretically the best way to do this is to use the values in 2023_grid_locations.yaml to drive to the location knowing our field-relative location using an apriltag.
// that's just a particle filter.
// which we don't trust yet.
// so we can do the equivalent by calculating the offset between a detected apriltag (see 2023_apriltag_locations.yaml) and the desired location
// and averaging if there are multiple.
// find closest apriltag to desired location, calculate offset, call path_to_apriltag
#include "ros/ros.h"
#include "field_obj/Detection.h"
#include "geometry_msgs/Point.h"
#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include "behavior_actions/AlignToGrid2023Action.h"
#include "behavior_actions/PathToAprilTag.h"
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>

inline geometry_msgs::Point operator-(const geometry_msgs::Point& lhs, const geometry_msgs::Point& rhs) {
    geometry_msgs::Point p;
    p.x = lhs.x - rhs.x;
    p.y = lhs.y - rhs.y;
    p.z = lhs.z - rhs.z;
    return p;
}

inline geometry_msgs::Point operator+(const geometry_msgs::Point& lhs, const geometry_msgs::Point& rhs) {
    geometry_msgs::Point p;
    p.x = lhs.x + rhs.x;
    p.y = lhs.y + rhs.y;
    p.z = lhs.z + rhs.z;
    return p;
}

double distance(const geometry_msgs::Point &pt) {
    return sqrt(pt.x * pt.x + pt.y * pt.y + pt.z * pt.z);
}

inline bool operator<(const geometry_msgs::Point& lhs, const geometry_msgs::Point& rhs) {
    return distance(lhs) < distance(rhs);
}

inline bool operator>(const geometry_msgs::Point& lhs, const geometry_msgs::Point& rhs) {
    return distance(lhs) > distance(rhs);
}

class Tag {
public:
	geometry_msgs::Point location;
	double rotation;
	Tag(geometry_msgs::Point location = geometry_msgs::Point(), bool _rotation = 0) {
		this->location = location;
		this->rotation = _rotation;
	}
};

enum GamePiece { CUBE, CONE };

struct GridLocation {
  double y;
  GamePiece piece;
  GridLocation(double y = 0, GamePiece piece = CUBE) {
    this->y = y;
    this->piece = piece;
  }
};

class AlignToGridAction
{
protected:

  ros::NodeHandle nh_;
  actionlib::SimpleActionServer<behavior_actions::AlignToGrid2023Action> as_; // NodeHandle instance must be created before this line. Otherwise strange error occurs.
  std::string action_name_;
  // create messages that are used to published feedback/result
  behavior_actions::AlignToGrid2023Feedback feedback_;
  behavior_actions::AlignToGrid2023Result result_;
  field_obj::Detection latest_;
  ros::Subscriber sub_;
  std::map<int, Tag> tags_;
  std::map<int, GridLocation> gridLocations_; // should probably be uint8_t
  ros::ServiceClient client_;

public:

  AlignToGridAction(std::string name) :
    as_(nh_, name, boost::bind(&AlignToGridAction::executeCB, this, _1), false),
    action_name_(name),
    sub_(nh_.subscribe<field_obj::Detection>("/tf_object_detection/tag_detection_world", 1000, boost::bind(&AlignToGridAction::callback, this, _1))),
    client_(nh_.serviceClient<behavior_actions::PathToAprilTag>("/path_to_apriltag"))
  {
    XmlRpc::XmlRpcValue tagList;
    nh_.getParam("tags", tagList);

    XmlRpc::XmlRpcValue gridList;
    nh_.getParam("grid_locations", gridList);

    for (XmlRpc::XmlRpcValue::iterator tag=tagList.begin(); tag!=tagList.end(); ++tag) {
      Tag t;
      geometry_msgs::Point p;
      p.x = tag->second[0];
      p.y = tag->second[1];
      p.z = tag->second[2];
      t.location = p;
      t.rotation = tag->second[3];
      tags_[std::stoi(tag->first.substr(3))] = t;
    }

    for (XmlRpc::XmlRpcValue::iterator grid=gridList.begin(); grid!=gridList.end(); ++grid) {
      GridLocation g;
      g.piece = grid->second[0] == "cone" ? CONE : CUBE;
      g.y = grid->second[1];
      gridLocations_[std::stoi(grid->first.substr(3))] = g;
      ROS_INFO_STREAM(std::stoi(grid->first.substr(3)) << " " << g.y << " " << g.piece);
    }

    // need to load grid stations here.

    as_.start();
  }

  ~AlignToGridAction(void)
  {
  }

  void callback(const field_obj::DetectionConstPtr& msg) {
    // need to use transforms...
    // oh wait no we don't! we can tell spline srv what frame id it is relevant to
    latest_ = *msg;
  }

  std::optional<int> findClosestApriltag(const field_obj::Detection &detection) {
    double minDistance = std::numeric_limits<double>::max();
    int closestTag;
    if (detection.objects.size() == 0) {
      return std::nullopt;
    }
    for (field_obj::Object obj : detection.objects) {
      double d = distance(obj.location);
      if (d < minDistance) {
        minDistance = d;
        closestTag = std::stoi(obj.id);
      }
    }
    return std::optional<int>{closestTag};
  }

  int getAllianceRelativeStationNumber(int alliance, int gridStation) {
    // 1 = red alliance, 0 = blue
    if (alliance == 1) {
      return (8-(gridStation-1))+1;
    }
    return gridStation;
  }

  void executeCB(const behavior_actions::AlignToGrid2023GoalConstPtr &goal)
  {
    // TODO: do we want to find the tag closest to *us* or closest to the grid?
    // right now it finds the one closest to the robot
    // I'm not sure what is most accurate
    auto closestTag = findClosestApriltag(latest_);
    if (closestTag == std::nullopt) {
      as_.setAborted(result_); // no tag found
      ROS_ERROR_STREAM("[2023_align_to_grid] No AprilTags found :(");
      return;
    }
    int closestId = closestTag.value();
    Tag tag = tags_[closestId];

    int gridStation = getAllianceRelativeStationNumber(goal->alliance, goal->grid_id);
    GridLocation gridLocation = gridLocations_[gridStation];


    // 1 is at the left, 9 is at the right

    // e.g. the tag we find is at (1,1) -- src and we want to go to (2,2) -- dest
    // need dest - src

    geometry_msgs::Point offset;
    offset.x = -1.0;
    if (goal->alliance == 1) {
      offset.y = gridLocation.y - tag.location.y; // should be gridLocation.y - tag.location.y
    } else {
      offset.y = -(gridLocation.y - tag.location.y);
    }
    offset.z = 0;
    ROS_INFO_STREAM("ydif: " << gridLocation.y - tag.location.y);

    geometry_msgs::Pose pose;
    pose.position = offset;

    tf2::Quaternion q;
    q.setRPY(0, 0, 0); // facing the tag
    geometry_msgs::Quaternion qMsg = tf2::toMsg(q);

    pose.orientation = qMsg;
    // set orientation to quaternion with yaw = tagRotation, use setRPY

    behavior_actions::PathToAprilTag srv;
    srv.request.id = closestId;
    srv.request.tagRotation = tag.rotation;
    srv.request.offset = pose;

    if (client_.call(srv))
    {
      ROS_INFO("Driving");
    }
    else
    {
      ROS_ERROR("Failed to call service /path_to_apriltag");
      as_.setAborted(result_);
      return;
    }

    as_.setSucceeded(result_);

    // Need to make PathToAprilTag an **action** so it can be preempted!

    // call pathToApriltag with:
    // id = closestId
    // tagRotation = tag.rotation
    // offset = offset

    // if the tag we find is at (1,1) and we want to 


    // // helper variables
    // ros::Rate r(1);
    // bool success = true;

    // // push_back the seeds for the fibonacci sequence
    // feedback_.sequence.clear();
    // feedback_.sequence.push_back(0);
    // feedback_.sequence.push_back(1);

    // // publish info to the console for the user
    // ROS_INFO("%s: Executing, creating fibonacci sequence of order %i with seeds %i, %i", action_name_.c_str(), goal->order, feedback_.sequence[0], feedback_.sequence[1]);

    // // start executing the action
    // for(int i=1; i<=goal->order; i++)
    // {
    //   // check that preempt has not been requested by the client
    //   if (as_.isPreemptRequested() || !ros::ok())
    //   {
    //     ROS_INFO("%s: Preempted", action_name_.c_str());
    //     // set the action state to preempted
    //     as_.setPreempted();
    //     success = false;
    //     break;
    //   }
    //   feedback_.sequence.push_back(feedback_.sequence[i] + feedback_.sequence[i-1]);
    //   // publish the feedback
    //   as_.publishFeedback(feedback_);
    //   // this sleep is not necessary, the sequence is computed at 1 Hz for demonstration purposes
    //   r.sleep();
    // }

    // if(success)
    // {
    //   result_.sequence = feedback_.sequence;
    //   ROS_INFO("%s: Succeeded", action_name_.c_str());
    //   // set the action state to succeeded
    //   as_.setSucceeded(result_);
    // }
  }


};


int main(int argc, char** argv)
{
  ros::init(argc, argv, "align_to_grid");

  AlignToGridAction alignToGrid("align_to_grid");
  ros::spin();

  return 0;
}