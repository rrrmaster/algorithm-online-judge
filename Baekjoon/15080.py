sh, sm, ss = list(map(int, input().split(":")))
eh, em, es = list(map(int, input().split(":")))

r = (eh * 3600 + em * 60 + es) - (sh * 3600 + sm * 60 + ss)
if r < 0:
    print(86400+r)
else:
    print(r)
