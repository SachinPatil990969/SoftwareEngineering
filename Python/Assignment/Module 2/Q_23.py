# Write a Python function to insert a string in the middle of a string.
str = input("Enter a string: ")
str2 = input("Enter a substring to insert at middle of main string: ")
def insert(str, str2):
    return str[:int(len(str)/2)] + str2 + str[int(len(str)/2):]

print(insert(str, str2))