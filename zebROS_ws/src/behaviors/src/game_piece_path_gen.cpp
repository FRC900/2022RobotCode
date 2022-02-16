#include <ros/ros.h>
#include <cmath>
#include <std_srvs/Trigger.h>
#include <algorithm>
#include "base_trajectory_msgs/GenerateSpline.h"
#include "behavior_actions/DynamicPath.h"
#include "behavior_actions/GamePiecePickup.h"
#include "field_obj/Detection.h"
#include "trajectory_msgs/JointTrajectoryPoint.h"
#include <tf2_ros/transform_listener.h>
#include <geometry_msgs/TransformStamped.h>

using Point = std::array<double, 3>;

// Create service clients
ros::ServiceClient spline_gen_cli;
ros::ServiceClient dynamic_path_cli;

field_obj::Detection lastObjectDetection;

tf2_ros::TransformListener *tfListener;
tf2_ros::Buffer *tfBuffer;

double maximumZ = 1.0;

// Callback function to retrieve the most recent object detection message
void objectDetectCallback(field_obj::DetectionConstPtr msg)
{
	lastObjectDetection = *msg;
}

trajectory_msgs::JointTrajectoryPoint generateTrajectoryPoint(double x, double y, double rotation)
{
	trajectory_msgs::JointTrajectoryPoint point;
	point.positions.resize(3);
	point.positions[2] = rotation;
	point.positions[0] = x;
	point.positions[1] = y;
	return point;
}

class Line {
public:
	double x1;
	double y1;
	double x2;
	double y2;
	Line() {

	}
	Line(double x1, double y1, double x2, double y2) {
		this->x1 = x1;
		this->x2 = x2;
		this->y1 = y1;
		this->y2 = y2;
	}
};

double hypot(Line l) {
	return hypot(l.x2-l.x1, l.y2-l.y1);
}

double pointOnLine(Line l, double x) { // 2D
	// y = m(x - x1) + y1
	// m = (y2 - y1)/(x2 - x1)
	double m = (l.y2 - l.y1)/(l.x2 - l.x1);
	double y = m * (x - l.x1) + l.y1;
	if (x >= std::min(l.x1, l.x2) && x <= std::max(l.x1, l.x2)) {
		return y;
	} else {
		return std::numeric_limits<double>::max();
	}
}

template <class T>
T distSquared(const std::array<T, 2> &v, const std::array<T, 2> &w)
{
	return ((v[0] - w[0]) * (v[0] - w[0])) + ((v[1] - w[1]) * (v[1] - w[1]));
}

template <class T>
T distSquared(const T px, const T py, const std::array<T, 2> &w)
{
	return ((px - w[0]) * (px - w[0])) + ((py - w[1]) * (py - w[1]));
}


// Minimum distance between Line l and point (p1, p2)
double pointToLineSegmentDistance(const Line &l,
		double px, double py)
{
	const std::array<double, 2> v{l.x1, l.y1};
	const std::array<double, 2> w{l.x2, l.y2};
	const auto l2 = distSquared(v, w);
	if (l2 == static_cast<double>(0.0))
	{
		return sqrt(distSquared(px, py, v));   // v == w case, distance to single point
	}
	// Consider the line extending the segment, parameterized as v + t (w - v).
	// We find projection of point p onto the line.
	// It falls where t = [(p-v) . (w-v)] / |w-v|^2
	// We clamp t from [0,1] to handle points outside the segment vw.
	const auto t = std::max(static_cast<double>(0.0),
			std::min(static_cast<double>(1.0), ((px - v[0]) * (w[0] - v[0]) + (py - v[1]) * (w[1] - v[1])) / static_cast<double>(l2)));
	const auto projectionX = v[0] + t * (w[0] - v[0]);
	const auto projectionY = v[1] + t * (w[1] - v[1]);
	return hypot(px - projectionX, py - projectionY);
}

std::vector<double> gamePieceIntakeOffsets{0};

bool genPath(behavior_actions::GamePiecePickup::Request &req, behavior_actions::GamePiecePickup::Response &res)
{
	// NOTE Endpoint is robot relative
	res.success = false; // Default to failure
	base_trajectory_msgs::GenerateSpline spline_gen_srv;

	spline_gen_srv.request.header = lastObjectDetection.header;

	const size_t objects_num = std::min((int)(lastObjectDetection.objects.size()), (int)(req.max_objects));
	ROS_INFO_STREAM("game_piece_path_gen : objects_num: " << objects_num);

	geometry_msgs::TransformStamped cameraToRobotTransform = tfBuffer->lookupTransform(lastObjectDetection.header.frame_id, "base_link", ros::Time(0));

	// If not finding the optimal cargo, uncomment the print below.
	// ROS_INFO_STREAM("Using position: " << cameraToMapTransform.transform.translation.x << ", " << cameraToMapTransform.transform.translation.y);

	Line l = Line(0, 0, req.endpoint.position.x - cameraToRobotTransform.transform.translation.x, req.endpoint.position.y - cameraToRobotTransform.transform.translation.y);

	std::vector<Point> points; // List of all points
	points.push_back({0, 0, 0}); // First point is always {0,0,0} and not transformed, robot current position

	std::vector<Point> objectPoints; // List of object points (so we can sort)
	std::vector<Point> secondaryObjectPoints; // List of secondary object points (for later)

	for (size_t i = 0; i < lastObjectDetection.objects.size(); i++) // filter out selected object detections
	{
		if ((lastObjectDetection.objects[i].id == req.object_id) && (lastObjectDetection.objects[i].location.z <= maximumZ))
		{
			objectPoints.push_back({lastObjectDetection.objects[i].location.x, lastObjectDetection.objects[i].location.y, 0});
		}
	}

	for (size_t i = 0; i < lastObjectDetection.objects.size(); i++) // filter out secondary object detections
	{
		if ((lastObjectDetection.objects[i].id == req.secondary_object_id) && (lastObjectDetection.objects[i].location.z <= maximumZ))
		{
			secondaryObjectPoints.push_back({lastObjectDetection.objects[i].location.x, lastObjectDetection.objects[i].location.y, 0});
		}
	}

	std::sort(objectPoints.begin(), objectPoints.end(), [&l](Point a, Point b) {
		return pointToLineSegmentDistance(l, a[0], a[1]) < pointToLineSegmentDistance(l, b[0], b[1]); // sort objects by closest to line
	});

	std::vector<Point> selectedObjectPoints; // List of selected primary object points

	for (size_t i = 0; i < std::min(objects_num, objectPoints.size()); i++) { // Select closest objects to line
		selectedObjectPoints.push_back(objectPoints[i]);
	}

	// sort selected objects by distance to start
	std::sort(selectedObjectPoints.begin(), selectedObjectPoints.end(), [objectPoints](Point a, Point b) {
		Line la = Line(0, 0, a[0], a[1]);
		Line lb = Line(0, 0, b[0], b[1]);
		return hypot(la) < hypot(lb);
	});

	size_t secondaryObjects = 0;
	std::vector<size_t> secondaryObjectIndices;
	Line l2;
	std::vector<Point> pointsToRemove;

	// TODO what to do if selectedObjectPoints.size() == 0?

	// Add any close enough secondary points to the line between the start and the first object
	l2 = Line(0, 0, selectedObjectPoints[0][0], selectedObjectPoints[0][1]);
	std::sort(secondaryObjectPoints.begin(), secondaryObjectPoints.end(), [selectedObjectPoints](Point a, Point b) {
		Line la = Line(0, 0, a[0], a[1]);
		Line lb = Line(0, 0, b[0], b[1]);
		return hypot(la) < hypot(lb); // sort objects by distance to start
	});
	for (const auto &p : secondaryObjectPoints) {
		if (pointToLineSegmentDistance(l2, p[0], p[1]) <= req.secondary_max_distance && secondaryObjects < req.secondary_max_objects) { // if the secondary object is close enough and the limit has not been reached,
			// add to path
			ROS_INFO_STREAM("game_piece_path_gen: adding secondary game piece at " << p[0] << "," << p[1] << " relative to " << lastObjectDetection.header.frame_id);
			secondaryObjectIndices.push_back(points.size());
			points.push_back(p);
			pointsToRemove.push_back(p);
			secondaryObjects++;
		}
	}
	for (auto p : pointsToRemove) {
		secondaryObjectPoints.erase(std::remove(secondaryObjectPoints.begin(), secondaryObjectPoints.end(), p), secondaryObjectPoints.end());
	}
	pointsToRemove = std::vector<Point>();

	for (size_t i = 0; i < selectedObjectPoints.size(); i++) { // Add selected object points to list of points
		ROS_INFO_STREAM("game_piece_path_gen: choosing game piece at " << selectedObjectPoints[i][0] << "," << selectedObjectPoints[i][1] << " relative to " << lastObjectDetection.header.frame_id);
		points.push_back(selectedObjectPoints[i]);

		Point nextPoint;
		if (i == (std::min(objects_num, selectedObjectPoints.size())-1)) {
			nextPoint = {req.endpoint.position.x, req.endpoint.position.y, req.endpoint.orientation.z};
		} else {
			nextPoint = selectedObjectPoints[i+1];
		}
		// Add any close enough secondary points to the line between this point and the next point
		Line l2 = Line(selectedObjectPoints[i][0], selectedObjectPoints[i][1], nextPoint[0], nextPoint[1]);
		std::sort(secondaryObjectPoints.begin(), secondaryObjectPoints.end(), [selectedObjectPoints, i](Point a, Point b) {
			Line la = Line(selectedObjectPoints[i][0], selectedObjectPoints[i][1], a[0], a[1]);
			Line lb = Line(selectedObjectPoints[i][0], selectedObjectPoints[i][1], b[0], b[1]);
			return hypot(la) < hypot(lb); // sort objects by distance to point 1
		});
		std::vector<Point> pointsToRemove;
		for (const auto &p : secondaryObjectPoints) {
			if (pointToLineSegmentDistance(l2, p[0], p[1]) <= req.secondary_max_distance && secondaryObjects < req.secondary_max_objects) { // if the secondary object is close enough and the limit has not been reached,
				// add to path
				ROS_INFO_STREAM("game_piece_path_gen: adding secondary game piece at " << p[0] << "," << p[1] << " relative to " << lastObjectDetection.header.frame_id);
				secondaryObjectIndices.push_back(points.size());
				points.push_back(p);
				pointsToRemove.push_back(p);
				secondaryObjects++;
			}
		}
		for (auto p : pointsToRemove) {
			secondaryObjectPoints.erase(std::remove(secondaryObjectPoints.begin(), secondaryObjectPoints.end(), p), secondaryObjectPoints.end());
		}
		pointsToRemove = std::vector<Point>();
	}

	if (points.size() == 1) // No objects added
	{
		ROS_INFO_STREAM("game_piece_path_gen : no " << req.object_id << " objects detected");
		res.message = "no " + req.object_id + " game pieces detected";
		return false;
	}

	// Add any close enough secondary points to the line between the last object and the end
	l2 = Line(selectedObjectPoints[secondaryObjectPoints.size()-1][0], selectedObjectPoints[secondaryObjectPoints.size()-1][1], req.endpoint.position.x, req.endpoint.position.y);
	std::sort(secondaryObjectPoints.begin(), secondaryObjectPoints.end(), [selectedObjectPoints](Point a, Point b) {
		Line la = Line(selectedObjectPoints[selectedObjectPoints.size()-1][0], selectedObjectPoints[selectedObjectPoints.size()-1][1], a[0], a[1]);
		Line lb = Line(selectedObjectPoints[selectedObjectPoints.size()-1][0], selectedObjectPoints[selectedObjectPoints.size()-1][1], b[0], b[1]);
		return hypot(la) < hypot(lb); // sort objects by distance to last object
	});
	for (const auto &p : secondaryObjectPoints) {
		if (pointToLineSegmentDistance(l2, p[0], p[1]) <= req.secondary_max_distance && secondaryObjects < req.secondary_max_objects) { // if the secondary object is close enough and the limit has not been reached,
			// add to path
			ROS_INFO_STREAM("game_piece_path_gen: adding secondary game piece at " << p[0] << "," << p[1] << " relative to " << lastObjectDetection.header.frame_id);
			secondaryObjectIndices.push_back(points.size());
			points.push_back(p);
			pointsToRemove.push_back(p);
			secondaryObjects++;
		}
	}
	for (auto p : pointsToRemove) {
		secondaryObjectPoints.erase(std::remove(secondaryObjectPoints.begin(), secondaryObjectPoints.end(), p), secondaryObjectPoints.end());
	}

	points.push_back({req.endpoint.position.x, req.endpoint.position.y, req.endpoint.orientation.z});

	size_t points_num = points.size();
	size_t pts;
	if (points_num >= 2) {
		pts = gamePieceIntakeOffsets.size() * (points_num - 2) + 2;
	} else if (points_num == 1) {
		pts = 1;
	} else if (points_num == 0) {
		ROS_WARN_STREAM("game_piece_path_gen : points_num == 0 (??\x29");
		pts = 0;
	}
	spline_gen_srv.request.points.resize(pts);
	spline_gen_srv.request.point_frame_id.resize(pts);
	size_t point_index = 0;
	for (size_t i = 0; i < points_num; i++) // copy points into spline request
	{
		ROS_INFO_STREAM("(" << points[i][0] << ", " << points[i][1] << "), orientation: " << points[i][2]);
		if (i == 0)
		{
			spline_gen_srv.request.points[point_index] = generateTrajectoryPoint(points[i][0], points[i][1], points[i][2]);
			spline_gen_srv.request.point_frame_id[point_index] = "base_link";
			base_trajectory_msgs::PathOffsetLimit path_offset_limit;
			spline_gen_srv.request.path_offset_limit.push_back(path_offset_limit);
			point_index++;
		}
		else if (i == (points_num - 1))
		{
			spline_gen_srv.request.points[point_index] = generateTrajectoryPoint(points[i][0], points[i][1], points[i][2]);
			spline_gen_srv.request.point_frame_id[point_index] = "base_link";
			base_trajectory_msgs::PathOffsetLimit path_offset_limit;
			spline_gen_srv.request.path_offset_limit.push_back(path_offset_limit);
			point_index++;
		}
		else
		{
			for (double offset : gamePieceIntakeOffsets) {
				double rotation = std::atan2(points[i][1]-points[0][1], points[i][0]-points[0][0]); // atan2(deltaY/deltaX)
				spline_gen_srv.request.points[point_index] = generateTrajectoryPoint(points[i][0] + offset, points[i][1], rotation);
				spline_gen_srv.request.point_frame_id[point_index] = (std::find(secondaryObjectIndices.begin(), secondaryObjectIndices.end(), i)==secondaryObjectIndices.end()) ? req.primary_frame_id : req.secondary_frame_id;
				base_trajectory_msgs::PathOffsetLimit path_offset_limit;
				spline_gen_srv.request.path_offset_limit.push_back(path_offset_limit);
				point_index++;
			}
		}
		//prev_angle = spline_gen_srv.request.points[i].positions[2];
	}

	spline_gen_srv.request.optimize_final_velocity = true; // flag for optimized velocity
	ROS_INFO_STREAM("game_piece_path_gen : reg: " << spline_gen_srv.request);

	if (!spline_gen_cli.call(spline_gen_srv))
	{
		ROS_ERROR_STREAM("Can't call spline gen service in game_piece_path_gen");
		res.message = "can't call spline gen service";
		return false;
	}
	behavior_actions::DynamicPath dynamic_path_srv;
	dynamic_path_srv.request.path_name = "game_piece_pickup_path";
	dynamic_path_srv.request.dynamic_path = spline_gen_srv.response.path;
	if (!dynamic_path_cli.call(dynamic_path_srv))
	{
		ROS_ERROR_STREAM("Can't call dynamic path service in game_piece_path_gen");
		res.message = "can't call dynamic path service";
		return false;
	}
	res.success = true; // Default to failure
	res.message = "to infinity and beyond!";
	res.path = spline_gen_srv.response.path;
	return true;
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "game_piece_path_server");
	ros::NodeHandle nh;

	ros::NodeHandle nh_params(nh, "game_piece_path_gen_params"); // node handle for a lower-down namespace

	if (nh_params.hasParam("game_piece_intake_offsets")) {
		if (!nh_params.getParam("game_piece_intake_offsets", gamePieceIntakeOffsets)) {
			ROS_WARN_STREAM("game_piece_path_gen : getting offsets failed, defaulting to {0}");
		}
	} else {
		ROS_INFO_STREAM("game_piece_path_gen : no offsets specified");
	}

	if (nh_params.hasParam("maximum_z")) {
		if (!nh_params.getParam("maximum_z", maximumZ)) {
			ROS_WARN_STREAM("game_piece_path_gen : getting maximum Z failed, defaulting to 1.0");
		}
	} else {
		ROS_INFO_STREAM("game_piece_path_gen : no maximum Z specified");
	}

	tfBuffer = new tf2_ros::Buffer();
  tfListener = new tf2_ros::TransformListener(*tfBuffer);

	ros::Subscriber powercellSubscriber = nh.subscribe("/tf_object_detection/object_detection_world", 1, objectDetectCallback);
	ros::ServiceServer svc = nh.advertiseService("game_piece_path_gen", genPath);

	spline_gen_cli = nh.serviceClient<base_trajectory_msgs::GenerateSpline>("/path_follower/base_trajectory/spline_gen");
	dynamic_path_cli = nh.serviceClient<behavior_actions::DynamicPath>("/auto/dynamic_path");

	ros::spin();
	return 0;

}
