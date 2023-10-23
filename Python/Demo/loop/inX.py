n=int(input())
z=n*2+1
for i in range (1,n*2+2):
    for j in range(1,n*2+2):
        if(j==i or j==z):
           print("* ", end='')
        else:
            print(". ", end='')
    z-=z
    print()