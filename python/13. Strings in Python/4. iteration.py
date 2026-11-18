# Python: iterating over strings

text = "Coding"

# Iterate over each character.
for char in text:
    print(char)

print()

# Use enumerate() to get both the index and character.
for index, char in enumerate(text):
    print(f"Index {index}: {char}")

print()

# Count how many times a character appears.
target = "n"
count = 0

for char in text:
    if char == target:
        count += 1

print(f"{target} appears {count} time(s)")

# Example output:
# C
# o
# d
# i
# n
# g
#
# Index 0: C
# Index 1: o
# Index 2: d
# Index 3: i
# Index 4: n
# Index 5: g
#
# n appears 1 time(s)

# Key ideas:
# - A for loop visits every character in a string.
# - enumerate() provides both an index and a character.
# - Looping and counting are useful for checking text.
