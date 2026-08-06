"""
90 above -> A
81 - 90 -> B
71 - 80 -> C
61 - 70 -> D
60 and below -> Fail
"""

marks = int(input("Enter marks = "))
if marks >= 91 and marks <= 100:
    print("A")
elif marks >= 81 and marks <= 90:
    print("B")
elif marks >= 71 and marks <= 80:
    print("C")
elif marks >= 61 and marks <= 70:
    print("D")
elif marks >= 0 and marks <= 60:
    print("Fail")
else:
    print("Invalid marks")
