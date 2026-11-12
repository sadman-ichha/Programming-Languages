# Python example: sort a dictionary by its keys or values.
marks = {"math": 3, "science": 4, "english": 2, "bangla": 1}

# Sorting items normally uses the key first.
by_subject = dict(sorted(marks.items()))

# Use the value at index 1 to sort by mark instead.
by_mark = sorted(marks.items(), key=lambda item: item[1])

print("Sorted by subject:", by_subject)
print("Sorted by mark:", by_mark)






# Output:
# Sorted by subject: {'english': 2, 'bangla': 1, 'math': 3, 'science': 4}
# Sorted by mark: [('bangla', 1), ('english', 2), ('math', 3), ('science', 4)]
#
# Key ideas:
# - sorted(marks.items()) sorts key-value pairs by key.
# - key=lambda item: item[1] sorts the pairs by value.
# - dict(...) turns the sorted pairs back into a dictionary.
