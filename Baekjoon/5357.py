t = int(input())
for _ in range(t):
    s = input()
    str = s[0]
    for i in range(1, len(s)):
        if s[i] != s[i - 1]:
            str += s[i]
    print(str)
