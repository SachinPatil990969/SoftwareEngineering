# Write a Python program to read an entire text file.

file_path = 'text.txt'

with open(file_path, 'r') as file:

    file_content = file.read()
    
    print("File content:")
    
    print(file_content)