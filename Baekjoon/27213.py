m = int(input())
n = int(input())
if n == 1 or m == 1:
    print(max(n,m))
else:
    print(2 * (n + m) - 4)
