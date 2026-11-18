# Python sets: adding elements.

# A set stores only unique values.
fruits = {"apple", "mango"}

# add() adds one element.
fruits.add("kiwi")

# update() adds multiple elements from an iterable.
fruits.update(["grape", "lychee"])

# Adding a value that already exists has no effect.
fruits.add("kiwi")

print("Fruits:", sorted(fruits))

# Example output:
# Fruits: ['apple', 'grape', 'kiwi', 'lychee', 'mango']

# Key ideas:
# - Use add() to add one item.
# - Use update() to add items from a list or another iterable.
# - Sets automatically keep only unique values.
