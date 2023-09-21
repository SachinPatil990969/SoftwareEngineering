# Write a Python program to count the number of lines in a text file.

file_path = 'text.txt'

count = 0

with open(file_path, 'r') as file:
    for line in file:
        count += 1

print("Number of lines in the file:", count)
