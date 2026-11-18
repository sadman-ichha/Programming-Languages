# Python sets: removing elements.

fruits = {"apple", "mango", "banana", "kiwi"}
print("Starting fruits:", sorted(fruits))

# remove() deletes an element that is in the set.
fruits.remove("apple")

# discard() deletes an element too, but does nothing if it is missing.
fruits.discard("pear")

print("After remove() and discard():", sorted(fruits))

# pop() removes and returns one unpredictable element.
sample = fruits.copy()
removed = sample.pop()
print("Removed with pop():", removed)
print("Remaining sample:", sorted(sample))

# clear() removes every element.
fruits.clear()
print("After clear():", fruits)

# Example output (pop() may remove a different element):
# Starting fruits: ['apple', 'banana', 'kiwi', 'mango']
# After remove() and discard(): ['banana', 'kiwi', 'mango']
# Removed with pop(): banana
# Remaining sample: ['kiwi', 'mango']
# After clear(): set()

# Key ideas:
# - remove() raises an error if the element is missing.
# - discard() is safe when the element might be missing.
# - pop() removes an unpredictable element and returns it.
# - clear() removes all elements from the set.
