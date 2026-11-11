# Language: Python
# Topic: Removing items from a dictionary

student = {"name": "Sam", "age": 20, "gender": "male", "city": "Rome"}

# pop() removes an item and returns its value.
removed_city = student.pop("city")
print("Removed:", removed_city)
print(student)

# del removes an item by key.
del student["age"]
print(student)

# clear() removes every item.
student.clear()
print(student)

# Expected output:
# Removed: Rome
# {'name': 'Sam', 'age': 20, 'gender': 'male'}
# {'name': 'Sam', 'gender': 'male'}
# {}
#
# Key ideas:
# - Use pop(key) to remove an item and get its value.
# - Use del dictionary[key] to remove a known item.
# - Use clear() to empty the dictionary.
