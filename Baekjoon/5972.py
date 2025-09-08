import heapq


def dijkstra(graph, start, end):
    distances = [9999999999999] * (len(graph) + 1)

    queue = []
    heapq.heappush(queue, (0, start))
    distances[start] = 0
    while queue:
        distance, current = heapq.heappop(queue)
        if distances[current] < distance:
            continue

        for v, w in graph[current]:
            cost = distances[current] + w
            if cost < distances[v]:
                distances[v] = cost
                heapq.heappush(queue, (cost, v))
    return distances[end]



n, m = map(int, input().split())
adj = [[] for i in range(n + 1)]

for i in range(m):
    r1, r2, cost = map(int, input().split())
    adj[r1].append((r2, cost))
    adj[r2].append((r1, cost))
print(dijkstra(adj, 1, n))
