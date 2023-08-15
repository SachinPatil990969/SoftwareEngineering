# Write a Python program to calculate the length of a string.
str = input("Enter a string: ")
count = 0
for i in range(len(str)):
    count = count + 1
print("The lenght of string is",count)