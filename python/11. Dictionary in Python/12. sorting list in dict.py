# Python example: sort student mark lists by total and by their last mark.
# Each list stores marks in this order: math, science, English, history, art.
marks = {
    "Ava": [8, 7, 9, 6, 10],
    "Leo": [6, 9, 7, 8, 5],
    "Mia": [10, 8, 9, 9, 10],
    "Noah": [7, 8, 8, 7, 9],
    "Ivy": [9, 10, 8, 10, 8],
}

# Use [-1] to get the final mark in Ava's list.
print("Ava's last mark:", marks["Ava"][-1])
print("Ava's total marks:", sum(marks["Ava"]))

# Each item is a (student_name, mark_list) pair.
sorted_by_total = sorted(
    marks.items(), key=lambda item: sum(item[1]), reverse=True
)
sorted_by_last_mark = sorted(
    marks.items(), key=lambda item: item[1][-1], reverse=True
)

print("\nSorted by total marks:")
for student, student_marks in sorted_by_total:
    print(f"{student}: {sum(student_marks)}")

print("\nSorted by last mark:")
for student, student_marks in sorted_by_last_mark:
    print(f"{student}: {student_marks[-1]}")

# Output:
# Ava's last mark: 10
# Ava's total marks: 40
#
# Sorted by total marks:
# Mia: 46
# Ivy: 45
# Ava: 40
# Noah: 39
# Leo: 35
#
# Sorted by last mark:
# Ava: 10
# Mia: 10
# Noah: 9
# Ivy: 8
# Leo: 5
#
# Key ideas:
# - marks["Ava"][-1] gets the last mark; Python indexes from the end with -1.
# - sum(marks["Ava"]) adds all of Ava's marks.
# - sum(item[1]) totals a student's marks while sorting.
# - item[1][-1] uses that student's last mark as the sorting value.
# - reverse=True sorts from the highest total to the lowest.
