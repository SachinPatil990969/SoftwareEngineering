class person:
    def __init__(self, name, age):
        self.name = name.capitalize()
        self.age = age

    # The __str__() function controls what should be returned when the class object is represented as a string.
    def __str__(self):
        return f"{self.name}-{self.age}"
        
    def myfun(self):
        print("Hello, My name is ", self.name)

p = person("sachin", 25)
p.myfun()

print(p.name, p.age)

print(p)