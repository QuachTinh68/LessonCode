a,b,c,x,y = map(int,input().split())
if ( a<=x and b<=y or a<=y and b<=x or 
     b<=x and c<=y or b<=y and c<=x or
     c<=x and a<=y or c<=y ):
    print('Yes')
else:
    print('No')