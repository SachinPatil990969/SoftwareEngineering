import re

list_ = []

def check_password(password):
    return all(any(func(ch) for ch in password) for func in (str.isdigit, str.islower, str.isupper, lambda x: not x.isalnum()))

def is_gmail(email):
    return bool(re.match(r'^[a-zA-Z0-9_.+-]+@gmail\.com$', email))

while True:
    permission = input("Do you want to register? y/n: ")
    if permission.lower() == "y":
        user_name = input("Enter a name of user: ")

        while True:
            gmail_id = input("Enter a gmail: ")
            if is_gmail(gmail_id):
                print("Gmail is correct.")
                break
            else:
                print("Please enter a valid Gmail address.")

        password = input("Enter a password: ")
        while not check_password(password):
            print("Password must contain uppercase, lowercase, digit and special character. Enter a valid password.")
            password = input("Enter a password again: ")

        list_.append({"user_name": user_name, "email_id": gmail_id, "password": password})
    else:
        break

print(list_)
