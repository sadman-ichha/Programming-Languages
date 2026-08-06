# start and end, print start to end

start = int(input("Enter start number = "))
end = int(input("Enter end number = "))

total = 0

for i in range(start, end + 1):
    total += i 

print(total)
