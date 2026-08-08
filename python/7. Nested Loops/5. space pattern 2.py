"""
        5
      5 4
    5 4 3
  5 4 3 2
5 4 3 2 1
"""

for i in range(5, 0, -1):
    for j in range(1, i - 1 + 1):
        print(" ", end=" ")
    for k in range(5, i - 1, -1):
        print(k, end=" ")
    print()
