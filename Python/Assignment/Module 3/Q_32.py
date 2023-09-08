# Write a Python script to sort (ascending and descending) a dictionary by value.

dict1 = {
    "A": 1,
    "B": 2,
    "C": 3
}

sorted_dict = sorted(dict1.items(), key=lambda x: x[1])

print(sorted_dict)

sorted_dict = sorted(dict1.items(), key=lambda x: x[1], reverse=True)

print(sorted_dict)