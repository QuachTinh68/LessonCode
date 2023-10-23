while True:
    try:
        s=input()
    except:
        break
    cnt=1
    for i in s:
        if i.isupper():
            cnt+=1
    print(cnt)