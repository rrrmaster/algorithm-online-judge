import sys

n = int(input())
a = list(map(int, sys.stdin.readline().rstrip().split()))
print(max(a))
