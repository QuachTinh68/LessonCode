from math import *

x=float(input())
n=int(input())
res=1
fac=1
for i in range(1,2*n+1):
    fac*=i
    if i%2==0:
      res+= pow(x,i)/fac
    else:
      res -= pow(x,i)/fac

print( '%.5f' % res)
