#!/usr/bin/env python3

import rospy
from std_msgs.msg import String


def callback(data):
    pub = rospy.Publisher('second_node', String, queue_size=10)
    rate = rospy.Rate(10)
    append = (data.data)
    rospy.loginfo(append + " second_node_add_on")
    pub.publish(append + " second_node_add_on")

def listener():
    rospy.init_node('listener', anonymous=True)
    rospy.Subscriber("first_node", String, callback)
    rospy.spin()


if __name__ == '__main__':
    try:
        listener()
    except rospy.ROSInterruptException:
        pass




#if __name__ == '__main__':
#    listener()


