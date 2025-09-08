input()
l = list(map(int, input().split()))
for i in l:
    if i >= 300:
        print(1, end=' ')
    elif i >= 275:
        print(2, end=' ')
    elif i >= 250:
        print(3, end=' ')
    else:
        print(4, end=' ')
