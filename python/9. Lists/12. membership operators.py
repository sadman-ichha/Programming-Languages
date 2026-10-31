nums = [4, 7, 3, 8, 1, 1, 2, 10, 9, 6, 9, 1, 1, 1]

target = int(input("Enter target = "))

if target in nums:
    nums.remove(target)
    print(f"nums = {nums}")
else:
    print("Cannot remove target, target does not exists")
