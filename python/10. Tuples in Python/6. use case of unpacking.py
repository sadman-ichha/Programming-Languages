# Python: use tuple unpacking to receive multiple return values.


def min_max(values):
    """Return the smallest and largest values in a list."""
    minimum = min(values)
    maximum = max(values)
    return minimum, maximum


numbers = [3, 1, 5, 2]
smallest, largest = min_max(numbers)

print(f"Minimum: {smallest}")
print(f"Maximum: {largest}")
# Minimum: 1
# Maximum: 5

# Key ideas:
# - A function can return multiple values as a tuple.
# - Unpack the tuple into variables in the same order they are returned.
