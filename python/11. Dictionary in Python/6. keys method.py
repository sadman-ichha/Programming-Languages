"""Language: Python | Topic: Getting dictionary keys with keys()."""

marks = {"math": 9, "sci": 8, "art": 7}
total = 0

# keys() gives each subject name, which we use to look up its score.
for subject in marks.keys():
    score = marks[subject]
    print(f"{subject}: {score}")
    total += score

print(f"Total: {total}")

# Expected output:
# math: 9
# sci: 8
# art: 7
# Total: 24
#
# Key ideas:
# - dictionary.keys() returns the dictionary's keys.
# - Use a key to look up its matching value.
# - Add values in a loop to calculate a total.