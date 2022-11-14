#!/usr/bin/env python3
import numpy as np
import math
import matplotlib.pyplot as plt

import rospy
#from pf_localization.msg import pf_debug, pf_pose
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Quaternion
from tf.transformations import euler_from_quaternion, quaternion_from_euler
from geometry_msgs.msg import PoseArray, PoseWithCovarianceStamped, PoseStamped, TransformStamped
from field_obj.msg import Detection
from frc_msgs.msg import MatchSpecificData
import tf2_ros, tf2_geometry_msgs

particles_topic = "pf_debug"
pf_pose_topic = "predicted_pose"
detections_topic = "/goal_detection/goal_detect_msg"
ground_truth_topic = "/base_pose_ground_truth"
match_data_topic = "/frcrobot_rio/match_data"

# From https://www.oreilly.com/library/view/python-cookbook/0596001673/ch05s19.html
class RingBuffer:
    """ class that implements a not-yet-full buffer """
    def __init__(self, size_max):
        self.max = size_max
        self.data = []

    class __Full:
        """ class that implements a full buffer """
        def append(self, x):
            """ Append an element overwriting the oldest one. """
            self.data[self.cur] = x
            self.cur = (self.cur+1) % self.max
        def get(self):
            """ return list of elements in correct order """
            return self.data[self.cur:]+self.data[:self.cur]
        def newest(self):
            idx = self.cur - 1
            if idx < 0:
                idx += self.max
            return(self.data[idx])

    def append(self,x):
        """append an element at the end of the buffer"""
        self.data.append(x)
        if len(self.data) == self.max:
            self.cur = 0
            # Permanently change self's class from non-full to full
            self.__class__ = self.__Full

    def get(self):
        """ Return a list of elements from the oldest to the newest. """
        return self.data

    def newest(self):
        if len(self.data) == 0:
            return None
        return self.data[-1]

max_pose_points = 30
predicted_x = RingBuffer(max_pose_points)
predicted_y = RingBuffer(max_pose_points)
ground_truth_x = RingBuffer(max_pose_points)
ground_truth_y = RingBuffer(max_pose_points)
beacon_locations = {}
beacon_locations_blue = {}
beacon_locations_red = {}

fig, axes = plt.subplots(nrows=1, ncols=1)
ax = axes
pln, = ax.plot([], [], 'r.', markersize=2)
dir, = ax.plot([], [], 'r-,')
ln,  = ax.plot([], [], 'b.', markersize=.15)
gtn, = ax.plot([], [], 'g.', markersize=2)
dtns = {}

def update_particles(pose_array):
    global ln

    x_data = []
    y_data = []
    rot_data = []
    for p in pose_array.poses:
        x_data.append(p.position.x)
        y_data.append(p.position.y)
        angles = euler_from_quaternion([p.orientation.x, p.orientation.y, p.orientation.z, p.orientation.w]);
        rot_data.append(angles[2])
    ln.set_data(x_data, y_data)
    plt.draw()

def update_pose(pose_msg):
    global predicted_x, predicted_y

    this_x = pose_msg.pose.pose.position.x
    this_y = pose_msg.pose.pose.position.y
    predicted_x.append(this_x)
    predicted_y.append(this_y)
    pln.set_data(predicted_x.get(), predicted_y.get())
    o = pose_msg.pose.pose.orientation
    angles = euler_from_quaternion([o.x, o.y, o.z, o.w]);
    angle = angles[2]
    dir.set_data([this_x, this_x + math.cos(angle)],[this_y, this_y + math.sin(angle)])
    plt.draw()

def update_ground_truth(ground_truth_msg):
    global ground_truth_x, ground_truth_y, max_pose_points

    ground_truth_x.append(ground_truth_msg.pose.pose.position.x)
    ground_truth_y.append(ground_truth_msg.pose.pose.position.y)
    gtn.set_data(ground_truth_x.get(), ground_truth_y.get())
    plt.draw()

def update_detections(detection_msg):
    global predicted_x, predicted_y, beacon_locations, dtns
    detections = set()
    for o in detection_msg.objects:
        detections.add(o.id)

    for d in dtns:
        if d in detections and d in beacon_locations:
            xs = [predicted_x.newest(), beacon_locations[d][0]]
            ys = [predicted_y.newest(), beacon_locations[d][1]]
            dtns[d].set_data(xs,ys)
        else:
            dtns[d].set_data([], [])

def update_match_data(match_data_msg):
    global beacon_locations, beacon_locations_blue, beacon_locations_red
    if match_data_msg.allianceColor == 0:
        beacon_locations = beacon_locations_red
    else:
        beacon_locations = beacon_locations_blue

def main():
    global ax

    rospy.init_node('pf_vis_node', anonymous = True)
    rospy.loginfo("pf visualization node initialized")

    beacons = []
    beacon_x = []
    beacon_y = []
    field_dims = []

    if rospy.has_param('beacons'):
        beacons = rospy.get_param('beacons')
    else:
        rospy.logerr("vis: failed to load beacons")
        return -1

    if rospy.has_param('field_dims/x_min'):
        field_dims.append(rospy.get_param('field_dims/x_min'))
    if rospy.has_param('field_dims/x_max'):
        field_dims.append(rospy.get_param('field_dims/x_max'))
    if rospy.has_param('field_dims/y_min'):
        field_dims.append(rospy.get_param('field_dims/y_min'))
    if rospy.has_param('field_dims/y_max'):
        field_dims.append(rospy.get_param('field_dims/y_max'))

    rospy.loginfo("assigned field dimensions")

    ax.set_xlim(field_dims[0], field_dims[1])
    ax.set_ylim(field_dims[2], field_dims[3])

    global beacon_locations, beacon_locations_blue, beacon_locations_red, dtns
    for b in beacons:
        beacon_x.append(b[0])
        beacon_y.append(b[1])
        # Set up a map of beacon_id -> [beacon x, beacon y] tuples
        beacon_locations_blue[b[2]] = [b[0], b[1]]
        dtns[b[2]], = ax.plot([], [], 'r-')

    trans = TransformStamped()
    trans.header.frame_id = "blue0"
    trans.header.stamp = 0
    trans.child_frame_id = "red0"
    trans.transform.translation.x = field_dims[1]
    trans.transform.translation.y = field_dims[3]
    q = quaternion_from_euler(0, 0, math.pi)
    trans.transform.rotation = Quaternion(*q)

    for k, v in beacon_locations_blue.items():
        pose_s = PoseStamped()
        pose_s.header = trans.header
        pose_s.pose.position.x = v[0]
        pose_s.pose.position.y = v[1]
        pose_t = tf2_geometry_msgs.do_transform_pose(pose_s, trans)
        beacon_locations_red[k] = [pose_t.pose.position.x, pose_t.pose.position.y]

    ax.plot(beacon_x, beacon_y, 'ko')

    beacon_locations = beacon_locations_blue

    sub_particles = rospy.Subscriber(particles_topic, PoseArray, update_particles)
    sub_pose = rospy.Subscriber(pf_pose_topic, PoseWithCovarianceStamped, update_pose)
    sub_ground_truth = rospy.Subscriber(ground_truth_topic, Odometry, update_ground_truth)
    sub_detection = rospy.Subscriber(detections_topic, Detection, update_detections)
    sub_match_data = rospy.Subscriber(match_data_topic, MatchSpecificData, update_match_data)

    plt.show()

    try:
        rospy.spin()
    except KeyboardInterrupt:
        print("Shutting down")

if __name__ == '__main__':
    main()
