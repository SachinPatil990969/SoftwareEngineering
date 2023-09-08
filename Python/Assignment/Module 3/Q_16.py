# Write a Python program to check whether a list contains a sub list

def check(main_list, sub_list):
  
    if len(sub_list) > len(main_list):
        return False

  
    for i in range(len(main_list) - len(sub_list) + 1):
  
        if main_list[i:i+len(sub_list)] == sub_list:
            return True
    return False

main_list = [1, 2, 3, 4, 5]
sub_list = [2, 3]

if check(main_list, sub_list):
    print('The main list contains the sublist')
else:
    print('The main list does not contain the sublist')