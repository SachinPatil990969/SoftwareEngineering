# Write a Python program to get the Fibonacci series of given range.
num = int(input("Enter the number till which to get fibonacci series: "))
x = 0
x1 = 0
x2 = 1
print("Fibonacci series:")
while (x <= num):
    print(x)
    x1 = x2
    x2 = x
    x = x1 + x2

