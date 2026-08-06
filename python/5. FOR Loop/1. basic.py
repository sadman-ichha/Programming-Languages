# For 1 to 10

for i in range(1, 11):
    print(i, end=" ")
    i = 100  # it's not working


print("\n")
numbers = [10, 15, 2, 55, 87, 99]
for index, num in enumerate(numbers):
    print(f"{index}.{num}")
