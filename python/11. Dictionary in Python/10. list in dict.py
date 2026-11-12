# Python example: store lists inside a dictionary.
student = {
    "name": "Ava",
    "age": 2,
    "subjects": ["Math", "Art", "Music"],
    "marks": [8, 9, 7],
}

print("Student:", student["name"])
print("Subjects:", student["subjects"])
print("First subject:", student["subjects"][0])

total_marks = sum(student["marks"])
print("Total marks:", total_marks)

# Output:
# Student: Ava
# Subjects: ['Math', 'Art', 'Music']
# First subject: Math
# Total marks: 24
#
# Key ideas:
# - A dictionary value can be a list.
# - Access a list in a dictionary with its key, then use a list index.
# - sum() adds all the numbers in a list.
