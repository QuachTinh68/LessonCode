
check=False
try:
    a,b,c=map(float,(input().split()))
    check=True
except:print("Invalid input")
if check:
    if a<=0 or b<=0 or c<=0:
        print("Canh phai lon hon 0")
    else:
        if (a+b > c) and (b+c> a) and (c+a>b):
            print(a,b,c ,"la ba canh cua tam giac")
        else:
            print(a,b,c ,"khong phai la ba canh cua tam giac")