n = (int(input()) - 1)
print("{0}{1}".format(chr(97 + n % 8), str(n// 8 + 1)))
