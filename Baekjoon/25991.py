n = int(input())
a = list(map(float, input().split()))
print(sum(map(lambda x: x ** 3, a)) ** (1 / 3))
