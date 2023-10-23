def find_unique_triplets(arr):
    triplets = []
    arr.sort()
    n = len(arr)

    for i in range(n - 2):
        if i > 0 and arr[i] == arr[i - 1]:
            continue

        left, right = i + 1, n - 1
        while left < right:
            total = arr[i] + arr[left] + arr[right]
            if total == 0:
                triplets.append([arr[i], arr[left], arr[right]])
                left, right = left + 1, right - 1
                while left < right and arr[left] == arr[left - 1]:
                    left += 1
                while left < right and arr[right] == arr[right + 1]:
                    right -= 1
            elif total < 0:
                left += 1
            else:
                right -= 1

    return triplets


arr = list(map(int, input('Nhập các số của danh sách cách nhau bằng khoảng trắng: ').split()))
result = find_unique_triplets(arr)
print("Số bộ ba có tổng bằng 0 là: ",result)
