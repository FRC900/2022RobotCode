# make a script that uses opencv to convert all non white pixels to black

import cv2
import numpy as np
import sys

# read in the image
img = cv2.imread(sys.argv[1])

# convert to black and white
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# threshold the image
ret, thresh = cv2.threshold(gray, 250, 255, cv2.THRESH_BINARY)

# save the image
cv2.imwrite(sys.argv[2], thresh)

