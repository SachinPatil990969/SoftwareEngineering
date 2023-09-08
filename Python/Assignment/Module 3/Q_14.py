# Write a Python program to find the second smallest number in a list.

def output(list): 

    list.sort() 
    return list[1] 

list1 = [16,45,48,23,5,6,48,231] 

print("The second smallest element in the list is:", output(list1)) 