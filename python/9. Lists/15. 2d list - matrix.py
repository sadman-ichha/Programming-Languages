# 3x3
matrix = [
    [4, 8, 1],
    [9, 7, 2],
    [5, 6, 0],
]

for i in range(0, 3):
    for j in range(0, 3):
        print(matrix[i][j], end= " ")
    print()
    
# Python: a 2D list stores rows of values and can represent a matrix.
matrix = [
    [2, 4, 6],
    [1, 3, 5],
    [7, 8, 9],
]

# Visit each row, then print each value in that row.
for row in matrix:
    for value in row:
        print(value, end=" ")
    print()

# Output:
# 2 4 6
# 1 3 5
# 7 8 9
#
# Key ideas:
# - Each inner list is one row of the matrix.
# - Nested loops visit every value, row by row.
