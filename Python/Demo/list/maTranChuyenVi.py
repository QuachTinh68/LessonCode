import math

n, m = list(map(int, input().split()))
a = [[0] * m] * n
for i in range(n):
    a[i] = list(map(int, input().split()))

for i in range(m):
    for j in range(n):
        print(a[j][i], end = " ")
    print()