import sys

input = sys.stdin.readline

n = int(input())
m = [input().rstrip() for _ in range(n)]
k = int(input())

if k == 2:
    m = [i[::-1] for i in m]
if k == 3:
    m = m[::-1]
print(*m, sep='\n')
