t = sorted(list(map(int, input().split())))
if t[0] == t[1] or t[1] == t[2] or t[0] == t[2] or t[0] + t[1] == t[2]:
    print("S")
else:
    print("N")