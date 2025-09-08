from collections import deque

n, k = list(map(int, input().split()))
queue = deque()

queue.append(n)

dist = [-1] * (100001 + 1)
dist[n] = 0

while queue:
    x = queue.popleft()

    if x * 2 <= 100001 and dist[x * 2] == -1:
        dist[x * 2] = dist[x]
        queue.appendleft(x * 2)

    for nx in (x - 1, x + 1):
        if 0 <= nx <= 100001:
            if dist[nx] == -1 or dist[nx] > dist[x] + 1:
                dist[nx] = dist[x] + 1
                queue.append(nx)

print(dist[k])
