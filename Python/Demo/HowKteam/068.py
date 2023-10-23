def ChuyenHoa(s):
    news=s.split()
    a=[]
    d=0
    for i in news:
        if i.isdigit():
            a.append(int(i))
    if len(a) == 0:
        print(0)
        print(0)
    else:
        print(sum(a))
        print(float(sum(a)//len(a)))

s=input()
ChuyenHoa(s)