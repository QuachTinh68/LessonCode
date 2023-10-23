from math import *
def prime(n):
    if n < 2:   return False
    for i in range(2,int(sqrt(n))+1):
        if n%i==0:
            return False
    return True

def Tong(n):
    Tong=0
    c=0
    while n>0:
        c=n%10
        Tong+=c
        n=n//10
    return Tong

def inChan(n):
    sum=0
    m=0
    while n > 0:
        m=n%10
        if m%2==0:
            sum+=m
        n=n//10
    return sum

def sumprime(n):
    sum=0
    m=0
    while n>0:
        m=n%10
        if prime(m):
            sum+=m
        n=n//10
    return sum

def lat(n):
    lat=0
    while n!=0:
        lat=lat*10+n%10
        n=n//10
    lat_str=str(lat).zfill(2)
    return lat_str

def countUoc(n):
    cnt=0
    for i in range(1,n+1):
        if n%i==0:
            if prime(i):
                cnt+=1
    return cnt

n=int(input())
print(countUoc(n))

