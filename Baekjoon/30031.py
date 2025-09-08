n = int(input())
s = 0
for i in range(n):
    w, h = list(map(int, input().split()))
    if w == 136:
        s += 1000
    elif w == 142:
        s += 5000
    elif w == 148:
        s += 10000
    else:
        s += 50000
print(s)
