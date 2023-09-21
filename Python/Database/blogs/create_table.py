import mydbconn

tb_name = input("Enter table name : ")

sql = f'create table {tb_name} (blog_id int auto_increment primary key, title varchar(100), content text)'

mydbconn.mycursor.execute(sql)

