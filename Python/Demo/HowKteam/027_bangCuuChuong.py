check=False
try:
    n=int(input())
    check=True
except:print("Invalid input")
if check:
    if n>1 and n<9:
        for i in range(1,10):
            print(n,"x",i,"=",n*i)
    else:
        print('Out of program')