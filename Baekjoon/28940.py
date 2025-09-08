import math

w, h = map(int, input().split())
n, a, b = map(int, input().split())
if a > w or b > h:
    print(-1)
else:
    print(math.ceil(n / ((w // a) * (h // b))))
