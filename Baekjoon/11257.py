n = int(input())
for i in range(n):
    a, b, c, d = map(int, input().split())
    if b + c + d >= 55 and b >= 35 * 0.3 and c >= 25 * 0.3 and d >= 40 * 0.3:
        print("{0} {1} PASS".format(a, sum([b, c, d])))
    else:
        print("{0} {1} FAIL".format(a, sum([b, c, d])))
