# Write a Python program to generate and print a list of first and last 5 elements where the values are square of numbers between 1 and 30.

sq = [x**2 for x in range(1,31)]

print(sq)

print(sq[:5])

print(sq[-5:])