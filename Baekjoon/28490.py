t = int(input())
print(max([x[0] * x[1] for x in [list(map(int, input().split())) for _ in range(t)]]))
