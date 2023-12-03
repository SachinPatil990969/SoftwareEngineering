def fact(n):
    if (n > 0):
        return n * fact(n - 1)
    elif (n == 0):
        return 1

x = fact(6)

print(x)