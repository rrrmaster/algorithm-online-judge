n = int(input())
arr = [0 for i in range(10001)]

for i in range(n):
    arr[i] = int(input())

best = [0 for i in range(10001)]
best[0] = arr[0]
best[1] = arr[0] + arr[1]
best[2] = max(arr[0] + arr[1], arr[1] + arr[2], arr[0] + arr[2])
for i in range(3, n):
    best[i] = max(best[i - 1],
                  best[i - 2] + arr[i],
                  best[i - 3] + arr[i - 1] + arr[i])
print(best[n - 1])
