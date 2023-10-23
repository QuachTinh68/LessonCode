n=(input())
z=(input())
check=False
try:
    a=float(n)
    b=int(z)
    check=True
except:
    print("Invalid input")
if check:
    print('{0:.{1}f}'.format(a,b))