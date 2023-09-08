# Write a Python program to returns sum of all divisors of a number

def sum_divisors(num):
    divisors_sum = 0

    for i in range(1, num + 1):
        if num % i == 0:
            divisors_sum += i

    return divisors_sum

num = int(input("Enter a number: "))

print("Sum of divisors of", num, "is", sum_divisors(num))