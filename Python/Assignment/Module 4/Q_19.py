# How Do You Handle Exceptions With Try/Except/Finally In Python? Explain with coding snippets. 

To handle exceptions in Python, you can use a `try`-`except`-`finally` structure. Here's how you can handle exceptions with code snippets:

Example 1: Handling a Specific Exception

try:
    result = 10 / 0
except ZeroDivisionError:
    print("Cannot divide by zero!")
finally:
    print("Execution of finally block.")

In this example:
- The `try` block contains the code that might raise a `ZeroDivisionError`.
- The `except` block catches this specific exception and handles it by printing an error message.
- The `finally` block is always executed, printing a message.

Example 2: Handling Multiple Exceptions

try:
    user_input = int(input("Enter a number: "))
    result = 10 / user_input
    print("Result:", result)
except (ValueError, ZeroDivisionError):
    print("Invalid input or division by zero occurred!")
finally:
    print("Execution of finally block.")

In this example:
- The `try` block attempts to perform a division based on user input.
- The `except` block handles both `ValueError` (invalid input) and `ZeroDivisionError` (division by zero) exceptions.
- The `finally` block is always executed, printing a message.
