am= ['a', 'o', 'y', 'i', 'e', 'u']
while True:
    try:
        s=input().lower()
    except:
        break
    cnt=0
    for i in s:
        if i in am:
            cnt+=1
    print(cnt)

