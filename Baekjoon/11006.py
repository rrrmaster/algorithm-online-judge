t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    print(m * 2 - n, n - m)
