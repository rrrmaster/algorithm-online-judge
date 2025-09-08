n = int(input())
a = [{'index':i+1,'value':list(map(int,input().split()))} for i in range(n)]

a.sort(key=lambda k: ((k['value'][0]**2+k['value'][1]**2)/(k['value'][2]**2),k['index']))
for k in a:
    print(k['index'])