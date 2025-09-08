n = int(input())
for _ in range(n):
    i, f = map(int, input().split())
    print("Yes" if (i <= 1 and f <= 2) or (i <= 2 and f <= 1) else "No")
