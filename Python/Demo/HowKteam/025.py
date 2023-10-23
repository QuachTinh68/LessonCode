check=False
try:
    a=int(input())
    b=int(input())
    check=True
except:print("Invalid input")

Tong=0
if check:
    if a < b:
        i=a
        while i<=b:
            Tong+=i
            i+=1
        print(Tong)
    else:
        print("a must be less b")

