# Write a Python program to get the Factorial number of given number.
num = int(input("Enter the number: "))
ans = 1
for i in range(1, num + 1):
    ans = ans * i
print("The factorial of ",num, "is", ans)