s = input()
a = s.count('0')

for i in s[::-1]:
    if i != '0':
        break
    a -= 1
print(a)
