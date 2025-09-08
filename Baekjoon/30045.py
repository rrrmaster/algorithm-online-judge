n = int(input())
c = 0
for i in range(n):
    s = input()
    if "01" in s or "OI" in s:
        c += 1
print(c)