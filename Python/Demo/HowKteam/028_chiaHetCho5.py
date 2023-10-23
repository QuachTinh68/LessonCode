check=False
try:
    a=int(input())
    b=int(input())
    check=True
except:
    print("Invalid input")

if check:
    if a < b:
        cnt=0
        for i in range(a,b+1):
            if i%5==0:
                cnt+=1
                if cnt>=10:                  
                    print("\nIn qua 10 so roi")
                    break
                print(i,end=' ')      
        else:
            if cnt==0:
                print("\nKhong co so nao chia het cho 5")
            else:
                print("\nDa in het so chia het cho 5")
    else:
        print("a phai be hon b")
