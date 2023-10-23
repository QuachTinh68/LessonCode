n = int(input())
a = list(map(int, input().split()))

for i in range(0,n):
    if a[i]>0:
        a[i]=2
    elif a[i]<0:
            a[i]=1
# for a_i in a:
#      print(a_i)
print(*a)