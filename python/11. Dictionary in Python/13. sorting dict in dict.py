# Python example: sort a nested dictionary by students' math marks.
students = {
    "Ava": {"math": 8, "science": 9, "english": 7},
    "Leo": {"math": 6, "science": 8, "english": 9},
    "Mia": {"math": 10, "science": 8, "english": 8},
    "Noah": {"math": 5, "science": 6, "english": 4},
}

# Each item is a (student_name, subject_marks) pair.
sorted_students = dict(
    sorted(
        students.items(),
        key=lambda student: student[1]["math"],
        reverse=True,
    )
)

for name, marks in sorted_students.items():
    print(f"{name}: math = {marks['math']}")

# Output:
# Mia: math = 10
# Ava: math = 8
# Leo: math = 6
# Noah: math = 5
#
# Key ideas:
# - A nested dictionary stores each student's subject marks.
# - student[1]["math"] gets the math mark from a name-and-marks pair.
# - reverse=True sorts from the highest math mark to the lowest.
