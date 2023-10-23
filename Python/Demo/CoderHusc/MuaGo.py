n=int(input())
for i in range(n):
    a=map(int,input().split())
    for i in range(6):
        for j in range(7):
            if a[i] > a[i]:
                temp=a[j]
                a[i]=a[j]
                a[j]=temp
    print(a[0],a[1],a[6]-a[0]-a[1])            