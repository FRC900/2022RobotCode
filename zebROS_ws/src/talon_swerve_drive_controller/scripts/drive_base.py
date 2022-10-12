#!/usr/bin/env python3

import cv2
import rospy
import numpy as np


def callback(data):
    image = np.zeros((512, 512, 3), np.uint8)
    image[:]= (255, 255, 255)

    cv2.imshow("Current Drivebase Config", image)
    #image = cv2.line(image, start_point, end_point, color, thickness)

    cv2.waitKey(0)
    cv2.destroyAllWindows()

def make_drivetrain_image():
    rospy.init_node("make_drivetrain_image")
    rospy.Subscriber("")