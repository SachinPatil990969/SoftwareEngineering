import mydbconn
from tabulate import tabulate

sql = 'SHOW DATABASES'

mydbconn.mycursor.execute(sql)

database = mydbconn.mycursor.fetchall()

headers = ["Databases"]

table = tabulate(database, headers, tablefmt="fancy_grid")

print(table)