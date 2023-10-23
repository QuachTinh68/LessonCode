
def sapXep(a):
    for i in range(len(a)):
        min_index = i
        for j in range(i+1,(len(a))):
            if a[j] < a[i]:
                min_index = j
        a[i], a[min_index] = a[min_index], a[i]


a = list(map(float, input().split()))
sapXep(a)
print(*a)
