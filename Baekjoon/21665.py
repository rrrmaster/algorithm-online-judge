n, m = list(map(int, input().split()))
a = [input() for _ in range(n)]
input()
b = [input() for _ in range(n)]

s = 0
for y in range(n):
    for x in range(m):
        if a[y][x] == b[y][x]:
            s += 1
print(s)
