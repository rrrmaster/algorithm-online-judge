c = [int(input()) for _ in range(10)]

d = 0
for i in c:
    d = (d + i) % 4
print(['N', 'E', 'S', 'W'][d])
