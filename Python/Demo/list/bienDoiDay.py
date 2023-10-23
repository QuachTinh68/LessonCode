n = int(input())
a = list(map(int, input().split()))
count = 0
while all(x % 2 == 0 for x in a):
    a = [x // 2 for x in a]
    count += 1
print(count)
# c2  
# n = int(input())
# a = list(map(int, input().split()))
# count = float('inf')
# for x in a:
#     c = 0
#     while x % 2 == 0:
#         x //= 2
#         c += 1
#     count = min(count, c)
# print(count)