# Write a Python program to print all unique values in a dictionary.

d = {'a':1, 'b':2, 'c':3, 'd':1, 'e':2}

unique_values = []

for key, value in d.items():
    if value not in unique_values:
        unique_values.append(value)

print(unique_values)