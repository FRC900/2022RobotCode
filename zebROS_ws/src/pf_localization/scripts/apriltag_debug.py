#!/usr/bin/python3

import matplotlib.pyplot as plt

import rospy
#from pf_localization.msg import pf_debug, pf_pose
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Quaternion
from tf.transformations import euler_from_quaternion
from geometry_msgs.msg import PoseArray, PoseWithCovarianceStamped
import math

ground_truth_topic = "/base_pose_ground_truth"

def ground_truth_callback(data):
    global ax

    # get the ground truth pose
    x = data.pose.pose.position.x
    y = data.pose.pose.position.y
    z = data.pose.pose.position.z

    # get the ground truth orientation
    q = data.pose.pose.orientation
    q = [q.x, q.y, q.z, q.w]
    roll, pitch, yaw = euler_from_quaternion(q)

    # find distance between robot and (8.229,4.114) using distance formula
    distance = ((x - 8.229)**2 + (y - 4.114)**2)**0.5
    rospy.loginfo("Distance from goal: %f", distance)

    # find angle between robot and (8.229,4.114) using yaw
    angle = math.atan2(4.114 - y, 8.229 - x) - yaw
    #angle = (y - 4.114)/(x - 8.229)
    #angle = math.atan(angle)
    # convert to degrees
    angle = angle * 180 / math.pi
    rospy.loginfo("Angle from goal: %f", angle)


def main():
    global ax

    rospy.init_node('apriltag_debug', anonymous = True)
    rospy.loginfo("debug node started")

    # subscribe to the ground truth topic
    rospy.Subscriber(ground_truth_topic, Odometry, ground_truth_callback)

    try:
        rospy.spin()
    except KeyboardInterrupt:
        print("Shutting down")

if __name__ == '__main__':
    main()
