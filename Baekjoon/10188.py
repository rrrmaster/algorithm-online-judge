t = int(input())
for _ in range(t):
    c, r = list(map(int, input().split()))
    for i in range(r):
        print("X" * c)
    print()
