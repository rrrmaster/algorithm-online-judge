t1, m1, t2, m2 = list(map(int, input().split()))
t = 0
if t2 < t1 or (t1 == t2 and m2 < m1):
    t += 1440
t += (t2 - t1) * 60 + (m2 - m1)
print(t, t // 30, sep=' ')
