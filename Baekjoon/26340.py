n = int(input())
for i in range(n):
    x0, y0, c = map(int, input().split())
    x = x0
    y = y0
    for _ in range(c):
        if x > y:
            x //= 2
        else:
            y //= 2

    print("Data set: {0} {1} {2}".format(x0, y0, c))
    print("{0} {1}".format(max(x, y), min(x, y)))
    print()
