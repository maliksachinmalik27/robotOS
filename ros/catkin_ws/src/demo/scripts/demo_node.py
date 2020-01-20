#!/usr/bin/env python
# libraries for image processing 
import rospy
import numpy as np
import cv2 as cv

# duckietown stuff
from duckietown_msgs.msg import Twist2DStamped
from sensor_msgs.msg import CompressedImage, Image
from cv_bridge import CvBridge, CvBridgeError

# main code starts here
class DemoNode(object):
    def __init__(self):
        self.node_name = "LineDetectorNode"
        self.sub_image = rospy.Subscriber("/None/corrected_image/compressed", CompressedImage, self.cbImage,
                                          queue_size=1)
        self.pub_cmd = rospy.Publisher("/None/car_cmd", Twist2DStamped, queue_size=1)

    def cbImage(self, image_msg):
        msg = Twist2DStamped()
        msg.v = 0.1

        hsv_min = np.array([146, 144, 146], dtype="uint8")
        hsv_max = np.array([229, 229, 229], dtype="uint8")
        np_arr = np.fromstring(image_msg.data, np.uint8)
        decoded_image = cv.imdecode(np_arr, cv.IMREAD_COLOR)

        mask = cv.inRange(decoded_image, hsv_min, hsv_max)
        output = cv.bitwise_and(decoded_image, decoded_image, mask=mask)
        edges = cv.Canny(output, 50, 150, apertureSize=3)
        minLineLength = 100
        # Code for detecting white lines 
        white_l = cv.HoughLinesP(image=edges, rho=1, theta=np.pi / 180, threshold=100, lines=np.array([]),
                               minLineLength=minLineLength, maxLineGap=80)

        i = 0
        R_angle = np.arctan((white_l[i][0][2] - white_l[i][0][0]) / (white_l[i][0][3] - white_l[i][0][1]))
        if (R_angle > 0):  # getting good value for this is pretty hard
            R_angle = np.pi / 2 - R_angle # tried lot of alternatives. none worked.
	#else :
	#   R_angle = 1
        msg.omega = R_angle
        self.pub_cmd.publish(msg)


if __name__ == '__main__':
    rospy.init_node('demo', anonymous=False)
    demo_node = DemoNode()
    rospy.spin()
