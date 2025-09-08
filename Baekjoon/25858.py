n, d = list(map(int, input().split()))
p = [int(input()) for _ in range(n)]
a = d // sum(p)
for i in range(n):
    print(a * p[i])
