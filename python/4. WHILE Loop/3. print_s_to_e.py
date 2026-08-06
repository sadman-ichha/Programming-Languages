# start and end by user
# start to end print using while loop

start = int(input("Enter start number = "))  # 5
end_num = int(input("Enter end number = "))  # 11

i = start
print(f"Before while loop, start value is {start}")

while i <= end_num:
    print(i, end=" ")
    i += 1

print(f"\nAfter while loop, start value is {start}")
