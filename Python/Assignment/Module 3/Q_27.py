# Write a Python program to find the repeated items of a tuple

my_tuple = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5)

repeated_items = []

for item in my_tuple:
    if my_tuple.count(item) > 1:
        repeated_items.append(item)

print(set(repeated_items))

repeated_items = set([item for item in my_tuple if my_tuple.count(item) > 1])

print(repeated_items)
