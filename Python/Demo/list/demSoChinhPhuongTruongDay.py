import math as m
n = int(input())
a = [int(x) for x in input().split()]
countCP = [a[i] for i in range(n) if (
    m.sqrt(a[i]) == int(m.sqrt(a[i])) and a[i] != 0)]
print(len(countCP))