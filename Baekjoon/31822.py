code = input()
n = int(input())
l = [input() for a in range(n)]
print(len(list(filter(lambda x: x[:5] == code[:5], l))))
