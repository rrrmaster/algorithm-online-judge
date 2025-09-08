n = int(input())
a = []
for i in range(n):
    x, y = map(int, input().split())
    a.append({'x': x, 'y': y})

b = sorted(a, key=lambda x: x['y'])[0]

print(b['x'], b['y'])
