
def check(lst, A, B):
    for i in lst:
        if pow(i[0],3)+2*pow(i[0],2)-4*i[0]+1 == i[1]:
            A.append(i)
        else:
            B.append(i)
    return *A,*B        

lst=[(-5,-20), (-4,-15), (-3,-4), (-2,-9), (-1,7), (0,1),(1,-7),(2,-9),(4,81),(5,130)]
A=[]
B=[]
TongA=0
TongB=0
(check(lst,A,B))

for i in range(len(A)):
    TongA+=(A[i][1])
for j in range(len(B)):
    TongB+=B[j][1]

print(abs(TongA-TongB))




