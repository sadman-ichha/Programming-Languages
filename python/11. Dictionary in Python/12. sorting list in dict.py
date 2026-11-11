marks = {
    "akshy": [43, 12, 98, 10, 22],
    "priya": [76, 55, 34, 89, 61],
    "rahul": [20, 45, 67, 30],
    "sneha": [91, 73],
    "karan": [38, 82, 47, 95, 29],
}

ans = dict(sorted(marks.items(), key=lambda x: sum(x[1]), reverse=True))
print(ans)
