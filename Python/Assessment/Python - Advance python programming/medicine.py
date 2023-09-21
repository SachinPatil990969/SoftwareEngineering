from db_connection import DatabaseConnection

class Medicine:
    def __init__(self):
        self.db = DatabaseConnection()

    def add_medicine(self, name, qty, Added_date, Added_By, price):
        sql = "INSERT INTO Medicine (Medicine_Name, Qty, Added_Date, Added_By, Price) VALUES (%s, %s, %s, %s, %s)"
        values = (name, qty, Added_date, Added_By, price)
        cursor = self.db.connection.cursor()
        cursor.execute(sql, values)
        self.db.connection.commit()
        print("Medicine added successfully!")

    def view_medicine(self):
        sql = "SELECT * FROM Medicine"
        cursor = self.db.connection.cursor()
        cursor.execute(sql)
        medicines = cursor.fetchall()
        for med in medicines:
            print(f"Medicine ID: {med[0]}, Name: {med[1]}, Quantity: {med[2]}, Added Date: {med[3]}, Added By: {med[4]}, Price: {med[5]}")

    def delete_medicine(self, medicine_id):
        sql = "DELETE FROM Medicine WHERE SR_No = %s"
        cursor = self.db.connection.cursor()
        cursor.execute(sql, (medicine_id,))
        self.db.connection.commit()
        print("Medicine deleted successfully!")
