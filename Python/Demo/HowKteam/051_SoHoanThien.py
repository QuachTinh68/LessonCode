def Prefect(n):
    tong=0
    for i in range(1,n):
        if n%i==0:
            tong+=i
    if tong==n: return True
    else: return False

check=False    
try: 
    n=int(input())
    check=True
except:print("Invalid input")
if check:
    if n > 0:
        for i in range(1,n+1):
            if Prefect(i): print(i, end=' ')
    else:print("Natural number import!!")

