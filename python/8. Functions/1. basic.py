
def welcome():
    print("Welcome to Python!")
    print("Learn step by step...")


welcome()
welcome()


def pattern():
    for i in range(1, 4):
        print("***")


pattern()


def check_even_or_odd():
    num = int(input("Enter a number: "))
    result = "Even" if num % 2 == 0 else "Odd"
    print(result)


check_even_or_odd()
