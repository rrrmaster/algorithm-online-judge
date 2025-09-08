import queue


n, m = list(map(int,input().split()))

arr = [[0]*(m+2) for _ in range(n+2)]
for y in range(n):
    a = input()
    for x in range(m):
        arr[y+1][x+1] = int(a[x])

visible = [[False]*(m+2) for _ in range(n+2)]

queue = queue.Queue()
queue.put((0,0))
visible[0][0]=True


dirs = [(1,0),(-1,0),(0,1),(0,-1)]
c = 0
while not queue.empty():
    x,y = queue.get()
    for index, dir in enumerate(dirs):
        mx,my =dir
        px = mx + x
        py = my + y

        if px < 0 or px >= m + 2 or py < 0 or py >= n + 2:
            continue
        if arr[py][px] == 0:
            if not visible[py][px]:
                visible[py][px] = True
                queue.put((px,py))  
        else:
            c +=1
print(c)