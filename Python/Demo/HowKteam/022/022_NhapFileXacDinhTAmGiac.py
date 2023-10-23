from math import *
try:
    with open("Bai2.9.inp") as f_in:
        data=f_in.read()
        lst=data.split()
except:print("No search file input")

with open("bai2.9.out", "w") as f_out:
    try:
        a=float(lst[0])
        b=float(lst[1])
        c=float(lst[2])
        if a+b>c and b+c>a and c+a>b:
            if a==b and b==c and c==a:
                z="{} {} {} La tam giac loai {}".format(a,b,c,"deu")
                f_out.write(z)
            if a==b or b==c or c==a:
                z="{} {} {} La tam giac loai {}".format(a,b,c,"can")
                f_out.write(z)
            if a*a > c*c+b*b or b*b > c*c+a*a or c*c>b*b+a*a:
                z="{} {} {} La tam giac loai {}".format(a,b,c,"tu")
                f_out.write(z)
            if a*a==b*b+c*c or b*b==a*a+c*c or c*c== a*a+b*b:
                z="{} {} {} La tam giac loai {}".format(a,b,c,"vuong")
                f_out.write(z)  
            else:
                z="{} {} {} La tam giac loai {}".format(a,b,c,"nhon")
                f_out.write(z)     
        elif a<=0 or b<=0 or c<=0:
            f_out.write("Cac canh phai lon hon 0")
        else:
            f_out.write("{} {} {} khong phai la mot canh cua tam giac".format(a,b,c))

    except:f_out.write("Dinh dang dau vao khong hop le")
    