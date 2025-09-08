n = int(input())
p = [input() for _ in range(n)]
m = int(input())
for i in range(m):
    l, r = map(int, input().split())
    print(*p[l - 1:r], sep='\n')
