# Write a Python program to count the occurrences of each word in a given sentence.
str = input("Enter a string: ")
word = str.split()
s = set(word)
for i in s:
    ans = word.count(i)
    print(i,"occure",ans,"times in string")