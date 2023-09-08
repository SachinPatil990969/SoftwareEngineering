# Write a Python function that takes a list and returns a new list with unique elements of the first list.

def output_list(list1):
  x = []
  for i in list1:
    if i not in x:
      x.append(i)
  return x

list1 = [10,20,15,14,36,25,15,10,25,36,14,15]

print(output_list(list1))