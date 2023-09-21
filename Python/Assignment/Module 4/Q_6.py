# Write a Python program to read a file line by line and store it into a list.

file_path = 'text.txt'

lines = []

with open(file_path, 'r') as file:
    for line in file:
        lines.append(line.strip())

print(lines)
print("Lines from the file:")
for line in lines:
    print(line)
