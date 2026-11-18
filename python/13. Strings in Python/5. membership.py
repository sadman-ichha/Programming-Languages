# Python: membership operators and vowels

text = "ProgrAmming"

# in checks whether a character or substring exists.
print('"p" in text:', "p" in text)
print('"P" in text:', "P" in text)
print('"gram" in text:', "gram" in text)

# not in checks whether a character or substring is missing.
print('"z" not in text:', "z" not in text)
print('"m" not in text:', "m" not in text)

# Count vowels by checking whether each character is in this string.
vowels = "aeiouAEIOU"
vowel_count = 0

for char in text:
    if char in vowels:
        vowel_count += 1

print("Vowel count:", vowel_count)

# Example output:
# "p" in text: False
# "P" in text: True
# "gram" in text: False
# "z" not in text: True
# "m" not in text: False
# Vowel count: 3

# Key ideas:
# - in returns True when a character or substring exists.
# - not in returns True when it is missing.
# - Membership checks are case-sensitive.
