from math import *
def checkNT(n):
    if(n<2):
        return False
    for i in range(2, int(sqrt(n)+1)):
        if(n%i==0):
            return False
    return True
def TongChuSo(n):
    Tong=0
    while(n!=0):
        Tong+=n%10
        n=n//10
    return Tong
def TongSoChan(n):
    sumEven=0
    while(n!=0):
        if((n%10)%2==0):
            sumEven+=n%10
        n=n//10
    return sumEven
def TongSoNT(n):
    sumNT=0
    soNT=0
    while(n!=0):
        soNT=n%10
        if(checkNT(soNT)==True):
            sumNT+=soNT
        n=n//10
    return sumNT
def LatSo(n):
    lat=0
    while(n!=0):
        lat=lat*10+n%10
        n=n//10
    return lat
def TimUocNT(n):
    dem=0
    for i in range(1,n+1):
        if(n%i==0):
            if(checkNT(i)==True):
                dem+=1
    return dem   
def MaxUocNT(n):
    max=0
    for i in range(2,n+1):
        if(n%i==0):
            if(checkNT(i)==True):
                if(max<i):
                    max=i
    return max
def soSau(n):
    tam=0
    while(n!=0):
        tam=n%10
        if(tam==6):
            return 1
        n=n//10
    return 0
def chiaHet(n):
    if(TongChuSo(n)%8==0):
        return 1
    return 0

def GiaiThua(n):
    sumFac=0
    while(n!=0):
        number=n%10
        fac = 1
        for i in range(1,number+1):
            fac*=i
        sumFac+=fac
        n=n//10
    return sumFac

def onlynumber(n):
    check=n%10
    while(n!=0):
        if (check != n%10):
            return 0
        n=n//10
    return 1

def endMax(n):
    donvi=n%10
    while(n!=0):
        if (donvi<n%10):
            return 0
        n=n//10
    return 1
def LuyThua(n):
    m=n
    count=0
    while(n!=0):
        count+=1
        n=n//10
    sumLT=0
    while(m!=0):
        sumLT+=(n%10)**count
        m=m//10
    return sumLT
if __name__ == "__main__":
    n=int(input())
    print(LuyThua(n))
