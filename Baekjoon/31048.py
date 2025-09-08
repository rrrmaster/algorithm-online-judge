import math

t = int(input())
for _ in range(t):
    n = int(input())
    print(math.factorial(n) % 10)
