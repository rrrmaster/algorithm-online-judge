ds, ys, = map(int, input().split())
dm, ym = map(int, input().split())
s = ys - ds
m = ym - dm

while s != m:
    if s < m:
        s += ys
    else:
        m += ym

print(s)