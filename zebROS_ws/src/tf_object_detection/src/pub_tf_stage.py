# write a node that publishes the base_link to map transform, using the topic /base_pose_ground_truth as truth

import rospy
from nav_msgs.msg import Odometry
from geometry_msgs.msg import TransformStamped
from tf2_msgs.msg import TFMessage
from tf.transformations import quaternion_from_euler

def callback(data):
    # create a transform message
    transform = TransformStamped()
    transform.header.stamp = rospy.Time.now()
    transform.header.frame_id = "map"
    transform.child_frame_id = "zed_objdet_odom"

    # set the translation
    transform.transform.translation.x = data.pose.pose.position.x
    transform.transform.translation.y = data.pose.pose.position.y
    transform.transform.translation.z = data.pose.pose.position.z
    print("x: ", data.pose.pose.position.x)
    print("y: ", data.pose.pose.position.y)
    print("z: ", data.pose.pose.position.z)

    # set the rotation
    transform.transform.rotation.x = data.pose.pose.orientation.x
    transform.transform.rotation.y = data.pose.pose.orientation.y
    transform.transform.rotation.z = data.pose.pose.orientation.z
    transform.transform.rotation.w = data.pose.pose.orientation.w

    # create a tf message
    tf = TFMessage()
    tf.transforms.append(transform)

    # publish the tf message
    pub.publish(tf)
    r.sleep()


    
# initialize the node
rospy.init_node('pub_tf_stage', anonymous=False)
r = rospy.Rate(10)
pub = rospy.Publisher("/tf", TFMessage, queue_size=100)
# subscribe to the topic
rospy.Subscriber("/base_pose_ground_truth", Odometry, callback, queue_size=1)
7
# spin
rospy.spin()