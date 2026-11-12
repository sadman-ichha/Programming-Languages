# Python example: loop through dictionary keys and values with .items().
marks = {
    "science": 10,
    "math": 9,
    "computer": 8,
    "bangla": 7,
    "islam": 6,
}

print(type(marks))

for subject, mark in marks.items():
    print(f"{subject}: {mark}")

# Output:
# <class 'dict'>
# science: 10
# math: 9
# computer: 8
# bangla: 7
# islam: 6
#
# Key ideas:
# - .items() gives each dictionary key and its value.
# - Use two loop variables to handle each key-value pair.
