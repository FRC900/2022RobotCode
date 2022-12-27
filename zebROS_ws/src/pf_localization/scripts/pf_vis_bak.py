#!/usr/bin/env python3
from dataclasses import dataclass, field
import math
import matplotlib.pyplot as plt
#from typing import list
import matplotlib
matplotlib.use('TkAgg')

import rospy
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Quaternion
from tf.transformations import euler_from_quaternion, quaternion_from_euler
from geometry_msgs.msg import PoseStamped, TransformStamped
from pf_localization.msg import PFDebug
from frc_msgs.msg import MatchSpecificData
import tf2_geometry_msgs

debug_topic = "pf_debug"
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
@dataclass
class PlotData:
    # History of predicted x&y values, plus current predicted angle
    predicted_x: RingBuffer(max_pose_points) = RingBuffer(max_pose_points)
    predicted_y: RingBuffer(max_pose_points) = RingBuffer(max_pose_points)
    angle: float = 0.0

    # Most recent set of particle x & y values
    particle_x: list[float] = field(default_factory=list)
    particle_y: list[float] = field(default_factory=list)

    # Most recent set of x,y beacons seen
    beacon_x: list[float] = field(default_factory=list)
    beacon_y: list[float] = field(default_factory=list)

    # Ground truth from sim
    ground_truth_x: RingBuffer = RingBuffer(max_pose_points)
    ground_truth_y: RingBuffer = RingBuffer(max_pose_points)

plot_data = PlotData()

def update_debug(debug_msg : PFDebug):
    global plot_data

    #rospy.loginfo("update_debug")
    #rot_data = []
    plot_data.particle_x.clear()
    plot_data.particle_y.clear()
    for p in debug_msg.poses:
        plot_data.particle_x.append(p.position.x)
        plot_data.particle_y.append(p.position.y)
    #rospy.logwarn(plot_data.particle_x)
        #angles = euler_from_quaternion([p.orientation.x, p.orientation.y, p.orientation.z, p.orientation.w]);
        #rot_data.append(angles[2])

    plot_data.predicted_x.append(debug_msg.predicted_pose.position.x)
    plot_data.predicted_y.append(debug_msg.predicted_pose.position.y)

    o = debug_msg.predicted_pose.orientation
    plot_data.angle = euler_from_quaternion([o.x, o.y, o.z, o.w])[2]

    plot_data.beacon_x.clear()
    plot_data.beacon_y.clear()
    for b in debug_msg.beacons:
        plot_data.beacon_x.append(b.position.x)
        plot_data.beacon_y.append(b.position.y)


def update_ground_truth(ground_truth_msg):
    global plot_data

    plot_data.ground_truth_x.append(ground_truth_msg.pose.pose.position.x)
    plot_data.ground_truth_y.append(ground_truth_msg.pose.pose.position.y)


def update_match_data(match_data_msg):
    global alliance_color
    alliance_color = match_data_msg.allianceColor


def main():
    rospy.init_node('pf_vis_node')
    rospy.loginfo("pf visualization node initialized")

    beacons = []
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

    fig, axes = plt.subplots(1,1)
    ax = axes[0]
    position_plot, = ax.plot([], [], 'r.', markersize=2)
    dir_plot, = ax.plot([], [], 'r-,')
    particles_plot,  = ax.plot([], [], 'b.', markersize=.15)
    ground_truth_plot, = ax.plot([], [], 'g.', markersize=2)
    ax.set_xlim(field_dims[0], field_dims[1])
    ax.set_ylim(field_dims[2], field_dims[3])

    dtns = []
    beacon_x = []
    beacon_y = []
    beacon_locations_blue = {}
    for b in beacons:
        beacon_x.append(b[0])
        beacon_y.append(b[1])
        # Set up a map of beacon_id -> [beacon x, beacon y] tuples
        if b[2] not in beacon_locations_blue:
            beacon_locations_blue[b[2]] = []
        beacon_locations_blue[b[2]].append([b[0], b[1]])

        # And a placeholder for each potential predicted_pose->beacon line
        #dtn, = ax.plot([], [], 'r-')
        #dtns.append(dtn)

    # Create mirror image beacon positions for robot
    # on red alliance
    trans = TransformStamped()
    trans.header.frame_id = "blue0"
    trans.header.stamp = 0
    trans.child_frame_id = "red0"
    trans.transform.translation.x = field_dims[1]
    trans.transform.translation.y = field_dims[3]
    q = quaternion_from_euler(0, 0, math.pi)
    trans.transform.rotation = Quaternion(*q)

    beacon_locations_red = {}
    for k, v in beacon_locations_blue.items():
        beacon_locations_red[k] = []
        for vv in v:
            pose_s = PoseStamped()
            pose_s.header = trans.header
            pose_s.pose.position.x = vv[0]
            pose_s.pose.position.y = vv[1]
            pose_t = tf2_geometry_msgs.do_transform_pose(pose_s, trans)
            beacon_locations_red[k].append([pose_t.pose.position.x, pose_t.pose.position.y])

    sub_debug = rospy.Subscriber(debug_topic, PFDebug, update_debug)
    sub_ground_truth = rospy.Subscriber(ground_truth_topic, Odometry, update_ground_truth)
    sub_match_data = rospy.Subscriber(match_data_topic, MatchSpecificData, update_match_data)

    plt.show()
    global plot_data
    global alliance_color
    alliance_color = 1
    current_alliance_color = -1
    beacon_annotations = []
    r = rospy.Rate(21)
    while not rospy.is_shutdown():
        r.sleep()

        rospy.loginfo(f"px = {plot_data.particle_x}")

        if (alliance_color != current_alliance_color):
            current_alliance_color = alliance_color
            if alliance_color == 0:
                beacon_locations = beacon_locations_red
            else:
                beacon_locations = beacon_locations_blue

            ax.plot(beacon_x, beacon_y, 'ko')
            for i, a in enumerate(beacon_annotations):
                a.remove()
            beacon_annotations[:] = []
            
            for id, ps in beacon_locations.items():
                for p in ps:
                    beacon_annotations.append(ax.annotate(id, (p[0], p[1]), textcoords="offset points", xytext=(0,10), ha='center'))
        particles_plot.set_data(plot_data.particle_x, plot_data.particle_y)
        position_plot.set_data(plot_data.predicted_x.get(), plot_data.predicted_y.get())
        this_x = plot_data.predicted_x.newest()
        this_y = plot_data.predicted_y.newest()
        if (this_x is not None) and (this_y is not None):
            dir_plot.set_data([this_x, this_x + math.cos(plot_data.angle)],[this_y, this_y + math.sin(plot_data.angle)])
        ground_truth_plot.set_data(plot_data.ground_truth_x.get(), plot_data.ground_truth_y.get())

        plt.draw()


if __name__ == '__main__':
    main()