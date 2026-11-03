# Python: use `in` and `not in` to check whether a value is in a list.
fruits = ["mango", "peach", "kiwi"]

favorite_fruit = "peach"
unavailable_fruit = "plum"

if favorite_fruit in fruits:
    print(f"{favorite_fruit} is on the fruit list.")

if unavailable_fruit not in fruits:
    print(f"{unavailable_fruit} is not on the fruit list.")

# Check that a number exists before removing it.
numbers = [5, 8, 11, 8, 14, 17]
number_to_remove = int(input("Enter a number to remove: "))

if number_to_remove in numbers:
    numbers.remove(number_to_remove)
    print(f"Updated numbers: {numbers}")
else:
    print(f"{number_to_remove} is not in the list, so nothing was removed.")

# Example input: 8
# Output:
# peach is on the fruit list.
# plum is not on the fruit list.
# Enter a number to remove: 8
# Updated numbers: [5, 11, 8, 14, 17]
#
# Key ideas:
# - `in` checks whether a value is present.
# - `not in` checks whether a value is absent.
# - `remove(value)` removes only the first matching item.
