# When will the else part of try-except-else be executed? 

In a `try-except-else` block in Python, the `else` part is executed if no exception is raised in the `try` block. It provides an opportunity to execute code that should run only when no exceptions occurred.

example

try:
    result = 10 / 2
except ZeroDivisionError:
    print("Cannot divide by zero!")
else:
    print("Division successful. Result:", result)

In this example:
- The code inside the `try` block performs a division operation.
- If a `ZeroDivisionError` occurs, the `except` block is executed.
- If no exception occurs, the `else` block is executed, and the result of the division is printed.
