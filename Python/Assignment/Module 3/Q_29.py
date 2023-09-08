# Write a Python program to unzip a list of tuples into individual lists.

list_of_tuples = [('a', 1), ('b', 2), ('c', 3)] 

unzipped_list = list(zip(*list_of_tuples)) 

print(unzipped_list) 