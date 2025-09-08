n = int(input())
for _ in range(n):
    s = input().split()
    i = int(s[1])
    j = int(s[2])
    a = s[0]
    for index in range(len(a)):
        if not i <= index < j:
            print(a[index], end='')
    print()
