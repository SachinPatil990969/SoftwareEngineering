import re
list_ = []

def check_password(password):
    d = False
    u = False
    l = False
    s = False
    for ch in password:
        if ch.isdigit():
            d = True
        if ch.islower():
            l = True
        if ch.isupper():
            u = True
        if not ch.isalnum():
            s = True
    
    if d and l and u and s:
        return True
    else:
        return False
    
def is_gmail(gmail_id):
    gmail_pattern = re.compile(r'^[a-zA-Z0-9_.+-]+@gmail\.com$')
    return bool(re.match(gmail_pattern, gmail_id))

while True:
    permission = input("Do you want to register? y/n:")
    if permission.lower() == "y":
        user_name = input("Enter a name of user: ")

        gmail_flag = True
        again_gmail_flag = False
        while gmail_flag:
            if not again_gmail_flag:
                gmail_id = input("Enter a gmail: ")
            else:
                gmail_id = input("Enter a password again: ")

            if not is_gmail(gmail_id):
                print("Please enter a valid Gmail address.")
                again_gmail_flag = True
                continue
            else:
                print("Gmail is correct.")
                gmail_flag = False


        dict_ = {}
        flag = True
        again_flag = False 
        while flag:
            if not again_flag:
                password = input("Enter a password: ")
            else:
                password = input("Enter a password again: ")

            if not check_password(password):
                print("Enter a valid password.")
                again_flag = True
                continue
            else:
                print("Password is correct.")
                flag = False

        dict_["user_name"] = user_name
        dict_["email_id"] = gmail_id
        dict_["password"] = password

        # print(dict_)

        list_.append(dict_)
        continue
    
    else:
        break

print(list_)
    