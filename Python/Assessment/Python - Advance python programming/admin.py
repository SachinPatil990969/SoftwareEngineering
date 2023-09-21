from db_connection import DatabaseConnection

class Admin:
    def __init__(self):
        self.db = DatabaseConnection()

    def register(self, username, password):
        sql = "INSERT INTO Admin (Username, Password) VALUES (%s, %s)"
        values = (username, password)
        cursor = self.db.connection.cursor()
        cursor.execute(sql, values)
        self.db.connection.commit()
        print("Admin registered successfully!")

    def login(self, username, password):
        sql = "SELECT * FROM Admin WHERE Username = %s AND Password = %s"
        values = (username, password)
        cursor = self.db.connection.cursor()
        cursor.execute(sql, values)
        admin = cursor.fetchone()

        if admin:
            print("Login successful!")
            return admin
        else:
            print("Invalid credentials.")
            return None