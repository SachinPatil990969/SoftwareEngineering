# Write a Python program to find the highest 3 values in a dictionary

d = {'a':100, 'b':200, 'c':300, 'd':400, 'e':500}

highest_values = sorted(d.values(), reverse=True)[:3]

print(highest_values)