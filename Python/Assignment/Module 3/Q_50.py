# Write a Python function to check whether a number is perfect or not.

def is_perfect(n):
    sum = 0

    for x in range(1, n):
        if n % x == 0:
            sum += x

    if (sum == n):
        return True
    else:
        return False
  
ans = is_perfect(28)
print(ans)