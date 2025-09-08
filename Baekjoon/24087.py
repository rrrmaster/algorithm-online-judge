import math

s = int(input())
a = int(input())
b = int(input())
print(250 + 100 * math.ceil(max(s - a, 0) / b))
