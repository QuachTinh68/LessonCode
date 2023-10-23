from math import *

def checknt(n):
    if n < 2: return False
    for i in range(2,int(sqrt(n))+1):
        if n%i==0: return False
    return True

def traSo(arr):
    new_arr = [x for x in arr if checknt(x)]
    new_arr.sort()
    return new_arr


arr = list(map(int,input().split()))
a = traSo(arr)
print(*a)
