# Python sets: collections of unique values.

# Duplicate numbers are stored only once.
numbers = {999, 2, 2, 4, 5}
print("Unique numbers:", sorted(numbers))
print("Type:", type(numbers).__name__)

# Sets can also contain values of different types.
mixed_values = {2, "Mia", 2.5}
print("Mixed values:", mixed_values)  # The display order may vary.

# Use set() to create an empty set; {} creates an empty dictionary.
empty_set = set()
print("Empty set:", empty_set)
print("Type:", type(empty_set).__name__)

# Example output (the order of mixed values may vary):
# Unique numbers: [2, 4, 5]
# Type: set
# Mixed values: {2, 2.5, 'Mia'}
# Empty set: set()
# Type: set

# Key ideas:
# - Sets automatically remove duplicate values.
# - Sets do not guarantee display order.
# - Use set(), not {}, to create an empty set.
