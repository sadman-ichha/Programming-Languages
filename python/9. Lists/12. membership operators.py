# Python: use `in` and `not in` to check whether a value is in a list.
available_fruits = ["apricot", "blueberry", "cherry"]

favorite_fruit = "blueberry"
missing_fruit = "plum"

if favorite_fruit in available_fruits:
    print(f"{favorite_fruit} is on the fruit list.")

if missing_fruit not in available_fruits:
    print(f"{missing_fruit} is not on the fruit list.")

# Check that a number exists before removing it.
numbers = [3, 6, 9, 12, 15, 12]
number_to_remove = int(input("Enter a number to remove: "))

if number_to_remove in numbers:
    numbers.remove(number_to_remove)
    print(f"Updated numbers: {numbers}")
else:
    print(f"{number_to_remove} is not in the list, so nothing was removed.")

# Example input: 12
# Output:
# blueberry is on the fruit list.
# plum is not on the fruit list.
# Enter a number to remove: 12
# Updated numbers: [3, 6, 9, 15, 12]
#
# Key ideas:
# - `in` checks whether a value is present.
# - `not in` checks whether a value is absent.
# - `remove(value)` removes only the first matching item.
