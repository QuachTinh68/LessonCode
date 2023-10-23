
n, m, p = list(map(int, input().split()))

mt1 = [[0] * m] * n
mt2 = [[0] * p] * m
mt3 = [[0] * p] * n
for i in range(n):
    mt1[i] = list(map(int, input().split()))
for i in range(m):
    mt2[i] = list(map(int, input().split()))
    
for i in range(n):
    for j in range(p):
        ans = 0
        for k in range(m):
            ans += mt1[i][k] * mt2[k][j]
        print(ans, end = " ")
    print()
    