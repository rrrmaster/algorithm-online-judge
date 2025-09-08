import queue

n, k = list(map(int, input().split()))
q = queue.Queue()

q.put(n)

dist = [-1] * (100001 + 1)
src = [-1] * (100001 + 1)
dist[n] = 0
while not q.empty():
    x = q.get()
    for nx in (x - 1, x + 1, x * 2):
        if 0 <= nx <= 100001:
            if dist[nx] == -1:
                dist[nx] = dist[x] + 1
                src[nx] = x
                q.put(nx)

result = []
i = src[k]
result.append(str(k))
while i != -1:
    result.append(str(i))
    i = src[i]
result.reverse()
print(len(result) - 1)
print(' '.join(result))
