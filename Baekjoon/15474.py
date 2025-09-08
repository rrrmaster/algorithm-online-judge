import math

n, a, b, c, d = list(map(int, input().split()))
print(min(math.ceil(n / a) * b, math.ceil(n / c) * d))
