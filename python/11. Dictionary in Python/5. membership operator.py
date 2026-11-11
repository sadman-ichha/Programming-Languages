# Language: Python
# Topic: Checking whether a key exists in a dictionary

student = {"name": "Sam", "age": 20, "city": "Rome"}

key = input("Enter a key: ")

# The `in` operator checks dictionary keys.
if key in student:
    print(student[key])
else:
    print("Key does not exist")

# Example: entering "name" prints Sam.
# Entering "grade" prints Key does not exist.
#
# Key ideas:
# - Use `key in dictionary` to check whether a key exists.
# - Use `dictionary[key]` to get its value after checking.
