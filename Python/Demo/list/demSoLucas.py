def count_lucas_numbers(n, A):
    lucas_numbers = [2, 1]
    count = 0
    while lucas_numbers[-1] < max(A):
        next_lucas = lucas_numbers[-1] + lucas_numbers[-2]
        if next_lucas < 10**9:
            lucas_numbers.append(next_lucas)
        else:
            break
    lucas_set = set(lucas_numbers)
    for num in A:
        if num in lucas_set:
            count += 1
    return count

n = int(input())
A = list(map(int, input().split()))

result = count_lucas_numbers(n, A)
print(result)