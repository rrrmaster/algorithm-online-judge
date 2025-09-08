input()
a = 0
for i in range(3):
    arr = map(int, input().split())
    if 7 in arr:
        a += 1
if a == 3:
    print("777")
else:
    print("0")
