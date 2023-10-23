from math import *
def uscln(a,b):
    if (b==0):
        return a
    else:
        return (uscln( b,a%b))
def bscnn(a,b):
    res=int(a*b)/uscln(a,b)
    return res
a,b = map(int,input().split())
aws=bscnn(a,b)
print(aws)