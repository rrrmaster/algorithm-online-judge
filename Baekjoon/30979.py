t = int(input())
n = int(input())
f = list(map(int, input().split()))
print("Padaeng_i Cry" if t > sum(f) else "Padaeng_i Happy")
