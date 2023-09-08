# Write a Python program to read a random line from a file. 

import random

with open('filename.txt', 'r') as f:
    lines = f.readlines()

line = random.choice(lines)

print(line)