t = 1
while True:
    a = list(map(int, input().split()))
    if a[0] == 0:
        break
    arr = a[1:]
    print("Case {}:".format(t), end=' ')
    t += 1
    if a[0] % 2 == 1:
        print("{:.1f}".format(arr[(a[0]) // 2]))
    else:
        print("{:.1f}".format((arr[(a[0]) // 2] + arr[(a[0] - 1) // 2]) / 2))
