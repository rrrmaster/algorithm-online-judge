t = int(input())
for i in range(t):
    n = int(input())
    print("Good" if (n + 1) % (n%100) == 0 else "Bye")
