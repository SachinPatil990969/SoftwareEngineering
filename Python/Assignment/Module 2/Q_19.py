# Write a Python program to find the first appearance of the substring 'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the whole 'not'...'poor' substring with 'good'. Return the resulting string.
str = input("Enter a string:")
not_index = str.find('not')
poor_index = str.find('poor')

if (not_index < poor_index):
    str = str[:not_index] + 'good' + str[poor_index + 4:]
print(str)