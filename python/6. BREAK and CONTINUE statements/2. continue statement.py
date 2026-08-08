i = 0
while i <= 10:
    i += 1
    if i % 2 == 0:
        continue
    print(i, end=" ")

print()

for i in range(1, 21):
    if i % 2 == 0:
        continue
    print(i, end=" ")
