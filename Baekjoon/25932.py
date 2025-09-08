t = int(input())
for _ in range(t):
    s = input()
    if '17' in s:
        if '18' in s:
            a = "both"
        else:
            a = "zack"
    elif '18' in s:
        a = "mack"
    else:
        a = "none"
    print(s)
    print(a)
    print()
