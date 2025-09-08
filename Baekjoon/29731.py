n = int(input())
s = """Never gonna give you up
Never gonna let you down
Never gonna run around and desert you
Never gonna make you cry
Never gonna say goodbye
Never gonna tell a lie and hurt you
Never gonna stop""".split('\n')
flag = False
for i in range(n):
    a = input()
    if a not in s:
        flag = True
print("Yes" if flag else "No")
