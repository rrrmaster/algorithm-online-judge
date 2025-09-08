n, x = map(int, input().split())
a = list(map(int, input().split()))

m = sum(a[0:x])
_count = 1
_max = m
for index, value in enumerate(a[x:n + 1]):
    m += value - a[index - n]
    if m > _max:
        _count = 0
        _max = m

    if _max == m:
        _count += 1

if _max != 0:
    print(_max)
    print(_count)
else:
    print("SAD")
