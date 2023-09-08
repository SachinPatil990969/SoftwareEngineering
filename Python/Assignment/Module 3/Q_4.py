# Write a Python function to get the largest number, smallest num and sum of all from a list.
def Q_4(nums):
    largest_num = max(nums)
    smallest_num = min(nums)
    sum_of_nums = sum(nums)
    return largest_num, smallest_num, sum_of_nums

list = [1, 2, 3, 4, 5]
largest_num, smallest_num, sum_of_nums = Q_4(list)

print(f"Largest number: {largest_num}")
print(f"Smallest number: {smallest_num}")
print(f"Sum of all numbers: {sum_of_nums}")