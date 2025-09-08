n = int(input())
p = int(input())
print(max(0, min(p, p - 500 if n >= 5 else p, p - p // 10 if n >= 10 else p, p - 2000 if n >= 15 else p,
                 p - p // 4 if n >= 20 else p)))
