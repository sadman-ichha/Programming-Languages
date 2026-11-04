# Python: use tuple slicing to get part of a tuple or reverse it.
bangladesh_facts = ("Bangladesh", "Dhaka", "Bangla", "Taka", 1971)

# A slice includes the start index and stops before the end index.
print("First two facts:", bangladesh_facts[0:2])
print("facts:", bangladesh_facts[0::2])

# A step of -1 returns the values in reverse order.
reversed_facts = bangladesh_facts[::-1]
print("Reversed facts:", reversed_facts)
print("Original facts:", bangladesh_facts)

# Output:
# First two facts: ('Bangladesh', 'Dhaka')
# Reversed facts: (1971, 'Taka', 'Bangla', 'Dhaka', 'Bangladesh')
# Original facts: ('Bangladesh', 'Dhaka', 'Bangla', 'Taka', 1971)
#
# Key ideas:
# - Slicing uses [start:stop:step]; stop is not included.
# - A negative step moves backward through the tuple.
# - Slicing creates a new tuple; the original stays unchanged.
