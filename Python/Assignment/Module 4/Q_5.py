# Write a Python program to read last n lines of a file.

file_path = 'text.txt'
n = 5

last_n_lines = []

with open(file_path, 'r') as file:
    for line in file:
        last_n_lines.append(line)
        if len(last_n_lines) > n:
            last_n_lines.pop(0)

print(f"Last {n} lines of the file:")
for line in last_n_lines:
    print(line.strip())
