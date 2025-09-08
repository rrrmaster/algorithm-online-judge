n, h = list(map(int, input().split()))
a = list(map(int, input().split()))
print(len(list(filter(lambda i: i <= h, a))))
