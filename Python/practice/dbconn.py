import sqlite3
from assessment2 import *

# SQLite Database Connection and Data Insertion
conn = sqlite3.connect('user_data.db')
cursor = conn.cursor()

# Create a table to store user data
cursor.execute('''
    CREATE TABLE IF NOT EXISTS users (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        user_name TEXT,
        email_id TEXT,
        password TEXT
    )
''')

# Commit the changes to the database
conn.commit()

# Iterate over the list and insert data into the database
for user_data in list_:
    cursor.execute('''
        INSERT INTO users (user_name, email_id, password)
        VALUES (?, ?, ?)
    ''', (user_data['user_name'], user_data['email_id'], user_data['password']))

# Commit the changes to the database
conn.commit()

# Close the database connection
conn.close()

print("Data stored in the database.")
