from medicine import Medicine
from manager import Manager
from admin import Admin

def main():
    while True:
        print("\nSelect your role:")
        print("1. Admin")
        print("2. Pharmacy Manager")
        print("3. Exit")

        ch1 = input("Select your role: ")
        
        if ch1 == '1':
            admin = Admin()

            while True:
                print("\nSelect task to perform by Admin:")
                print("1. Register")
                print("2. Login")
                print("3. View Managers")
                print("4. View Medicines")
                print("5. Exit")

                ch2 = input("Enter your choice: ")

                if ch2 == '1':
                    username = input("Enter username: ")
                    password = input("Enter password: ")
                    admin.register(username, password)

                elif ch2 == '2':
                    username = input("Enter username: ")
                    password = input("Enter password: ")
                    admin.login(username, password)

                elif ch2 == '3':
                    Manager().view_managers()

                elif ch2 == '4':
                    Medicine().view_medicine()

                elif ch2 == '5':
                    break

                else:
                    print("Invalid choice. Please try again.")

        elif ch1 == '2':
            manager = Manager()

            while True:
                print("\nSelect task to perform by Manager")
                print("1. Register")
                print("2. Login")
                print("3. Add Medicine")
                print("4. View Madicine")
                print("5. Delete Medicine")
                print("6. Exit")

                ch3 = input("Enter your choice: ")

                if ch3 == '1':
                    name = input("Enter manager name: ")
                    pharmacy_name = input("Enter pharmacy name: ")
                    username = input("Enter username: ")
                    password = input("Enter password: ")
                    manager.register(name, pharmacy_name, username, password)

                elif ch3 == '2':
                    username = input("Enter username: ")
                    password = input("Enter password: ")
                    manager.login(username, password)

                elif ch3 == '3':
                    name = input("Enter medicine name: ")
                    qty = input("Enter quantity: ")
                    Added_date = input("Enter added date (YYYY-MM-DD): ")
                    Added_By = input("Enter added by: ")
                    price = input("Enter price: ")
                    Medicine().add_medicine(name, qty, Added_date, Added_By, price)

                elif ch3 == '4':
                    Medicine().view_medicine()

                elif ch3 == '5':
                    medicine_id = int(input("Enter the SR_No of the medicine to delete: "))
                    Medicine().delete_medicine(medicine_id)

                elif ch3 == '6':
                    break

                else:
                    print("Invalid choice. Please try again.")
        
        elif ch1 == '3':
            break
    
        else:
            print("Invalid choice, Please try again.")

if __name__ == "__main__":
    main()
