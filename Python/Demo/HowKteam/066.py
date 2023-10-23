
def XoaKhoangTrang(s):
    s=s.strip()
    while "  " in s:
        s=s.replace("  ", " ")
    return s


def ChuanHoaCanGiua(s):
    new=s.split(".")
    maxx=0
    for c in new:
        if len(c) > maxx:
            maxx=len(c)
    for i in new:
        i=XoaKhoangTrang(i)
        i=i.title()
        print(i.center(maxx))

s=input()
XoaKhoangTrang(s)
ChuanHoaCanGiua(s)