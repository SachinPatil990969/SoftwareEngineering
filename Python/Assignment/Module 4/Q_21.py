# What are oops concepts? Is multiple inheritance supported in java

Object-Oriented Programming (OOP) is a programming paradigm that focuses on organizing code into objects, which represent real-world entities. It emphasizes the following key concepts:

1. Classes and Objects:
   - Classes are blueprints for objects, defining their properties (attributes) and behaviors (methods).
   - Objects are instances of classes, representing specific instances in a program.

2. Encapsulation:
   - Encapsulation refers to the bundling of data (attributes) and methods that operate on that data within a single unit (class).
   - It helps in protecting the internal state of an object and controlling its access through methods.

3. Inheritance:
   - Inheritance allows a class (subclass) to inherit properties and behaviors from another class (superclass).
   - It facilitates code reusability and the creation of a hierarchy of related classes.

4. Polymorphism:
   - Polymorphism enables objects to take on multiple forms, where they can be treated as instances of their class or their superclass.
   - It supports method overriding, allowing subclasses to provide a specific implementation for a method defined in the superclass.

5. Abstraction:
   - Abstraction involves hiding the complex implementation details and exposing only essential features of an object.
   - It focuses on what an object does rather than how it achieves its functionality.

Regarding multiple inheritance in Java:
- Java does not support multiple inheritance for classes. A class in Java can extend only one superclass.
- However, Java supports multiple inheritance through interfaces. A class can implement multiple interfaces, allowing it to inherit method signatures from multiple sources.
