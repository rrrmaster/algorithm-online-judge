import math

n, k, a, b = map(int, input().split())
print("{} {}".format((k + n - 2) * b, (n - 1) * a))
