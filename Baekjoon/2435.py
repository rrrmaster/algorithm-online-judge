n, k = list(map(int, input().split()))
a = list(map(int, input().split()))
best = sum(a[:k])

for i in range(1,n-k+1):
    best = max(best,sum(a[i:k+i]))
print(best)
