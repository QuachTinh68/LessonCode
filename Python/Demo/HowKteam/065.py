def XoaKhoangTrang(s):
    s=s.strip()
    while "  " in s:
        s=s.replace("  ", " ")
    return s


def chuanHoa(s):
    newstr=s.split(".")
    for c in newstr:
        c=XoaKhoangTrang(c)
        print(c.title())
s=input()
chuanHoa(s)
