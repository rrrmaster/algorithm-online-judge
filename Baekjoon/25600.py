n = int(input())
m = 0
for i in range(n):
    a, d, g = list(map(int, input().split()))
    m = max(m, a * (d + g) * (2 if a == d + g else 1))
print(m)