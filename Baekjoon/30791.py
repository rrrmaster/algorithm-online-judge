n = list(map(int, input().split()))
c = 0
for i in range(len(n) - 1):
    if n[0] <= n[i + 1] + 1000:
        c += 1
print(c)
