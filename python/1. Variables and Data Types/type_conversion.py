# Explicit Conversion (Typecasting)

num1 = int("100")
num2 = int("200")

print(num1 + num2)

print(num1,type(num1))
print(num2,type(num2))

a=500.1
print(int(a))

b = -499.9
print(int(b)) # -499 || int() truncates the decimal part (does NOT round) like (500)



# Implicit Conversion
x = 10     # int
y = 5.5    # float

result = x + y  # Python automatically converts x to float before adding

print(result)       # Output: 15.5
print(type(result)) # Output: <class 'float'>