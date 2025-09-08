n = int(input())
for i in range(n):
    a, b, c = list(map(int, input().split()))
    z = int(a >= 10) + int(b >= 10) + int(c >= 10)
    print(a, b, c, sep=' ')
    if z == 0:
        print("zilch")
    elif z == 1:
        print("double")
    elif z == 2:
        print("double-double")
    elif z == 3:
        print("triple-double")
    print()
