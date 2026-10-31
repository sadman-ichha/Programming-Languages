nums = [5, 7, 4, 64, 32, 17, 53, 85, 3, 1, 999]

# 1. Visit each item in the list
print("Every number:")
for num in nums:
    print(num)

print()

# 2. Add all the numbers
total = 0
for num in nums:
    total += num
print("Sum:", total)

print()

# 3. Print only even numbers
print("Even numbers:")
for num in nums:
    if num % 2 == 0:
        print(num, end=" ")

print("\n")

# 4. Visit each number with its index
print("Index and number:")
for index, num in enumerate(nums):
    print(index, num)

print()

# 5. Print the numbers in reverse order
print("Numbers in reverse:")
for num in reversed(nums):
    print(num)

# Key ideas:
# - for num in nums visits each item in order.
# - Use if inside the loop to select items.
# - enumerate(nums) gives each item's index and value.
# - reversed(nums) visits items from last to first.
