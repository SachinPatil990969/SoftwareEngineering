# # Write a Python program to count occurrences of a substring in a string.
str = input("Enter a string: ")
substr = input("Enter a substring to find in main string: ")
x = str.count(substr)
print("The occurance of",substr,"in main string",str,"is:",x)