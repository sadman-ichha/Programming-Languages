marks = [100, 90, 10.0, "Sadman"]

total = 0

for x in marks:
    if isinstance(x, int):
        total += x


print(total)
