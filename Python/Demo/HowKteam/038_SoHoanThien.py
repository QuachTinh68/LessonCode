check=False
try:
    n=int(input())
    check=True
except:print("Invalid input")
if check:
    if n>0:
        sum=0
        for i in range(1,n):
            if n%i==0:
                sum+=i
        if sum==n:
            print(n,'is Perfect Number')
        else:
            print(n,'is not Perfect Number')
    else:print("Please import natural numbers")