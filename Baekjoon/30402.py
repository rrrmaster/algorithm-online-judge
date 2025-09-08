a = []
for i in range(15):
    a.append(input())
s = "".join(a)
print("chunbae" if "w" in s else ("nabi" if "b" in s else "yeongcheol"))
