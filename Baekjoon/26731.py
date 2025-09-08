s = input()
for i in range(26):
    if chr(ord('A') + i) not in s:
        print(chr(ord('A') + i))
