#!/usr/bin/env python3
import rospy
from std_msgs.msg import String

def callback(data):
    rospy.loginfo(" Third node is receiving data:  %s", data.data)

def listener():
    rospy.init_node('listener', anonymous=True)
    rospy.Subscriber("second_node", String, callback)

    rospy.spin()

if __name__ == '__main__':
    listener()

