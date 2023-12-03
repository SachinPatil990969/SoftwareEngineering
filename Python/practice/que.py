array_list = [11, 10, 3, 2, 56, 98, 76]

for num in array_list:
    while array_list[-1] < num:
        for index in range(len(array_list)-1):
    # print(index)
    # print(array_list[index])
    # for num in array_list:
            while array_list[-1] < num:
                if array_list[index] > array_list[index+1]:
                    array_list[index], array_list[index+1] = array_list[index+1], array_list[index]
            print(array_list)
# print(array_list)