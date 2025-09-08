import math

a, b, c, d = map(int, input().split())
print(a * (10 ** int(math.log10(b) + 1)) + b + c * (10 ** int(math.log10(d) + 1)) + d)
