s = input()
dict = []
for i in range(1, len(s)):
    for j in range(i + 1, len(s)):
        dict.append(s[0:i][::-1] + s[i:j][::-1] + s[j:][::-1])
dict.sort()
print(dict[0])
