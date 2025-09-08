n = int(input())
k = input()

s = 0
for i in range(n):
    s += 1 if int(k[i]) % 2 == 0 else -1

print(-1 if s == 0 else (0 if s > 0 else 1))
