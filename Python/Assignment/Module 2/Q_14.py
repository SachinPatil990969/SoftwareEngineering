# What are negative indexes and why are they used?
Negative indexes are used in Python to index elements from the end of a sequence. This means that the index of the last element in the sequence is -1, the second to last is -2, and so on. Negative indexes are useful when we don't know the length of the sequence and need to access elements from the end.

For example, if we had a list of numbers:

numbers = [1, 2, 3, 4, 5]
The last element in the list can be accessed with the index 
-1, like this:

last_number = numbers[-1]  

Negative indexes can also be used for slicing. For example, if you wanted to get the last three elements of the list, you could do this:

last_three = numbers[-3:]