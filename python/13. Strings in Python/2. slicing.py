# Python: slicing strings

text = "Coding"

# [start:end] returns characters from start up to, but not including, end.
print("Characters 0 to 2:", text[0:3])
print("Characters from 3 onward:", text[3:])
print("Characters before 3:", text[:3])

# [start:end:step] skips characters using step.
print("Every second character:", text[::2])

# A negative step reverses the string.
print("Reversed:", text[::-1])
print("Reversed, every second character:", text[::-2])

# Example output:
# Characters 0 to 2: Cod
# Characters from 3 onward: ing
# Characters before 3: Cod
# Every second character: Cdn
# Reversed: gnidoC
# Reversed, every second character: gio

# Key ideas:
# - Slicing uses [start:end:step].
# - The end index is not included.
# - A negative step reverses the text.
