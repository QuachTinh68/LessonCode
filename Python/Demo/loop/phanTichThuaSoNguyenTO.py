def phan_tich(n):
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors

n = int(input())

result = phan_tich(n)
for i in range(len(result)):
    print(result[i], end=' ')
