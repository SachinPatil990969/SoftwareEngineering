import mysql.connector

class DatabaseConnection:
    def __init__(self):
        self.connection = None
        self.connect()

    def connect(self):
        try:
            self.connection = mysql.connector.connect(
                host='localhost',
                user='root',
                password='SBSS',
                database='pharmacy'
            )
            if self.connection.is_connected():
                print("Connected to the database")
        except mysql.connector.Error as err:
            print("Error: ", err)

    def close(self):
        if self.connection.is_connected():
            self.connection.close()
            print("Disconnected from the database")
