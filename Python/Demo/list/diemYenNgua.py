def yenNgua(a, b, m, n):
    k = False
    s = ""
    for i in range(m):
        for j in range(n):
            if a[i][j] == min(a[i]) == max(b[j]):
                k = True
                s += "("+str(i+1)+","+str(j+1)+");"+" "
    if k == True:
        print("Cac phan tu yen ngua la:")
        print(s)
    else:
        print("Khong co phan tu yen ngua")


s = input().split()
m = int(s[0])
n = int(s[1])
a = [[int(x) for x in input().split()[:n]]for i in range(m)]
b = [[a[i][j] for i in range(m)] for j in range(n)]
yenNgua(a, b, m, n)