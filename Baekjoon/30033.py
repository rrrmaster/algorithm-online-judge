n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = 0
for i in range(n):
    if b[i] >= a[i]:
        c += 1
print(c)
