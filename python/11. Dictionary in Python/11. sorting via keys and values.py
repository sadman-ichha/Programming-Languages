marks = {"math": 85, "science": 92, "english": 90, "hindi": 78}

ans = dict(sorted(marks.items(), key=lambda x: x[0]))
print(ans)
