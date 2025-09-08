import math
import sys

n = int(input())
arr = [int(sys.stdin.readline()) for _ in range(n)]
cut = math.floor(n * 0.15 + 0.5)
arr.sort()
p = arr[cut:len(arr) - cut]

print(math.floor(sum(p) / max(1, len(p)) + 0.5))
