# Python example: use enumerate() to get each item's index and value.
fruits = ["apple", "banana", "mango"]

for index, fruit in enumerate(fruits):
    print(f"Index: {index}, fruit: {fruit}")

# Expected output:
# Index: 0, fruit: apple
# Index: 1, fruit: banana
# Index: 2, fruit: mango
#
# Key ideas:
# - enumerate() provides an index and item on each loop.
# - Indexes start at 0 by default.
