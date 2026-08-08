count = 0


def increase():
    global count
    count += 1
    print(f"Inside function count={count}")


increase()
increase()
increase()
print(f"Outside function count={count}")
