"""
CHECKING CONTENT (T/F)
isalpha(): All Letters?
isdigit(): All Digits?
isalnum(): AlphaNumeric Only?
isspace(): All Whitespace?
startswith() and endswith()
"""

text = "anirudh khurana"
# print(text.isalpha())
# print(text.isdigit())
# print(text.isalnum())
# print(text.isspace())
# print(text.startswith("ani"))
# print(text.endswith("z"))

age = input("Enter age = ")

if age.isdigit():
    if int(age) >= 18:
        print("You can vote")
    else:
        print("You cannot vote")
else:
    print("Please enter proper age")
