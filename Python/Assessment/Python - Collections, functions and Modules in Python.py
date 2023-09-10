fruitStock = {}
def addFruitStock():
    print("Add Fruit Stock")
    fruit_name = input("Enter the name of the fruit: ")
    fruit_quantity = int(input("Enter the quantity of the fruit: "))
    fruit_price = int(input("Enter the price of the fruit: "))
    fruitStock[fruit_name] = {'quantity': fruit_quantity, 'price': fruit_price}
    print()
    choice()

def viewFruitStock():
    for fruit, details in fruitStock.items():
        print("Fruit Name: ", fruit)
        print("Quantity: ", details['quantity'])
        print("Price: ", details['price'])
        print()
    choice()

def updateFruitStock(fruit_name, fruit_quantity, fruit_price):
    for fruit in fruitStock:
        if fruit == fruit_name:
            fruitStock[fruit]['quantity'] = fruit_quantity
            fruitStock[fruit]['price'] = fruit_price
            break
        else:
            print(f"{fruit_name} not found in the stock.")
        print()
    choice()

def manager():
    print("Fruit Market Manager")
    print()
    print("1) Add Fruit Stock")
    print("2) View Fruit Stock")
    print("3) Update Fruit Stock")
    print()
    ch1 = int(input("Select the operation to perform : "))
    print()
    if ch1 == 1:
        addFruitStock()
    elif ch1 == 2:
        viewFruitStock()
    elif ch1 == 3:
        print()
        fruit_name = input("Enter the name of the fruit to update: ")
        fruit_quantity = int(input("Enter the new quantity: "))
        fruit_price = int(input("Enter the new price: "))
        updateFruitStock(fruit_name, fruit_quantity, fruit_price)
    else:
        print("You entered a wrong choice. Please enter a valid choice.")

def choice():
    ch2 = input("Do you want to perform more operations, Press y for yes and n for no : ")
    print()
    if ch2 == 'y':
        manager()
    elif ch2 == 'n':
        print("Thank you")
    else:
        print("You entered wrong choice")

def customer():
    print("No data")

print()
print("WELCOME TO FRUIT MARKET")
print()
print("1) manager")
print("2) Customer")
print()
ch = int(input("Select your role : "))
print()
if ch == 1:
    manager()
elif ch == 2:
    customer()
else:
    print("Wrong choice")