from db_connection import DatabaseConnection

class Manager:
    def __init__(self):
        self.db = DatabaseConnection()

    def register(self, name, pharmacy_name, username, password):
        sql = "INSERT INTO Manager (Manager_Name, Pharmacy_Name, Username, Password) VALUES (%s, %s, %s, %s)"
        values = (name, pharmacy_name, username, password)
        cursor = self.db.connection.cursor()
        cursor.execute(sql, values)
        self.db.connection.commit()
        print("Manager registered successfully!")

    def login(self, username, password):
        sql = "SELECT * FROM Manager WHERE Username = %s AND Password = %s"
        values = (username, password)
        cursor = self.db.connection.cursor()
        cursor.execute(sql, values)
        manager = cursor.fetchone()

        if manager:
            print("Login successful!")
            return manager
        else:
            print("Invalid credentials.")
            return None
        
    def view_managers(self):
        sql = "SELECT * FROM Manager"
        cursor = self.db.connection.cursor()
        cursor.execute(sql)
        managers = cursor.fetchall()
        for mgr in managers:
            print(f"Manager ID: {mgr[0]}, Name: {mgr[1]}, Pharmacy: {mgr[2]}")