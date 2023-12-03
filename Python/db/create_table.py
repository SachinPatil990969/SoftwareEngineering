import mydbconn

tb_name = input("Enter table name : ")

sql = f'create table {tb_name} (id INTEGER PRIMARY KEY AUTOINCREMENT,
        user_name TEXT,
        email_id TEXT,
        password TEXT
        )'

mydbconn.mycursor.execute(sql)

