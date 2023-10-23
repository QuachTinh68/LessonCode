def chuanHoaTen(s):
    return s.title()
check=False
try:
    name=input()
    years_old=int(input())
    check=True
except:print("Invalid input")
if check:
    if  years_old >=1:
        s=chuanHoaTen(name)
        print("Xin chap, Toi la {}, toi {} tuoi".format(s, years_old))
    else:print("Please import natural number")