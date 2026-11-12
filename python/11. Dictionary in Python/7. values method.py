# Python example: get dictionary values and add them.
marks = {
    "science": 10,
    "math": 9,
    "computer": 8,
    "bangla": 7,
    "islam": 6,
}

total = 0
for mark in marks.values():
    print(mark)
    total += mark

print()
print(f"Total: {total}")

# Output: 40
#
# Key ideas:
# - .values() gives the values stored in a dictionary.
# - A loop can process each value, such as adding the marks.
