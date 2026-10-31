# 4x5

matrix = [
    [5, 7, 2, 3, 1],
    [6, 3, 8, 1, 3],
    [6, 4, 9, 0, 2],
    [3, 6, 3, 8, 1],
]

rows = len(matrix)
columns = len(matrix[0])
for i in range(0, rows):
    for j in range(0, columns):
        print(matrix[i][j], end=" ")
    print()
