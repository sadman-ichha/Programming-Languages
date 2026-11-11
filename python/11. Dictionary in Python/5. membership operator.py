student = {
    "name": "Rahul",
    "age": 35,
    "gender": "Male",
    "city": "Surat",
}

k = input("Enter key = ")

if k in student:
    print(student[k])
else:
    print("Key does not exists")
