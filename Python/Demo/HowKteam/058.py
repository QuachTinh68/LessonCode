def XoaKiTu(s):
   if len(s)%2==0:
        for i in range(len(s)):
            if i%2!=0:
                print(s[i],end="")
   else: 
        for i in range(len(s)):
            if i%2 == 0:
                print(s[i],end="")
s=input()
XoaKiTu(s)
       
