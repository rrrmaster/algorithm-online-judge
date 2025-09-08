n = int(input())
s = input()
if s.endswith("G"):
    print(s[:len(s) - 1])
else:
    print(s + "G")
