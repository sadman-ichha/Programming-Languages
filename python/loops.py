for count in range(3, 10, 2):
    print("Sadman", count + 1, (count + 1) * "*")

print()
numbers = [10, 15, 2, 55, 87, 99]
for index, num in enumerate(numbers):
    print(index, num)


## Nested Loop
print()
for i in range(5):
    for j in range(3):
        print(f"(i: {i}, j: {j})")


## While loops
print()
number = 100
while number > 0:
    print(number)
    number //= 2

