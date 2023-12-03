from mydbconn import mycursor
from program import list_

table_name = input("Enter the table name to store data: ")

for user_data in list_:
    sql = f"INSERT INTO {table_name} (user_name, email_id, password) VALUES (%s, %s, %s)"
    values = (user_data['user_name'], user_data['email_id'], user_data['password'])

    mycursor.execute(sql, values)

# Commit the changes to the database
mydbconn.db.commit()

print("Data stored in the database.")
