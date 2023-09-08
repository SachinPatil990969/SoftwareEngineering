# How will you compare two lists?
Comparing two lists in Python can be done in several different ways.

One way is to use the zip() function to iterate through each element of both lists at the same time.

list1 = [1, 2, 3]
list2 = [4, 5, 6]

for i, j in zip(list1, list2):
    print(i, j)
The output of the code above will be:

1 4
2 5
3 6

Another way to compare two lists is to use the == operator, which will return True if both lists are equal and False if they are not.

list1 = [1, 2, 3]
list2 = [4, 5, 6]

result = list1 == list2

print(result)

The output of the code above will be:

False