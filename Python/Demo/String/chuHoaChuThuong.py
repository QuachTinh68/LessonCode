while True:
    try:
        s=input()
    except:
        break
    up=0
    lo=0
    for i in s:
        if i.upper():
            up+=1
        else:
            lo+=1
    if up > lo:
        print(s.upper())
    else:
        print(s.lower())
        
