n, x = map(int, input().split())
a = -1
for i in range(n):
    s, t = map(int, input().split())
    if s + t <= x:
        a = max(a, s)
print(a)
