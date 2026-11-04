# Python: a tuple stores values in order and cannot be changed after creation.
weekdays = ("Monday", "Tuesday", "Wednesday", "Tuesday")

print("Weekdays:", weekdays)
print("Type:", type(weekdays))

# Tuples are immutable, so this assignment would raise a TypeError:
# weekdays[0] = "Sunday"

# Tuple methods can count a value and find its first position.
print("Tuesday appears:", weekdays.count("Tuesday"), "times")
print("First Tuesday index:", weekdays.index("Tuesday"))

# Output:
# Weekdays: ('Monday', 'Tuesday', 'Wednesday', 'Tuesday')
# Type: <class 'tuple'>
# Tuesday appears: 2 times
# First Tuesday index: 1
#
# Key ideas:
# - Tuples keep values in order and are written with parentheses.
# - A tuple cannot be changed after it is created.
# - `count(value)` counts matches; `index(value)` returns the first index.
