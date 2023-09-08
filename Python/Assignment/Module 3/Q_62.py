# Write a Python program to calculate surface volume and area of a cylinder

def cylinder_volume_area(radius, height):
    volume = 3.14 * radius * radius * height
    area = 2 * 3.14 * radius * (radius + height)
    return volume, area

radius = float(input("Enter the radius: "))
height = float(input("Enter the height: "))

volume, area = cylinder_volume_area(radius, height)

print(f"The volume of the cylinder is {volume} and the area is {area}")