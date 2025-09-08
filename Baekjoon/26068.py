n = int(input())

c = 0
for i in range(n):
    d = int(input().replace("D-", ""))
    if d <= 90:
        c += 1
print(c)
