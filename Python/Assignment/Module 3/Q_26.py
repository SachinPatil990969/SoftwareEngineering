# Write a Python program to replace last value of tuples in a list.

list_of_tuples = [('a', 1), ('b', 3), ('c', 5)]

list2 = [(x[0], 0) for x in list_of_tuples]

print(list2)