# Python: string immutability

# Strings cannot be changed after they are created.
name = "Sam"
print("Name:", name)
print("Original ID:", id(name))

# Assigning a new value replaces the variable's reference.
name = "Roy"
print("Name:", name)
print("New ID:", id(name))

# This would raise a TypeError because string characters cannot be changed:
# name[0] = "Z"

# Create a modified string by assigning a complete new string.
name = "Z" + name[1:]
print("Changed string:", name)

# Example output (memory IDs will vary):
# Name: Sam
# Original ID: 449...
# Name: Roy
# New ID: 450...
# Changed string: Zoy

# Key ideas:
# - Strings are immutable; individual characters cannot be changed.
# - Reassigning a variable creates or references a new string value.
# - Build an updated string and assign it to the variable.
