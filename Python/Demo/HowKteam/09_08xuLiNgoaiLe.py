check=False
n= input().split()
try:
    a = map(int,n)
    Tong=int(sum(a))
    check=True
except:
    print("Invalid input")
if check:
    print(Tong)