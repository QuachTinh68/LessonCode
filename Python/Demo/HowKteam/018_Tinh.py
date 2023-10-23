m=input().split()
a=float(m[0])
cal=m[1]
b=float(m[2])
if cal ==':':
    if b <= 0:
        print('So chia khac 0')
    else:
        print(a, cal, b,'=',a/b)
elif cal == '+':
    print(a, cal, b,'=',a+b)
elif cal == '-':
    print(a, cal, b,'=',a-b)
else:
    print(a, cal, b,'=',a*b)


