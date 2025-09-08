a, b = list(map(int, input().split()))
c = int(input())

if c == 0:
    print(a + b)
else:
    print((a + b) - 2 * c * min(1, (a + b) // (2 * c)))
