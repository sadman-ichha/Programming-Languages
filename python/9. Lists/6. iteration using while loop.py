# Basic to advanced examples of iteration using while loop in a list

# 1) Basic: print every item
nums = [10, 20, 30, 40]
i = 0

print("Example 1:")
while i < len(nums):
    print(nums[i])
    i += 1

print()

# 2) Basic: count even numbers
nums = [5, 7, 4, 64, 32, 17, 53, 85, 3, 1, 999]
i = 0
count = 0

print("Example 2:")
while i < len(nums):
    if nums[i] % 2 == 0:
        count += 1
    i += 1

print("Even numbers count:", count)
print()

# 3) Intermediate: print only even numbers
nums = [2, 5, 8, 11, 14, 21]
i = 0

print("Example 3:")
while i < len(nums):
    if nums[i] % 2 == 0:
        print(nums[i], end=" ")
    i += 1
print()
print()

# 4) Intermediate: sum all numbers
nums = [3, 6, 9, 12, 15]
i = 0
total = 0

print("Example 4:")
while i < len(nums):
    total += nums[i]
    i += 1

print("Total:", total)
print()

# 5) Advanced: find a value in the list
nums = [22, 44, 11, 66, 88, 33, 99]
search_value = 66
i = 0
found = False

print("Example 5:")
while i < len(nums):
    if nums[i] == search_value:
        found = True
        break
    i += 1

if found:
    print(search_value, "found at index", i)
else:
    print(search_value, "not found")
print()

# Easy rules to remember:
# - start with i = 0
# - keep looping while i < len(list)
# - use nums[i] to access the current element
# - increase i by 1 every time to move forward
# - break stops the loop early when needed
