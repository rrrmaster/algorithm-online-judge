n = int(input())
for i in range(n):
    a = map(int, input().split())
    print("Case #{}: {}".format(i + 1, max(a)))
