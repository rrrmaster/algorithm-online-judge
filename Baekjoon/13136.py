import math

r, c, n = list(map(int, input().split()))

print(int(math.ceil(r / n) * math.ceil(c / n)))
