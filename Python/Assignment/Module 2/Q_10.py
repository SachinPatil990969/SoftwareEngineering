# Write a Python program that will return true if the two given integer values are equal or their sum or difference is 5.
x = int(input("Enter the first value: "))
y = int(input("Enter the second value: "))
if x == y or x + y ==5 or abs(x - y) == 5:
    print("True")
else:
    print("False")