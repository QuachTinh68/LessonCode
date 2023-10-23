n = int(input('Nhap n: '))
col_s = 0
col_e = n - 1
row_s = 0
row_e = n - 1
k = 1
arr = [[None]*n for i in range(n)]

while(col_s <=col_e and row_s <= row_e):
    for i in range(col_s,col_e + 1):
        arr[row_s][i] = k
        k += 1
    row_s += 1
    for i in range(row_s, row_e + 1):
        arr[i][col_e] = k
        k += 1
    col_e -= 1
    if(row_s <= row_e):
        for i in range(col_e,col_s-1,-1):
            arr[row_e][i] = k
            k += 1
    row_e -=1
    if(col_s <= col_e):
        for i in range(row_e,row_s-1,-1):
            arr[i][col_s] = k
            k += 1
    col_s +=1
for x in range(n):
    for y in range(n):
        print("%i" % arr[x][y], end=' ')
    print()
print()
