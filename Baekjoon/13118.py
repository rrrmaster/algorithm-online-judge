p = map(int, input().split())
x, y, r = map(int, input().split())

id = 0
for idx, i in enumerate(p):
    if x == i:
        id = idx + 1
        break
print(id)
