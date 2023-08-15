# Write a python program to sum of the first n positive integers.
num = int(input("Enter the positive number: "))
sum = 0
for i in range(num+1):
    sum = sum + i
print("Sum of first",num,"positive numbers is",sum)