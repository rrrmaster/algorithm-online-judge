a, r = input().split("+")
b, c = r.split("=")

print("YES" if int(a) + int(b) == int(c) else "NO")
