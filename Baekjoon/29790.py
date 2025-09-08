n, u, l = map(int, input().split())
if n > 999:
    if u > 7999 or l > 259:
        print("Very Good")
    else:
        print("Good")
else:
    print("Bad")
