t = int(input())
sub = list(map(int, input().split())) + [0] * (5 - t)
res = ((abs(sub[0] - sub[2]) * (508 if sub[0] > sub[2] else 108)
        + (abs(sub[1] - sub[3]) * (212 if sub[1] > sub[3] else 305))) + ((sub[4] * 707) if sub[4] > 0 else 0)) * 4763
print(res)
