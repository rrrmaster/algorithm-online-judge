n, x = map(int, input().split())
a = list(map(int, input().split()))
s = 9999999999
for i in range(n - 1):
    s = min(s, x * a[i] + x * a[i + 1])
print(s)
