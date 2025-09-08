input()
a = list(map(int, input().split()))
if len(list(filter(lambda x: x % 2 == 0, a))) > len(a) // 2:
    print("Happy")
else:
    print("Sad")
