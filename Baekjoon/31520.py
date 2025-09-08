n = input()
a = -1

for index, i in enumerate(n):
    if int(i) == index + 1:
        a = index + 1
    else:
        a = -1
        break
print(a)
