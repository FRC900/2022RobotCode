#! /usr/bin/env python3
import rospy
from field_obj.msg import TFDetection, TFObject
from cuda_apriltag_ros.msg import AprilTagDetectionArray, AprilTagDetection


global pub

def depth_check_cb(msg):
    TFdet = TFDetection()
    for detection in msg:
        obj = TFObject()
        obj.tl.x = detection.corners[0].x
        obj.tl.y = detection.corners[0].y
        obj.br.x = detection.corners[-1].x
        obj.br.y = detection.corners[-1].y
        obj.id = detection.id
        obj.confidence = 1
        obj.label = str(detection.id)
        TFdet.append(obj)

    pub.publish(TFdet)

def main():

    sub_topic = "/cuda_tag_detections"
    pub_topic = "obj_detection_msg"
    rospy.init_node('check_depth', anonymous=True)

    sub = rospy.Subscriber(sub_topic, AprilTagDetectionArray, depth_check_cb)
    pub = rospy.Publisher(pub_topic, TFDetection, queue_size=3)

    try:
        rospy.spin()
    except KeyboardInterrupt:
        print("Shutting down")

if __name__ == "main":
    main()  