check=False
try:
    n=int(input())
    check=True
except:print("Invalid input!!")

if check:
    if n<0:print("Please natural number")
    else:
        for i in range(1,n+1):
            if n%i==0:
                print(i, end=" ")