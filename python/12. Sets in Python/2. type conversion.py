# Python: converting between sets and lists.

# Convert a set to a list.
mixed_values = {2, "Sadman", 2.5}
values_list = list(mixed_values)
print("Set type:", type(mixed_values).__name__)
print("List type:", type(values_list).__name__)
print("List values:", values_list)

# Convert a list to a set and back to remove duplicates.
numbers = [4, 2, 4, 3, 2]
unique_numbers = list(set(numbers))
print("Unique numbers:", unique_numbers)

# Example output (values converted from sets may appear in a different order):
# Set type: set
# List type: list
# List values: [2, 2.5, 'Sadman']
# Unique numbers: [2, 3, 4]

# Key ideas:
# - list(set_values) converts a set to a list.
# - set(list_values) removes duplicate items.
# - Sets do not guarantee item order, so conversion order may vary.
