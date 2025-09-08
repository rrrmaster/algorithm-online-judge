a = 0
for _ in range(4):
    s = input().split()
    a += int(s[1]) * (21 if s[0] == 'Es' else 17)
print(a)
