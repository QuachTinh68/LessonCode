import math
a,b,v = map(int,input().split())

if a == v :
    print("1")
elif a < v : 
    if (v-b) % (a-b) == 0: S = (v-b) // (a-b)
    else : S = S = (v-b) // (a-b)+ 1
    print(S)