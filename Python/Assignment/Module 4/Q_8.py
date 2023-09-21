# Write a python program to find the longest words.

file_path = 'text.txt'

longest_words = []
max_length = 0

with open(file_path, 'r') as file:
    for line in file:
        words = line.split()
        for word in words:
            word_length = len(word)
            if word_length > max_length:
                longest_words = [word]
            elif word_length == max_length:
                longest_words.append(word)

print("Longest word(s):", longest_words)