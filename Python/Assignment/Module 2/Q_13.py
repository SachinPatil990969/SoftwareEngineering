# Write a Python program to count the number of characters (character frequency) in a string
str = input("Enter a string: ").lower()
char = input("Enter a character: ").lower()
count = 0
for i in str:
    if i == char:
        count = count + 1
print("The frequency of",char,"in string is",count)