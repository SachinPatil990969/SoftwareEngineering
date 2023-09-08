# Write a Python program to convert degree to radian 

import math

degrees = float(input("Please enter a value in degrees: "))

radians = degrees * (math.pi/180)

print("{} degrees is equal to {:.2f} radians".format(degrees, radians))