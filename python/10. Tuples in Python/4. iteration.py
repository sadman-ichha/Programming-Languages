# Python: three ways to iterate over a tuple.
facts = ("Bangladesh", "Dhaka", "Bangla", "Taka")

# By index
for index in range(len(facts)):
    print(facts[index], end=" ")
print()

# By value
for fact in facts:
    print(fact, end=" ")
print()

# By index and value
for index, fact in enumerate(facts):
    print(index, fact)

# Output:
# Bangladesh Dhaka Bangla Taka
# Bangladesh Dhaka Bangla Taka
# 0 Bangladesh
# 1 Dhaka
# 2 Bangla
# 3 Taka
#
# Key ideas: iterate by value when possible; use indexes or enumerate()
# when you also need positions.
