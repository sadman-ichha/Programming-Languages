marks = {
    "science": 99,
    "maths": 100,
    "comp": 88,
    "hindi": 43,
    "history": 71,
}
total = 0
for sub in marks.keys():
    print(f"Subject = {sub} and marks = {marks[sub]}")
    total += marks[sub]

print(total)
