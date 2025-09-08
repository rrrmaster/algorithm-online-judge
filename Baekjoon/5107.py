import sys
sys.setrecursionlimit(2001)
t = 1
while True:
    n = int(input())
    if n == 0:
        break
    d ={}
    for _ in range(n):
        src, desc = input().split()
        d[src] = desc

    visible = []
    
    def cycle(i):
        if i in visible:
            return
        
        visible.append(i)
        cycle(d[i])
    c = 0
    for i in d.keys():
        if i not in visible:
            cycle(i)
            c+= 1
    print(f'{t} {c}')
    t += 1
