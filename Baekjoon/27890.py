x0, n = list(map(int, input().split()))
x = x0
for i in range(n):
    if x % 2 == 0:
        x = (x // 2) ^ 6
    else:
        x = (x * 2) ^ 6
print(x)