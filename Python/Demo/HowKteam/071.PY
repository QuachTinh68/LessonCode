def traVeDay(n):
    ar=[]
    arr=[]
    for i in range(n):
        ar.append(i)
    for x in range(n):
        arr.append(pow(x,2))
    return ar, arr

check=False
try:
    n=int(input())
    check=True
except: print('Invalid input')
if check:
    if n>=0:
        a,b=traVeDay(n)
        print(*a)
        print(*b)
    else: print("Please import natural number")
