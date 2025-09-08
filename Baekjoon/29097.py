n, m, k, a, b, c = map(int, input().split())
f = [{'name': 'Joffrey', 'count': n * a}, {'name': 'Robb', 'count': m * b}, {'name': 'Stannis', 'count': k * c}]
q = []
for i in f:
    if max(map(lambda x: x['count'], f)) == i['count']:
        q.append(i['name'])
q.sort()
print(*q, sep=' ')
