# What is Instantiation in terms of OOP terminology? 

Instantiation in Object-Oriented Programming (OOP) refers to the process of creating an instance of a class. An instance, or object, is a concrete occurrence of a class that represents a specific entity or item based on the class blueprint.

In simpler terms:
- A class is like a blueprint that defines the structure and behavior of an object.
- Instantiation is the actual creation of an object based on that blueprint.
- An instance (or object) is a specific realization of the class, possessing its own attributes and methods.

example 

class Car:
    def __init__(self, make, model):
        self.make = make
        self.model = model

car1 = Car("Toyota", "Corolla")
car2 = Car("Honda", "Civic")

print("Car 1:", car1.make, car1.model)
print("Car 2:", car2.make, car2.model)

In this example, we create two instances of the `Car` class (`car1` and `car2`) through instantiation. Each instance has its own `make` and `model` attributes.
