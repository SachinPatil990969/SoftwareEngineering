# def outer_function(x):
#     def inner_function(y):
#         return x*y
#     return inner_function

# result = outer_function(3)(4)
# print(result)

# for i in range(6):
#     for j in range(i):
#         print("*", end="")
#     print("")

# for i in range(6):
#     for j in range(i):
#         if (j % 2 == 0):
#            print("1",  end="")
#         else:
#             print("0", end="")
#     print("")

# for i in range(8):
#     for j in range(i):
#         if (i % 2 == 0):
#             print("-", end="")
#         else:
#             if (j % 2 == 0):
#                 print("1", end="")
#             else:
#                 print("-", end="")
#     print("")

n = 7
for i in range(n+1):
    for j in range(i+1):
        if (j == 0) or (j == i) or (i == n):
            print("*", end="")
        else:
            print("_", end="")
    print("")

armstrong number
pattern
count

django setup with crud