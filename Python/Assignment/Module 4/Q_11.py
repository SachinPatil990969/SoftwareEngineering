# Write a Python program to write a list to a file.

file_path = 'output.txt'
data_list = ['Apple', 'Banana', 'Cherry', 'Date', 'Elderberry']

with open(file_path, 'w') as file:
    for item in data_list:
        file.write(item + '\n')

print(f"List written to '{file_path}'.")
