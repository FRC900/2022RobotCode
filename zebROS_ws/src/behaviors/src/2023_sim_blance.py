# try to simulate the odometry and position of the robot on the charging station
# was going to do pyhisics sim but as it almost always is, its not worth it. 

from collections import namedtuple
from enum import Enum
import cv2 # for visualizing
import numpy as np
import time
import math

class States(Enum):
    OFF_LEFT = 1
    ON_RAMP_LEFT_1_WHEEL = 3
    ON_MIDDLE_LEFT_1_WHEEL = 4
    ON_LEFT_2_WHEEL_1_RAMP = 5
    
    ON_MIDDLE_2_WHEEL = 6
    
    ON_RIGHT_2_WHEEL_1_RAMP = 7
    ON_MIDDLE_RIGHT_1_WHEEL = 8
    ON_RAMP_RIGHT_1_WHEEL = 9
    OFF_RIGHT = 2

BLACK = (0,0,0)
WHITE = (255,255,255)
IMAGE_X = 1280
IMAGE_Y = 720
FLOOR_OFFSET = 200 # pixels for visualizing
# meters to pixels
METER_TO_PIXEL = 300 # pixels per meter, very arbitrary

STATION_OFFSET = 1.5 # meters
STATION_OFFSET_PIXEL = int(STATION_OFFSET * METER_TO_PIXEL)
WHEEL_RADIUS = 0.05 # meters
# distance between center of wheel to center of other wheel
WHEEL_TO_WHEEL = 0.3302 * 2

# flat part of the charging station
MIDDLE_LENGHT = 1.2192 

# lenght of a single ramp part the robot would drive up
RAMP_LEN_X = 0.312285 # not the hypot of the ramp, just the lenght of the ramp X
DIAG_LENGHT = 0.377800 # meters, hypot of the ramp

# how high the station is when the robot is not on it
BALANCED_HEIGHT = 0.231775 # meters
# angle that the ramps are at when the station is perfectly balance 
BALANCED_ANGLE = 0.59777527 # rad
# lowest angle the charging station gets to when a robot is driven on it
LOWEST_ANGLE = 0.191986 # radians, 11 degrees
LOWEST_MIDDLE_ANGLE = 0.261799
# how high the highest point of the station is when a robot is driven on it
# occurs at same time as LOWEST_ANGLE
MAX_HEIGHT = 0.4064 # meters 
FUDGE_FACTOR = 0.01 # meters
FLAT_X_LEFT = STATION_OFFSET + RAMP_LEN_X
FLAT_X_RIGHT = STATION_OFFSET + RAMP_LEN_X + MIDDLE_LENGHT
FLAT_X_LEFT_PIXEL = int(FLAT_X_LEFT * METER_TO_PIXEL)
FLAT_X_RIGHT_PIXEL = int(FLAT_X_RIGHT * METER_TO_PIXEL)

class Point:
    def __init__(self, x=0, y=0) -> None:
        self.x = x
        self.y = y

    def __repr__(self) -> str:
        return f"Point({self.x}, {self.y})"


class ChargingStationSim:
    def __init__(self) -> None:
        self.left_wheel = {}
        self.left_wheel["x"] = 0.7
        self.left_wheel["y"] = 0
        self.right_wheel = {}
        self.right_wheel["x"] = self.left_wheel["x"] + WHEEL_TO_WHEEL
        self.right_wheel["y"] = 0
        self.angle = 0
        self.theta = -999
        self.state = States.OFF_LEFT
        self.height = 0
        self.time = 0
        self.left_ramp_start_XY = (STATION_OFFSET, FUDGE_FACTOR)
        self.left_ramp_end_XY = (STATION_OFFSET + RAMP_LEN_X, BALANCED_HEIGHT)
        self.right_ramp_start_XY = (STATION_OFFSET + RAMP_LEN_X*2+MIDDLE_LENGHT, FUDGE_FACTOR)
        self.right_ramp_end_XY = (STATION_OFFSET+RAMP_LEN_X+MIDDLE_LENGHT, BALANCED_HEIGHT)
        self.center_line_left_XY = (STATION_OFFSET + RAMP_LEN_X, BALANCED_HEIGHT)
        self.center_line_right_XY = (STATION_OFFSET + RAMP_LEN_X+MIDDLE_LENGHT, BALANCED_HEIGHT)

    def round_dict(self, d):
        new_d = {}
        for key, value in d.items():
            new_d[key] = round(value, 3)
        return new_d
    
    def visualize_lines(self, img):
        # draw left ramp using the two points provided by self.left_ramp_start_XY and self.left_ramp_end_XY
        img = cv2.line(img, (int(self.left_ramp_start_XY[0]*METER_TO_PIXEL), IMAGE_Y-FLOOR_OFFSET-int(self.left_ramp_start_XY[1]*METER_TO_PIXEL)), (int(self.left_ramp_end_XY[0]*METER_TO_PIXEL), IMAGE_Y-FLOOR_OFFSET-int(self.left_ramp_end_XY[1]*METER_TO_PIXEL)), (0,165,255), 3)
        # same for right ramp
        img = cv2.line(img, (int(self.right_ramp_start_XY[0]*METER_TO_PIXEL), IMAGE_Y-FLOOR_OFFSET-int(self.right_ramp_start_XY[1]*METER_TO_PIXEL)), (int(self.right_ramp_end_XY[0]*METER_TO_PIXEL), IMAGE_Y-FLOOR_OFFSET-int(self.right_ramp_end_XY[1]*METER_TO_PIXEL)), (0,165,255), 3)
        # draw center line
        img = cv2.line(img, (int(self.center_line_left_XY[0]*METER_TO_PIXEL), IMAGE_Y-FLOOR_OFFSET-int(self.center_line_left_XY[1]*METER_TO_PIXEL)), (int(self.center_line_right_XY[0]*METER_TO_PIXEL), IMAGE_Y-FLOOR_OFFSET-int(self.center_line_right_XY[1]*METER_TO_PIXEL)), (255,128,0), 3)
        return img

    def visualize(self):
        # make a blank image
        img = np.zeros((IMAGE_Y,IMAGE_X,3), dtype=np.uint8)
        img.fill(255)
        #print(img)
        # draw the floor as a line
        img = cv2.line(img, (0, IMAGE_Y-FLOOR_OFFSET), (IMAGE_X, IMAGE_Y-FLOOR_OFFSET), (0,255,0), 3)
        img = cv2.rectangle(img, (0, IMAGE_Y-FLOOR_OFFSET), (IMAGE_X, IMAGE_Y), (0,255,0), -1)
        
        # add text of the state and angle of the robot and position of the wheels
        font = cv2.FONT_HERSHEY_SIMPLEX
        cv2.putText(img, f"State: {self.state}", (10, 50), font, 1, BLACK, 2, cv2.LINE_AA)
        cv2.putText(img, f"Time (s): {round(self.time, 4)}", (800, 50), font, 1, BLACK, 2, cv2.LINE_AA)
        cv2.putText(img, f"Angle: {self.angle}", (10, 100), font, 1, BLACK, 2, cv2.LINE_AA)

        cv2.putText(img, f"Left Wheel: {self.round_dict(self.left_wheel)}, Right Wheel: {self.round_dict(self.right_wheel)}", (10, 150), font, 1, BLACK, 2, cv2.LINE_AA)
        # draw vertical lines every meter for reference
        for i in range(0, IMAGE_X, METER_TO_PIXEL):
            img = cv2.line(img, (i, IMAGE_Y-FLOOR_OFFSET), (i, IMAGE_Y), (0,0,255), 3)

        # draw the robot
        # draw the left wheel
        left_wheel_x = int(self.left_wheel["x"] * METER_TO_PIXEL)
        left_wheel_y = int(self.left_wheel["y"] * METER_TO_PIXEL)
        print(left_wheel_x, left_wheel_y)
        WHEEL_RADIUS_PIXEL = int(WHEEL_RADIUS * METER_TO_PIXEL)
        print(f"Drawing circle at {left_wheel_x}, {IMAGE_Y - left_wheel_y - FLOOR_OFFSET}")
        img = cv2.circle(img, (left_wheel_x, IMAGE_Y - left_wheel_y - FLOOR_OFFSET - WHEEL_RADIUS_PIXEL), WHEEL_RADIUS_PIXEL, (255,0,0), -1)

        # draw the right wheel
        right_wheel_x = int(self.right_wheel["x"] * METER_TO_PIXEL)
        right_wheel_y = int(self.right_wheel["y"] * METER_TO_PIXEL)
        img = cv2.circle(img, (right_wheel_x, IMAGE_Y - right_wheel_y - FLOOR_OFFSET - WHEEL_RADIUS_PIXEL), WHEEL_RADIUS_PIXEL, (255,0,0), -1)
        
        # draw the line between the wheels as the robot
        img = cv2.line(img, (left_wheel_x, IMAGE_Y - left_wheel_y - FLOOR_OFFSET - WHEEL_RADIUS_PIXEL), (right_wheel_x, IMAGE_Y - right_wheel_y - FLOOR_OFFSET - WHEEL_RADIUS_PIXEL), (255,0,0), 3)
        
        # draw the charging station
        # draw the base as a line
        #img = self.draw_rotated_ramp_left(img)
        img = self.visualize_lines(img)

        cv2.imshow("Test", img)
        cv2.waitKey(10)
        #_ = input("Press [enter] to continue.")

    def get_pitch(self,):
        return self.angle

    def off_left(self, velocity, timestep):
        ''' 
        v / R = rotations/second
        circumference of wheel = 2 * pi * R
        x1_new = rotations/second * dT * circumference
        y1_new = 0
        '''
        print("off left")

        self.linear_move(velocity, timestep)
        x_diff = self.left_ramp_start_XY[0] - self.right_wheel["x"]
         
        height = WHEEL_RADIUS
        hypot = np.sqrt(x_diff**2 + height**2)
        print(f"hypot: {hypot} height: {height}, x_diff: {x_diff}, wheel radius: {WHEEL_RADIUS}")
        if self.right_wheel["x"] >= STATION_OFFSET - FUDGE_FACTOR * 3 and self.state == States.OFF_LEFT:
            self.state = States.ON_RAMP_LEFT_1_WHEEL
    
    def on_ramp_left_2_wheels(self, velocity, timestep):
        # on flat plane but roatated, still easy
        # we know angle of ramp and velocity (hypot)
        RAMP_LEN_Y = self.left_ramp_end_XY[1]
        # calculate ramp angle based on the two points of the ramp
        RAMP_ANGLE = (np.arctan((RAMP_LEN_Y) / (RAMP_LEN_X)))
        y_diff = velocity * timestep * math.sin(RAMP_ANGLE) 
        x_diff = velocity * timestep * math.cos(RAMP_ANGLE)
        self.left_wheel["y"] += y_diff
        self.right_wheel["y"] += y_diff
        self.left_wheel["x"] += x_diff
        self.right_wheel["x"] += x_diff
        if self.left_wheel["x"] >= FLAT_X_LEFT:
            self.state = States.ON_MIDDLE_2_WHEEL

    def calc_ramp_angle(self):
        RAMP_LEN_Y = self.left_ramp_end_XY[1]
        # calculate ramp angle based on the two points of the ramp
        RAMP_ANGLE = (np.arctan((RAMP_LEN_Y) / (RAMP_LEN_X)))
        return RAMP_ANGLE

    def calc_center_angle(self):
        middle_x_dist = self.center_line_right_XY[0] - self.center_line_left_XY[0]
        middle_y_dist = self.center_line_right_XY[1] - self.center_line_left_XY[1]
        # calculate ramp angle based on the two points of the ramp
        RAMP_ANGLE = (np.arctan((middle_y_dist) / (middle_x_dist)))
        return RAMP_ANGLE

    def slip(self, velocity, timestep):
        RAMP_ANGLE = self.calc_center_angle()
        print(f"RAMP Angle {RAMP_ANGLE}")
        # move the robot back depending on the angle of it
        y_diff = -0.1 * velocity * timestep * math.sin(RAMP_ANGLE) 
        x_diff = -0.1 * velocity * timestep * math.cos(RAMP_ANGLE)
        print(f"x_diff {x_diff}, y_diff {y_diff}")
        # apply slip 
        self.right_wheel["x"] += x_diff
        self.right_wheel["y"] += y_diff
        self.left_wheel["x"] += x_diff
        self.left_wheel["y"] += y_diff

    def get_center_x(self):
        # get center of robot
        center_x = (self.left_wheel["x"] + self.right_wheel["x"]) / 2
        return center_x

    def get_center_ramp_x(self):
        # get center of robot
        center_x = (self.left_ramp_start_XY[0] + self.right_ramp_start_XY[0]) / 2
        return center_x

    def update_ramp(self, timestep):
        '''
        
unless the station is level or on it’s stop, it acts as a lever with the fulcrum being the pivot closest to the robot.

that lever has a fixed counter load (assuming you are the only robot on the station), which is because the higher side of the scale is effectively longer than the lower one

using the angular acceleration of the scale, it’s inertia, and the robot mass, the force exerted on the scale can be calculated with the formula (robot mass / scale inertia * acceleration)

then, using the lever formula Fe * de = Fl * dl, the distance of the robot from the fulcrum can be calculated with distance = counter force / force exerted by robot (note that counter force is really (counter force * counter force distance) but I don’t see a reason to keep them separate)
        '''
        # early exit cases: 
        # the ramp is fully extended one way or the other

        self.center_line_right_XY = (m2["x"], m2["y"])

    def on_middle_2_wheels(self, velocity, timestep):
        self.update_ramp(timestep)
        self.slip(velocity, timestep)
        

    def on_middle_left_1_wheel(self, velocity, timestep):
        print("on ramp left 1 wheel")
        # move the right wheel forward
        rotations = velocity / (WHEEL_RADIUS * 2 * np.pi) # i am still not sure about this 2 * pi, because it simplifies to velocity*timestep * sin/cos(RAMP_ANGLE)
        circumference = 2 * np.pi * WHEEL_RADIUS          # it looks fine though, and for a flat ramp it is correct as it simplifies to velocity * timestep
        hypot = rotations * circumference * timestep
        # ramp len y using pythagorean theorem
        
        RAMP_LEN_Y = self.left_ramp_end_XY[1]
        # calculate ramp angle based on the two points of the ramp
        RAMP_ANGLE = (np.arctan((RAMP_LEN_Y) / (RAMP_LEN_X)))
        #RAMP_ANGLE = np.deg2rad(34.5)
        print(f"RAMP_ANGLE DEG = {np.rad2deg(RAMP_ANGLE)}")
        #RAMP_ANGLE =
        y_diff = hypot * np.sin(RAMP_ANGLE)
        x_diff = hypot * np.cos(RAMP_ANGLE)
        self.right_wheel["x"] += x_diff
        self.right_wheel["y"] += y_diff
        print(f"X diff = {x_diff} Y diff = {y_diff}, hypot = {hypot}, sin = {np.sin(RAMP_ANGLE)}, cos = {np.cos(RAMP_ANGLE)}")
        # calculate new angle
        self.angle = (np.arcsin(self.right_wheel["y"] / WHEEL_TO_WHEEL))
        #assert self.angle <= 31.5
        # move the left wheel forward
        #assert self.left_wheel["x"] <= self.right_wheel["x"] - np.sqrt(WHEEL_TO_WHEEL**2 - self.right_wheel["y"]**2)
        self.left_wheel["x"] = self.right_wheel["x"] - np.sqrt(WHEEL_TO_WHEEL**2 - self.right_wheel["y"]**2)
        #self.left_wheel["y"] = 0
        if self.left_wheel["x"] >= STATION_OFFSET - FUDGE_FACTOR * 5 and self.state == States.ON_MIDDLE_LEFT_1_WHEEL:
            self.state = States.ON_LEFT_2_WHEEL_1_RAMP


    def on_ramp_left_1_wheel(self, velocity, timestep):
        '''x, y of where wheel touches ramp
            velocity -> convert to radians per second, should be a constant conversion
            v / R # of rotations per second
            circumference of wheel = 2 * pi * R
            angle of ramp = 31.5 degrees
            length of robot = const
            timestep = 
            distance_between_wheels = const


            Process:
            timestep * rotations/second = rotations 
            circumference * rotations = distance traveled on ramp = hypot
            y_diff = hypot * sin(angle of ramp)
            x_diff = hypot * cos(angle of ramp)
            x_new = x + x_diff
            y_new = y + y_diff

            # calculate new angle
            sin^-1(y_new / distance_between_wheels) = new angle

            x1_new = x_new - sqrt(w^2 - y_new^2)
            y1_new = 0
        '''
        print("on ramp left 1 wheel")
        # move the right wheel forward
        rotations = velocity / (WHEEL_RADIUS * 2 * np.pi) # i am still not sure about this 2 * pi, because it simplifies to velocity*timestep * sin/cos(RAMP_ANGLE)
        circumference = 2 * np.pi * WHEEL_RADIUS          # it looks fine though, and for a flat ramp it is correct as it simplifies to velocity * timestep
        hypot = rotations * circumference * timestep
        # ramp len y using pythagorean theorem

        RAMP_LEN_Y = np.sqrt(DIAG_LENGHT**2 - (RAMP_LEN_X)**2)
        # calculate ramp angle based on the two points of the ramp
        RAMP_ANGLE = (np.arctan((RAMP_LEN_Y) / (RAMP_LEN_X)))
        #RAMP_ANGLE = np.deg2rad(34.5)
        print(f"RAMP_ANGLE DEG = {np.rad2deg(RAMP_ANGLE)}")
        #RAMP_ANGLE =
        y_diff = hypot * np.sin(RAMP_ANGLE)
        x_diff = hypot * np.cos(RAMP_ANGLE)
        self.right_wheel["x"] += x_diff
        self.right_wheel["y"] += y_diff
        print(f"X diff = {x_diff} Y diff = {y_diff}, hypot = {hypot}, sin = {np.sin(RAMP_ANGLE)}, cos = {np.cos(RAMP_ANGLE)}")
        # calculate new angle
        self.angle = (np.arcsin(self.right_wheel["y"] / WHEEL_TO_WHEEL))
        #assert self.angle <= 31.5
        # move the left wheel forward
        self.left_wheel["x"] = self.right_wheel["x"] - np.sqrt(WHEEL_TO_WHEEL**2 - self.right_wheel["y"]**2)
        self.left_wheel["y"] = 0
        if self.right_wheel["x"] >= STATION_OFFSET + RAMP_LEN_X - WHEEL_RADIUS:
            print("on middle left 1 wheel")

            #exit()
            self.state = States.ON_MIDDLE_LEFT_1_WHEEL
            # move right wheel down to the floor
            self.right_wheel["y"] = 0.05715 + 0.0254 # found by taking max hieght on the other side and subtracting the max hieght of both
            self.left_ramp_end_XY = (self.right_wheel["x"], self.right_wheel["y"])
            self.left_ramp_start_XY = (self.left_ramp_start_XY[0], FUDGE_FACTOR)
            
            self.center_line_left_XY = (self.right_wheel["x"], self.right_wheel["y"])
            # use the angle of the robot to find 
            self.center_line_right_XY = (FLAT_X_RIGHT, MAX_HEIGHT)
            # update the angle
            self.angle = (np.arcsin(self.right_wheel["y"] / WHEEL_TO_WHEEL))
            self.visualize()
            
    def on_left_2_wheel_1_ramp(self, velocity, timestep):
        # we are on flat plane now, # easy peasy
        # move both wheels forward 
        vt = velocity * timestep
        self.left_wheel["x"] += vt
        self.left_wheel["y"] += vt
        self.right_wheel["x"] += vt
        self.right_wheel["y"] += vt
    
    def linear_move(self, velocity, timestep):
        rotations = velocity / (WHEEL_RADIUS * 2 * np.pi)
        circumference = 2 * np.pi * WHEEL_RADIUS
        print(f"Rotations {rotations * circumference * timestep}, Circumference {circumference}")
        self.right_wheel["x"] += rotations * circumference * timestep # simplifies to velocity * timestep but it is what will be used for the ramp
        # move the left wheel forward
        self.left_wheel["x"] += rotations * circumference * timestep

    def step(self, velocity, timestep):
        self.time += timestep
        if self.state == States.OFF_LEFT:
            self.off_left(velocity, timestep)
        elif self.state == States.ON_RAMP_LEFT_1_WHEEL:
            self.on_ramp_left_1_wheel(velocity, timestep)
        elif self.state == States.ON_MIDDLE_LEFT_1_WHEEL:
            self.on_middle_left_1_wheel(velocity, timestep)
        elif self.state == States.ON_LEFT_2_WHEEL_1_RAMP:
            self.on_ramp_left_2_wheels(velocity, timestep)
        elif self.state == States.ON_MIDDLE_2_WHEEL:
            self.on_middle_2_wheels(velocity, timestep)

if __name__ == "__main__":
    charging_station = ChargingStationSim()
    charging_station.visualize()
    i = 0
    while True:
        i += 1
        #print(i)
        charging_station.step(0.5, 0.05)
        #print(charging_station.left_wheel)
        #print(charging_station.right_wheel)
        print(charging_station.state)
        charging_station.visualize()
        time.sleep(0.01)
        if charging_station.state == States.ON_RAMP_LEFT_1_WHEEL:
            #_ = input()
            i += 0
            print("on ramp left 1 wheel")
