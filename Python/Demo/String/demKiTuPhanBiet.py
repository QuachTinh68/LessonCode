s = input().lower()
n=len(s)
cnt=0
for i in range(len(s)-1):
    if i != s[i]:
        cnt+=1
print(cnt)