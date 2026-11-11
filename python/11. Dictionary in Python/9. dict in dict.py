students = {
    "101": {"name": "Rahul", "age": 21, "city": "Delhi"},
    "102": {"name": "Priya", "age": 20, "city": "Mumbai"},
    "103": {"name": "Karan", "age": 22, "city": "Pune"},
}

# How to access
# print(students["101"])
# print(students["101"]["name"])
# print(students["103"]["city"])
total = 0
for roll_no, details in students.items():
    total += details["age"]
    print(f"roll_no = {roll_no}, name = {details['name']}, age = {details['age']}")

print(total)
