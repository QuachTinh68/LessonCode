def LatSo(n):
    lat=0
    while n!=0:
        lat=lat*10+n%10
        n=n//10
    return lat
n=int(input())
print(LatSo(n))