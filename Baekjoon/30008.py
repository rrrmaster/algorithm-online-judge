n, k = list(map(int, input().split()))
g = list(map(int, input().split()))
for i in g:
    r = (i * 100) // n
    if r <= 4:
        print(1, end=' ')
    elif r <= 11:
        print(2, end=' ')
    elif r <= 23:
        print(3, end=' ')
    elif r <= 40:
        print(4, end=' ')
    elif r <= 60:
        print(5, end=' ')
    elif r <= 77:
        print(6, end=' ')
    elif r <= 89:
        print(7, end=' ')
    elif r <= 96:
        print(8, end=' ')
    else:
        print(9, end=' ')
