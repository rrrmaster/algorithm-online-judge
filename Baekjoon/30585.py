h, w = map(int, input().split())
grid = [input() for _ in range(h)]
r = 0
b = 0
for i in grid:
    r += i.count('1')
    b += i.count('0')
print(min(r, b))
