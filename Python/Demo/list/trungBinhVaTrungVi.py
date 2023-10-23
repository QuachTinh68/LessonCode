import math 
n = int(input())
if ( 1 <= n <= 500 ):
        a =[]
        for i in range(n):
            m = int(input())
            if (-5000 <= m <= 5000):
                a.append(m)
        print("{:.6f}".format(sum(a)/n))
        b = sorted(a)#hàm sắp xếp thứ tự các số
        trung_vi = n // 2
        if (n % 2 == 1):
            print("{:.6f}".format(b[trung_vi]))
        else :
            c = trung_vi - 1
            k = trung_vi
            d = (b[c]+b[k])/2
            print("{:.6f}".format(d))