a = [int(input()) for _ in range(4)]

if a[0] < a[1] < a[2] < a[3]:
    print("Fish Rising")
elif a[0] > a[1] > a[2] > a[3]:
    print("Fish Diving")
elif a[0] == a[1] == a[2] == a[3]:
    print("Fish At Constant Depth")
else:
    print("No Fish")
