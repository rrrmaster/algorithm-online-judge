import math

n, m, k = map(int, input().split())
print(int(math.ceil(-n / (m - k))))
