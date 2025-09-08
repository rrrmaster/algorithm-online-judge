import sys
sys.setrecursionlimit(2001)

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int,input().split()))

    for i in range(n):
        a[i] -=1
    visible = [False] * n
    
    def cycle(i):
        if visible[i]:
            return
        
        visible[i]= True
        cycle(a[i])
    c = 0
    for i in range(n):
        if not visible[i]:
            cycle(i)
            c+= 1
    print(c)