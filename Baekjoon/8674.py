a, b = map(int, input().split())
print(min((a // 2 + a % 2) * b - (a // 2) * b, a * (b // 2 + b % 2) - a * (b // 2)))
