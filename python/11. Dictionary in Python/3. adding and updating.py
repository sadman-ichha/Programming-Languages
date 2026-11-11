student = {"name": "Sam", "age": 20}
print("Starting:", student)

# Assigning to an existing key updates its value.
student["age"] = 21
print("Updated age:", student)

# Assigning to a new key adds it to the dictionary.
student["grade"] = "A"
print("Added grade:", student)

# update() can change existing keys and add new ones.
student.update(
    {
    "name": "Alex", 
    "age": 22, 
    "city": "Pabna"
    }
)
print("After update():", student)

# Output:
# Starting: {'name': 'Sam', 'age': 20}
# Updated age: {'name': 'Sam', 'age': 21}
# Added grade: {'name': 'Sam', 'age': 21, 'grade': 'A'}
# After update(): {'name': 'Alex', 'age': 22, 'grade': 'A', 'city': 'Pabna'}

# Key ideas:
# - Assign to an existing key to update its value.
# - Assign to a new key to add an item.
# - update() can add or update several items at once.
