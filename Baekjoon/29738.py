t = int(input())
for i in range(t):
    n = int(input())
    if n > 4500:
        print("Case #{0}: Round 1".format(i + 1))
    elif n > 1000:
        print("Case #{0}: Round 2".format(i + 1))
    elif n > 25:
        print("Case #{0}: Round 3".format(i + 1))
    else:
        print("Case #{0}: World Finals".format(i + 1))
