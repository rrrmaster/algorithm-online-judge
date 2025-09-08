t = int(input())
for i in range(t):
    a = 0

    n = int(input())
    for _ in range(n):
        s = input().split()
        c = int(s[1])
        x = float(s[2])
        a += c * x
    print("${:.2f}".format(a))

