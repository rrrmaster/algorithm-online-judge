n = int(input())
a = [sum(list(map(int, input().split()))) for _ in range(n)]
print(min(a))
