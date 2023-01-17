#! /usr/bin/env python3

# 2023 balancing server, runs PID on the pitch angle from the IMU (ZED) and 0s it

# imports for actionlib server and messages
import rospy
import actionlib
import behavior_actions.msg
import sensor_msgs.msg
import std_msgs.msg
import math
import geometry_msgs.msg._Quaternion
from tf.transformations import euler_from_quaternion # may look like tf1 but is actually tf2

def handle_param_load(name):
    try:
        res = rospy.get_param(name)
    except rospy.ROSException as e:
        rospy.logerr(f"Unable to load param with name={name}")
        return False
    return res

class Balancer(object):
    # create messages that are used to publish feedback/result
    _feedback = behavior_actions.msg.Balancer2023Feedback()
    _result = behavior_actions.msg.Balancer2023Result()

    def __init__(self, name, imu_topic="/imu/zeroed_imu", debug=False):
        self.debug = debug
        self._action_name = name
        self._as = actionlib.SimpleActionServer(self._action_name, behavior_actions.msg.Balancer2023Action,
                                                execute_cb=self.balancer_callback, auto_start=False)
        self._as.start()

        # load params, don't care about topics after we have the subs/pubs
        res = handle_param_load("~setpoint_topic") 
        setpoint_pub_topic = res if res else "position_balance_pid/pitch_cmd_pub"

        res = handle_param_load("~topic_from_plant")
        pitch_state_pub_topic = res if res else "position_balance_pid/pitch_state_pub"

        res = handle_param_load("~topic_from_controller")
        x_command_sub_topic = res if res else "position_balance_pid/x_command"

        res = handle_param_load("~command_timeout")
        self.command_timeout = res if res else 0.5 # sec
        
        res = handle_param_load("~enable_topic")
        enable_topic = res if res else "balance_server_pid/pid_enable"

        res = handle_param_load("~imu_sub_topic")
        imu_sub_topic = res if res else "/imu/zeroed_imu"

        print(f"Loaded params {setpoint_pub_topic}, {pitch_state_pub_topic}, {x_command_sub_topic}")
        self.PID_enabled = False
    
        self.current_pitch = -999
        self.current_pitch_time = -1000
        
        # should just be publishing 0.0 because thats the angle we want    
        # feeling like python has strict types with all these types I have to type out
        self.pub_setpoint = rospy.Publisher(setpoint_pub_topic, std_msgs.msg.Float64)
        # publishes our current pitch from imu
        self.pub_pitch_state = rospy.Publisher(pitch_state_pub_topic, std_msgs.msg.Float64)
        # result of pid node, tells us what X command to give to motors
        self.sub_x_command = rospy.Subscriber(x_command_sub_topic, std_msgs.msg.Float64, self.x_cmd_cb)
        self.pub_PID_enable = rospy.Publisher(enable_topic, std_msgs.msg.Bool) 
        self.sub_imu = rospy.Subscriber(imu_sub_topic, sensor_msgs.msg.Imu, self.imu_callback)

    def x_cmd_cb(self, x_command: std_msgs.msg.Float64):
        if self.debug:
            rospy.logdebug(f"X_cmd_callback with {x_command}") 
        # send to motors, @TODO

    def imu_callback(self, imu_msg):
        q = imu_msg.orientation
        euler = euler_from_quaternion([q.x, q.y, q.z, q.w]) 
        #roll = euler[0]
        pitch = euler[1]
        #yaw = euler[2]
        self.current_pitch = pitch
        self.current_pitch_time = imu_msg.header.stamp.now
        if self.debug:
            rospy.loginfo_throttle(1, f"Pitch in degrees {pitch*(180/math.pi)}")
        self.pub_setpoint.publish(pitch)

    def preempt(self):
        msg = std_msgs.msg.Bool
        msg.data = False
        self.pub_PID_enable.publish(msg)

    def balancer_callback(self, goal):
        success = True

        msg = std_msgs.msg.Bool
        msg.data = True
        self.pub_PID_enable.publish(msg)
        while True:
            # I think subscribers should update without spinOnce... it doesn't exist in python

            # check that preempt has not been requested by the client
            if self._as.is_preempt_requested():
                rospy.loginfo('%s: Preempted' % self._action_name)
                self.preempt() # stop pid
                self._as.set_preempted()
                success = False
                break
            # publish the feedback
            self._as.publish_feedback(self._feedback)

        if success:
            self._result.sequence = self._feedback.sequence
            rospy.loginfo('%s: Succeeded' % self._action_name)
            self._as.set_succeeded(self._result)
        else:
            self._result

if __name__ == '__main__':
    rospy.init_node('balancer')
    balancer_server = Balancer(rospy.get_name())
    rospy.spin()

