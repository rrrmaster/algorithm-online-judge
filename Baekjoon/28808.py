n, m = map(int, input().split())
a = [input() for _ in range(n)]
c = 0
for i in a:
    if i.count("+") > 0:
        c += 1
print(c)
