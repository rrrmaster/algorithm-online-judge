a, c, e = map(int, input().split())
s = list(map(int, input().split()))

if s[0] >= a and s[1] >= c and s[2] >= e:
    print('A')
elif s[0] >= a / 2 and s[1] >= c and s[2] >= e:
    print('B')
elif s[1] >= c and s[2] >= e:
    print('C')
elif s[1] >= c / 2 and s[2] >= e / 2:
    print('D')
else:
    print('E')
