a,b,c,d= map(int,input().split())
start=0
end=0
if (a>=c and a<=b):
    start=a
elif(c>=a and c<=b):
    start=c
if(b<=c and b>=d):
    end=b
elif(c<=b and c>=a):
    end=c
if(start <= end):
    print(start,end)
else:
    print(-1)