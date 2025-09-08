l, r = list(map(int, input().split()))
if l == 0 and r == 0:
    print("Not a moose")
elif l != r:
    print("Odd {0}".format(max(r, l) * 2))
else:
    print("Even {0}".format(l * 2))
