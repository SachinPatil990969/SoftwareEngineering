import mysql.connector

db = mysql.connector.connect(
  host="localhost",
  user="root",
  password="SBSS",
  database="blogs"
)

mycursor = db.cursor()