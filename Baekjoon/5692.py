import math
import sys

while True:
    n = sys.stdin.readline().rstrip()
    if n == '0':
        break
    s = 0
    index = 0
    l = len(n)
    for i in n:
        s += math.factorial(l - index) * int(i)
        index += 1
    print(s)
