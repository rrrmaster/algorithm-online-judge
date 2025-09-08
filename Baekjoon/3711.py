t = int(input())
for _ in range(t):
    g = int(input())
    s = []
    for j in range(g):
        s.append(int(input()))
    for i in range(g, 10000000000):
        dict = []
        for j in s:
            dict.append(j % i)
        if len(set(dict)) == g:
            print(i)
            break
