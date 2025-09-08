n = int(input())
list = [0 for i in range(n)]


def a(m, i):
    if (i == n):
        if (sum(list) != n):
            return
        for j in list:
            if j == 0:
                print()
                break
            print(j, end=' ')
        return
    for j in range(m, -1, -1):
        list[i] = j
        if i == 0 or list[i - 1] >= list[i]:
            a(m - j, i + 1)

    return


a(n, 0)
