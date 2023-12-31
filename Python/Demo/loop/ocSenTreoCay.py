a, b, h = map(int, input().split())

left = 1
right = 10**9

while left < right:
    mid = (left + right) // 2
    if (a - h) <= mid * (b - h):
        right = mid
    else:
        left = mid + 1

if (a - h) <= 0:
    print(1)
elif left == 10**9:
    print(-1)
else:
    print(left)