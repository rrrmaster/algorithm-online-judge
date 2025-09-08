t = int(input())
for _ in range(t):
    n = int(input())
    for i in range(n):
        a, b = list(map(int, input().split()))
        print(a + b, a * b, sep=" ")
       