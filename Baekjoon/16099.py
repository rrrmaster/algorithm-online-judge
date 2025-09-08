a = int(input())
for _ in range(a):
    lt, wt, le, we = list(map(int, input().split()))
    t = lt * wt
    e = le * we
    if t == e:
        print("Tie")
    elif t > e:
        print("TelecomParisTech")
    else:
        print("Eurecom")
