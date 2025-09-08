while True:
    n = int(input())
    if n == 0:
        break
    a = [input() for _ in range(n)]
    a.reverse()
    print(*a, sep='\n')
    print(0)