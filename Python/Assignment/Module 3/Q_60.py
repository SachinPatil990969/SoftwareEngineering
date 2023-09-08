# Write a Python program to calculate the area of a trapezoid.

side1 = int(input("Enter a side1 of trapezoid: "))
side2 = int(input("Enter a side2 of trapezoid: "))

height = int(input("Enter a height of trapezoid: "))

area = (1/2) * (side1 + side2) * height

print("The area of the trapezoid is: ", area)