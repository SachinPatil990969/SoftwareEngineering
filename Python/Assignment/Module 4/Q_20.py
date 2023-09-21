# Write python program that user to enter only odd numbers, else will raise an exception.

while True:
    try:
        input = int(input("Enter an odd number: "))
        if input % 2 == 0:
            raise ValueError("Even number entered. Please enter an odd number.")
        else:
            print("You entered an odd number.")
            break
    except ValueError as ve:
        print(f"Error: {ve}")

print("End of the program.")
