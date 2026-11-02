# Python example: use membership operators to check values in a list.
colors = ["navy", "mint", "amber"]

favorite_color = "mint"
missing_color = "lavender"

if favorite_color in colors:
    print(f"{favorite_color} is on the color list.")

# `not in` is true when a value is absent from the list.
if missing_color not in colors:
    print(f"{missing_color} is not on the color list.")

# Output:
# mint is on the color list.
# lavender is not on the color list.

# Check membership before removing a value from a list.
numbers = [4, 7, 9, 7, 12, 15]
target_number = int(input("Enter a number to remove: "))

if target_number in numbers:
    numbers.remove(target_number)
    print(f"Updated numbers: {numbers}")
else:
    print(f"{target_number} is not in the list, so nothing was removed.")

# Example: entering 7 removes only its first occurrence.
# Updated numbers: [4, 9, 7, 12, 15]
#
# Key ideas:
# - `in` checks whether a value is present.
# - `not in` checks whether a value is absent.
# - remove(value) removes only the first matching item.
