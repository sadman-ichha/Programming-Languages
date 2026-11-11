students = {
    "anirudh": {"math": 87, "science": 92, "english": 74},
    "priya": {"math": 65, "science": 78, "english": 90},
    "rahul": {"math": 55, "science": 60, "english": 48},
    "sneha": {"math": 95, "science": 88, "english": 82},
    "karan": {"math": 70, "science": 45, "english": 63},
}

# ans = dict(
#     sorted(
#         students.items(), key=lambda x: x[1]["math"] + x[1]["science"] + x[1]["english"]
#     )
# )
ans = dict(sorted(students.items(), key=lambda x: sum(x[1].values()), reverse=True))
print(ans)
