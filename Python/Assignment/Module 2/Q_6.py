# Write python program that swap two number with temp variable and without temp variable.
print("Program to swap number with third variable")
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
x = num1
num1 = num2
num2 = x
print("After swap")
print("num1 =", num1)
print("num2 =", num2)

print("Program to swap number without third variable")
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
num1 = num1 + num2
num2 = num1 - num2
num1 = num1 - num2
print("After swap")
print("num1 =", num1)
print("num2 =", num2)