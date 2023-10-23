n=int(input())
even=0
odd=0
i=0
while n!=0:
    i=n%10
    if i%2==0:
        even+=i
    else:
        odd+=i
    n=n//10
print(even*odd)
    
