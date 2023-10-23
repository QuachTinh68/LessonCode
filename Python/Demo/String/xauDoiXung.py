from math import *
s=input().strip()
n=l=0
r=len(s)-1
z=s[::-1]
if s==z:
    print(0)
else:
    while l < r:
        if s[l] != s[r]:
            n += 1
        l+=1
        r-=1
    print(n)