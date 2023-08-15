for r in range(1 , 8):
    for c in range(1,8):
        if (r == 1 or r == 8 or c == 1 or c == 8 or r % 2 == 1 or c % 2 == 1):
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print("\n")

# print(range(10))
# print(list(range(10)))
# print(list(range(1,11)))
# print(list(range(1,11,2)))
# print(list(range(1,11,3)))
