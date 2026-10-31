# List Indexing in Python
# A list can store different data types in one variable.
# Each item has an index number starting from 0.

mixed_data = ["Sadman", 25, 89.5, True, "Python", 100, False]

print("Mixed data list:", mixed_data)

# 1) Positive indexing (starts from 0)
print("First item:", mixed_data[0])
print("Second item:", mixed_data[1])
print("Third item:", mixed_data[2])
print("Last item:", mixed_data[6])

# 2) Negative indexing (starts from the end)
# -1 means last item, -2 means second last item
print("Last item using negative index:", mixed_data[-1])
print("Second last item:", mixed_data[-2])
print("First item using negative index:", mixed_data[-7])

# 3) Using len() to access the last item safely
n = len(mixed_data)
print("Last item using len() :", mixed_data[n - 1])

# Note:
# - mixed_data[-0] is the same as mixed_data[0]
# - Python indexing is zero-based
# - Lists can contain strings, integers, floats, and booleans together
