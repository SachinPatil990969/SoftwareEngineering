# Write a Python function that takes a list of words and returns the length of the longest one.
def longest_word(x):
    words = x.split(' ')
    longest = 0
    for i in words:
        if len(i) > longest:
            longest = len(i)
    return longest

x = input("Enter a String: ")
print(longest_word(x))