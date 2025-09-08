n, k = map(int, input().split())
a = 0
b = 0
for _ in range(n):
    s = input()
    if s == "save":
        b = a
    elif s == "load":
        a = b
    elif s == "shoot":
        a -= 1
    elif s == "ammo":
        a += k
    print(a)
