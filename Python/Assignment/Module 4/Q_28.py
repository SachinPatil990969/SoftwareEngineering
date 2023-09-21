# What is used to check whether an object o is an instance of class A? 

To check whether an object `o` is an instance of a particular class `A` in Python, you can use the `isinstance()` function. The `isinstance()` function returns `True` if the object is an instance of the specified class or a subclass of that class; otherwise it returns `False`.

example

class MyClass:
    pass

obj = MyClass()

print(isinstance(obj, MyClass))  # Output: True

print(isinstance(obj, str))  # Output: False

In this example:
- We define a class `MyClass`.
- We create an instance of `MyClass`.
- We use `isinstance()` to check if the object is an instance of `MyClass` (which it is).