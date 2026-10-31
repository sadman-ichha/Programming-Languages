marks = [88, 76, 92, 84, 67, 95, 79, 90]

# To get the length
n = len(marks)
print(f"Length of list = {n}")

# Max
maxi = max(marks)
print(f"Maximum marks = {maxi}")
mini = min(marks)
print(f"Minimum marks = {mini}")
total = sum(marks)
print(f"Total marks = {total}")

# To sort using sorted(), it will always return you a new list
new_list = sorted(marks, reverse=True)
print(f"New List = {new_list}")