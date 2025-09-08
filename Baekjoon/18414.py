import math

x, l, r = map(int, input().split())
if l <= x <= r:
    print(x)
elif math.fabs(l - x) <= math.fabs(r - x):
    print(l)
else:
    print(r)
