# Write a Python program to combine values in python list of dictionaries. 
# Sample data: [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount': 
# 300}, o {'item': 'item1', 'amount': 750}] 
# Expected Output:
# Counter ({'item1': 1150, 'item2': 300}) 

list_dict = [{'item': 'item1', 'amount': 400}, 
             {'item': 'item2', 'amount': 300}, 
             {'item': 'item1', 'amount': 750}] 

combined_dict = {} 

for dictionary in list_dict: 
    item = dictionary['item'] 
    amount = dictionary['amount'] 

    if item in combined_dict: 
        combined_dict[item] += amount 
    else: 
        combined_dict[item] = amount 

print(combined_dict)