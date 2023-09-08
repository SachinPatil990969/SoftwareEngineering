# Write a Python program to check multiple keys exists in a dictionary

dict = {'name': 'Sachin', 'age': 25, 'job': 'programmer'}

keys_list = ['name', 'age', 'salary']

for key in keys_list:
    if key in dict.keys():
        print(f"{key} exists in the dictionary")
    else:
        print(f"{key} does not exist in the dictionary")