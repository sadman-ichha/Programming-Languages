# Python: tuple packing and unpacking

# Packing: commas group values into a tuple.
numbers = 1, 2, 3
print(numbers, type(numbers))
# (1, 2, 3) <class 'tuple'>

# Unpacking: assign each tuple item to a matching variable.
first, second, third = numbers
print(first, type(first))
# 1 <class 'int'>
print(first, second, third)
# 1 2 3

# Use * to collect any remaining items into a list.
first, *rest = numbers
print(first, rest)
# 1 [2, 3]

# Key ideas:
# - Packing creates a tuple; unpacking assigns its items to variables.
# - The number of variables must match, unless * collects the rest.
