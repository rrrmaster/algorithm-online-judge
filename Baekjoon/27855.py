h1, b1 = map(int, input().split())
h2, b2 = map(int, input().split())
s1 = h1 * 3 + b1
s2 = h2 * 3 + b2

if s1 == s2:
    print("NO SCORE")
elif s1 > s2:
    print("1", s1 - s2)
else:
    print("2", s2 - s1)
