n = input().split()

flag = True
for i in n:
    if i >= "2":
        flag = False

print("S" if flag else "F")
