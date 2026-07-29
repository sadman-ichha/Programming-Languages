print(bool(0))

x = input("x: ")
try:
    y = int(x) + 1
    print(f"{x} + 1 = {y}")
except ValueError:
    print("Invalid input")






age = 13
myAge = "is fifteen" if age == 15 else "is not fifteen"
print(myAge)
