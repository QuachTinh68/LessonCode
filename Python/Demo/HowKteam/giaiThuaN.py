from math import *
n =int(input())
# print(factorial(n))
fac=1
for i in range(1,n+1):
    fac*=i 
print(fac)