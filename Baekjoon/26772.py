n = int(input())
a = """ @@@   @@@ 
@   @ @   @
@    @    @
@         @
 @       @ 
  @     @  
   @   @   
    @ @    
     @     """.split('\n')
for i in a:
    for j in range(n):
        print(i, end='\n' if j == n - 1 else ' ')
