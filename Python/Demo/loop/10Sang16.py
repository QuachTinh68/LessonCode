def chuyen(n):
    a = []
    while n != 0:
        x = n % 16
        n = n // 16
        if x < 10:
            a.append(str(x))
        else:
            a.append(chr(x + 55))
    a.reverse()
    return a

n = int(input())
result = chuyen(n)
print(''.join(result))
