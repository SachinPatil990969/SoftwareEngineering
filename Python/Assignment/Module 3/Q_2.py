# How will you remove last object from a list? Suppose list1 is [2, 33, 222, 14, and 25], what is list1 [-1]?
to remove the last object from a list using the pop() method. This method will remove the last element from the list and return it.

Ex:
list1 = [2, 33, 222, 14, 25]

list1.pop()

print(list1)

which will return [2, 33, 222, 14]

to access the last object without removing it from the list, we can use the index -1 like this: 

list1[-1]

which will return 25.