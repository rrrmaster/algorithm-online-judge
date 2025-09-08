n, A = map(int, input().split())
a = list(map(int, input().split()))

f = 0
for i in a:
    f += i // A
print(f)
