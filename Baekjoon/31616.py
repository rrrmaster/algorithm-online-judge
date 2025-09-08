n = int(input())
s = input()
c = 0
for i in range(n):
    if s[0] == s[i]:
        c += 1
print("Yes" if c == n else "No")
