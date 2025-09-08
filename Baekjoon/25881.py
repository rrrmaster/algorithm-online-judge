import math

a, b = map(int, input().split())
n = int(input())
for _ in range(n):
    c = int(input())
    m = a * c if c < 1000 else 1000 * a + (c - 1000) * b
    print(*[c, m], sep=' ')
