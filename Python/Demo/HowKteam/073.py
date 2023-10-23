def TCB(a):
    return sum(a)/len(a)

if __name__=="__main__":
    check=False
    try:
       a=list(map(float,input().split()))
       check=True
    except:print("Invalid input")
    if check:
        if len(a)==0:print("Empty list")
        else:
            print(TCB(a))
