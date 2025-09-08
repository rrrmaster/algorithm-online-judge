n, m = list(map(int, input().split()))
r = 0
for i in range(n):
    t = input()
    if t.count("O") > t.count("X"):
        r += 1
print(r)
