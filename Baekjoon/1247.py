for _ in range(3):
    n = int(input())
    a = sum([int(input()) for _ in range(n)])
    if a == 0:
        print("0")
    elif a > 0:
        print("+")
    else:
        print("-")
