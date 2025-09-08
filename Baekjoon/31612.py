n = int(input())
s = input()

c = 0
d = {'j': 2, 'o': 1, 'i': 2}
for i in range(n):
    c += d[s[i]]
print(c)
