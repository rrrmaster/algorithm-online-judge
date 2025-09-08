import sys

n = int(sys.stdin.readline())
data = [sys.stdin.readline().strip() for i in range(n)]

d = 0
p = 0
for i in data:
    if i == 'D':
        d += 1
    else:
        p += 1
    if abs(p - d) >= 2:
        break
print("{0}:{1}".format(d, p))
