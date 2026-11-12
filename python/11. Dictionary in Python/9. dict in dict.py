# Python example: store and read student records in a nested dictionary.
students = {
    "1": {"name": "Ava", "age": 2, "city": "Lima"},
    "2": {"name": "Leo", "age": 3, "city": "Oslo"},
    "3": {"name": "Mia", "age": 4, "city": "Rome"},
}

# Access a complete record or one value inside it.
print(students["1"])
print(students["3"]["city"])

total_age = 0
for student_id, details in students.items():
    total_age += details["age"]
    print(f"ID: {student_id}, name: {details['name']}, age: {details['age']}")

print("Total age:", total_age)

# Output:
# {'name': 'Ava', 'age': 2, 'city': 'Lima'}
# Rome
# ID: 1, name: Ava, age: 2
# ID: 2, name: Leo, age: 3
# ID: 3, name: Mia, age: 4
# Total age: 9
#
# Key ideas:
# - A nested dictionary stores a dictionary inside another dictionary.
# - Use two keys to access a value, such as students["3"]["city"].
# - .items() lets a loop visit each ID and its student record.
