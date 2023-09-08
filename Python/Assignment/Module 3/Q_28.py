# Write a Python program to remove an empty tuple(s) from a list of tuples.

list_of_tuples = [(), ('a', 'b'), (), ('c', 'd'), ('e', 'f')]

new_list = []

for item in list_of_tuples:
  if item:
    new_list.append(item)

print(new_list)