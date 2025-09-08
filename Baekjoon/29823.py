n = int(input())
dl = list(input())

x = 0
y = 0

for d in dl:
    if d == 'E':
        x += 1
    elif d == 'W':
        x -= 1
    elif d == 'N':
        y += 1
    elif d == 'S':
        y -= 1
print(abs(x) + abs(y))
