t=int(input())
n=map(int,input().split())
print(len(list(filter(lambda x:x==t,n))))