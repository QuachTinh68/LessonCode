def latSo(n):
    lat=0
    while(n!=0):
        lat=lat*10+n%10
        n=n//10
    return lat

if __name__=='__main__':
    n=int(input())
    if (latSo(n)==n):
        print('Yes')
    else:
        print('No')