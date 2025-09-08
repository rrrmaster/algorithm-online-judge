n, w, h = map(int, input().split())
for _ in range(n):
    a = int(input())
    print("DA" if a * a <= (w * w + h * h) else "NE")
