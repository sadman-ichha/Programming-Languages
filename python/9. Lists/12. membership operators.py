# Python: use `in` and `not in` to check whether a value is in a list.
available_fruits = ["coconut", "banana", "mango"]

favorite_fruit = "mango"
missing_fruit = "apple"

if favorite_fruit in available_fruits:
    print(f"{favorite_fruit} is on the fruit list.")

if missing_fruit not in available_fruits:
    print(f"{missing_fruit} is not on the fruit list.")

# Check that a score exists before removing it.
scores = [7, 14, 21, 28, 21]
remove_score = int(input("Enter a score to remove: "))

if remove_score in scores:
    scores.remove(remove_score)
    print(f"Updated scores: {scores}")
else:
    print(f"{remove_score} is not in the list, so nothing was removed.")

# Example input: 28
# Output:
# mango is on the fruit list.
# apple is not on the fruit list.
# Enter a score to remove: 28
# Updated scores: [7, 14, 21, 21]
#
# Key ideas:
# - `in` checks whether a value is present.
# - `not in` checks whether a value is absent.
# - `remove(value)` removes only the first matching item.
