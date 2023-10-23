def chuoi(s):
    news=s.split()
    
    cnt=0
    for tu in news:
        checka=False
        checkd=False
        for c in tu:
            if c.isalpha():
                checka=True
            if c.isdigit():
                checkd=True
        if checka and checkd:
            cnt+=1
    return cnt
        

s=input()
print(chuoi(s))


    