def check(queens):
    for i, e1 in enumerate(queens):
        for j, e2 in enumerate(queens):
            if i != j:
                if e1['x'] == e2['x'] or e1['y'] == e2['y'] or e1['x'] - e2['x'] == abs(e1['y'] - e2['y']):
                    return False
    return True


str = []
for i in range(8):
    str.append(input())

queens = []
for i in range(8):
    for j in range(8):
        if str[i][j] == '*':
            queens.append({'x': j, 'y': i})

print("valid" if len(queens) == 8 and check(queens) else "invalid")
