n = int(input())
count=0
arr = list(map(int, input().split()[:n]))
for i in range(len(arr)):
    if (arr[i]%3==0 or arr[i]%5==0):
        count+=1
print(count)


