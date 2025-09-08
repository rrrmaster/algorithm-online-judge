s = input().split()

n = int(s[0])
lv = s[1]
if lv == "miss":
    print(n * 0)
elif lv == "bad":
    print(n * 200)
elif lv == "cool":
    print(n * 400)
elif lv == "great":
    print(n * 600)
elif lv == "perfect":
    print(n * 1000)
