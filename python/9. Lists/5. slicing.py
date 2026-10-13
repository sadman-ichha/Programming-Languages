#      0   1   2   3   4   5   6   7   8   9   10
#     -11 -10  -9  -8  -7  -6  -5  -4  -3  -2  -1

lst = [56, 39, 21, 99, 53, 18, 64, 69, 88, 20, 11]

# list[start:stop:step]
# start = beginning index
# stop = ending index (not included)
# step = jump size

print("Original list:", lst)
print()

# Example 1: from index 2 to 6 (forward)
print("Example 1:", lst[2:7])

# Example 2: from start to index 5 (forward)
print("Example 2:", lst[:6])

# Example 3: from index 4 to end (forward)
print("Example 3:", lst[4:])

# Example 4: every second element
print("Example 4:", lst[::2])

# Example 5: reverse the whole list
print("Example 5:", lst[::-1])

# Example 6: reverse from index 8 down to index 3
print("Example 6:", lst[8:3:-1])

# Example 7: reverse every second element
print("Example 7:", lst[::-2])

# Easy rule:
# - positive step => go forward
# - negative step => go backward
# - stop index is always excluded
