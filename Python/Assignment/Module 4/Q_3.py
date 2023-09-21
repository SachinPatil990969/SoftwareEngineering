# Write a Python program to append text to a file and display the text.

file_path = 'text.txt'

text_to_append = input("Enter the new text to append: ")

with open(file_path, 'a') as file:
    file.write(text_to_append)

with open(file_path, 'r') as file:
    updated_file_content = file.read()

print("Updated file content:")
print(updated_file_content)