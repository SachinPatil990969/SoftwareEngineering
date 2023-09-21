# When is the finally block executed?

The `finally` block in a Python `try-except-finally` structure is always executed, regardless of whether an exception was raised or not. It provides a way to ensure that certain code is executed no matter what happens.

example

try:
    result = 10 / 0
except ZeroDivisionError:
    print("Cannot divide by zero!")
finally:
    print("Execution of finally block.")

In this example:
- The division operation in the `try` block raises a `ZeroDivisionError`.
- The `except` block is executed to handle this error.
- Regardless of the error, the `finally` block is executed, printing a message.
