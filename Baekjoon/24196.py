s = input()

l = len(s)
i = 0
while i < l:
    print(s[i], end='')
    i += ord(s[i]) - ord('A') + 1