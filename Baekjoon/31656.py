s = input()

a = ""
t = None
for i in s:
    if i != t:
        a += i
    t = i
print(a)
