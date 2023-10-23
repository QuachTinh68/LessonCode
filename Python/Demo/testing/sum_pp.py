n=int(input())
sum=0
for i in range(1,n+1):
    tong=0
    for j in range(1,i):
        if(i%j==0):
            tong+=j
    if(tong>i):
        sum+=i
print(sum)