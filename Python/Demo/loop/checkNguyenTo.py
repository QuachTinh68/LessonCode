from math import *
def check(n):
    if(n<2):
        return 0
    for i in range(2,int(sqrt(n)+1)):
        if(n%i==0):
            return 0
    return 1
if __name__=='__main__':
    n=int(input())
    if (check(n)==1):
        print('Yes')
    else:
        print('No')