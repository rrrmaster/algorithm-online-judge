n = int(input())
s = input()
t = input()

c = 0
for i in range(n):
    if s[i] != t[i]:
        c += 1
print(c)
