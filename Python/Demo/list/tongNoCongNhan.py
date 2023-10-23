n = int(input())
a = list(map(int, input().split()))
sum_a = 0
for i in range(0,n):
    if a[i]<0:
        sum_a += a[i]
print(sum_a)