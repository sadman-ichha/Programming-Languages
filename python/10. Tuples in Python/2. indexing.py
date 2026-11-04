# Python: use indexes to access values in a tuple.
country_info = ("Bangladesh", "Dhaka", "Bangla", "Taka", 1971)

# Positive indexes count from the beginning, starting at 0.
print("Country:", country_info[0])

# Negative indexes count backward from the end, starting at -1.
print("Independence year:", country_info[-1])

# Output:
# Country: Bangladesh
# Independence year: 1971
#
# Key ideas:
# - Tuple indexes start at 0.
# - Negative indexes access values from the end.
# - An index outside the tuple's range raises an IndexError.
