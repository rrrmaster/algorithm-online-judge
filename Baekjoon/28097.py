n = int(input())
t = list(map(int, input().split()))

c = sum(t) + 8 * (len(t) - 1)
print(c // 24, c % 24, sep=" ")
