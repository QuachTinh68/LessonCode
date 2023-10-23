x = float(input())
import math
ans = 1
i = 1
h = 1
res = 1
while True:
    k = res * x / i
    if k < 1e-9: break
    res = k
    ans += k
    i += 1
print('%.4f'%ans)