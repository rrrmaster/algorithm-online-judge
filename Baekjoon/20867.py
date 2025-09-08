import math

m, s, g = map(float, input().split())
a, b = map(float, input().split())
l, r = map(float, input().split())

print("friskus" if math.ceil(m / g) + l / a < math.ceil(m / s) + r / b else "latmask")
