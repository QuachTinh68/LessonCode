n=int(input())
count=0
a=[]
for i in range(1,n+1):
    if(n%i==0):
        count=count+1
        a.append(i)
print(count)
for i in range(len(a)):
    print(a[i],end=' ')
