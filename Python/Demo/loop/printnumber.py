n, q , p= map(int,(input().split()))
for i in range(1,n+1):
    if (i%q==0 or i%p==0):
        print(i, end=' ')