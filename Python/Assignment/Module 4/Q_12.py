# Write a Python program to copy the contents of a file to another file.

source_file_path = 'text.txt'
destination_file_path = 'output2.txt'


with open(source_file_path, 'r') as source_file:
    content = source_file.read()

with open(destination_file_path, 'w') as destination_file:
    destination_file.write(content)

print("Contents copied from source to destination.")
