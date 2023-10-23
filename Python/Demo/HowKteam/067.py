def KyTuTrung(s):
    new=""
    for c in s:
        if c not in new:
            new+=c
    print(new)
    return new
def HienThi(s):
    news=KyTuTrung(s)
    for i in news:
        print("'{}':{};".format(i, s.count(i)), end=" ")
    
s=input()
HienThi(s)