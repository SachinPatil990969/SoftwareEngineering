# Write a Python program to test whether a passed letter is a vowel or not.
char = input("Enter a single character:")
vowel = ['a','e','i','o','u','A','E','I','O','U']
if char not in vowel:
    print("Given character is not vowel.")
else:
    print("Given character is vowel.")