def tinh_Tong(n):
    if n:
        return n + tinh_Tong(n-1)
    return 0
n=int(input())
print(tinh_Tong(n))
