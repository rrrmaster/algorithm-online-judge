n = [input() for _ in range(4)]
if (n[0] == '8' or n[0] == '9') and n[1] == n[2] and (n[3] == '8' or n[3] == '9'):
    print("ignore")
else:
    print("answer")
