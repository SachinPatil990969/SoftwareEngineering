# Why Do You Use the Zip () Method in Python?

The zip() method in Python is used to combine two or more iterables into a single iterable. It takes in iterables as arguments and returns an iterator of tuples. Each tuple contains elements from all the iterables.

For example, if we have two lists 
list1 = [1, 2, 3] and 
list2 = [4, 5, 6], we can combine them using the 
zip() method like so:

zipped = zip(list1, list2)

Output: [(1, 4), (2, 5), (3, 6)]

The zip() method can also be used to unzip lists. For example, if we have a zipped list like 
zipped = [(1, 4), (2, 5), (3, 6)], we can unzip it like so:

list1, list2 = zip(*zipped)

Output: list1 = [1, 2, 3] and list2 = [4, 5, 6]