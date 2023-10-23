a, b= map(int,input().split())
if (a==0 and b==0):
    print('Many Solutions')
elif (a==0 and b!=0):
    print('No Solution')
else:
    x= -b/a
    print('%.2f' % x)