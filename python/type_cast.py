print(bool(0))

x = input("x: ")
try:
    y = int(x) + 1
    print(f"{x} + 1 = {y}")
except ValueError:
    print("Invalid input")
