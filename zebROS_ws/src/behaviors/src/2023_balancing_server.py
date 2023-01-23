#! /usr/bin/env python3

# balancing server, controls the entire balancing process and keeps track of the state and eventually leads to robot being balanced
# assumes that the robot is already aligned with the charging station #! /usr/bin/env python3

# 2023 balancing server, runs PID on the pitch angle from the IMU (ZED) and 0s it

# imports for actionlib server and messages
import rospy
import actionlib
import behavior_actions.msg
import sensor_msgs.msg
import std_msgs.msg
import math
import geometry_msgs.msg._Quaternion
from enum import Enum
from tf.transformations import euler_from_quaternion # may look like tf1 but is actually tf2

class States(Enum):
    NO_WEELS_ON = 0 # starting state, nothing touching charging station
    ONE_WHEEL_ON_RAMP = 1 # when first wheel gets on to the ramp
    ONE_WHEEL_ON_CENTER = 2 # when that same wheel gets to the middle, should be able to call PID node from here
    TWO_WHEELS_ON_CENTER = 3 # when we have both wheels on the center
    # no states after this because if we fall off the other side we have done something very wrong and need to restart

def handle_param_load(name):
    try:
        res = rospy.get_param(name)
    except rospy.ROSException as e:
        rospy.logerr(f"Unable to load param with name={name}")
        return False
    return res

class AutoBalancing:
    # create messages that are used to publish feedback/result
    _feedback = behavior_actions.msg.Balancing2023Feedback()
    _result = behavior_actions.msg.Balancing2023Result()

    def __init__(self, name):
        self.debug = False
        self._action_name = name

        self._as = actionlib.SimpleActionServer(self._action_name, behavior_actions.msg.Balancer2023Action,
                                                execute_cb=self.balancer_callback, auto_start=False)
        self._as.start()


        self.PID_enabled = False
        self.current_pitch = -999
        self.current_pitch_time = -1000
        
        rospy.logdebug("Finished initalizing")

    def x_cmd_cb(self, x_command: std_msgs.msg.Float64):
        if self.debug:
            rospy.loginfo_throttle(1, f"X_cmd_callback with {x_command}") 
        # send to motors, @TODO
        

    def imu_callback(self, imu_msg):
        rospy.logdebug("Imu callback")
        q = imu_msg.orientation
        euler = euler_from_quaternion([q.x, q.y, q.z, q.w]) 
        #roll = euler[0]
        pitch = euler[1]
        #yaw = euler[2]
        self.current_pitch = pitch
        self.current_pitch_time = imu_msg.header.stamp.secs
        if self.debug:
            rospy.loginfo_throttle(1, f"Pitch in degrees {pitch*(180/math.pi)}")
        self.pub_pitch_state.publish(pitch)

    def preempt(self):
        msg = std_msgs.msg.Bool()
        msg.data = False
        self.pub_PID_enable.publish(msg)

    def balancer_callback(self, goal):
        rospy.loginfo(f"Balancer Actionlib called with goal {goal}")
        msg = std_msgs.msg.Bool()
        msg.data = True
        self.pub_PID_enable.publish(msg)
        
        msgF = std_msgs.msg.Float64()
        msgF.data = 0.0
        self.pub_setpoint.publish(msgF) # say we want pitch to be 0
        while True:
            # I think subscribers should update without spinOnce... it doesn't exist in python
            # check that preempt has not been requested by the client
            if self._as.is_preempt_requested():
                rospy.loginfo('%s: Preempted' % self._action_name)
                self.preempt() # stop pid
                self._as.set_preempted()
                break
            
            # publish the feedback
            self._as.publish_feedback(self._feedback)

if __name__ == '__main__':

    rospy.init_node('balancer')
    name = rospy.get_name()
    balancer_server = Balancer(name)
    rospy.spin()

