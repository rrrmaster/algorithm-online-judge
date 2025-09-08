g, p, t = list(map(int, input().split()))
o = g * p
n = g + p * t
print(0 if n == o else (1 if o < n else 2))
