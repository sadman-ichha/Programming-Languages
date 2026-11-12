# Python example: loop through each subject and mark in a dictionary.
marks = {
    "science": 10,
    "math": 9,
    "computer": 8,
    "bangla": 7,
    "islam": 6,
}

print("Dictionary type:", type(marks))

# .items() provides each key and value as a pair.
for subject, mark in marks.items():
    print(f"{subject}: {mark}")

# Output:
# Dictionary type: <class 'dict'>
# science: 10
# math: 9
# computer: 8
# bangla: 7
# islam: 6
#
# Key ideas:
# - .items() returns each key-value pair.
# - Use one loop variable for the key and another for the value.
