c4g, a3g, a4g = map(int, input().split())
c4 = c4g * 0.229 * 0.324
a3 = a3g * 0.297 * 0.42
a4 = a4g * 0.21 * 0.297
print("{0:.6f}".format(2 * c4 + 2 * a3 + a4))
