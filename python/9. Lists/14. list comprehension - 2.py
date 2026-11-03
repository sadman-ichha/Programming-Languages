# 1. Keep the even numbers from 1 through 20.
even_numbers = [number for number in range(1, 21) if number % 2 == 0]
print("Even numbers:", even_numbers)

# 2. Keep numbers divisible by either 3 or 7.
multiples_of_three_or_seven = [
    number
    for number in range(1, 101)
    if number % 3 == 0 or number % 7 == 0
]
print("Multiples of 3 or 7:", multiples_of_three_or_seven)


# 3. Use a function to decide which numbers are prime.
def is_prime(number):
    """Return True when number has no divisors other than 1 and itself."""
    if number < 2:
        return False

    for possible_divisor in range(2, number):
        if number % possible_divisor == 0:
            return False

    return True


prime_numbers = [number for number in range(1, 101) if is_prime(number)]
print("Prime numbers:", prime_numbers)

# Output:
# Even numbers: [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
# Multiples of 3 or 7: [3, 6, 7, 9, 12, 14, 15, 18, 21, 24, 27, 28, 30, 33, 35, 36, 39, 42, 45, 48, 49, 51, 54, 56, 57, 60, 63, 66, 69, 70, 72, 75, 77, 78, 81, 84, 87, 90, 91, 93, 96, 98, 99]
# Prime numbers: [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
#
# Key ideas:
# - A list comprehension builds a new list from an iterable.
# - Add `if` to include only items that meet a condition.
# - A helper function can keep a more involved condition readable.
