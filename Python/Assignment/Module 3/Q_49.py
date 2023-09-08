# Write a Python function to check whether a number is in a given range

def check(num, range):
  if num >= range[0] and num <= range[1]:
    return True
  else:
    return False
  
ans = check(2, [1, 5])
print(ans)