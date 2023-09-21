# What happens when „1‟== 1 is executed? 

In Python, the expression `'1' == 1` compares a string `'1'` to an integer `1` using the equality operator `==`. The result of this comparison is `False`.

Explanation:
- The string `'1'` is a sequence of characters, and the character `'1'` is not equal to the integer `1`.
- The `==` operator checks for equality of values, but since the types are different (string vs. integer), the comparison evaluates to `False`.

example

result = '1' == 1
print(result)
