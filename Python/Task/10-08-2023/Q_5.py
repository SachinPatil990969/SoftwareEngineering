name = input("Enter a string: ")
count =0
for i in name:
    if (i.isalpha()):
        count = count + 1
print("Total number of characters: ",count)