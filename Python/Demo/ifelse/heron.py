from math import *
a,b,c = map(float,input().split())
if (a+b>c or b+c>a or a+c>b):
    p=(a+b+c)/2
    S=sqrt(p*(p-a)*(p-b)*(p-c))
    print('%.2f'%S)
else:
    print('No Solution')