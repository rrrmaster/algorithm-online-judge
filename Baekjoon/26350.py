n = int(input())
for i in range(n):
    c = list(map(int, input().split()))[1:]
    t = True
    for j in range(len(c) - 1):
        if c[j] * 2 > c[j + 1]:
            t = False
    print("Denominations: {0}".format(" ".join(map(lambda x: str(x), c))))
    print("{0} coin denominations!".format("Good" if t else "Bad"))
    print()