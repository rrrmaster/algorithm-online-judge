t = int(input())
for i in range(t):
    n, s, d = list(map(int, input().split()))
    e = 0
    for _ in range(n):
        a, b = list(map(int, input().split()))
        if s * d >= a: e += b
    print("Data Set {0}:".format(i + 1))
    print(e)
    print()

