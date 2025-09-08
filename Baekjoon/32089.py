while True:
    n = int(input())
    if n == 0:
        break
    a = list(map(int, input().split()))
    m = 0
    for i in range(n - 2):
        m = max(m, a[i] + a[i + 1] + a[i + 2])
    print(m)