# Write a Python script to check if a given key already exists in a dictionary.

d = {'a':1,'b':2,'c':3}

def check_key(dict, key): 
    if key in dict.keys(): 
        print("Present,", end =" ") 
        print("value =", dict[key]) 
    else: 
        print("Not present") 

key = 'b'
check_key(d, key) 