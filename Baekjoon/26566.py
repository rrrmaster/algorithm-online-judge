import math

t = int(input())
for _ in range(t):
    a1, p1 = list(map(int, input().split()))
    r1, p2 = list(map(int, input().split()))
    if a1 / p1 > (r1 * r1 * math.pi) / p2:
        print("Slice of pizza")
    else:
        print("Whole pizza")
