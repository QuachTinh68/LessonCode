from math import *
def uscln(a,b):
    if (b==0):
        return a
    else:
        return (uscln( b,a%b))

a,b,c =list(map(int,input().split()))
# Cách 1
temp=uscln(a,b)
res=uscln(temp,c)
print(res)


# Cách 2
aws=gcd(a,b,c)
print(aws)
