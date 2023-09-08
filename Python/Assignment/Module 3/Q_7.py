# Write a Python program to remove duplicates from a list.

#method 1:

list1 = [10,20,10,20,15,24,15,26,35,49,12,15,16]

set_1 = set(list1)

output_list2 = list(set_1)

print(output_list2)

#method 2:

list2 = [10,20,10,20,15,24,15,26,35,49,12,15,16]

output_list = []

for x in list2:
    if x not in output_list:
        output_list.append(x)

print(output_list)

