import numpy as np 
import cv2
from tracker import Tracker
import time
import imageio
images = []
import random

def createimage(w,h):
	size = (w, h, 1)
	img = np.ones((w,h,3),np.uint8)*255
	return img

def main():
	data = np.array(np.load('Detections.npy'))[0:10,0:150,0:150]
	print(data[0].shape)
	print(type(data))
	stillarray = np.zeros((150,2))
	stillarray[:, 0] = 255
	stillarray[:, 1] = 255
	data = np.concatenate((data,[stillarray]),axis= 0)
	stillarray = np.zeros((150,2))
	stillarray[:, 0] = 400
	stillarray[:, 1] = 400
	data = np.concatenate((data,[stillarray]),axis= 0)

	stillarray[:, 0] = 111
	stillarray[:, 1] = 111
	data = np.concatenate((data,[stillarray]),axis= 0)


	#row5 = data[5][:-75]
#
	#last75 = np.zeros((75,2))
	#last75[:, 0] = 100
	#last75[:, 1] = 100
	#print(last75.shape, row5.shape)
	#row5 = np.concatenate((row5, [last75]), axis=0)
	#np.delete(data, 5)
	#data = np.concatenate((data, [row5]), axis=0)
	#print(data.shape)


	tracker = Tracker(150, 30, 5)
	skip_frame_count = 0
	track_colors = [(255, 0, 0), (0, 255, 0), (0, 0, 255), (255, 255, 0),
					(127, 127, 255), (255, 0, 255), (255, 127, 255),
					(127, 0, 255), (127, 0, 127),(127, 10, 255), (0,255, 127),(255, 0, 0), (0, 255, 0), (0, 0, 255), (255, 255, 0),
					(127, 127, 255), (255, 0, 255), (255, 127, 255),
					(127, 0, 255), (127, 0, 127),(127, 10, 255), (0,255, 127),(255, 0, 0), (0, 255, 0), (0, 0, 255), (255, 255, 0),
					(127, 127, 255), (255, 0, 255), (255, 127, 255),
					(127, 0, 255), (127, 0, 127),(127, 10, 255), (0,255, 127),(255, 0, 0), (0, 255, 0), (0, 0, 255), (255, 255, 0),
					(127, 127, 255), (255, 0, 255), (255, 127, 255),
					(127, 0, 255), (127, 0, 127),(127, 10, 255), (0,255, 127)]

	for i in range(data.shape[1]):

		centers = data[:,i,:]
		print(centers.shape)
		for ii in range(3):
			if random.random() > .9:
				centers = np.delete(centers, random.randint(0, centers.shape[0]-1), 0)
				print("deleting data?")
				print(centers.shape)


		frame = createimage(512,512)
		if (len(centers) > 0):
			tracker.update(centers)
			for j in range(len(tracker.tracks)):
				if (len(tracker.tracks[j].trace) > 1):
					x = int(tracker.tracks[j].trace[-1][0,0])
					y = int(tracker.tracks[j].trace[-1][0,1])
					tl = (x-10,y-10)
					br = (x+10,y+10)
					cv2.rectangle(frame,tl,br,track_colors[j],1)
					cv2.putText(frame,str(tracker.tracks[j].trackId), (x-10,y-20),0, 0.5, track_colors[j],2)
					for k in range(len(tracker.tracks[j].trace)):
						x = int(tracker.tracks[j].trace[k][0,0])
						y = int(tracker.tracks[j].trace[k][0,1])
						cv2.circle(frame,(x,y), 3, track_colors[j],-1)
					cv2.circle(frame,(x,y), 6, track_colors[j],-1)
				cv2.circle(frame,(int(data[j,i,0]),int(data[j,i,1])), 6, (0,0,0),-1)
			#cv2.imshow('image',frame)
			cv2.imwrite("image"+str(i)+".jpg", frame)
			images.append(imageio.imread("image"+str(i)+".jpg"))
			#time.sleep(0.1)
			#if cv2.waitKey(1) & 0xFF == ord('q'):
			#	cv2.destroyAllWindows()
			#	break

	imageio.mimsave('Multi-Object-Tracking.gif', images, duration=0.08)
			
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          

if __name__ == '__main__':
	main()