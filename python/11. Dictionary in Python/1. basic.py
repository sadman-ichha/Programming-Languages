# Python dictionaries store key-value pairs.
student = {
    "name": "Sadman",
    "math": 10,
    "cs": 9,
}

print(student)
print(type(student))
print(student["math"])

# Updating a key replaces its previous value.
student["cs"] = 10
print(student["cs"])

# Keys can be strings, numbers, or tuples; values can also be lists.
profile = {
    1: "Sadman",
    (2, 3): "NY",
    "tags": ["py", "db"],
}
print(profile)

# Output:
# {'name': 'Sadman', 'math': 10, 'cs': 9}
# <class 'dict'>
# 10
# 10
# {1: 'Sadman', (2, 3): 'NY', 'tags': ['py', 'db']}

# Key ideas:
# - Dictionaries map unique keys to values.
# - Keys must be hashable; values can be any type.
# - Assigning to an existing key updates its value.
