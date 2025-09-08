input()
a = sum(map(int, input().split()))
if a > 0:
    print("Right")
elif a < 0:
    print("Left")
else:
    print("Stay")
