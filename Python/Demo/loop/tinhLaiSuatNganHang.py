n,p,m = map(float,input().split())
thang = 0
while n < m:
    n += n*p/100
    thang += 1
print(thang)