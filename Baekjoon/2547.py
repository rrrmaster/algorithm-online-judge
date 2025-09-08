t = int(input())

for _ in range(t):
    input()
    n = int(input())
    a = [int(input()) for i in range(n)]
    print("YES" if sum(a) % n == 0 else "NO")
