def isPalindrome(i: str):
    return i == i[::-1]


s = input()

di = {}
for i in s:
    di[i] = di.get(i, 0) + 1

is_ok = True
odd = 0
even = 0
di = dict(sorted(di.items()))

for key, value in di.items():
    if value % 2 == 0:
        odd += 1
    else:
        even += 1

if (len(s) % 2 == 0 and even == 0) or (len(s) % 2 == 1 and even == 1):
    r = ""
    m = ""
    for key, value in di.items():
        r += key * (value // 2)

    for key, value in di.items():
        if value % 2 == 1:
            m += key
    result = r + m + r[::-1]
    print(result)
else:
    print('I\'m Sorry Hansoo')
