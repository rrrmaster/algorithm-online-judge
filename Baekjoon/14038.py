s = []
for i in range(6):
    s.append(input())

w = "".join(s).count("W")
if w >= 5:
    print(1)
elif w >= 3:
    print(2)
elif w >= 1:
    print(3)
else:
    print(-1)
