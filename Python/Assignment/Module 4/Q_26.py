# Explain Inheritance in Python with an example? What is init? Or What Is A Constructor In Python?

Inheritance in Python allows a class (called the subclass) to inherit attributes and methods from another class (called the superclass). The subclass can extend or modify the inherited behavior and can have its own unique attributes and methods.

`__init__` Method (Constructor):
- `__init__` is a special method (often referred to as a constructor) in Python classes.
- It's automatically called when a new object of the class is created.
- The purpose of `__init__` is to initialize the object's attributes and set their initial values.

example

class Animal:
    def __init__(self, species):
        self.species = species

    def sound(self):
        pass

class Dog(Animal):
    def sound(self):
        return "Woof!"

class Cat(Animal):
    def sound(self):
        return "Meow!"

dog = Dog("Canine")
cat = Cat("Feline")

print(f"A {dog.species} makes the sound: {dog.sound()}")
print(f"A {cat.species} makes the sound: {cat.sound()}")

In this example:
- We define an `Animal` superclass with an `__init__` method to initialize the `species`.
- The `sound` method is a placeholder and will be overridden by the subclasses.
- We define subclasses `Dog` and `Cat` that inherit from `Animal`.
- Each subclass overrides the `sound` method to provide the specific sound of the animal.