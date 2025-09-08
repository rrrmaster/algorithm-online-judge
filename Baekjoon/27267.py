a, b, c, d = map(int, input().split())
if a * b == c * d:
    print("E")
elif a * b > c * d:
    print("M")
else:
    print("P")
