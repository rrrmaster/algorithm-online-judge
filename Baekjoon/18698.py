t = int(input())
for _ in range(t):
    n = input()
    a = 0
    for i in n:
        if i != "U":
            break
        a += 1
    print(a)

