n = int(raw_input())
count = 0

for i in range(3, n+1, 3):
    if i % 3 == 0:
        count += 1

print count
