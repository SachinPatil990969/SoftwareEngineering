# Write a Python program to count the frequency of words in a file.

file_path = 'text.txt'

word_frequency = {}

with open(file_path, 'r') as file:
    for line in file:
        words = line.split()
        
        for word in words:
            word = word.strip().lower()
            if word:
                if word in word_frequency:
                    word_frequency[word] += 1
                else:
                    word_frequency[word] = 1

print("Word frequencies in the file:")
for word, frequency in word_frequency.items():
    print(f"{word}: {frequency}")
