l = []
for i in range(7):
    s = input().split()
    l.append({'name': s[0], 'count': int(s[1])})
print(sorted(l, key=lambda item: item['count'],reverse=True)[0]['name'])