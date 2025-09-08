a = [int(input()) for _ in range(5)]
d =[]
for i in a:
    if i in d:
        d.remove(i)
    else:
        d.append(i)
print(d[0])