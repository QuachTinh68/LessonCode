def chuyen(s):
    nguyenAm ="ueoaiUEOAI"
    tong=0
    for c in nguyenAm:
        tong+=s.count(c)
        s = s.replace(c,'$')
        
    return s, tong  

s=input()
res, tong= chuyen(s)
print(tong)
print(res)