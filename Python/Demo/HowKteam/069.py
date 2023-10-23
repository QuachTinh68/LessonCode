def tachChuoi(s):
    num=''
    ch=''
    st=''
    all=''
    for i in s:
        if i.isdigit():
            num+=i
        elif i.isalpha():
            ch+=i
        else:  
            st+=i
        
        all=num+ch+st
    return num,ch,st,all

s=input()
n,c,sr,res=tachChuoi(s)
print(len(n),len(c),len(sr), res, sep="\n")