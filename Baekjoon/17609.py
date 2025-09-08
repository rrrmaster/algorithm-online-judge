import sys

def solved(s, start,end,flag):
    if start>end:
        if flag:
            return 0
        else:
            return 1
    
    if s[start] == s[end]:
        return solved(s, start + 1, end - 1, flag)
    else:
        if not flag:
            return 2
        left =  solved(s, start + 1, end, False)
        right =  solved(s, start , end - 1, False)
        if left == 1 or right == 1:
            return 1
        else :
            return 2
    return -1
sys.setrecursionlimit(100000)
t = int( sys.stdin.readline() )

for i in range(t):
    s =  input()
    print(solved(s,0,len(s)-1,True))
