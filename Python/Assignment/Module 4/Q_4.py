# Write a Python program to read first n lines of a file.

file_path = 'text.txt'
n = 5 

with open(file_path, 'r') as file:
    for i in range(n):
        line = file.readline()
        if line:
            print(line.strip())
        else:
            print("End of file reached.")
            break
