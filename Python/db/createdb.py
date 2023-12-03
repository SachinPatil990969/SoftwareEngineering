import mydbconn
import mysql.connector

try:
    name = input("Enter database name : ")
    sql = f'create database {name}'
    mydbconn.mycursor.execute(sql)
except mysql.connector.errors.DatabaseError:
    print(f"DBEXISTERROR : '{name}' database is already exists")
else:
    print(f"Database created - '{name}'")