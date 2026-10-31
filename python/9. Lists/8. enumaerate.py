#       0  1  2  3   4   5   6   7   8  9  10
nums = [5, 7, 4, 64, 32, 17, 53, 85, 3, 1, 999]


for index, value in enumerate(nums):
    if value % 2 == 0:
        print(index)
