a = input()
b = input()
r = ""
for i in range(len(a)):
    r += a[i] if a[i] > b[i] else b[i]
print(r)