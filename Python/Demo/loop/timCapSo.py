n = int(input())
for a in range(1,200):
    for b in range(1,200):
        if(n*(a+b)== a*b):
            print(a, b, end='\n')
           


