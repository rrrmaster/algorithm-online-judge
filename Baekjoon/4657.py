dirs = [[1,1],[0,1],[-1,1],
        [1,0],        [-1,0],
        [1,-1],[0,-1],[-1,-1],
        ]

outline_dirs = [[0,1],[1,0],[-1,0],[0,-1]]
while True:
    r, c,  y, x = list(map(int,input().split()))
    if r==0 and c == 0 and y == 0 and x==0:
        break
    m = [input() for _ in range(r)]

    bit = [[False]*c for _ in range(r)]

    def dfs(_x,_y):
        bit[_y][_x] = True

        for dir in dirs:
            dir_x, dir_y = dir
            px = _x + dir_x
            py = _y + dir_y

            if px < 0 or px >= c or  py < 0 or py >= r :
                continue
            if m[py][px] == 'X' and bit[py][px] == False:
                dfs(px,py)
    dfs(x-1,y-1)

    result = 0
    for i in range(r):
        for j in range(c):
            if bit[i][j] == False:
                continue

            for dir in outline_dirs:
                px = j + dir[0]
                py = i + dir[1]
                if px < 0 or px >= c or  py < 0 or py >= r :
                    result+=1
                    continue
                if bit[py][px]==False:
                    result+=1
    print(result)
                