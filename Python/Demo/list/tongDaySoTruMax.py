n = int(input())
a = list(map(int, input().split()))
sum_a = 0
max_a = max(a)
for i in a:
    if max_a != i:
        sum_a += i
print(sum_a)