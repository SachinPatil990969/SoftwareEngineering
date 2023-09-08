# Write a Python script to merge two Python dictionaries 

# method 1:
dict1 = {'a': 1, 'b': 2}
dict2 = {'c': 3, 'd': 4}

dict3 = {**dict1, **dict2}

print(dict3)

# method 2:
dict1 = {'a': 1, 'b': 2}
dict2 = {'c': 3, 'd': 4}

dict1.update(dict2)

print(dict1)

# method 3:
from collections import ChainMap

dict1 = {'a': 1, 'b': 2}
dict2 = {'c': 3, 'd': 4}

chain = ChainMap(dict1, dict2)

print(dict(chain))
