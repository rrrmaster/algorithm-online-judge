n = list(map(int, input().split()))
print(max(set(n), key=n.count))
