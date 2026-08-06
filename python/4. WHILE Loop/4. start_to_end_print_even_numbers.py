# start to end print even numbers

start = int(input("Enter start number = "))
end_num = int(input("Enter end number = "))

i = start

while start <= end_num:
    if start % 2 == 0:
        print(start, end=" ")
    start += 1
