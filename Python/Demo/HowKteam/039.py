from math import *
def Prime(n):
    if n < 2: return False
    for i in range(2, int(sqrt(n))+1):
        if n%i==0:
            return False
    else: return True
a,b=map(int,input().split())
for i in range(a,b+1):
    if Prime(i):
        print(i,end=" ")

