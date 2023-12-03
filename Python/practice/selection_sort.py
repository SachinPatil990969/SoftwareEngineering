array_list = [10, 11, 2, 5, 8]

for index in range(len(array_list)-1):
    print(index)
    min_index = index
    for index2 in range(index+1, len(array_list)):
        if array_list[index2] < array_list[min_index]:
            min_index = index2
    array_list[index], array_list[min_index] = array_list[min_index], array_list[index]
    print(array_list)
# print(array_list)