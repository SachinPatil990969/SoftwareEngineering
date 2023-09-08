# Differentiate between append () and extend () methods?
The append() and extend() methods are both used to add elements to a list in Python. However, there are some key differences between them:

append() adds a single element to the end of a list.

extend() adds all the elements of an iterable (list, tuple, string, etc.) to the end of a list.

Here are some examples:

ex: Append
my_list = [1, 2, 3]
my_list.append(4) 
return will be my_list = [1, 2, 3, 4]

ex: Extend
my_list = [1, 2, 3]
my_list.extend([4, 5, 6])
return will be my_list = [1, 2, 3, 4, 5, 6]