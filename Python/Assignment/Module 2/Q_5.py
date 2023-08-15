# What is the purpose continue statement in python?
The continue statement in Python is used to skip the current iteration of a loop and move on to the next iteration. It can be used in while  and for loops.
For example, if you have a for loop that iterates through a list, you can use continue to skip an item in the list.


for item in my_list:
    if item == 'skip':
        continue
    print(item)


In the example above, the continue statement causes the loop to skip the item 
'skip' and continue with the next item in the list.