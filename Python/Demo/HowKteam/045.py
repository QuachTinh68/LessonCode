def tinh_Tong(a,b):
    print (a," + ",b," = ",a+b)

def tinh_Hieu(a,b):
    print (a," - ",b," = ",a-b)

def tinh_Tich(a,b):
    print (a," * ",b," = ",a*b)

def tinh_Thuong(a,b):
    if ( b<0):
        print("Divided number is greater than 0")
    else:
        print (a," / ",b," = ",a/b)

imp= input().split()
check=True
try:
    a=float(imp[0])
    cal=imp[1]
    b=float(imp[2])
except:print("Invalid input")
if check:
    if (cal == "+"):
        tinh_Tong(a,b)
    elif(cal == "-"):
        tinh_Hieu(a,b)
    elif(cal =="*"):
        tinh_Tich(a,b)
    else:
        tinh_Thuong(a,b)