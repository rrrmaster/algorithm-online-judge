s = input()
print((s.split('"')[1] if len(s.split('"')[1]) > 0 else "CE") if s.startswith('"') and s.endswith('"') else "CE")
