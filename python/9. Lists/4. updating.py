# Updating values in a list
# We can change any item in a list by using its index.

student_record = ["Sadman", "Maliha", 56, 91.8120, 100, "Dhaka"]

print("Before update:", student_record)

# Update a string value
student_record[1] = -000

# Update a value using negative index
student_record[-1] = "Pabna"

# Update number values
student_record[2] = 60
student_record[3] = 95.75

print("After update:", student_record)

# Notes:
# - index 1 changes the second item
# - index -1 changes the last item
# - list items can be strings, integers, floats, and more
