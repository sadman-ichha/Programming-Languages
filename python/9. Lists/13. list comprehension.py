# Python example: create a list with a loop, then with a list comprehension.

numbers = []
for number in range(2, 8):
    numbers.append(number)

print("Using a loop:", numbers)

# A list comprehension builds the same list in one line.
numbers_from_comprehension = [i for i in range(1,10)]
print("Using a list comprehension:", numbers_from_comprehension)

# A comprehension can also transform each value.
squares = [number*number for number in range(2, 8)]
print("Squares:", squares)

# Expected output:
# Using a loop: [2, 3, 4, 5, 6, 7]
# Using a list comprehension: [2, 3, 4, 5, 6, 7]
# Squares: [4, 9, 16, 25, 36, 49]
#
# Key ideas:
# - A list comprehension creates a new list from an iterable.
# - Its basic pattern is [expression for item in iterable].
# - The expression can return each item unchanged or transform it.
