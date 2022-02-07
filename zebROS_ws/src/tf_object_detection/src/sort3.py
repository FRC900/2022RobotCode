#! /usr/bin/env python2
# -*- coding: future_fstrings -*-
"""
	SORT: A Simple, Online and Realtime Tracker
	Copyright (C) 2016-2020 Alex Bewley alex@bewley.ai

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
"""
from __future__ import print_function
import rospy
import re
from tf2_ros import *
from field_obj.msg import Detection, Object
import tf2_msgs.msg
import geometry_msgs.msg
from sensor_msgs.msg import Image
import tf2_geometry_msgs
from field_obj.msg import TFDetection, TFObject, TrackDetection, TrackObject
#from object_detection.utils import label_map_util
from geometry_msgs.msg import PointStamped, Point
import rospkg
import message_filters
import os
import cv2
from cv_bridge import CvBridge, CvBridgeError
import numpy as np
import cv2
import glob
import time
import argparse
from filterpy.kalman import KalmanFilter
import threading
import std_msgs
import random
import traceback

np.random.seed(0)
bridge = CvBridge()

def linear_assignment(cost_matrix):
  try:
	import lap
	_, x, y = lap.lapjv(cost_matrix, extend_cost=True)
	return np.array([[y[i],i] for i in x if i >= 0]) #
  except ImportError:
	from scipy.optimize import linear_sum_assignment
	x, y = linear_sum_assignment(cost_matrix)
	return np.array(list(zip(x, y)))


def iou_batch(bb_test, bb_gt):
  """
  From SORT: Computes IOU between two bboxes in the form [x1,y1,x2,y2]
  """
  bb_gt = np.expand_dims(bb_gt, 0)
  bb_test = np.expand_dims(bb_test, 1)

  xx1 = np.maximum(bb_test[..., 0], bb_gt[..., 0])
  yy1 = np.maximum(bb_test[..., 1], bb_gt[..., 1])
  xx2 = np.minimum(bb_test[..., 2], bb_gt[..., 2])
  yy2 = np.minimum(bb_test[..., 3], bb_gt[..., 3])
  w = np.maximum(0., xx2 - xx1)
  h = np.maximum(0., yy2 - yy1)
  wh = w * h
  o = wh / ((bb_test[..., 2] - bb_test[..., 0]) * (bb_test[..., 3] - bb_test[..., 1])
	+ (bb_gt[..., 2] - bb_gt[..., 0]) * (bb_gt[..., 3] - bb_gt[..., 1]) - wh)
  return(o)


def convert_bbox_to_z(bbox):
  """
  Takes a bounding box in the form [x1,y1,x2,y2] and returns z in the form
	[x,y,s,r] where x,y is the centre of the box and s is the scale/area and r is
	the aspect ratio
  """
  w = bbox[2] - bbox[0]
  h = bbox[3] - bbox[1]
  x = bbox[0] + w/2.
  y = bbox[1] + h/2.
  s = w * h    #scale is just area
  r = w / float(h)
  return np.array([x, y, s, r]).reshape((4, 1))


def convert_x_to_bbox(x,score=None):
  """
  Takes a bounding box in the centre form [x,y,s,r] and returns it in the form
	[x1,y1,x2,y2] where x1,y1 is the top left and x2,y2 is the bottom right
  """
  w = np.sqrt(x[2] * x[3])
  h = x[2] / w
  if(score==None):
	return np.array([x[0]-w/2.,x[1]-h/2.,x[0]+w/2.,x[1]+h/2.]).reshape((1,4))
  else:
	return np.array([x[0]-w/2.,x[1]-h/2.,x[0]+w/2.,x[1]+h/2.,score]).reshape((1,5))


class KalmanBoxTracker(object):
  """
  This class represents the internal state of individual tracked objects observed as bbox.
  """
  count = 0
  def __init__(self,bbox):
	"""
	Initialises a tracker using initial bounding box.
	"""
	#define constant velocity model
	self.kf = KalmanFilter(dim_x=7, dim_z=4)
	self.kf.F = np.array([[1,0,0,0,1,0,0],[0,1,0,0,0,1,0],[0,0,1,0,0,0,1],[0,0,0,1,0,0,0],  [0,0,0,0,1,0,0],[0,0,0,0,0,1,0],[0,0,0,0,0,0,1]])
	self.kf.H = np.array([[1,0,0,0,0,0,0],[0,1,0,0,0,0,0],[0,0,1,0,0,0,0],[0,0,0,1,0,0,0]])

	self.kf.R[2:,2:] *= 10.
	self.kf.P[4:,4:] *= 1000. #give high uncertainty to the unobservable initial velocities
	self.kf.P *= 10.
	self.kf.Q[-1,-1] *= 0.01
	self.kf.Q[4:,4:] *= 0.01

	self.kf.x[:4] = convert_bbox_to_z(bbox)
	self.time_since_update = 0
	self.id = KalmanBoxTracker.count
	KalmanBoxTracker.count += 1
	self.history = []
	self.hits = 0
	self.hit_streak = 0
	self.age = 0

  def update(self,bbox):
	"""
	Updates the state vector with observed bbox.
	"""
	self.time_since_update = 0
	self.history = []
	self.hits += 1
	self.hit_streak += 1
	self.kf.update(convert_bbox_to_z(bbox))

  def predict(self):
	"""
	Advances the state vector and returns the predicted bounding box estimate.
	"""
	if((self.kf.x[6]+self.kf.x[2])<=0):
	  self.kf.x[6] *= 0.0
	self.kf.predict()
	self.age += 1
	if(self.time_since_update>0):
	  self.hit_streak = 0
	self.time_since_update += 1
	self.history.append(convert_x_to_bbox(self.kf.x))
	return self.history[-1]

  def get_state(self):
	"""
	Returns the current bounding box estimate.
	"""
	return convert_x_to_bbox(self.kf.x)


def associate_detections_to_trackers(detections,trackers,iou_threshold = 0.3):
  """
  Assigns detections to tracked object (both represented as bounding boxes)

  Returns 3 lists of matches, unmatched_detections and unmatched_trackers
  """
  if(len(trackers)==0):
	return np.empty((0,2),dtype=int), np.arange(len(detections)), np.empty((0,5),dtype=int)

  iou_matrix = iou_batch(detections, trackers)

  if min(iou_matrix.shape) > 0:
	a = (iou_matrix > iou_threshold).astype(np.int32)
	if a.sum(1).max() == 1 and a.sum(0).max() == 1:
		matched_indices = np.stack(np.where(a), axis=1)
	else:
	  matched_indices = linear_assignment(-iou_matrix)
  else:
	matched_indices = np.empty(shape=(0,2))

  unmatched_detections = []
  for d, det in enumerate(detections):
	if(d not in matched_indices[:,0]):
	  unmatched_detections.append(d)
  unmatched_trackers = []
  for t, trk in enumerate(trackers):
	if(t not in matched_indices[:,1]):
	  unmatched_trackers.append(t)

  #filter out matched with low IOU
  matches = []
  for m in matched_indices:
	if(iou_matrix[m[0], m[1]]<iou_threshold):
	  unmatched_detections.append(m[0])
	  unmatched_trackers.append(m[1])
	else:
	  matches.append(m.reshape(1,2))
  if(len(matches)==0):
	matches = np.empty((0,2),dtype=int)
  else:
	matches = np.concatenate(matches,axis=0)

  return matches, np.array(unmatched_detections), np.array(unmatched_trackers)


class Sort(object):
  def __init__(self, max_age=1, min_hits=3, iou_threshold=0.3):
	"""
	Sets key parameters for SORT
	"""
	self.max_age = max_age
	self.min_hits = min_hits
	self.iou_threshold = iou_threshold
	self.trackers = []
	self.frame_count = 0

  def update(self, dets=np.empty((0, 5))):
	"""
	Params:
	  dets - a numpy array of detections in the format [[x1,y1,x2,y2,score],[x1,y1,x2,y2,score],...]
	Requires: this method must be called once for each frame even with empty detections (use np.empty((0, 5)) for frames without detections).
	Returns the a similar array, where the last column is the object ID.

	NOTE: The number of objects returned may differ from the number of detections provided.
	"""
	self.frame_count += 1
	# get predicted locations from existing trackers.
	trks = np.zeros((len(self.trackers), 5))
	to_del = []
	ret = []
	for t, trk in enumerate(trks):
	  pos = self.trackers[t].predict()[0]
	  trk[:] = [pos[0], pos[1], pos[2], pos[3], 0]
	  if np.any(np.isnan(pos)):
		to_del.append(t)
	trks = np.ma.compress_rows(np.ma.masked_invalid(trks))
	for t in reversed(to_del):
	  self.trackers.pop(t)
	matched, unmatched_dets, unmatched_trks = associate_detections_to_trackers(dets,trks, self.iou_threshold)

	# update matched trackers with assigned detections
	for m in matched:
	  self.trackers[m[1]].update(dets[m[0], :])

	# create and initialise new trackers for unmatched detections
	for i in unmatched_dets:
		trk = KalmanBoxTracker(dets[i,:])
		self.trackers.append(trk)
	i = len(self.trackers)
	for trk in reversed(self.trackers):
		d = trk.get_state()[0]
		if (trk.time_since_update < 1) and (trk.hit_streak >= self.min_hits or self.frame_count <= self.min_hits):
		  ret.append(np.concatenate((d,[trk.id+1])).reshape(1,-1)) # +1 as MOT benchmark requires positive
		i -= 1
		# remove dead tracklet
		if(trk.time_since_update > self.max_age):
		  self.trackers.pop(i)
	if(len(ret)>0):
	  return np.concatenate(ret)
	return np.empty((0,5))


global frame, total_frames, mot_tracker, tfBuffer, listener
frame = 0

def callback(msg):
	print("Got called back!")
	global frame, img

	print(str(msg.header.frame_id))

	total_time = 0.0
	total_frames = 0
	zList = []

	frame += 1  # detection and frame numbers begin at 1
	print("Frame" + str(frame))
	detList = []
	detDict = {}
	for key in trackerDict.keys():
		detDict[key] = []


	if test:
		print("Using test")
		for detection in msg.objects:
				# Adds detections and then converts to np array,
				tempDetList = []
				tempZ = []
				tempDetList.append(float(detection.location.x - boundingAdd))
				tempDetList.append(float(detection.location.y - boundingAdd))
				tempDetList.append(float(detection.location.x + boundingAdd))
				tempDetList.append(float(detection.location.y + boundingAdd))
				tempDetList.append(float(detection.confidence))
				tempDet = np.asarray(tempDetList)
				tempZ.append(int(detection.location.x))
				tempZ.append(int(detection.location.y))
				tempZ.append(int(detection.location.z))
				zList.append(tempZ)
				# Trys to add point to the list and if not it makes the list
				if len(detDict[str(detection.id)]) == 0:
					print("Len = 0")
					print(tempDet)
					detDict[str(detection.id)] = tempDet
					print(detDict[str(detection.id)])

				else:
					print("concatenateing")
					print(tempDet)
					detDict[str(detection.id)] = np.vstack((detDict[str(detection.id)], tempDet))
					print(detDict[str(detection.id)])

	else:
		for detection in msg.objects:
			#transformed = tf2_geometry_msgs.do_transform_point(detection.location, transform
			laser_point=PointStamped()
			laser_point.header.frame_id = msg.header.frame_id
			laser_point.header.stamp = msg.header.stamp
			laser_point.point.x=detection.location.x
			laser_point.point.y=detection.location.y
			laser_point.point.z=detection.location.z
			#laser_pointTransformed = tf2_geometry_msgs.PointStamped.do_transform_point(laser_point, transform)
			#laser_pointTransformed = transform.do_transform_point(laser_point, transform)
			point=tfBuffer.transform(laser_point, "map")
			print(detection.id)
			print(point)
			tempDetList = []
			# SORT wants bounding boxes, just makes all objects bounding*boudningAdd needed for IOU to work (hopefully)
			tempDetList.append(float(point.point.x - boundingAdd))
			tempDetList.append(float(point.point.y - boundingAdd))
			tempDetList.append(float(point.point.x + boundingAdd))
			tempDetList.append(float(point.point.y + boundingAdd))
			tempDetList.append(float(detection.confidence))
			if len(detDict[str(detection.id)]) == 0:
				detDict[str(detection.id)] = tempDet

			else:
				detDict[str(detection.id)] = np.vstack((detDict[str(detection.id)], tempDet))


	trackers = []
	for key, value in detDict.items():
		if len(value) == 0:
			detDict[key] = np.empty((0, 5))
			continue

		tempDetection = trackerDict[key].update(detDict[key])
		#print(trackerDict[key].trackers[0].kf.P)

		tempDetection = tempDetection.tolist()
		for idx, i in enumerate(tempDetection):
			tempDetection[idx].insert(4, key)
		trackers.append(tempDetection)

	#time.sleep(11)
	total_frames += 1
	predictedCord = []
	DetectionPub = TrackDetection()
	DetectionPub.header = std_msgs.msg.Header()
	DetectionPub.header.frame_id = "map"

	objs = []
	# Goes through each detection and
	print(trackers)

	for ii in trackers:
		for i in ii:
			if len(i) > 1:
				tempPredCord = []
				try:
					print(i)
					x = round(i[0] + boundingAdd)
					y = round(i[1] + boundingAdd)
					trackID = i[-1]
					IDstr = i[-2]
					tempPredCord.append(x)
					tempPredCord.append(y)
					tempPredCord.append(trackID)
					predictedCord.append(tempPredCord)

					obj = TrackObject()
					obj.trackID = int(trackID)
					obj.id = IDstr
					obj.location.x = x
					obj.location.y = y
					print("zlist")
					print(zList)
					for i in zList:
						print(int(i[0]),int(x),int(i[1]),int(y))
						if int(i[0]) == int(x) and int(i[1]) == int(y):
							obj.location.z = i[2]
					# Not sure what to put, could be the recorded Z but then two values would be the predicted and 1 would be the actual
					
					objs.append(obj)



				except Exception as e:
					print(i)
					print(traceback.format_exc())
					time.sleep(1)
	DetectionPub.objects = objs
	print(DetectionPub.objects)
	pub.publish(DetectionPub)
	time.sleep(1)
	predictedCord = np.asarray(predictedCord)
	print("--------Prediction--------")
	#print(msg)
	print("--------Actual--------")
	print(centers)
	if test:
		visualize(centers, predictedCord)

	#time.sleep(1)

# Takes two lists of coordinates prediction = [[x,y,id], [x,y,id] ...] and groundTruth = [[x,y], [x,y] ...]
def visualize(groundTruth, prediction):
	global img
	predictedCord = prediction
	centers = groundTruth
	track_colors = [(255, 0, 0), (0, 255, 0), (0, 0, 255), (255, 255, 0),
					(127, 127, 255), (255, 0, 255), (255, 127, 255),
					(127, 0, 255), (127, 0, 127),(127, 10, 255), (0,255, 127),(255, 0, 0), (0, 255, 0), (0, 0, 255), (255, 255, 0),
					(127, 127, 255), (255, 0, 255), (255, 127, 255),
					(127, 0, 255), (127, 0, 127),(127, 10, 255), (0,255, 127),(255, 0, 0), (0, 255, 0), (0, 0, 255), (255, 255, 0),
					(127, 127, 255), (255, 0, 255), (255, 127, 255),
					(127, 0, 255), (127, 0, 127),(127, 10, 255), (0,255, 127),(255, 0, 0), (0, 255, 0), (0, 0, 255), (255, 255, 0),
					(127, 127, 255), (255, 0, 255), (255, 127, 255),
					(127, 0, 255), (127, 0, 127),(127, 10, 255), (0,255, 127)]

	img = np.ones((512,512,3),np.int32)*255
	img = np.full((512, 512, 3),255, dtype = np.uint8)
	img[:, :] = [255, 255, 255]
	for idx, value in enumerate(predictedCord):

		trackID = int(value[-1])
		x = int(value[0])
		y = int(value[1])
		tl = (x-10,y-10)
		br = (x+10,y+10)
		cv2.rectangle(img,tl,br,track_colors[trackID],1)
		cv2.putText(img,str(trackID), (x-10,y-20),0, 0.5, track_colors[trackID],2)
		cv2.putText(img, "Frame=" + str(frame), (10, 500), 0, 0.5, (0,0,0), 2)
		cv2.circle(img,(x,y), 6, track_colors[trackID],-1)
		#cv2.circle(img,(int(NPdata[idx,i,0]),int(NPdata[idx,i,1])), 6, (0,0,0),-1)
	centers1 = centers.tolist()
	#centers1 = [ int(x) for x in centers1 ]
	for i in centers1:
		x = int(i[0])
		y = int(i[1])
		cv2.circle(img,(x,y), 6, (0,0,0),-1)


def generateTestData(centers):
	data = Detection()
	header = std_msgs.msg.Header()
	header.frame_id = "map" # :)
	objs = []
	for i in centers:
		obj = Object()
		obj.location = Point()
		obj.location.x = i[0]
		obj.location.y = i[1]
		obj.location.z = 1

		obj.id = "blue_cargo"
		obj.confidence = 1

		objs.append(obj)
	data.objects = objs
	data.header = header
	#print(data)
	return data



def testDataEdit(data):
		NPdata = data
		NPdata = np.delete(NPdata, 2, 0)
		NPdata = np.delete(NPdata, 3, 0)
		NPdata = np.delete(NPdata, 4, 0)
		NPdata = np.delete(NPdata, 4, 0)

		invalidNumber = 9999
		stillarray = np.arange(300).reshape(150,2)
		#stillarray[stillarray > 151] = 0
		stillarray[:, 1] += 30
		NPdata = np.concatenate((NPdata, [stillarray]), axis=0)

		stillarray = np.arange(300).reshape(150,2)
		stillarray[stillarray > 151] = invalidNumber
		NPdata = np.concatenate((NPdata, [stillarray]), axis=0)


		stillarray = np.arange(300).reshape(150,2)
		stillarray[stillarray < 233] = 0
		stillarray[:, 1] -= 60
		NPdata = np.concatenate((NPdata, [stillarray]), axis=0)
		return NPdata


test = True

global tfBuffer, listener, objs, pub, NPdata, i, centers, trackerDict, image, boundingAdd # Set to at least 10 or 20
if __name__ == '__main__':



	# If detected point is x,y bounding add will make the bounding boxes (x - boundingAdd, y - boundingAdd) (x + boundingAdd, y + boundingAdd)
	# See lines around 306
	boundingAdd = 20

	if test:
		img = np.ones((512,512,3),np.uint8)*255

		NPdata = np.array(np.load('Detections.npy'))[0:10,0:150,0:150]
		NPdata = testDataEdit(NPdata)
		invalidNumber = 9999

	rospack = rospkg.RosPack()
	THIS_DIR = os.path.join(rospack.get_path('tf_object_detection'), 'src/')
	PATH_TO_LABELS = os.path.join(THIS_DIR, '2020Game_label_map.pbtxt')

	# Make each object its own trackers
	# TODO make this 2022 when it is ready

	with open("2020Game_label_map.pbtxt") as f:
		pbtext = f.read()
	# Gets all of the object ids
	ids = re.findall("'(.*)'", pbtext)
	trackerDict = {}

	for i in ids:
		trackerDict[str(i)] = Sort(max_age=5, min_hits=3, iou_threshold=.3)
	trackerDict["blue_cargo"] = Sort(max_age=5, min_hits=3, iou_threshold=.3)
	print(trackerDict)


	rospy.init_node('object_tracking', anonymous=True)
	tfBuffer = tf2_ros.Buffer()
	listener = tf2_ros.TransformListener(tfBuffer)

	#det_sub = rospy.Subscriber(, Detection)

	# http://wiki.ros.org/ROS/Tutorials/CustomMessagePublisherSubscriber%28python%29
	if test:
		pub = rospy.Publisher("/tf_object_detection/object_detection_world", Detection)
	sub = rospy.Subscriber("/tf_object_detection/object_detection_world", Detection, callback)
	#img_sub = message_filters.Subscriber("/tf_object_detection/debug_image", Image)

	#ts = message_filters.ApproximateTimeSynchronizer([det_sub, img_sub], 10, 1111)
	#ts.registerCallback(callback)
	print("Spinning")
	try:
		if not test:
			rospy.spin()
		else:
			t = threading.Thread(target=rospy.spin)
			t.start()
			i = 0
			while True:
				try:
					centers = NPdata[:,i,:]
				except Exception as e:
					print(e)
					print("Exiting")
					exit()
				centers = np.delete(centers, np.where(centers > 9998)[0], axis=0)

				for ii in range(3):
					if random.random() > .8:
						centers = np.delete(centers, random.randint(0, centers.shape[0]-1), 0)
						print("deleting data")
				print(centers.shape)
				# Only for testing
				pub.publish(generateTestData(centers))
				i += 1

				time.sleep(0.2)
				cv2.imshow("Output", img)
				cv2.waitKey(1)

	except KeyboardInterrupt:
		print("Shutting down")
