# Write a Python program to read a file line by line store it into a variable. 

file_path = 'text.txt'

file_content = ""

with open(file_path, 'r') as file:
    for line in file:
        file_content += line

print("Content from the file:")
print(file_content)
