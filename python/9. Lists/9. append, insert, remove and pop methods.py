fruits = ["apple", "banana", "grape", "orange", "grape", "kiwi"]
print("Starting list:", fruits)

# append() adds an item to the end of the list.
fruits.append("mango")
print("After append:", fruits)

# insert() adds an item at the chosen index.
fruits.insert(2, "pear")
print("After insert:", fruits)

# remove() deletes the first matching value.
fruits.remove("grape")
print("After remove:", fruits)

# pop() removes and returns the last item.
removed_fruit = fruits.pop()
print("Popped fruit:", removed_fruit)
print("After pop:", fruits)

# pop(index) removes and returns the item at that position.
removed_fruit = fruits.pop(0)
print("Popped fruit at index 0:", removed_fruit)
print("After pop(0):", fruits)

# Key ideas:
# - These methods change the list directly.
# - remove(value) removes only the first matching value.
# - pop() removes the last item; pop(index) removes by position.
