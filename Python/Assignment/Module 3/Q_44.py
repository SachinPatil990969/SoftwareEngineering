# Write a Python program to create and display all combinations of letters, 
# selecting each letter from a different key in a dictionary. 
# Sample data: {'1': ['a','b'], '2': ['c','d']} 
# Expected Output: 
# ac ad bc bd

sample_data = {'1': ['a','b'], '2': ['c','d']}

combinations = []

for key1, value1 in sample_data.items():
  for letter1 in value1:
    for key2, value2 in sample_data.items():
      for letter2 in value2:
        combination = letter1 + letter2
        combinations.append(combination)

print(combinations)