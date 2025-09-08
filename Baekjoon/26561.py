t = int(input())
for i in range(t):
    p, t = list(map(int, input().split()))
    print(p + (t // 4) - (t // 7))
