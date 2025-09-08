n, h, v = list(map(int, input().split()))
print(4 * max(((n - h) * (n - v), (n - h) * v, h * (n - v), v * h)))
