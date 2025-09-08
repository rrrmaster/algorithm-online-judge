a, b = map(int, input().split())
if a == b:
    print(a * 2)
else:
    print(min(a, b) * 2 + 1)
