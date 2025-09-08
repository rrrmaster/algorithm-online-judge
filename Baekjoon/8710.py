import math

k, w, m = list(map(int, input().split()))
print(math.ceil((w - k) / m))
