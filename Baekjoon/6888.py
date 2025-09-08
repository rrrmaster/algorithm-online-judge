x = int(input())
y = int(input())
for i in range(x, y + 1):
    a = i - x
    if a % 2 == 0 and a % 3 == 0 and a % 4 == 0 and a % 5 == 0:
        print("All positions change in year {0}".format(i))
