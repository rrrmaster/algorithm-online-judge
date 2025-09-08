y, m, d = map(int, input().split("-"))
if (m == 9 and d <= 16) or m < 9:
    print("GOOD")
else:
    print("TOO LATE")
