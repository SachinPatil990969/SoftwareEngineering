# How to Define a Class in Python? What Is Self? Give An Example Of A Python Class 
# To define a class in Python, you use the class keyword followed by the class name and a colon. Inside the class, you define attributes (data) and methods (functions).

# The self parameter is a reference to the instance of the class. It is the first parameter in each method of the class, allowing you to access and modify attributes and call other methods within the class.

class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
        self.speed = 0

    def accelerate(self):
        self.speed += 5

    def brake(self):
        if self.speed >= 5:
            self.speed -= 5
        else:
            self.speed = 0

    def display_speed(self):
        print(f"Current speed: {self.speed} mph")

my_car = Car("Toyota", "Corolla", 2022)

print(f"My car: {my_car.make} {my_car.model} {my_car.year}")
my_car.accelerate()
my_car.display_speed()
my_car.brake()
my_car.display_speed()
