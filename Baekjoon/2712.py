for _ in range(int(input())):
    a = input().split()
    s = a[1]
    n = float(a[0])
    if s == "kg":
        print("%.4f lb" % (n * 2.2046))
    elif s == "lb":
        print("%.4f kg" % (n * 0.4536))
    elif s == "l":
        print("%.4f g" % (n * 0.2642))
    elif s == "g":
        print("%.4f l" % (n * 3.7854))
