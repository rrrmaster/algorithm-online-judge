n = int(input())
a = list(map(int, input().split()))
for i in sorted(set(a)):
    print(i)
