# 1)
print("Q-1")
my_list = [10, 20, 30, 40]

my_list[1:3] = [50, 60, 70]

print(my_list)

# ans = [10, 50, 60, 70, 40]

# 2)
print("Q-2")
my_list = [10, 20, 30, 40]

my_list.insert(2, 50)

print(my_list)

# 3)
print("Q-3")
my_list = [10, 20, 30, 40]

my_list.append(60)

print(my_list)

# 4)
print("Q-4")
my_list = [10, 20, 30, 40]

second_list = [100, 200, 300, 400, 500]

my_list.extend(second_list)

print(my_list)

# 5)
print("Q-5")
my_list = [10, 20, 30, 40]

second_list1 = [11, 22]

my_list.append(second_list1)

print(my_list)

# 6)
print("Q-6")
my_list = [10, 20, 30, 40]

my_list.remove(10)

print(my_list)

# 7)
print("Q-7")
my_list = [10, 20, 30, 40]

my_list.reverse()

print(my_list)

# 8)
print("Q-8")
my_list = [10, 20, 30, 40]

my_list.pop(1)

print(my_list)

# 9)
print("Q-9")
my_list = [10, 20, 30, 40]

my_list.pop()

print(my_list)

# 10)
print("Q-10")
my_list = [10, 20, 30, 40]

del my_list[1]

print(my_list)

# 11)
print("Q-11")
my_list = [10, 20, 30, 40]

my_list.clear()

print(my_list)

# 12)
print("Q-12")
my_list = [10, 20, 30, 40]

copyy = my_list.copy()

print(copyy)

# 13)
print("Q-13")
my_list = [10, 20, 30, 40]

for i in my_list:
    print(i)

# 14)
print("Q-14")
my_list = [10, 20, 30, 40]

for i in range(len(my_list)):
    print(my_list[i])

# 15)
print("Q-15")
my_list = [10, 20, 30, 40]

i = 0

while i < len(my_list):
    print(my_list[i])
    i += 1

# 16)
print("Q-16")
my_list = [10, 20, 30, 40]

l = [i for i in my_list]

print(l)

# 17)
print("Q-17")
my_list = ["apple", "banana", "mango", "watermalon"]

nl = []
for i in my_list:
    if 'o' in i:
        nl.append(i)

print(nl)

# 18)
print("Q-18")
my_list = ["apple", "banana", "mango", "watermalon"]

nl = [i for i in my_list if 'o' in i]

print(nl)

# 19)
print("Q-19")
l = [i for i in range(11)]

print(l)

# 20)
print("Q-20")
fruits = ["apple", "banana", "cherry", "kiwi", "mango"]

newlist = [x if x != "banana" else "orange" for x in fruits]

print(newlist)

# 21)
print("Q-21")
my_list = [20, 10, 22, 99, 55, 64, 100]

my_list.sort()

print(my_list)

# 22)
print("Q-22")
# my_list = [20, 10, 22, 99, 55, 'apple', 'banana', 64, 100]

# my_list.sort()

# print(my_list)

# 23)
print("Q-23")
my_list = [20, 10, 22, 99, 55, 64, 100]

my_list.sort(reverse=True)

print(my_list)

# 24)
print("Q-24")
def myfunc(n):
  return abs(n - 50)

thislist = [100, 50, 65, 82, 23]
thislist.sort(key = myfunc)
print(thislist)

# 25)
print("Q-25")
my_list = [10, 20, 30]

li = my_list

print(li)

my_list.append(40)

print(li)

# 26)
print("Q-26")
my_list = [10, 20, 30]

li = my_list.copy()

print(li)

my_list.append(40)

print(my_list)
print(li)

# 27)
print("Q-27")
my_list = [10, 20, 30]

li = list(my_list)

print(li)

# 28)
print("Q-28")
my_list = [10, 20, 30]

sl = ['apple', 'banana']

tl = my_list + sl

print(tl)

# 29)
print("Q-29")
my_list = [10, 20, 30, 10]

l = print(my_list.count(10))

print(l)

# 30)
print("Q-30")
my_list = [10, 20, 30, 10]

l = my_list.index(30)

print(l)
