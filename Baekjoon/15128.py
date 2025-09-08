p1, q1, p2, q2 = list(map(int, input().split()))
r = (p1 * p2) / (q1 * q2) / 2

print(1 if r == int(r) else 0)
