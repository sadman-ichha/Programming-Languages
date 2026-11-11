marks = {
    "science": 95,
    "math": 100,
    "cs": 88,
}

# Use square brackets when you know the key exists.
print(marks["math"])

# Use get() when the key might not exist.
subject = "art"
score = marks.get(subject)

if score is None:
    print("Subject not found")
else:
    print(f"Mark scored = {score}")

# Output:
# 100
# Subject not found

# Key ideas:
# - Use dictionary[key] to access a known key.
# - Use dictionary.get(key) to safely check for a missing key.
