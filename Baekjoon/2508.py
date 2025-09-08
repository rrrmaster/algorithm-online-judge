t = int(input())
for _ in range(t):
    blank = input()
    r, c = map(int, input().split())
    box = []
    for _ in range(r):
        box += input().split()

    f = 0
    for y in range(r):
        for x in range(c):
            if (box[y][x] == 'o' and
                    ((y - 1 >= 0 and y + 1 < r and box[y - 1][x] == 'v' and box[y + 1][x] == '^') or
                     (x - 1 >= 0 and x + 1 < c and box[y][x - 1] == '>' and box[y][x + 1] == '<'))):
                f += 1
    print(f)
