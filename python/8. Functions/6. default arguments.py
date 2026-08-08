def calculate_marks(maths, eng, ict=0, algo=0):
    print(f"maths = {maths}")
    print(f"eng = {eng}")
    print(f"ict = {ict}")
    print(f"algo = {algo}")
    total_marks = maths + eng +  ict + algo
    print(f"Total marks scored = {total_marks}")


calculate_marks(43, 66, 54)
