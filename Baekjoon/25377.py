n = int(input())
time = 1001

for _ in range(n):
    A, B = list(map(int, input().split()))

    if A <= B:
        time = min(B, time)

print(-1 if time == 1001 else time)
