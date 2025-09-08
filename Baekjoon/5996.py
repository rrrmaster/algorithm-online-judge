t, c, ts, te = map(int, input().split())

adj = [[] for i in range(t + 1)]
v = [False for _ in range(t + 1)]
distances = [99999999999 for _ in range(t + 1)]


def getsmallIndex(graph):
    minValue = 99999999999
    index = 0
    for i in range(len(graph)):
        if distances[i] < minValue and v[i] == False:
            minValue = distances[i]
            index = i
    return index


def dijkstra(graph, start, end):
    for i in graph[start]:
        distances[i['distance']] = min(i['cost'], distances[i['distance']])
    v[start] = True
    for i in range(len(graph) - 2):
        current = getsmallIndex(graph)
        v[current] = True
        for j in graph[current]:
            if v[j['distance']] == True:
                continue
            if (distances[current] + j['cost'] < distances[j['distance']]):
                distances[j['distance']] = distances[current] + j['cost']
    return distances[end]


for i in range(c):
    r1, r2, cost = map(int, input().split())
    adj[r1].append({'distance': r2, 'cost': cost})
    adj[r2].append({'distance': r1, 'cost': cost})
print(dijkstra(adj, ts, te))
