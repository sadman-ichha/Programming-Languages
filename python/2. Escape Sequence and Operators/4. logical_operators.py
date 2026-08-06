# AND, OR, NOT

chemistry = 11
physics = 31
maths = 99

# # Print True if pass in both subjects
print(chemistry > 33 and physics > 33 and maths > 33)

# Print True if pass in any subjects
# print(chemistry > 33 or physics > 33)

# print(not chemistry > 33 and not physics > 33)
print(not (chemistry > 33 and physics > 33))

print(not (chemistry > 33 or physics > 33 or maths > 33))  # All Fail Check
print((not (chemistry > 33)) or (physics > 33)
      or (maths > 33))  # Any Fail Check

 
