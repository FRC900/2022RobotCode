#! /usr/bin/env python3

# try to simulate the odometry and position of the robot on the charging station
# was going to do pyhisics sim but as it almost always is, its not worth it. 

from collections import namedtuple
from enum import Enum
import cv2 # for visualizing
import numpy as np
import time
import math
import rospy
import std_msgs.msg
import rosgraph_msgs.msg

from sim_balance_base import *

global n
n=0
def step(msg):
    global n
    global charging_station #sim_clock, clock_pub
    rospy.loginfo_throttle(1, f"step {charging_station.time}, angle {charging_station.angle*180/np.pi}, msg {msg.data}")
    print(f"Callback {n}")
    n +=1
    ##print(f"angle {charging_station.angle*180/np.pi}")
    charging_station.step(msg.data, TIME_STEP)
    charging_station.x_cmd_vel = msg.data
    #sim_clock.clock = rospy.Time.from_sec(charging_station.time)
    #clock_pub.publish(sim_clock)
    #pub.publish(charging_station.angle)
    #charging_station.visualize()

def add_noise(angle):
    return angle + np.random.normal(0, 0.01)

if __name__ == "__main__":
    global charging_station, pub, sub
    rospy.init_node("charging_station_sim")
    #sim_clock = rosgraph_msgs.msg.Clock()
    zero_time = rospy.get_time()

    sub = rospy.Subscriber("/balance_position/position_balance_pid/x_command", std_msgs.msg.Float64, step, queue_size=1)
    #clock_pub = rospy.Publisher("/clock", rosgraph_msgs.msg.Clock, queue_size=0)
    pub = rospy.Publisher("/balance_position/position_balance_pid/pitch_state_pub", std_msgs.msg.Float64, queue_size=1)
    charging_station = ChargingStationSim()
    while charging_station.state != States.ON_MIDDLE_2_WHEEL:
        charging_station.step(0.5, TIME_STEP)

    #print(f"Charging station is ready, angle {charging_station.angle*180/np.pi}")
    #charging_station.visualize()
    #print("Starting ROS")
    #print("Published clock")
    while not rospy.is_shutdown():
        angle_to_pub = add_noise(charging_station.angle) 
        pub.publish(angle_to_pub)
        charging_station.noise_angle = angle_to_pub
        charging_station.visualize()
