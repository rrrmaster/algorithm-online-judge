t = int(input())
for i in range(t):
    n, a, d = list(map(int, input().split()))
    print((n * (2 * a + d * (n - 1))) // 2)
