n = int(input())
for _ in range(n):
    c, p = list(map(int, input().split()))
    print(c, p, sep=' ')
    print(c * p - (c - 1) * 2)
