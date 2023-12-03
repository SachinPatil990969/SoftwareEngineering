array_list = [5,4,3,2,1]

for row in range(len(array_list)):
        print(row)
        for index in range(len(array_list)-1):
            # print(array_list)
            if array_list[index] > array_list[index+1]:
                array_list[index], array_list[index+1] = array_list[index+1], array_list[index]
            print(array_list)

        
print(array_list)
# print(array_list)