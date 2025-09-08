t = int(input())
for i in range(t):
    a, b = map(float, input().split())
    print("The height of the triangle is {:0.2f} units".format(2 * a / b))
