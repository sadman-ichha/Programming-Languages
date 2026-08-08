def addition(a,b,c):
    print(a + b + c)


ans = addition(10, 20, 30)
print(ans)

# factor logic
# True or False return, if user can vote or not


def can_vote(age):
    if age >= 18:
        return True
    else:
        return False


ans = can_vote(20)
print(ans)

print(can_vote(10))
