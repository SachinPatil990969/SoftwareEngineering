import tkinter as tk
import datetime
from blogs import mydbconn

screen=tk.Tk()

screen.title("Age Calculator")


screen.geometry('400x400')
# tk.Label(screen,text='Age Calculator').pack()
def age_calculator():
    name_=name.get()
    year_=year.get()
    current_year=datetime.datetime.now().year
    age=current_year-int(year_)
    msg=f'hello,{name_},your age is {age}'
    tk.Label(screen,text=msg).grid(row=3,column=1)
    

tk.Label(screen,text='ENTER YOUR NAME : ').grid(row=0,column=0)
name = tk.Entry(screen)
name.grid(row=0,column=1)
tk.Label(screen,text='ENTER YOUR BIRTH YEAR : ').grid(row=1,column=0)
year=tk.Entry(screen)
year.grid(row=1,column=1)

tk.Button(screen,text='Click',command=age_calculator).grid(row=2,column=1)


screen.mainloop()