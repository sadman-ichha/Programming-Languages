# Age >= 18
# Certificate -> True

age = 45
certificate = True

if age >= 18:
    if certificate == True:
        print("You will be hired")
    else:
        print("Cannot hire due to no certificate")
else:
    print("Cannot hire, age is less than 18")
