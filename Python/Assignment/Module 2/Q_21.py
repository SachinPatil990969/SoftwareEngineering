# Write a Python function to reverses a string if its length is a multiple of 4.
def reverse_(str):
    if (len(str) % 4 == 0):
        return str[::-1]
    else:
        return str

x = input("Enter a string: ")
print(reverse_(x))