"""
String Methods: Splitting and Joining
split(): Break String into List
join(): Combine List into String
"""

# text = "anirudh khurana is a coder"

# print(len(text.split()))

my_list = ["a", "n", "i", "r", "u", "d", "h", 5, 55.33, "python", "coder"]
ans = "-".join(str(ch) for ch in my_list)
print(ans)
print(type(ans))
