n, k = list(map(int, input().split()))
c = [int(input()) for _ in range(n)]

dp = [99999999] * (k+1)

for j in c:
    if j <= k:
        dp[j] = 1

for j in c:
    for i in range(k+1):
        if i < j:
            continue
        dp[i] = min(dp[i], dp[i - j] + 1)

if dp[k]==99999999:
    print(-1)
else:
    print(dp[k])
