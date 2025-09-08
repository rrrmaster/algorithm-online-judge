n = int(input())
k = int(input())
print(min(k + 60, n) * 1500 + (n - min(k + 60, n)) * 3000)
