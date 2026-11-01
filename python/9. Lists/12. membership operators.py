numbers = [6, 3, 8, 3, 10, 5, 3, 7]

target_number = int(input("Enter a number to remove: "))

if target_number in numbers:
    numbers.remove(target_number)
    print(f"Updated numbers: {numbers}")
else:
    print(f"{target_number} is not in the list, so nothing was removed.")

# Example: entering 3 removes only its first occurrence.
# Updated numbers: [6, 8, 3, 10, 5, 3, 7]
#
# Example: check whether a color is missing from a list.
colors = ["red", "blue", "green"]
requested_color = "purple"

if requested_color not in colors:
    print(f"{requested_color} is not available.")

# Output: purple is not available.
#
# Key ideas:
# - `in` checks whether a value is present in a list.
# - `not in` checks that the value is absent.
# - remove(value) removes only the first matching item.
