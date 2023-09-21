# Can one block of except statements handle multiple exception?

Yes, one block of `except` statements can handle multiple exceptions in Python. You can list multiple exception types within a single `except` block to handle different types of exceptions in a similar way.

example

try:
    user_input = int(input("Enter a number: "))
    result = 10 / user_input
    print("Result:", result)
except (ValueError, ZeroDivisionError):
    print("Invalid input or division by zero occurred!")

In this example:
- The `try` block attempts to perform a division based on user input.
- The `except` block handles both `ValueError` (invalid input) and `ZeroDivisionError` (division by zero) exceptions.