t = int(input())
for _ in range(t):
    n = int(input())

    s = 0
    for i in range(n):
        a, b = input().split()

        if a == b:
            continue
        elif (a == 'R' and b == 'S') or (a == 'S' and b == 'P') or (a == 'P' and b == 'R'):
            s += 1
        else:
            s -= 1

    if s > 0:
        print("Player 1")
    elif s < 0:
        print("Player 2")
    else:
        print("TIE")
