# Write a Python program to convert a list of tuples into a dictionary.

list_of_tuples = [('a', 1), ('b', 2), ('c', 3)]

dict_from_tuples = {}

for tup in list_of_tuples:
    dict_from_tuples[tup[0]] = tup[1]

print(dict_from_tuples)