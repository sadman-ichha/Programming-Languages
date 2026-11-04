# Make a function which return min and max of a list


def min_max(lst):
    # Logic
    mini = min(lst)
    maxi = max(lst)
    return maxi, mini


ans1, ans2 = min_max([5, 67, 3, 2, 1, 65, 7, 43])
print(f"maximum number is {ans1}")
print(f"minimum number is {ans2}")
